#include"Cmath.h"
float CMath::calcPower(int base, int exponent)
{
	float num=(float)base; 
	for (int i = 0; i < exponent-1;i= i + 1)
	{
		num = (num*base);
	}
	
	return num;
}

int CMath::calcGCD(int numerator, int denominator)
{
	if (numerator < denominator)
	{
		int a = numerator;
		numerator = denominator;
		denominator = a;
    }

	int num = numerator % denominator;
	while (num != 0)
	{
		numerator = denominator;
		denominator= num;
		num = numerator % denominator;

	}
	return denominator;
}

CString CMath::toCString(long long int num)
{
	CString a("                                                  ");
	long long int num2 = num;
	int counter = 0;
	while (num2 > 0)
	{
		counter = counter + 1;
		num2 = num2 / 10;
	}

	long long int divisor = 1;
	for (int i = 0; i < counter-1;i= i + 1)
	{
		divisor = divisor * 10;
	}
	long long int num3 = num;
	long long int lastDigit;
	int index = 49;

	while (num > 0)
	{
		lastDigit = num3 % divisor;
		a.at(index) = (char)lastDigit;
		divisor = divisor / 10;
		index = index - 1;
		num = num / 10;
		num3 = num;
	}
	a.trim();
	return a;

}

long long int CMath::toInteger(CString source)
{
	int num = source.toInteger();
	return (long long)num;
}