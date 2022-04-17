#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of requests: ";
    cin>>n;

    int r[10];

    for(int i=0;i<n;i++)
    {
        cin>>r[i];
    }

    int h;
    cout<<"Enter the initial head position: ";
    cin>>h;

    int th=0;
    for(int i=0;i<n;i++)
    {
        th+=abs(r[i]-h);
        h=r[i];
    }

    cout<<"Total head moment is: "<<th;
    return 0;
}