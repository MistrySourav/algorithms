#include<bits/stdc++.h>
using namespace std;


void Print(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i<<" = "<<p[i]<<endl;
    }
}

void BubbleSort(int *A,int n)
{
    for(int i=0;i<=n-2;i++)
    {
        if(A[i]=A[i+1])
        {
            swap(A[i],A[i+1]);
        }
    }
}

void sortprint( int *p,int n)
{
    ofstream fout("FileCreate.txt");
    for(int i=0;i<n;i++)
    {
        fout<<p[i]<<endl;
    }
}

int main()
{
    int n=75000;
    int *a=new int[n];

    ifstream fin("FileCreate.txt");
    for(int i=0;i<n;i++)
    {
        fin>>a[i];

    }
    Print(a,n);
    BubbleSort(a,n);

    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$"<<endl;
    cout<<"##################################"<<endl;

    Print(a,n);
}

