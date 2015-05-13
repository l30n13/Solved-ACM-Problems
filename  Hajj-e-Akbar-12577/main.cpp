#include<iostream>
#include<string>
using namespace std;
int main()
{
    int count=1;
    string s;
    while((cin>>s))
    {
        if(s=="*") break;
        if(s=="Hajj")
        cout<<"Case "<<count<<":"<<" Hajj-e-Akbar"<<endl;
        if(s=="Umrah")
        cout<<"Case "<<count<<":"<< " Hajj-e-Asghar"<<endl;
        count++;
    }
    return 0;
}
