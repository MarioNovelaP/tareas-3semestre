#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;

void concatena(char c1[],char c2[]);
int main()
{
	char c1[200];
	char c2[200];
	cout<<"PRIMER CADENA: ";
	cin.getline(c1,200,'\n');
	cout<<"SEGUNDA CADENA: ";
	cin.getline(c2,200,'\n');
	concatena(c1,c2);
}
void concatena(char c1[],char c2[])
{
	int i,desp=32;
	char fin[200];
	for(i=0;c1[i];i++)
	{
		fin[i]=c1[i];
	}
	fin[i]=desp;
	i++;
	
	for(int j=0;c2[j];j++)
	{
		fin[i+j]=c2[j];
	}
	 cout<<"CONCATENA: "<<fin;
}
