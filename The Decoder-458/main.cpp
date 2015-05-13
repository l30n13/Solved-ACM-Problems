#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    char code[1000000];

    while(scanf("%s",code)!= EOF){
        for(int i = 0; i < strlen(code); i++){
            printf("%c",code[i] - 7);
        }
        cout<<endl;
    }

    return 0;
}
