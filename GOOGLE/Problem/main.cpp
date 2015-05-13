#include <iostream>
#include <string.h>

using namespace std;



bool is_all_equal(string o[], string d[],int length)
{
    int count = 0;

    for(int i = 0; i < length; i++)
    {
        for(int j = 0; j < length; j++)
        {
            if(o[i] == d[j])
            {
                count++;
                break;
            }
        }
    }
    if(count >= length)
        return true;
    else
        return false;
}

bool flip(char o[], string device[], int N, int L)
{
    char o1[N * L];
    strcpy(o1,o);
    int count = 0, j = 0, flip_position = L;
    string outlate[N];

    for(int i = 0; i < N ; i++)
    {
        for( ; j < N*L ; j++)
        {
            outlate[i] += o[j];
            count++;
            if(count >= L)
            {
                count = 0;
                j++;
                break;
            }
        }
    }

    while(!is_all_equal(outlate,device,N) && flip_position != 0)
    {
        j = 0;
        count = 0;
        strcpy(o1,o);
        for(int i = 0; i < N; i++)
            outlate[i] = "\0";

        for(int i = flip_position - 1; i < N * L ; i += flip_position)
        {
            if(o1[i] == '0')
                o1[i] = '1';
            else
                o1[i] = '0';
        }

        for(int i = 0; i < N ; i++)
        {
            for( ; j < N*L ; j++)
            {
                outlate[i] += o1[j];
                count++;
                if(count >= L)
                {
                    count = 0;
                    j++;
                    break;
                }
            }
        }
        flip_position--;
    }
    if(flip_position <= 0)
        return false;
    else
        return true;
}

int main()
{
    int input, test_case = 1, N, L;
    char d[6000], o[6000];

    cin>>input;

    while(input--)
    {
        cin>>N>>L;

        for(int i = 0; i < N * L; i++)
            cin>>o[i];
        for(int i = 0; i < N * L; i++)
            cin>>d[i];

        int count = 0, j = 0;
        string device[N], outlate[N];

        for(int i = 0; i < N ; i++)
        {
            for( ; j < N*L ; j++)
            {
                outlate[i] += o[j];
                device[i] += d[j];
                count++;
                if(count >= L)
                {
                    count = 0;
                    j++;
                    break;
                }
            }
        }

        if(is_all_equal(outlate, device, N))
        {
            cout<<"Case #"<<test_case<<": 0\n";
        }
        else
        {
            if(flip(o, device, N, L))
                cout<<"Case #"<<test_case<<": 1\n";
            else
                cout<<"Case #"<<test_case<<": NOT POSSIBLE\n";

        }
        test_case++;
    }

    return 0;
}
