#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {

    int i, num;


    printf("Enter any number to find its factor: ");
    scanf("%d", &num);

    printf("All factors of %d are: \n", num);

    for(i=1; i<=num; i++)
    {
            /*
             * If num is exactly divisible by i
             * Then i is a factor of num
             */
        if(num % i == 0)
        {
            printf("%d, ",i);
        }
    }
    return 0;
}
