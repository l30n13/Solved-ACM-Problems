#include <iostream>

using namespace std;

int main()
{
    int a[5]={6,4,3,2,1},b,mid,first,last;
    //for sort
    for(int i=0;i<5;i++)
        for(int j=0;j<4;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    //for search
    first=0;
    last=4;
    mid=(first+last)/2;
    cin>>b;
    while(first<=last)
    {
        if(a[mid]<b)
            first=mid+1;
        else if(a[mid]==b)
        {
            cout<<a[mid];
            break;
        }
        else
            last=mid-1;
        mid=(first+last)/2;
    }

    return 0;
}
