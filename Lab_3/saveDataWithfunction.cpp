#include<bits/stdc++.h>
using namespace std;



void printlist( int p,int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<endl;
    }

}


void bubbleSort()




int main()
{
int n=5000;
int *a =new int[n];


ifstream fin("5k.txt");

for(int i=0;i<n;i++)
{
fin>>a[i];

}

printlist(a,n);
return 0;
}

