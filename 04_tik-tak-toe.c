// Tic Tac Toe Game
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int player1 = 0, player2 = 0, count = 1, arr[9], imp = 0;
    char a = '1', b = '2', c = '3', d = '4', e = '5', f = '6', g = '7', h = '8', i = '9';
lable1:
    system("cls");
    printf("\n\n*******TIC-TAC-TOE*******");
    printf("\n\nPlayer 1 = O\tPlayer 2 = X");
    printf("\n\n* * * * * * * * * * * * *\n");
    printf("*   %c   |   %c   |   %c   *\n", a, b, c);
    printf("*-------|-------|-------*\n");
    printf("*   %c   |   %c   |   %c   *", d, e, f);
    printf("\n*-------|-------|-------*\n");
    printf("*   %c   |   %c   |   %c   *\n", g, h, i);
    printf("* * * * * * * * * * * * *\n");
    if (count > 9)
    {
        printf("\n*****The_Game_is_Draw*****");
        goto end;
    }

    if ((a == b && b == c) || (d == e && e == f) || (g == h && h == i) || (a == d && d == g) || (b == e && e == h) || (c == f && f == i) || (a == e && e == i) || (c == e && e == g))
    {
        printf("\n****Congratulations You WIN****");
        goto end;
    }

    if (count % 2 == 0)
    {
    print:
        printf("\nPlayer 2 : ");
        scanf("%d", &player2);
        for (int j = 0; j < 9; j++)
        {
            if (player2 == arr[j])
            {
                printf("This is already selected  :(");
                goto print;
            }
        }
        switch (player2)
        {
        case 1:
            a = 'X';
            break;
        case 2:
            b = 'X';
            break;
        case 3:
            c = 'X';
            break;
        case 4:
            d = 'X';
            break;
        case 5:
            e = 'X';
            break;
        case 6:
            f = 'X';
            break;
        case 7:
            g = 'X';
            break;
        case 8:
            h = 'X';
            break;
        case 9:
            i = 'X';
            break;
        default:
            printf("\nEnter the valid number\n");
            goto print;
            break;
        }
        arr[imp++] = player2;
    }
    else
    {
    print2:
        printf("\nPlayer 1 : ");
        scanf("%d", &player1);
        for (int j = 0; j < 9; j++)
        {
            if (player1 == arr[j])
            {
                printf("This is already selected  :(");
                goto print2;
            }
        }
        switch (player1)
        {
        case 1:
            a = 'O';
            break;
        case 2:
            b = 'O';
            break;
        case 3:
            c = 'O';
            break;
        case 4:
            d = 'O';
            break;
        case 5:
            e = 'O';
            break;
        case 6:
            f = 'O';
            break;
        case 7:
            g = 'O';
            break;
        case 8:
            h = 'O';
            break;
        case 9:
            i = 'O';
            break;
        default:
            printf("\nEnter the valid number\n");
            goto print2;
            break;
        }
        arr[imp++] = player1;
    }

    count++;
    goto lable1;

end:
    printf("\n--------------------------------------------------------");
    return 0;
}
