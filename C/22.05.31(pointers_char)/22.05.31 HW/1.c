int main(void)
{
    char text[6] = "apple";
    int i=0, text_length=0;
    while (text[i] != '\0')
    {
        text_length++;
        i++;
    }
    
    printf("The string legth is = %d", text_length);
    return 0;
}