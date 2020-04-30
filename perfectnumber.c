#include <stdlib.h>
#include <stdio.h>

int es_primo(int num)
{

    int i, es_primo = 1;

 
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        { 
            if (i != 1 && i != num)
            {
                
                es_primo = 0;
            }
        }
    }

    return es_primo;
}


int es_perfecto(int num)
{

    int i, suma = 0;

 
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        { 
            suma += i;
        }
    }

    

    if (suma == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(int argc, char **argv)
{

   
    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int i;

    for (i = min; i <= max; i++)
    {

        
        if (es_primo(i) == 1)
        {
            printf("%i es primo.\n", i);
        }


        
        if (es_perfecto(i) == 1)
        {
            printf("%i es perfecto.\n", i);
        }
    }

    return 0;
}
