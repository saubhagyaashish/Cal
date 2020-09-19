
#include "unity.h"
#include "p_cal.h"



/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_calculator_add(void)
{
TEST_ASSERT_EQUAL(9,calculator(4,5,0));
  TEST_ASSERT_EQUAL(1,calculator(6,-5,0));
  TEST_ASSERT_EQUAL(100,calculator(45,55,0));
    TEST_ASSERT_EQUAL(0,matrix(0));
  
}
void test_calculator_sub(void)
{

  TEST_ASSERT_EQUAL(7,calculator(9,2,1));
    TEST_ASSERT_EQUAL(43,calculator(45,2,1));
    TEST_ASSERT_EQUAL(-7,calculator(58,65,1));
  
}
void test_multi(void)
{
  TEST_ASSERT_EQUAL(-49,calculator(-7,7,2));
    TEST_ASSERT_EQUAL(72,calculator(9,8,2));
      TEST_ASSERT_EQUAL(150,calculator(10,15,2));
      TEST_ASSERT_EQUAL(250,calculator(5,50,2));
  

}

void test_div(void)
{
  TEST_ASSERT_EQUAL(0,calculator(7,5,4));
   TEST_ASSERT_EQUAL(2,calculator(52,26,4));
   TEST_ASSERT_EQUAL(0,calculator(158,58,4));
}



void test_log(){}
int main(void)
{

  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_calculator_add);
  RUN_TEST(test_calculator_sub);
  RUN_TEST(test_multi);

  return UNITY_END();
}
