#include<iostream>
using namespace std;

int partion(int a[],int l,int h)
    {
        int i=l-1;
        int p=a[h];
        for(int j=l;j<h;j++)
        {
           if(a[j]<p)
           {
               i++;
               swap(a[j],a[i]);
           }

        }
        swap(a[i+1],a[h]);
        return i;

    }
    void quick(int a[],int l,int h)
    {
        if(l<h)
        {
            int pi=partion(a,l,h);
            quick(a,l,pi);
            quick(a,pi+2,h);
        }
    }
    int main()
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int l=1;
        int h=n;
        quick(a,l,h);
        for(int i=1;i<=n;i++)
            cout<<a[i];

    }

