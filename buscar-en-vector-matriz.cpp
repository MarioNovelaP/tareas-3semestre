#include<iostream>
#include<stdlib.h>

//int buscaNum(int vec[],int ini,int mat[][2],int a);
using namespace std;
int main()
{
	int x,r,c,b=1,pos=1,n=0,a=2;
	cout<<"ingresa el tamano del vector: ";
	cin>>n;
	int vec[n];
	for(x=0;x<n;x++)
	{
		cout<<"ingresa numero en la posicion ["<<pos++<<"]: ";
		cin>>vec[x];
	}
	cout<<"renglones para matriz: ";
	cin>>r;
	int mat [r][2];
	for(r=0;r<a;r++)
	{
		for(c=0;c<a;c++)
		{
			mat[r][c]=rand()%50+1;
			cout<<mat[r][c];
		}
		cout<<"\n";
	}
//	buscaNum(vec,0,mat,a);
}
//int buscaNum(int vec[],int ini,int mat[][2],int a,)
//{
	
//}	
	
