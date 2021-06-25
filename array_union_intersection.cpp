//find the union and intersection of two sorted arrays
#include<iostream>
using namespace std;
void union_array(int arr1[],int arr2[],int n,int m)
{
    int i=0,j=0;
    cout<<"union of array=";
    while(i<n && j<m)
    {
        if(arr1[i]<arr2[j])
        {
        cout<<arr1[i]<<" ";
        i++;
        }
        else if(arr1[i]>arr2[j])
        {
        cout<<arr2[j]<<" ";
        j++;
        }
        else if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    while(i<n)
    {
        cout<<arr1[i]<<" ";
        i++;
    }
    while(j<m)
    {
        cout<<arr2[j]<<" ";
        j++;
    }
}
void intersection_array(int arr1[],int arr2[],int n,int m)
{
    cout<<"\nintersection of array=";
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(arr1[i]==arr2[j])
            {
              cout<<arr1[i]<<" ";
              i++;
              j++;
            }
        else if(arr1[i]<arr2[j])
        i++;
        else if(arr1[i]>arr2[j])
        j++;
    }
    
}
int main()
{
    int arr1[]={1,3,4,5,7};
    int arr2[]={2,3,5,6};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    int m=sizeof(arr2)/sizeof(arr2[0]);
    union_array(arr1,arr2,n,m);
    intersection_array(arr1,arr2,n,m);
   return 0;
}
