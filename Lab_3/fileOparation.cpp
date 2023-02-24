#include<bits/stdc++.h>
using namespace std;



int main()
{


    ofstream fout("75k.txt");
    srand(time(0));
    int n=75000;
    for(int i=0;i<n;i++)
    {
        fout<<rand()%10000+1<<endl;
    }
    return 0;
}

