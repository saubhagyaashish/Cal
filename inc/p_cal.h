/**
* @file factorial.h
*
*/
#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

/**
* Calculates the factorial of integer number
* @param[in] number for which factorial has to be found
* @return Factorial of the number
* @note Returns -1 for negative values
*/

/**
* Calculates the factorial of integer
* @param[in] 1st Number
* @param[in] 2st Number
* @param[in] choice of operator 0:add,1:sub,2:multiply,3:divide
* @return int out of number1(choice)number2
*/
int calculator(int number,int number2,int choice);
int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);
int power(int num1,int num);
int root(int num1,int num);
int logarithm(int num1,int num);

float advance_calci(float num1,int choice);

float square_root(float  num1);
float log_to_10(float num1);
float cosec_fun(float num1);
float exponential(float num1);
float factorial(float number);
float one_by(float number);
float modulous(float number);
float natural_log(float  num1);
float sine_fun(float num1);
float cos_fun(float num1);
float sec_fun(float num1);

int matrix();

int matrix_sub();

int matrixs_sum();


#endif
