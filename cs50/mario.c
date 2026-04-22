#include <stdio.h>

void drawPyramid( int input )
{
    for ( int row = 0; row < input; row ++ )
    {
        for ( int spaces = 0; spaces < input - row - 1; spaces ++ )
        {
            printf( "  " );
        }
        for ( int hashes = 0; hashes < row + 1; hashes ++ )
        {
            printf("#");
        }
        printf("  ");

        for ( int hashes = 0; hashes < row + 1; hashes ++ )
        {
            printf("#");
        }
        printf("\n");
        
    }
}
int main(void)
{
    int height;
    do
    {
        printf( "Enter the height of the pyramid, from 4 to 8\n" );
        scanf( " %i", &height );
    }
    while( height < 4 || height > 8 );
    drawPyramid( height );

    return 0;
}
