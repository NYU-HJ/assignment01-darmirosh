#include <iostream>
#include <assert.h> 
#include "generic_list_todo.h"
using namespace std;
class person{
  public:
    int age;
    string name;
    person(){
      age=0; name="";
    }
    person(int a, string n){
      age=a;
      name=n;
    }
    bool operator==(person& rhs){
      return ((name==rhs.name)&&(age==rhs.age));
    }
    bool operator!=(person& rhs){
      return ((name!=rhs.name)||(age!=rhs.age));
    }
    friend ostream& operator<<(ostream& os, person& l);
};
ostream& operator<<(ostream& os, person& l){
    return os<<"name:"<<l.name<<", age:"<<l.age;
}
namespace tests{
    void run_generic_list_test_case_1(){
        // Test case-1: add value to empty list
        cout<<"Running Test case-1:  \t\t try to add object to empty list"<<endl;
        try{
            ArrayList<person> h;
            person p1(10,"james");
            h.add(p1);
            if((h.head)&&(h.head->value==p1))
                cout<<"Test case-1 run successfully.."<<endl;
            else
                throw runtime_error("Test case-1 Fail");
        }catch(...){
            cout<<"Test case-1 failed .......... unable to add object to empty list correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_generic_list_test_case_2(){
        // Test case-2: add values to non-empty list
        cout<<"Running Test case-2:  \t\t try to add objects to non-empty list"<<endl;
        try{
            ArrayList<person> h;
            person p1(10,"james");person p2(20,"mike");
            person p3(30,"sarah");person p4(40,"sedra");
            h.add(p1);
            h.add(p2);
            h.add(p3);
            h.add(p4);
            if((h.head)&&(h.head->value==p1)&&(h.head->next->value==p2)&&(h.head->next->next->value==p3))
                cout<<"Test case-2 run successfully.."<<endl;
            else
                throw runtime_error("Test case-2 Fail");
        }catch(...){
            cout<<"Test case-2 failed .......... unable to add objects to non-empty list correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_generic_list_test_case_3(){
        // Test case-3: pop from non-empty list
        cout<<"Running Test case-3:  \t\t try to pop from non-empty list"<<endl;
        ArrayList<person> h;
        person p1(10,"james");person p2(20,"mike");
        person p3(30,"sarah");person p4(40,"sedra");
        h.add(p1); h.add(p2); h.add(p3); h.add(p4);
        try{
            if((h.pop()==p4)&&(h.pop()==p3)&&(h.pop()==p2))
                cout<<"Test case-3 run successfully.."<<endl;
            else
                throw runtime_error("Test case-3 Fail");
        }catch(...){
            cout<<"Test case-3 failed .......... unable to pop from non-empty list correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_generic_list_test_case_4(){
        // Test case-4: pop from empty list
        cout<<"Running Test case-4:  \t\t try to pop from empty list"<<endl;
        ArrayList<person> h;
        person p1(10,"james");
        h.add(p1);
        try{
            if(h.pop()==p1)
                cout<<"Test case-4 run successfully.."<<endl;
            else
                throw runtime_error("Test case-4 Fail");
        }catch(...){
            cout<<"Test case-4 failed .......... unable to pop from empty list correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_generic_list_test_case_5(){
        // Test case-5: compare two lists
        cout<<"Running Test case-5:  \t\t try to compare two lists"<<endl;
        try{
            person p1(10,"james");person p2(20,"mike");
            person p3(30,"sarah");person p4(40,"sedra");
            ArrayList<person> L1; L1.add(p1); L1.add(p2); L1.add(p3); L1.add(p4);
            ArrayList<person> L2; L2.add(p1); L2.add(p2); L2.add(p3); L2.add(p4);
            ArrayList<person> L3; L3.add(p1); L3.add(p2); L3.add(p3);
            if((L1==L2)&&(L1!=L3))
                cout<<"Test case-5 run successfully.."<<endl;
            else
                throw runtime_error("Test case-5 Fail");
        }catch(...){
            cout<<"Test case-5 failed .......... unable to compare two lists correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    void run_generic_list_test_case_6(){
        // Test case-6: copy constructor
        cout<<"Running Test case-6:  \t\t try to run copy constructor"<<endl;
        try{
            person p1(10,"james");person p2(20,"mike");
            person p3(30,"sarah");person p4(40,"sedra");
            ArrayList<person> L1; L1.add(p1); L1.add(p2); L1.add(p3); L1.add(p4);
            ArrayList<person> L2 = L1;
            if(L1==L2)
                cout<<"Test case-6 run successfully.."<<endl;
            else
                throw runtime_error("Test case-6 Fail");
        }catch(...){
            cout<<"Test case-6 failed .......... unable to use copy constructor correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
    // void run_generic_list_test_case_7(){
    //     // Test case-7: run destructor
    //     cout<<"Running Test case-7:  \t\t try to run the destructor"<<endl;
    //     try{
    //         person p1(10,"james");person p2(20,"mike");
    //         person p3(30,"sarah");
    //         ArrayList<person>* L1=new ArrayList<person>(); L1->add(p1); L1->add(p2); L1->add(p3);
    //         delete L1;
    //         // L1=NULL;
    //         if(L1->head==NULL)
    //             cout<<"Test case-7 run successfully.."<<endl;
    //         else
    //             throw runtime_error("Test case-7 Fail");
    //     }catch(...){
    //         cout<<"Test case-7 failed .......... unable to run the destructor correctly"<<endl;
    //     }
    //     cout<<"---------------------------------------------------------------------"<<endl;
    // }
    void run_generic_list_test_case_8(){
        // Test case-8: print list using << operator
        cout<<"Running Test case-8:  \t\t try to print list using << operator"<<endl;
        cout<<"if you see values: "<< endl;
        cout<<"name:james, age:10,name:mike, age:20,name:sarah, age:30,name:sedra, age:40,"<<endl;
        cout<<"printed below then Test case-7 run successfully.."<<endl;
        try{
            person p1(10,"james");person p2(20,"mike");
            person p3(30,"sarah");person p4(40,"sedra");
            ArrayList<person> L1; L1.add(p1); L1.add(p2); L1.add(p3); L1.add(p4);
            cout<<L1<<endl;
        }catch(...){
            cout<<"Test case-8 failed .......... unable to print list using << operator correctly"<<endl;
        }
        cout<<"---------------------------------------------------------------------"<<endl;
    }
}
