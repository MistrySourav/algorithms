#include<bits/stdc++.h>
using namespace std;



void printlist( int *p,int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<i<<" = "<<p[i]<<endl;
    }

}



void SelectionSort(int *A,int n)

{
    for(int i=0; i<n-1; i++)
    {
        int iMin=i;

        for(int j=i+1; j<n-1; j++)
        {
            if(A[j]<A[iMin])
            {
                iMin=j;
            }
            swap(A[iMin],A[i]);
        }
    }
}

void sortprint( int *p,int n)
{
    ofstream fout("75k.txt");
    for(int i=0;i<n;i++)
    {
        fout<<p[i]<<endl;
    }
}


int main()
{
int n=75000;
int *a =new int[n];


ifstream fin("75k.txt");

for(int i=0;i<n;i++)
{
fin>>a[i];

}

printlist(a,n);
SelectionSort(a,n);


cout<<"==================================="<<endl;


//printlist(a,n);
sortprint(a,n);
return 0;
}


