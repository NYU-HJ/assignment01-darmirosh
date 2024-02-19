#include "list_tests.h"
#include "generic_list_tests.h"
#include "stack_tests.h"
using namespace tests;
int main() {
  // List Test Cases
  run_list_test_case_1();
  run_list_test_case_2();
  run_list_test_case_3();
  run_list_test_case_4();
  run_list_test_case_5();
  run_list_test_case_6();
  //run_list_test_case_7();
  run_list_test_case_8();

  // Generic List Test Cases
  run_generic_list_test_case_1();
  run_generic_list_test_case_2();
  run_generic_list_test_case_3();
  run_generic_list_test_case_4();
  run_generic_list_test_case_5();
  run_generic_list_test_case_6();
  //run_generic_list_test_case_7();
  run_generic_list_test_case_8();
  
  // Stack Test Cases
  run_stack_test_case_1();
  run_stack_test_case_2();
  run_stack_test_case_3();
  run_stack_test_case_4();
  run_stack_test_case_5();
  run_stack_test_case_6();
  //run_stack_test_case_7();
  run_stack_test_case_8();

}