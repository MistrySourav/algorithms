#include<bits/stdc++.h>
using namespace std;

int main()
{

    ofstream fout("FileCreate.txt");
    srand(time(0));
    int n=75000;
    for(int i=0;i<n;i++)
    {
        fout<<rand()%1000<<endl;
    }
        return 0;

}
