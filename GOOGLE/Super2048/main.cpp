#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int test_case, row, count = 1;
    char direction[10];

    cin>>test_case;

    while(test_case--)
    {
        cin>>row>>direction;
        int matrix[row][row];

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j< row; j++)
                cin>>matrix[i][j];
        }

        switch(direction[0])
        {
            case 'r':
                for(int i = 0; i < row; i++)
                {
                    for(int j = 0; j < row - 1; )
                    {
                        if((matrix[i][j + 1] != 0 || matrix[i][j] != 0) && matrix[i][j + 1] == matrix[i][j])
                        {
                            matrix[i][j + 1] += matrix[i][j];
                            matrix[i][j] = 0;
                            j++;

                            if(matrix[i][j + 1] == 0)
                            {
                                while(matrix[i][j + 1] == 0)
                                {
                                    matrix[i][j + 1] += matrix[i][j];
                                    matrix[i][j] = 0;
                                    j ++;
                                }
                            }
                            else
                                j+=2;
                        }
                        else if(matrix[i][j + 1] == 0)
                        {
                            while(matrix[i][j + 1] == 0)
                            {
                                matrix[i][j + 1] += matrix[i][j];
                                matrix[i][j] = 0;
                                j ++;
                            }
                        }
                        else
                            j++;
                    }
                }
                break;
            case 'l':
                for(int i = row - 1; i >= 0; i--)
                {
                    for(int j = row - 1; j > 0; )
                    {
                        if((matrix[i][j - 1] != 0 || matrix[i][j] != 0) && matrix[i][j - 1] == matrix[i][j])
                        {
                            matrix[i][j - 1] += matrix[i][j];
                            matrix[i][j] = 0;

                            if(matrix[i][j] == 0)
                                j--;
                            else
                                j-=2;
                        }
                        else if(matrix[i][j - 1] == 0)
                        {
                            while(matrix[i][j - 1] == 0)
                            {
                                matrix[i][j - 1] += matrix[i][j];
                                matrix[i][j] = 0;
                                j --;
                            }
                        }
                        else
                            j--;
                    }
                }
                break;
            /*case 'u':
                for(int i = 0; i < row; i++)
                {
                    for(int j = row - 1; j >= 0; )
                    {
                        if((matrix[j - 1][i] != 0 || matrix[j][i] != 0) && matrix[j - 1][i] == matrix[j][i])
                        {
                            matrix[j - 1][i] += matrix[j][i];
                            matrix[j][i] = 0;
                            j -= 2;
                        }
                        else if(matrix[j - 1][i] == 0 || matrix[j][i] == 0)
                        {
                            while(matrix[j - 1][i] == 0 || matrix[j][i] == 0)
                            {
                                matrix[j - 1][i] += matrix[j][i];
                                matrix[j][i] = 0;
                                j--;
                            }
                        }
                        else
                            j--;
                    }
                }
                break;
            case 'd':
                for(int i = 0; i < row; i++)
                {
                    for(int j = 0; j > row - 1; )
                    {
                        if((matrix[j][i] != 0 || matrix[j + 1][i] != 0) && matrix[j + 1][i] == matrix[j][i])
                        {
                            matrix[j + 1][i] += matrix[j][i];
                            matrix[j][i] = 0;
                            j += 2;
                        }
                        else if(matrix[j][i] == 0 || matrix[j + 1][i] == 0)
                        {
                            while(matrix[j][i] == 0 || matrix[j + 1][i] == 0)
                            {
                                matrix[j + 1][i] += matrix[j][i];
                                matrix[j][i] = 0;
                                j++;
                            }
                        }
                        else
                            j++;
                    }
                }
                break;*/
        }

        cout<<"Case #"<<count<<":\n";

        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j< row; j++)
                cout<<matrix[i][j]<<" ";
            cout<<endl;
        }

        count++;
    }

    return 0;
}
