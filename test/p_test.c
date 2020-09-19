
#include "unity.h"
#include "p_cal.h"



/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_calculator_add(void)
{
  TEST_ASSERT_EQUAL(0,calculator(0,0,0));
  TEST_ASSERT_EQUAL(1,calculator(6,-5,0));
    TEST_ASSERT_EQUAL(20,calculator(4,5,2));
  
}
void test_calculator_sub(void)
{
  TEST_ASSERT_EQUAL(-7,calculator(2,9,1));
  TEST_ASSERT_EQUAL(7,calculator(9,2,1));
}
void test_multi(void)
{
  TEST_ASSERT_EQUAL(-25,calculator(-5,5,2));
  TEST_ASSERT_EQUAL(0,matrix(0));
}

void test_div(void)
{
  TEST_ASSERT_EQUAL(0,calculator(7,5,4));
   TEST_ASSERT_EQUAL(2,calculator(52,26,4));
   TEST_ASSERT_EQUAL(0,calculator(158,58,4));
}
void test_power(void)
{
  TEST_ASSERT_EQUAL(0,calculator(5,2,4));
   TEST_ASSERT_EQUAL(2,calculator(52,26,4));
   TEST_ASSERT_EQUAL(0,calculator(158,58,4));
}


void test_log()
int main(void)
{

  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_calculator_add);
  RUN_TEST(test_calculator_sub);
  RUN_TEST(test_multi);

  return UNITY_END();
}
