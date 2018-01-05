#include<iostream>
#include<stdlib.h>

int simetrico(int vec[],int ini, int fin);
using namespace std;
int main()
{
	int x,pos=1,n=0;
	cout<<"ingresa el tamano del vector: ";
	cin>>n;
	int vec[n];
	for(x=0;x<n;x++)
	{
		cout<<"ingresa numero en la posicion ["<<pos++<<"]: ";
		cin>>vec[x];
	}

	if(simetrico(vec,0,n-1)==0)
	{
		cout<<"NO ES SIMETRICO";
	}
	else 
		cout<<"ES SIMETRICO";
		
return 0;
}

int simetrico(int vec[],int ini,int fin)
{
	if (ini<fin)
	{
		return 0;
		ini++;
		fin--;
	}	
    
	else
		return simetrico(vec,ini,fin);
		return 1;
}
