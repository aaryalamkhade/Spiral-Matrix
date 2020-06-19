#include<iostream>
using namespace std;

int main()
{
	int a[11][11];
int row=10;
int col=10;
int t=1;
int b,c,d,e;
b=d=e=0;
for(int j=0;j<5;j++)
{
for(int i=b;i<col;i++)
{
	a[b][i]=t;
	t++;
	c=i;
}b++;
for(int i=b;i<row;i++)
{
a[i][c]=t;
t++;	
}c--;
for(int i=c;i>=d;i--)
{
	a[c+1][i]=t;
	t++;
}d++;
for(int i=c;i>=d;i--)
{
	a[i][e]=t;
	t++;
}e++;
col--;
row--;	
}
for(int i=0;i<10;i++)
{  
	for(int j=0;j<10;j++)
	{
		if(i==0)
		{
			cout<<a[i][j]<<"   ";
		}
		else if(i==5 && j==5)
		{
			cout<<a[i][j]<<" ";
		}
		else
		{
			cout<<a[i][j]<<"  ";
		}
		
	}cout<<endl;
	}	
}
