#include<stdio.h>

enum bool {false, true};

int main ()
{
    enum bool b = true;

    switch (b)
    {
    case true:
        printf ("true");
        break;
    case false:
        printf ("false");
        break;
    
    default:
        break;
    }
}

// true