#include<iostream>
#include<stdlib.h>
#include<cstring>
using namespace std;

int CuentaPalabras(char c1[]);
void buscaPalabrasXTam(char c1[],int n1);

int main()
{
	int n1;
	char c1[200];
	cout<<"INTRODUCE UNA FRASE: ";
	cin.getline(c1,200,'\n');
	cout<<"INTRODUCE UN NUMERO: ";
	cin>>n1;
	buscaPalabrasXTam(c1,n1);
}
 int CuentaPalabras(char c1[])
{
	int palabras=1;
	int desp=32;
	for(int i=0;c1[i];i++)
	{
		if(c1[i]==desp && c1[i+1]!=32)
			palabras++;
	}
	return palabras;
}
void buscaPalabrasXTam(char c1[],int n1)
{
	int espacio=0,cont=0, caracter=0;
	for(int i=0;c1[i];i++)
	{
		caracter++;
		if(c1[i]==32)
		{
			if(caracter-1==n1)
			{
				cont++;	
			}
			caracter=0;
			espacio++;	
	 	}
		else
		 {	
		 	if (CuentaPalabras(c1) == espacio+1)
		 	{
		 		if(caracter==n1)
		 		{
		 			cont++;
				}
			}
		}
	}
	cout<<" "<<cont; 
}

