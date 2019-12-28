#include"Cmath.h"
int main()
{
	long long int num = 12345678;
	CString a = CMath::toCString(num);
	a.display();
	return 0;
}