#include <stdio.h>

int main(void)
{
    char input;
    printf( "Do you agree or not Y/n\n" );
    scanf( " %c", &input);

    if( input == 'Y' || input == 'y')
    {
        printf( "agreed\n" );
    }
    else if ( input == 'n' || input == 'N' )
    {
        printf( "not agreed\n" );
    }
    else 
    {
        printf( " Please enter a valid input\n" );
    }


    return 0;
}
