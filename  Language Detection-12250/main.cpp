#include <iostream>
#include<string>
using namespace std;

int main()
{
    int count=1;
    string in;
    while((cin>>in))
    {
        if(in=="#") break;
        else if(in=="HELLO") cout<<"Case "<< count<<": "<<"ENGLISH"<<endl;
        else if(in=="HOLA") cout<<"Case "<< count<<": "<<"SPANISH"<<endl;
        else if(in=="HALLO") cout<<"Case "<< count<<": "<<"GERMAN"<<endl;
        else if(in=="BONJOUR") cout<<"Case "<< count<<": "<<"FRENCH"<<endl;
        else if(in=="CIAO") cout<<"Case " << count<<": "<<"ITALIAN"<<endl;
        else if(in=="ZDRAVSTVUJTE") cout<<"Case "<< count<<": "<<"RUSSIAN"<<endl;
        else cout<<"Case "<< count<<": "<<"UNKNOWN"<<endl;
        count++;
    }
    return 0;
}
