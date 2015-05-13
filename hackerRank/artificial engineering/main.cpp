#include <stdio.h>
#include <string.h>
#include <math.h>

void downLeft(int n,int m, int p);

void displayPathtoPrincess(int n, char grid[101][101]){
    //logic here

    int findMe, findPrinces, count=1;

    for(int i=0 ;i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(grid[i][j] == 'm')
                findMe = count;
            else if(grid[i][j] == 'p')
                findPrinces = count;
            count++;
        }
    }

    while(findMe != findPrinces)
    {
        if(findMe > findPrinces)
        {
            if((findMe - findPrinces) >= n || (findMe - n) >= findPrinces)
            {
                findMe -= n;
                printf("UP\n");
                continue;
            }
            else if((findPrinces + n) >= findMe)
            {
                findMe--;
                printf("LEFT\n");
                continue;
            }
        }
        else if(findMe < findPrinces)
        {
            if((findMe + n) <= findPrinces || (findPrinces - findMe) <= n)
            {
                printf("DOWN\n");
                findMe += n;
                continue;
            }
            else if((findPrinces - n) <= findMe)
            {
                findMe++;
                printf("RIGHT\n");
                continue;
            }
        }
    }

}

int main(void) {

    int m;
    scanf("%d", &m);
    char grid[101][101]={};
    char line[101];

    for(int i=0; i<m; i++) {
        scanf("%s", line);
        strcpy(grid[i], line);
    }

    displayPathtoPrincess(m,grid);
    return 0;
}
