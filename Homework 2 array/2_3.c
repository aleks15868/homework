#include <stdio.h>
#define N 3

int main(void)
{
    int i, j;
    int Array[N][N]={0};
    for ( j = 0; j < N; j++ ) {
        for ( i = 0; i < N; i++ )
        {   
            if(i>=N-1-j){
                Array[i][j]=1;
            }
        }
    }
    for ( i = 0; i < N; i++ ) {
        for ( j = 0; j < N; j++ )
        {
            printf( "%d\t",Array[i][j] );
        }
    printf( "\n" );
    }
    return 0;
}