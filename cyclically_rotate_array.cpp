#include<iostream>
using namespace std;
int main()
{
    int n=5;
    int a[]={1,2,3,4,5};
    int temp=a[n-1];
    for(int i=n-2;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=temp;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
