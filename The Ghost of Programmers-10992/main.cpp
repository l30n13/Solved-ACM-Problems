#include <iostream>

using namespace std;

int main()
{
    unsigned long long int year,y;
    while(cin>>year)
    {
        if(year==0)
            break;
        y=year-2148;
        if(y%2==0)
            cout<<"Ghost of Tanveer Ahsan!!!\n";
        if(y%5==0)
            cout<<"Ghost of Shahriar Manzoor!!!\n";
        if(y%7==0)
            cout<<"Ghost of Adrian Kugel!!!\n";
        if(y%11==0)
            cout<<"Ghost of Anton Maydell!!!\n";
        if(y%15==0)
            cout<<"Ghost of Derek Kisman!!!\n";
        if(y%20==0)
            cout<<"Ghost of Rezaul Alam Chowdhury!!!\n";
        if(y%28==0)
            cout<<"Ghost of Jimmy Mardell!!!\n";
        if(y%36==0)
            cout<<"Ghost of Monirul Hasan!!!\n";
        if(y%4==0)
            if(y%400==0)
                cout<<"Ghost of K. M. Iftekhar!!!\n";
        if(y%2!=0&&y%5!=0&&y%7!=0&&y%11!=0&&y%15!=0&&y%20!=0&&y%28!=0&&y%36!=0&&y%4!=0)
            cout<<"No ghost will come in this year\n";
        cout<<"\n";
    }
    return 0;
}
