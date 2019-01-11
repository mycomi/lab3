#include <iostream>
using namespace std;
int main()
{
	float a=0,b=6;
	
	while (b<=19)
	{
		a+=1/b;
		b++;
	}
	cout << a;
}
