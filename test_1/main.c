/*
Converts distances from miles to kilometres
*/

#include <stdio.h> /* printf, scanf definitions */
#define KMS_PER_MILE 1.609 /* conversion constant */

int main()
{
    char first, middle, last;  /* a customer's initials */
    int dollars;        /* number of dollars     */
    int quarters;       /* number of quarters    */
    int dimes;          /* number of dimes       */
    int nickels;        /* number of nickels     */
    int pennies;        /* number of pennies     */

    int total_dollars;  /* total dollar value    */
    int change;         /* leftover change       */
    int total_cents;    /* total value in cents  */

    printf("Enter name initials>");
    scanf("%c%c%c", &first, &middle, &last);
    printf("Enter how many dollars >");
    scanf("%d", &dollars);
    printf("Enter how many quarters >");
    scanf("%d", &quarters);
    printf("Enter how many dimes >");
    scanf("%d", &dimes);
    printf("Enter how many nickels >");
    scanf("%d", &nickels);
    printf("Enter how many pennies >");
    scanf("%d", &pennies);

    total_cents = (dollars * 100) +
                  (quarters*25) +
                  (dimes*10) +
                  (nickels*5) +
                  (pennies*1);
    total_dollars = total_cents / 100;
    change = total_cents % 100;

    printf("The total cents: %d\n", total_cents);
    printf("The total dollars: %d\n", total_dollars);
    printf("The change: %d\n", change);

    return 0;
}

int mile_to_kms()
{
    double miles, kms;
    printf("Enter the distance in miles>");
    scanf("%lf", &miles);
    kms = KMS_PER_MILE * miles;
    printf("That equals %f kilometers.\n", kms);
    return 0;
}
