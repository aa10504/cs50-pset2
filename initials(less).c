#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    char *name = get_string();
    if (name != NULL)
    {
        if (name[0] <= 'z' && name[0] >= 'a')
        {
            printf("%c", name[0] - 32);
        }
        else
        {
            printf("%c", name[0]);
        }
        
        for (int i = 0; i < strlen(name); i++)
        {
            if (name[i] == ' ')
            {
                if (name[i + 1] <= 'z' && name[i + 1] >= 'a')
                {
                    printf("%c", name[i + 1] - 32);
                }
                else
                {
                    printf("%c", name[i + 1]);
                }
            }
        }
        
        printf("\n");
    }
    
}