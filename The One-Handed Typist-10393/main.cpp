#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    char keyBoard[11][6]={
        { ' ' },
        { 'q','a','z' },
        { 'w','s','x' },
        { 'e','d','c' },
        { 'r','f','v','t','g','b' },
        { ' ' },
        { ' ' },
        { 'y','h','n','u','j','m' },
        { 'i','k',',' },
        { 'o','l','.' },
        { 'p',';','/' },
    };

    int F, N, fingers[11], countChar = 0, i = 1, a = 0, numbers[10], length = 0, length1 = 0;

    char wordsChar[51];

    string finalWords[1001],finalWords1[1001];
    string words[1001];

    //freopen("in.txt","r+",stdin);

    while(scanf("%d %d",&F,&N) != EOF){

        a = 0;

        i = 1;

        while(i <= F){
            cin>>fingers[i];
            i++;
        }
        fingers[i] = 0;

        i = 0;

        while(i < N){
            cin>>words[i];
            i++;
        }

        i = 1;

        for(int j = 1, k = 0; j <= 10 && i <= F; j++){
            if(j != fingers[i] && fingers[i] != 0){
                numbers[k] = j ;
                k++;
                numbers[k] = 0;
                if(j == 10){
                    j = 1;
                    i++;
                }
            }
            /*else{
                i++;
                //numbers[l] = 0;
                //l++;
            }*/
        }

        i = 0;

        for(int w = 0; w < N;w++){
            //strcpy(wordsChar, words[w].c_str());
            strncpy(wordsChar, words[w].c_str(), sizeof(wordsChar));
            wordsChar[sizeof(wordsChar) - 1] = 0;

            int len = strlen(wordsChar);

            for( int j = 0; j < len; j++){

                for(int k = 0; k < (10 - F) ; k++){

                    if(numbers[k] != 0){
                        for(int l = 0; l < 6; l++){
                            if(wordsChar[j] == keyBoard[numbers[k]][l]){
                                countChar++;
                                break;
                            }
                        }
                    }
                }
            }

            if(countChar >= len){
                if(len >= length ){
                    finalWords[i] = string(wordsChar);
                    length = len;
                    i++;
                    a++;
                }
            }
            wordsChar[0]='\0';
            countChar = 0;
        }

        int len;
        for(int j = 0, k = 0; j < a; j++){
            len = finalWords[j].length();
            if(len == length ){
                finalWords1[k] = finalWords[j];
                k++;
                length1 = k;
            }
        }

        cout<<length1<<endl;
        for(int l = 0; l < length1; l++){
            cout<<finalWords1[l]<<endl;
        }

        length = 0;
        length1 = 0;
        finalWords[0] = '\0';
        finalWords1[0] = '\0';
        memset(numbers, 0, sizeof(numbers));
        /*memset(finalWords, '\0', sizeof(finalWords));
        memset(finalWords1, '\0', sizeof(finalWords1));*/
    }

    return 0;
}
