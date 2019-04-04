#include<iostream>

using namespace std;

void primos(int a, int b);


int main(){
	
	int inf,sup;
        cout<<"Ingrese el limite inferior"<<endl;
	cin>>inf;
	cout<<"Ingrese el limite superior"<<endl;
        cin>>sup;
	primos(inf,sup);
	return 0;


}

void primos(int a, int b)
{
	int p[]={11,7,5,3,2};
	for (int j=0;j<=4;j++)
	{
		if(a<p[j])
		{
			cout<<"Numero primo: " <<p[j]<<endl;
		}
	}	

        for (int i=a; i<=b;i++)
	{
	
		if (i%p[0]!=0&&i%p[1]!=0&&i%p[2]!=0&&i%p[3]!=0&&i%p[4]!=0)
		{
			cout<<"Numero primo: " <<i<<endl;
		}
		
	}
	
}
