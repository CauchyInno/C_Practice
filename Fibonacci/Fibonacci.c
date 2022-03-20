#include <stdio.h>
#include "Fibonacci.h"

unsigned long long Fibonacci(unsigned int num)
{
	unsigned long long temp;
	
	unsigned long long Fibonacci_num_a = 1;
	unsigned long long Fibonacci_num_b = 1;
	
	if (!input_check(num))
		return 0;
	else if (num == 1 || num == 2)
		return 1;
	else
		while (num > 0)
		{
			temp = Fibonacci_num_a;
			Fibonacci_num_a += Fibonacci_num_b;
			Fibonacci_num_b = temp;
			
			num--;		
		}
		
	return Fibonacci_num_a;	
	
}

int input_check(int input_num)
{
	if (input_num < 0)
	{
		printf("invalid number");
		return 0;
	}
	else if (input_num > 0)
	{
		return 1;
	}
}	
	
	