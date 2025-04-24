#include <stdio.h>
#include <stdlib.h>

int main()
{
//    employees();
    nests();
//    check_even();
    return 0;
}

/*
 * While Loop
 * Display the gross pay of seven employees
*/

int employees()
{
    int count_emp = 0;
    int hours;
    double rate;
    float pay;
    while (count_emp < 7){
        printf("Hours> ");
        scanf("%d", &hours);
        printf("Rate> ");
        scanf("%lf", &rate);
        pay = hours * rate;
        printf("Pay is $%6.2f \n", pay);
        count_emp = count_emp+1;
    };
    return 0;
}

/* Nested loops */

int nests()
{
    int i;
    for(i=1; i<12; ++i){
        int count = 0;
        while(count<i){
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
    return 0;
}

// Do while statement and flap-controlled loops
/*
 * As long as number entered is greater than 0
  * and is an odd number, loop continues.
  * Loop exists once it encounters a false condition, but
  * the first loop is executed
*/
int check_even()
{
    int status = 2;
    int num;
    do {
        printf(" Enter number> ");
        status = scanf("%d", &num);
    } while (status > 0 && (num%2)!=0);

    return 0;
}
