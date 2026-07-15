#include "armstrong_numbers.h"
bool is_armstrong_number(int candidate)
{
    int num=candidate,count=0;
    while(num>0)
    {
        count++;
        num/=10;
    }
    if(candidate==0)
        count=1;
    num=candidate;
    int sum=0;
    while(num>0)
    {
        int temp=num%10;
         int power=1;
         for(int i=0;i<count;i++)
             power=power*temp;
        sum=sum+power;
         num=num/10;
    }
    if(candidate==sum)
        return true;
    else
        return false;
}

