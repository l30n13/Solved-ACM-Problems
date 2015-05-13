#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long current,money,j,n;
    string s;
        current=0;
        cin>>n;

        for(j=0;j<n;j++)
        {
            cin>>s;
            if(s=="donate")
            {
                cin>>money;
                current+=money;
            }
            else
            cout<<current<<endl;
        }
return 0;
}
