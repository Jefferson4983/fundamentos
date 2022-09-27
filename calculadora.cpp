#include<iostream>
using namespace std;

int main()
{
	float j,x,s,r,d,m;
	cout<<"ingrese el valor de j="; cin>>j;
	cout<<"ingrese el valor de x="; cin>>x;
	s=j+x;
	r=j-x;
	m=j*x;
	d=j/x;
	cout<<"el resultafo de la suma es"<<j<<"+"<<x<<"="<<s<<endl;
	cout<<"el resultafo de la resta es"<<j<<"-"<<x<<"="<<r<<endl;
	cout<<"el resultafo de la multiplicacion es"<<j<<"*"<<x<<"="<<m<<endl;
	cout<<"el resultafo de la dividion es"<<j<<"/"<<x<<"="<<d<<endl;
	return 0;
}
