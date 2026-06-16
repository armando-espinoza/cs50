#include <stdio.h>

int get_n(void)
{
    int n;
    do
    {
        printf( "Enter a value: \n" );
        scanf( " %d", &n );
    }
    while( n < 0);
    return n;
}

void meow( int np )
{
    for ( int i = 0; i < np; i ++ )
    {
        printf( "meow\n" ); 
    }
}

int main(void)
{
    int n;
    n = get_n();
    meow( n );
    return 0;
}
