#include<bits/stdc++.h>
using namespace std;

int main()
{
int n=1000;
int *a =new int[n];


ifstream fin("1k.txt");

for(int i=0;i<n;i++)
{
fin>>a[i];

}

for(int i=0;i<n;i++)
{
cout<<a[i]<<endl;
}
return 0;
}

