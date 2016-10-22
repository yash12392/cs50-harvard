#include <stdio.h>
#include <cs50.h>
#include <math.h>

#define quarter 25;
#define dime 10;
#define nickel 5;
#define pennies 1;

int main(void)
{
    float given_amount = 0;
    int quarter_count = 0;
    int nickel_count = 0;
    int dime_count = 0;
    int pennies_count = 0;
    int leftover = 0;
    int convt_amount = 0;
    int coin_count = 0;
    
    do
    {
      printf("How much do I owe you buddy: ");
      given_amount = GetFloat();
      if (given_amount <= 0)
      printf("You have either entered zero or a negative number");
    }
    while(given_amount <=0);
    
    // Starting the Greedy algorithm from here
    
    // First converting input
    
    given_amount *= 100.0;
    convt_amount = (int)round(given_amount);
    
    // First checking if quarter can be used
    
    quarter_count = convt_amount/quarter;
    leftover = convt_amount % quarter;
     
    // Second checking if dime can be used
    
    dime_count = leftover/dime;
    leftover = leftover % dime;
    
    // Third checking if nickel can be used
    nickel_count = leftover/nickel;
    leftover = leftover % nickel;
    
    //Leftover is in its lowest form, so it can be divided by pennies
    pennies_count = leftover/pennies;
    
    coin_count = quarter_count + dime_count + nickel_count + pennies_count;
   
   printf("%i",coin_count);

}