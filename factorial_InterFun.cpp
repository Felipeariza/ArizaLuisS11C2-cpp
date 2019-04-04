#include<iostream>

using namespace std;
void factorial(int num);

int main(){
	int n;
	cout<<"Ingrese el numero a calcular el factorial"<<endl;
	cin>>n;
	factorial(n);
	return 0;

}

void factorial(int num)
{
	
	int fact;
	fact = 1;
	for (int i=1; i <= num; i++)
	{
	fact *= i;
	}
	cout<<"El factorial es: "<<fact<<endl;
}
