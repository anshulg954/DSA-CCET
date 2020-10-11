#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int n;
    int temp;
    cout<<"\n Enter size: ";
    cin>>n;
    int a[n];
    cout<<"\n Enter values: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"\n List sorted";
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<a[i];
    }
    return 0;
}
