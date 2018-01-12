#include<iostream>
using namespace std;

int main()
{
	int vec[5]={0};
	int pos=1;
	for(int i=0;i<5;i++)
	{
		cout<<"INGRESA NUMERO EN LA POSICION ["<<pos++<<"]: ";
		cin>>vec[i];
	}
	cout<<"\n";
	for(int i=0;i<5;i++)
	{
		if(vec[i]==0)
		cout<<"CERO, ";
		else if(vec[i]==1)
		cout<<"UNO, ";
		else if(vec[i]==2)
		cout<<"DOS, ";
		else if(vec[i]==3)
		cout<<"TRES, ";
		else if(vec[i]==4)
		cout<<"CUATRO, ";
		else if(vec[i]==5)
		cout<<"CINCO, ";
		else if(vec[i]==6)
		cout<<"SEIS, ";
		else if(vec[i]==7)
		cout<<"SIETE, ";
		else if(vec[i]==8)
		cout<<"OCHO, ";
		else if(vec[i]==9)
		cout<<"NUEVE, ";
	}
	cout<<"\n";
	return 0;
}
