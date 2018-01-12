#include<iostream>
#include<string.h>
#include<cstring>

using namespace std;
int tam(char c1[],int vec[]);
int main()
{
	char c1[100];
	int vec[15]={0}; 

	cout<<"Escribe la frase: ";
	cin.getline(c1,100,'\n');
	tam(c1,vec);
}

int tam(char c1[],int vec[])
{
	int tpal=0,desp=0,caracter=0;
	for(int i=0;c1[i];i++)
	{
		caracter++;
		if(c1[i]==32)
		{
			vec[caracter-2]+=1;	
			caracter=0;	
			desp++;
		}	
	}
	vec[caracter-1]+=1;
	
    for(int x=0;x<15;x++)
		cout<<vec[x]<<endl;  
	
	
}
