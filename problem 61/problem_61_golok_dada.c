/*Bismillahir Rahmanir Rahim*/
#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    char str[row][col];
    getchar();
    int i;
    for (i = 0; i < row; i++)
    {
        gets(str[i]);
    }
    int r, c;
    scanf("%d %d", &r, &c);
    r--;
    c--;
    char ch;
    int cnt = 0;
    getchar();
    do
    {
        scanf("%c", &ch);
        if (ch == 'R')
        {
            cnt++;
            cnt %= 4;
        }
        else if (ch == 'L')
        {
            cnt--;
            cnt += 4;
            cnt %= 4;
        }
        else if (ch == 'F')
        {
            if (cnt == 0)
            {
                if (str[r - 1][c] == ' ')
                {
                    r--;
                }
            }
            else if (cnt == 1)
            {
                if (str[r][c + 1] == ' ')
                {
                    c++;
                }
            }
            else if (cnt == 2)
            {
                if (str[r + 1][c] == ' ')
                {
                    r++;
                }
            }
            else if (cnt == 3)
            {
                if (str[r][c - 1] == ' ')
                {
                    c--;
                }
            }
        }

    } while (ch != 'Q');
    printf("%d %d ", r + 1, c + 1);
    if (cnt == 0)
    {
        printf("N\n");
    }
    else if (cnt == 1)
    {
        printf("E\n");
    }
    else if (cnt == 2)
    {
        printf("S\n");
    }
    else
    {
        printf("W\n");
    }
    return 0;
}
