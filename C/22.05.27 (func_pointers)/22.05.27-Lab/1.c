#include <stdio.h>

int main(int argc, char *argv[ ], char *envp[ ])
{
    int env_counter = 0;
    char **p;
    // 
    for (p = envp, env_counter = 0; *p; p++, env_counter++)
    {
    printf("env \t %d \t %s \n", env_counter, *p);
}
return 0;
}
// всички програми, които работят