#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<queue>
using namespace std;
#define clr(a) memset(a,0,sizeof(a))
#define PB push_back
#define pi 3.1415926535897932384626433832795

int main()
{
    long long m,n,i,cd,cnt;
    map<long, long>mp;
    while(cin>>n>>m)
    {
        if(n==0 && m==0)
        return 0;
        cnt=0;
        for(i=0;i<n;i++)
        {
            cin>>cd;
            mp[cd]=1;
        }

        for(i=0;i<m;i++)
        {
            cin>>cd;
            if(mp[cd]==1)
             cnt++;
        }

       mp.clear();
        cout<<cnt<<endl;
    }

return 0;
}
