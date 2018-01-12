#include<iostream>
#include<stdlib.h>

void buscaNum(int vec[],int mat[][2],int rt,int n);
using namespace std;
int main()
{
	int rt=0,c,b=1,pos=1,n=0,pos2=1;
	cout<<"ingresa el tamano del vector: ";
	cin>>n;
	int vec[n];
	for(int x=0;x<n;x++)
	{
		cout<<"ingresa numero en la posicion ["<<pos++<<"]: ";
		cin>>vec[x];
	}
	cout<<"\n";
	cout<<"filas para matriz: ";
	cin>>rt;
	int mat[rt][2]={{0}};
	for(int r=0;r<rt;r++)
	{
		cout<<"ingresa numero en la posicion ["<<pos2++<<"][2]: ";
		cin>>mat[r][0];
	}
	cout<<"\n";
	buscaNum(vec,mat,rt,n);
}
 void buscaNum(int vec[],int mat[][2],int rt,int n)
{
	int band=0;
	for(int r=0;r<rt;r++)//recorre matriz
	{
		band=0;  
		for(int x=0;x<rt;x++)//recorre vector
	  	{
	  		if(mat[r][0]==vec[x])
	  		{
	  			mat[r][1]=x+1;
	  			band=1;
	  			
			}
		}
		if(band==0)
		{
			mat[r][1]=-1;
		}
	}
	for(int r=0;r<rt;r++) //recorre matriz
	{
	    for(int c=0;c<2;c++)//recorre 2 columna
		{
	    	cout<<mat[r][c]<<"    ";
		}
	    cout<<endl;
    }
} 	





	
