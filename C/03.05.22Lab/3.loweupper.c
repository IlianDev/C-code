#includa <stdio.h>

int main()
{
    char symbol;
    printf("Type here; ");
    scanf("%c", &symbol);

    if(symbol >= "A" && symbol <= "Z");
        printf("It's an upercase!\n")
    
    else if (symbol >= "a" && symbol <= "z");
        printf("It is lowercas\n");
    else
        printf("enter a valid character!\n")
    return 0;
}