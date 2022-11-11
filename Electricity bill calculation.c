#include<stdio.h>
int main()
{
    int unit,baseamount;
    printf("Enter the monthly energy usage = ");
    scanf("%d",&unit);
    printf("Enter the base amount = ");
    scanf("%d",&baseamount);

    float total,Bill, averageBill,firstSlabMultiplier=4.19,secondSlabMultiplier=5.72,thirdSlabMultiplier=6.00,
                                  fourthSlabMultiplier=6.34,fifthSlabMultiplier=9.94,sixthSlabMultiplier=11.46;

    int firstSlab=75*firstSlabMultiplier;
    int secondSlab=firstSlab+125*secondSlabMultiplier;
    int thirdSlab=secondSlab+100*thirdSlabMultiplier;
    int fourthSlab=thirdSlab+100*fourthSlabMultiplier;
    int fifthSlab=fourthSlab+200*fifthSlabMultiplier;

    if(unit>600)
    {
        total=(unit-600)*sixthSlabMultiplier+fifthSlab;
    }

    else if(unit>400)
    {
        total=(unit-400)*fifthSlabMultiplier+fourthSlab;
    }

    else if (unit>300)
    {
        total=(unit-300)*fourthSlabMultiplier+thirdSlab;
    }

    else if(unit>200)
    {
        total=(unit-200)*thirdSlabMultiplier+secondSlab;
    }

    else if(unit>75)
    {
        total=(unit-75)*secondSlabMultiplier+firstSlab;
    }

    else if(unit>0)
    {
        total=unit*firstSlabMultiplier;
    }

    else
    {
       total=0;
    }
    Bill=total+baseamount;
    averageBill= Bill/unit;
   // printf("%.2f\n%.2f\n%.2f",total,Bill,averageBill);
    printf("monthly electricity bill = %.2f\naverage cost of electricity per unit = %.2f\n",Bill,averageBill);

    return 0;
}
