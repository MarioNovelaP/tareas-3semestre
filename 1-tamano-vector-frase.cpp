#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;
void tam(char c1[],int vec[]);
int main()
{
	char c1[100];
	int vec[15]={0}; 
	int longitud=0;
	cout<<"Escribe la frase: ";
	cin.getline(c1,100,'\n');
	
	tam(c1,vec);
	return 0;
}

void tam(char c1[],int vec)
{
	int tpal=0,desp=0,caracter=0;
	for(int i=0;c1[i];i++)
	{
		caracter++;
		if(c1[i]==32)
		{
		
		}
	}
	
	
	
	
}
