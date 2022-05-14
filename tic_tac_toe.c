/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a[3][3],c,b;
    int k,i,flag=0,j,visit[3][3],l;
    printf("Welcome in the play of \n!!!Tic Tac Toe!!!");
    printf("This is a multiplayer game ....");
    printf("\nSelect either 'O' or 'X' ");
    printf("Player1: ");
    scanf("%c",&c);
    if(c=='o')
       b='x';
    else
       b='o';
    for(k=0;k<3;k++){
        for (l=0;l<3;l++){
            visit[k][l]=0;
            a[k][l]='1';
        }
    }
    for(k=0;k<9;k++){
        if(k%2==0){
        printf("\nplayer1 enter the row and column resp:");
        scanf("%d %d ",&i,&j);
        }
        else{
        printf("\nplayer2 enter the row and column resp:");
        scanf("%d %d ",&i,&j);
        }
        printf("i=%d and j=%d",i,j);
        if(visit[i][j]==0){
            visit[i][j]=1;
            if(k%2==0){
                a[i][j]=c;
            }
            else{
                a[i][j]=b;
            }
            
        }
        else{
            printf("That place is already occupied by %c",a[i][j]);
        }
        
        if(k>=5){
            if(a[0][0]==a[1][1]==a[2][2]){
                if(a[0][0]==c)
                  printf("player 1 won the round /-/-/-/--- ");
                else
                  printf("player 2 won the round /-/-/-/--- ");
                break;

            }
            else if(a[0][0]==a[1][0]==a[2][0]){
                if(a[0][0]==c)
                  printf("player 1 won the round /-/-/-/--- ");
                else
                  printf("player 2 won the round /-/-/-/--- ");
                break;
            }
             else if(a[0][0]==a[0][1]==a[0][2]){
                if(a[0][0]==c)
                  printf("player 1 won the round /-/-/-/--- ");
                else
                  printf("player 2 won the round /-/-/-/--- ");
                break;
            }
             else if(a[1][0]==a[1][1]==a[1][2]){
                if(a[1][0]==c)
                  printf("player 1 won the round /-/-/-/--- ");
                else
                  printf("player 2 won the round /-/-/-/--- ");
                  break;

            }
             else if(a[2][0]==a[2][1]==a[2][2]){
                if(a[2][0]==c)
                  printf("player 1 won the round /-/-/-/--- ");
                else
                  printf("player 2 won the round /-/-/-/--- ");
                break;

            }
             else if(a[0][1]==a[1][1]==a[2][1]){
                if(a[1][1]==c)
                  printf("player 1 won the round /-/-/-/--- ");
                else
                  printf("player 2 won the round /-/-/-/--- ");
                break;

            }
             else if(a[0][2]==a[1][2]==a[2][2]){
                if(a[1][2]==c)
                  printf("player 1 won the round /-/-/-/--- ");
                else
                  printf("player 2 won the round /-/-/-/--- ");
                break;

            }
             else if(a[2][0]==a[1][1]==a[0][2]){
                if(a[2][0]==c)
                  printf("player 1 won the round /-/-/-/--- ");
                else
                  printf("player 2 won the round /-/-/-/--- ");
                  break;

            }
            else{
              continue;
            }
            
                
        }
    }
    printf("Match Draw ***\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
          printf("%c ",a[i][j]);
        printf("\n");
    }
     for(i=0;i<3;i++){
        for(j=0;j<3;j++)
          printf("%c ",visit[i][j]);
        printf("\n");
    }
    
    
}
