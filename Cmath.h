#include<iostream>
#include"CString.h"
using namespace std;

class CMath
{
public:
	static float calcPower(int base, int exponent);
	static int calcGCD(int numerator, int denomintor);
	static CString toCString(long long int num);
	static long long int toInteger(CString);
};