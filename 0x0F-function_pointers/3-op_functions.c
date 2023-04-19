#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of two numbers
 * @a: firts umber
 * @b: second number
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);

}
/**
 * op_sub - subtracts teo numbers
 * @a: first number
 * @b: second number
 *
 * Return: difrence of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of two no
 * @a: firts number
 * @b: second number
 *
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);

}

/**
 * op_div - dividing two numbers
 * @a: first number
 * @b: second number
 *
 * Return: quotient
 */
int op_div(int a, int b)
{
	return (a / b);

}

/**
 * op_mod - remainder of a number
 * @a: first number
 * @b: second number
 *
 * Return: remainder after quotient
 */
int op_mod(int a, int b)
{
	return (a % b);
}
