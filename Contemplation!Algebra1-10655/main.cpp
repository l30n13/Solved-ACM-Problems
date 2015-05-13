#include<iostream>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
//#include<cmath>
#include<math.h>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<utility>
#include<iomanip>
#include<queue>

using namespace std;

#define INF (1<<29)
#define SET(a) memset(a,-1,sizeof(a))
#define ALL(a) a.begin(),a.end()
#define CLR(a) memset(a,0,sizeof(a))
#define FILL(a,v) memset(a,v,sizeof(a))
#define PB push_back
#define FOR(i,n) for(int i = 0;i<n;i++)
#define PI acos(-1.0)
#define EPS 1e-9
#define MP(a,b) make_pair(a,b)
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define LL long long


long long MOD=pow(2,64);
struct A{
     long long arr[5][5];
};

A MatrixMulti(A a, A b)
{
    A result;
    int i,j,k;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
        {
            result.arr[i][j]=0;
            for(k=0;k<2;k++)
                {
                    result.arr[i][j]+=(a.arr[i][k]%MOD*b.arr[k][j]%MOD)%MOD;
                    result.arr[i][j]=result.arr[i][j]%MOD;
                }
            result.arr[i][j]=result.arr[i][j]%MOD;
        }
    return result;
}

A BigMod(A a, long long n)
{
    A ret;
    int i,j;
    for(i=0;i<2;i++)
        for(j=0;j<2;j++)
            {
                if(i==j)
                ret.arr[i][j]=1;
                else
                ret.arr[i][j]=0;
            }

    while(n)
    {
        if(n & 1)
 ret=MatrixMulti(ret,a);
        a=MatrixMulti(a,a);
        n>>=1;
    }
    return ret;
}

int main()
{
    A initialMatrix,ans;
    long long n,i,j,t,kk=1,p,q,temp,cnt;
    string line;
    while(getline(cin,line))
    {
        cnt=0;
        stringstream ss;
        ss<<line;

        while(ss>>temp)
        {
           if(cnt==0)
           p=temp;
           else if(cnt==1)
           q=temp;
           else if(cnt==2)
           n=temp;
           cnt++;
        }
        if(cnt==2)
        break;

        initialMatrix.arr[0][0]=p;
        initialMatrix.arr[0][1]=-q;
        initialMatrix.arr[1][0]=1;
        initialMatrix.arr[1][1]=0;

            if(n==0)
            {
                cout<<"2"<<endl;
                continue;
            }
            if(n==1)
            {
                cout<<p<<endl;
                continue;
            }

            ans=BigMod(initialMatrix,n-1);
            cout<<(((ans.arr[0][0]*p)%MOD+(ans.arr[0][1]*2)%MOD))%MOD<<endl;
    }
return 0;
}
