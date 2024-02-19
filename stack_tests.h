#include <iostream>
#include <assert.h> 
#include "stack_todo.h"
using namespace std;
namespace tests{
    void run_stack_test_case_1(){
        // Test case-1: push value to an empty stack
        cout<<"Running Test case-1:  \t\t try to add value to empty stack"<<endl;
        try{
            Stack h;
            h.push(10);
            if((h.head)&&(h.head->value==10))
                cout<<"Test case-1 run successfully.."<<endl;
            else
                throw runtime_error("Test case-1 Fail");
        }catch(...){
            cout<<"Test case-1 failed .......... unable to push value to an empty stack correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_stack_test_case_2(){
        // Test case-2: add values to non-empty list
        cout<<"Running Test case-2:  \t\t try to push values to non-empty stack"<<endl;
        try{
            Stack h;
            h.push(10);
            h.push(20);
            h.push(30);
            h.push(40);
            if((h.head)&&(h.head->value==40)&&(h.head->next->value==30)&&(h.head->next->next->value==20))
                cout<<"Test case-2 run successfully.."<<endl;
            else
                throw runtime_error("Test case-2 Fail");
        }catch(...){
            cout<<"Test case-2 failed .......... unable to push values to non-empty stack correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_stack_test_case_3(){
        // Test case-3: pop from non-empty stack
        cout<<"Running Test case-3:  \t\t try to pop from non-empty stack"<<endl;
        Stack h;
        h.push(10);
        h.push(20);
        h.push(30);
        h.push(40);
        try{
            if((h.pop()==40)&&(h.pop()==30)&&(h.pop()==20))
                cout<<"Test case-3 run successfully.."<<endl;
            else
                throw runtime_error("Test case-3 Fail");
        }catch(...){
            cout<<"Test case-3 failed .......... unable to pop from non-empty stack correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_stack_test_case_4(){
        // Test case-4: pop from empty stack
        cout<<"Running Test case-4:  \t\t try to pop from empty stack"<<endl;
        Stack h;
        h.push(10);
        try{
            if(h.pop()==10)
                cout<<"Test case-4 run successfully.."<<endl;
            else
                throw runtime_error("Test case-4 Fail");
        }catch(...){
            cout<<"Test case-4 failed .......... unable to pop from empty stack correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_stack_test_case_5(){
        // Test case-5: compare two stacks
        cout<<"Running Test case-5:  \t\t try to compare two stacks"<<endl;
        try{
            Stack L1; L1.push(10); L1.push(20); L1.push(30); L1.push(40);
            Stack L2; L2.push(10); L2.push(20); L2.push(30); L2.push(40);
            Stack L3; L3.push(10); L3.push(20); L3.push(30);
            if((L1==L2)&&(L1!=L3))
                cout<<"Test case-5 run successfully.."<<endl;
            else
                throw runtime_error("Test case-5 Fail");
        }catch(...){
            cout<<"Test case-5 failed .......... unable to compare two stacks correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_stack_test_case_6(){
        // Test case-6: copy constructor
        cout<<"Running Test case-6:  \t\t try to run copy constructor"<<endl;
        try{
            Stack L1; L1.push(10); L1.push(20); L1.push(30); L1.push(40);
            Stack L2 = L1;
            if(L1==L2)
                cout<<"Test case-6 run successfully.."<<endl;
            else
                throw runtime_error("Test case-6 Fail");
        }catch(...){
            cout<<"Test case-6 failed .......... unable to use copy constructor correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_stack_test_case_7(){
        // Test case-7: run destructor
        cout<<"Running Test case-7:  \t\t try to run the destructor"<<endl;
        try{
            Stack* L1=new Stack(); L1->push(10); L1->push(20); L1->push(30);
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
    void run_stack_test_case_8(){
        // Test case-8: print stack using << operator
        cout<<"Running Test case-8:  \t\t try to print stack using << operator"<<endl;
        cout<<"if you see values: 40,30,20,10, printed below then Test case-7 run successfully.."<<endl;
        try{
            Stack L3; L3.push(10); L3.push(20); L3.push(30); L3.push(40);
            cout<<L3<<endl;
        }catch(...){
            cout<<"Test case-8 failed .......... unable to print stack using << operator correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
}
