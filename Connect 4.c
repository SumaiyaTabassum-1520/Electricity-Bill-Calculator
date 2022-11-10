#include<stdio.h>
#define Space 32
#define X 120
#define O 111

int arr[4][4];
int col[4]= {0};
int main()
{
    int i,a,j;
    int flag;
    flag=0;
printf("\t\t\t\tWelcome to connect 4 game\n\n");

    for(i=0 ; i<16 ; )
    {
        char Player=i%2==1?X:O;
        printf("Please enter cell number for %c\n",Player);
        scanf("%d",&a);
        if(a>3 || a<0)
        {
            printf("wrong entry!!\n");

        }
        else
        {
            char Player=i%2==1?X:O;
            arr[col[a]][a]=Player;
            col[a]++;
            i++;

            printf("%c  |%c  |%c  |%c\n",arr[3][0],arr[3][1],arr[3][2],arr[3][3]);
            printf("___|___|___|___\n");
            printf("%c  |%c  |%c  |%c\n",arr[2][0],arr[2][1],arr[2][2],arr[2][3]);
            printf("___|___|___|___\n");
            printf("%c  |%c  |%c  |%c\n",arr[1][0],arr[1][1],arr[1][2],arr[1][3]);
            printf("___|___|___|___\n");
            printf("%c  |%c  |%c  |%c\n",arr[0][0],arr[0][1],arr[0][2],arr[0][3]);
            printf("   |   |   |\n");



            for(j=0 ; j<4 ; j++)
            {

                if(arr[j][0]==Player && arr[j][0]==arr[j][1] &&
                   arr[j][0]==arr[j][2] && arr[j][0]==arr[j][3])
                {
                    flag=1;
                    break;
                }
                else if ( arr[0][j]==Player  &&  arr[0][j]==arr[1][j]  &&
                          arr[0][j]==arr[2][j] && arr[0][j]==arr[3][j] )
                {
                    flag=1;
                    break;
                }
                else if(arr[0][0]==Player &&  arr[0][0]==arr[1][1] &&
                        arr[0][0]==arr[2][2] && arr[0][0]==arr[3][3])
                {
                    flag=1;
                    break;
                }
                else if(arr[0][3]==Player &&  arr[0][3]==arr[1][2] &&
                        arr[0][3]==arr[2][1] && arr[0][3]==arr[3][0])
                {
                    flag=1;
                    break;
                }

            }

            if(flag==1)
            {
                printf("winner is %c\n",Player);
                break;
            }

        }
    }
    if(flag==0)
    {
        printf("The game is draw\n");
    }


    return 0;
}

