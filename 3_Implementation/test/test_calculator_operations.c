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
void test_trigsin(void);
void test_trigcos(void);
void test_trigtan(void);
void test_trigsininv(void);
void test_trigcosinv(void);
void test_trigtaninv(void);

void test_circle(void);
void test_rectangle(void);
void test_square(void);
void test_triangle(void);
void test_cube(void);
void test_cylinder(void);
void test_cone(void);
void test_sphere(void);
void test_bintodec(void);
void test_bintodec_1(void);






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
  RUN_TEST(test_trigsin);
  RUN_TEST(test_trigcos);
  RUN_TEST(test_trigtan);
  RUN_TEST(test_trigsininv);
  RUN_TEST(test_trigcosinv);
  RUN_TEST(test_trigtaninv);
  
  RUN_TEST(test_circle);
  RUN_TEST(test_rectangle);
  RUN_TEST(test_square);
  RUN_TEST(test_triangle);
  RUN_TEST(test_cube);
  RUN_TEST(test_cylinder);
  RUN_TEST(test_cone);
  RUN_TEST(test_sphere);

  RUN_TEST(test_bintodec);
  RUN_TEST(test_bintodec_1);
  

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

void test_trigsin(void) {
  TEST_ASSERT_EQUAL(-0.98803162409, sine(30));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0.85090352453, sine(45));
}

void test_trigcos(void) {
  TEST_ASSERT_EQUAL(0.15425144988, cos(30));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0.52532198881, cos(45));
}

void test_trigtan(void) {
  TEST_ASSERT_EQUAL(-6.40533119665, tan(30));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1.61977519054, tan(45));
}

void test_trigsininv(void) {
  TEST_ASSERT_EQUAL(0, sininv(0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(1, sininv(1));
}

void test_trigcosinv(void) {
  TEST_ASSERT_EQUAL(1, cosinv(0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0, cosinv(1));
}

void test_trigtaninv(void) {
  TEST_ASSERT_EQUAL(0, taninv(0));
  
  /* Dummy fail*/
  TEST_ASSERT_EQUAL(0, taninv(1));
}

// Test cases for the functions related to area of different geometrical shapes

void test_circle(void)
{
    TEST_ASSERT_EQUAL(78.55,area_circle(5)); 
}
void test_rectangle(void)
{
    TEST_ASSERT_EQUAL(30,area_rectangle(5,6));
}
void test_square(void)
{
    TEST_ASSERT_EQUAL(144,area_square(12));
}
void test_triangle(void)
{
    TEST_ASSERT_EQUAL(6,area_triangle(4,3)); 
}

// Test cases for functions related to volume of different geometrical shapes

void test_cube(void)
{
    TEST_ASSERT_EQUAL(125,volume_cube(5));
}
void test_cylinder(void)
{
    TEST_ASSERT_EQUAL(565.56,volume_cylinder(6,5));
}
void test_cone(void)
{
    TEST_ASSERT_EQUAL(186.63,volume_cone(6,5));
}
void test_sphere(void)
{
    TEST_ASSERT_EQUAL(267.44,volume_sphere(4));
}

void test_bintodec(void)
{
  TEST_ASSERT_EQUAL(8, bintodec(1000));
}

void test_bintodec_1(void)
{
  TEST_ASSERT_EQUAL(15, bintodec(1111));
}
