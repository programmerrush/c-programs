#include <stdio.h>
#include <stdlib.h>

char * concatenate( const char *str1, const char *str2 )
{
    size_t n1 = 0;
    size_t n2 = 0;

    while ( str1[n1] ) ++n1;
    while ( str2[n2] ) ++n2;

    char *result = malloc( n1 + n2 + 1 );

    if ( result != NULL )
    {
       char *p = result;

       while ( *str1 ) *p++ = *str1++;
       do
       {
           *p++ = *str2;
       } while ( *str2++ );
    }

    return result;
}

int main(void) 
{
    char *result = concatenate( "Code ", "blocks" );
    
    if ( result != NULL ) puts( result );
    
    free( result );
    
    return 0;
}
