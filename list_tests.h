#include <iostream>
#include <assert.h> 
#include "list_todo.h"
using namespace std;
namespace tests{
    void run_list_test_case_1(){
        // Test case-1: add value to empty list
        cout<<"Running Test case-1:  \t\t try to add value to empty list"<<endl;
        try{
            List h;
            h.add(10);
            if((h.head)&&(h.head->value==10))
                cout<<"Test case-1 run successfully.."<<endl;
            else
                throw runtime_error("Test case-1 Fail");
        }catch(...){
            cout<<"Test case-1 failed .......... unable to add value to empty list correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_list_test_case_2(){
        // Test case-2: add values to non-empty list
        cout<<"Running Test case-2:  \t\t try to add values to non-empty list"<<endl;
        try{
            List h;
            h.add(10);
            h.add(20);
            h.add(30);
            h.add(40);
            if((h.head)&&(h.head->value==10)&&(h.head->next->value==20)&&(h.head->next->next->value==30))
                cout<<"Test case-2 run successfully.."<<endl;
            else
                throw runtime_error("Test case-2 Fail");
        }catch(...){
            cout<<"Test case-2 failed .......... unable to add values to non-empty list correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_list_test_case_3(){
        // Test case-3: pop from non-empty list
        cout<<"Running Test case-3:  \t\t try to pop from non-empty list"<<endl;
        List h;
        h.add(10);
        h.add(20);
        h.add(30);
        h.add(40);
        try{
            if((h.pop()==40)&&(h.pop()==30)&&(h.pop()==20))
                cout<<"Test case-3 run successfully.."<<endl;
            else
                throw runtime_error("Test case-3 Fail");
        }catch(...){
            cout<<"Test case-3 failed .......... unable to pop from non-empty list correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_list_test_case_4(){
        // Test case-4: pop from empty list
        cout<<"Running Test case-4:  \t\t try to pop from empty list"<<endl;
        List h;
        h.add(10);
        try{
            if(h.pop()==10)
                cout<<"Test case-4 run successfully.."<<endl;
            else
                throw runtime_error("Test case-4 Fail");
        }catch(...){
            cout<<"Test case-4 failed .......... unable to pop from empty list correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_list_test_case_5(){
        // Test case-5: compare two lists
        cout<<"Running Test case-5:  \t\t try to compare two lists"<<endl;
        try{
            List L1; L1.add(10); L1.add(20); L1.add(30); L1.add(40);
            List L2; L2.add(10); L2.add(20); L2.add(30); L2.add(40);
            List L3; L3.add(10); L3.add(20); L3.add(30);
            if((L1==L2)&&(L1!=L3))
                cout<<"Test case-5 run successfully.."<<endl;
            else
                throw runtime_error("Test case-5 Fail");
        }catch(...){
            cout<<"Test case-5 failed .......... unable to compare two lists correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_list_test_case_6(){
        // Test case-6: copy constructor
        cout<<"Running Test case-6:  \t\t try to run copy constructor"<<endl;
        try{
            List L1; L1.add(10); L1.add(20); L1.add(30); L1.add(40);
            List L2(L1);
            if(L1==L2)
                cout<<"Test case-6 run successfully.."<<endl;
            else
                throw runtime_error("Test case-6 Fail");
        }catch(...){
            cout<<"Test case-6 failed .......... unable to use copy constructor correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_list_test_case_7(){
        // Test case-7: run destructor
        cout<<"Running Test case-7:  \t\t try to run the destructor"<<endl;
        try{
            List* L1=new List(); L1->add(10); L1->add(20); L1->add(30);
            delete L1;
            // L1=NULL;
            if(L1->head==NULL)
                cout<<"Test case-7 run successfully.."<<endl;
            else
                throw runtime_error("Test case-7 Fail");
        }catch(...){
            cout<<"Test case-7 failed .......... unable to run the destructor correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_list_test_case_8(){
        // Test case-8: print list using << operator
        cout<<"Running Test case-8:  \t\t try to print list using << operator"<<endl;
        cout<<"if you see values: 10,20,30,40, printed below then Test case-7 run successfully.."<<endl;
        try{
            List L3; L3.add(10); L3.add(20); L3.add(30); L3.add(40);
            cout<<L3<<endl;
        }catch(...){
            cout<<"Test case-8 failed .......... unable to print list using << operator correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
}
