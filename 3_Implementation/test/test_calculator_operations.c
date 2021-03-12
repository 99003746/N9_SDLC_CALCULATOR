#include "unity.h"
#include <basic_trig.h>

/* Modify these two lines according to the project */
#include <basic_trig.h>
#define PROJECT_NAME    "Calculator"

/* Prototypes for all the test functions */
void test_add(void);
void test_add_testcase2(void);
void test_subtract(void);
void test_multiply(void);
void test_divide(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
}
void test_add_testcase2(void) {
 
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1500, add(750, 750));
}
void test_subtract(void) {
  TEST_ASSERT_EQUAL(-3, sub(0, 3));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(100, sub(1000, 900));
}

void test_multiply(void) {
  TEST_ASSERT_EQUAL(0, mult(1, 0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(10, mult(2, 5));
}

void test_divide(void) {
  TEST_ASSERT_EQUAL(1, div(1, 1));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, div(2, 2));
}
