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


void mergeList(int *a,int l,int m,int r)
{
    int n1=m-l+1;

    int n2=r-m;

    int *L = new int[n1];
    int *R = new int[n2];

    for(int i=0;i<n1;i++)
    {
        L[i]=a[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        R[i]=a[m+1+i];
    }


    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]>R[j])
        {
            a[k++]=R[j++];
        }
        else
        {
            a[k++]=L[i++];
        }
    }
    while(i<n1)
        {
        a[k++]=L[i++];
        }
    while(j<n2)
        {
        a[k++]=R[j++];
        }
    //return C;
}


void mergeSort(int *a,int l,int  r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        mergeList(a,l,m,r);
    }
}
int main()
{
    int a[]={89,2,45,6,2,1000,30};
    printlist(a,7);
    mergeSort(a,0,6);
    printlist(a,7);

}
