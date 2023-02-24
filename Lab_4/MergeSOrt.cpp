#include<bits/stdc++.h>
using namespace std;



void printlist( int *p,int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
cout<<endl;
}



int *mergeSortedList(int *A,int m,int *B,int n )
{

    int *C=new int[m+n];
    int i=0,j=0,k=0;
    while(i<m && j<n)
    {
        if(A[i]>B[j])
        {
            C[k++]=B[j++];
        }
        else
        {
            C[k++]=A[i++];
        }
    }
    while(i<m)
        {
        C[k++]=B[j++];
        }
    while(j<n)
        {
        C[k++]=B[j++];
        }
    return C;
}


int main()
{


    int b[]={2,5,6,9,15,20};
    int a[]={1,4,7,8,12};
    printlist(b,6);
    printlist(a,5);

    int *m = mergeSortedList(a,5,b,6);
    printlist(m,11);
    return 0;

}
