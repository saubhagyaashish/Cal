
#include "unity.h"
#include "p_cal.h"



/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test_calculator_add(void)
{
  TEST_ASSERT_EQUAL(0, calculator(0,0,0));
   TEST_ASSERT_EQUAL(9, calculator(4,5,0));
    TEST_ASSERT_EQUAL(5874, calculator(5869,5,0));
    TEST_ASSERT_EQUAL(10532, calculator(4943,5589,0));
    TEST_ASSERT_EQUAL(339787112, calculator(889856,338897256,0));
  
}
void test_calculator_sub(void)
{
  
  TEST_ASSERT_EQUAL(-1, calculator(4,5,1));
    TEST_ASSERT_EQUAL(-10, calculator(44,54,1));
    TEST_ASSERT_EQUAL(0, calculator(78956,78956,1));
    TEST_ASSERT_EQUAL(7681765, calculator(7896354,214589,1));
  
}
void test_multi(void)
{
   TEST_ASSERT_EQUAL(3135, calculator(55,57,2));
   TEST_ASSERT_EQUAL(-37872, calculator(-48,789,2));
}

void test_div(void)
{
  TEST_ASSERT_EQUAL(0,calculator(7,5,3));
   TEST_ASSERT_EQUAL(2,calculator(52,26,3));
   TEST_ASSERT_EQUAL(0,calculator(158,58,3));
   TEST_ASSERT_EQUAL(589,calculator(464721,789,3));
}
void test_power(void)
{
  TEST_ASSERT_EQUAL(25,calculator(5,2,6));
   TEST_ASSERT_EQUAL(100000000,calculator(100,4,6));
   TEST_ASSERT_EQUAL(900,calculator(30,3,6));
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
