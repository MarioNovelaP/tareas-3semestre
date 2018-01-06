#include<iostream>
#include<stdlib.h>

int buscaNum(int vec[],int ini,int mat[][2],int a);
using namespace std;
int main()
{
	
	int x,rt,r,c,b=1,pos=1,n=0,a=2;
	cout<<"ingresa el tamano del vector: ";
	cin>>n;
	int vec[n];
	for(x=0;x<n;x++)
	{
		cout<<"ingresa numero en la posicion ["<<pos++<<"]: ";
		cin>>vec[x];
	}
	cout<<"renglones para matriz: ";
	cin>>rt;
	
	int mat [][2]={{0}};
	for(r=0;r<rt;r++)
	{
		mat[r][0]=rand()%50+1;
		cout<<mat[r][0]; //borrar luego
		cout<<"\n";
	}
buscaNum(vec,0,n-1,mat,rt);
}
 int buscaNum(int vec[],int ini,int fin,int mat[][2],int rt)
{
	int band=0;
	for(int r=0;r<rt;r++)//recorre matriz
	{
		for(int x=0;x<rt;x++)//recorre vector
	  	{
	  		if(mat[r][0]==vec[x])
	  		{
	  			mat[r][1]=x;
	  			band=1;
	  			//cout<<mat[r][1];
			}
		}
		if(band==0)
		{
			mat[r][1]=-1;
		}
	}
	for(int r=0;r<rt;r++)//recorre matriz
	{
	    cout<<mat[r][rt]<<endl;
    }
    for(int r=0;r<=1;r++)//recorre matriz
	{
		cout<<mat[r][1];
    }
} 	
	
