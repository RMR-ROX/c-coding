#include<iostream>
#include<math.h>
using namespace std;
int reverse(int x) {
    int i=0, r,temp=x,rev=0;
    if(temp <0 && temp > INT_MIN)
        {
           temp=temp*-1;
        }
        else if(temp < INT_MIN)
        {
            return 0;
        }
        while(temp > 0)
        {
         
            r=temp%10;
            if(rev*10 + r < INT_MAX){
            rev = rev*10 + r ;
            }
            else
            {
                return 0;
            }
            temp=temp/10;
            if(rev > INT_MAX)
            {
                return 0;
            }
            if(x<0 && rev-1 >= INT_MAX)
            {
                return 0;
            }
        }   
      if(x>0)
     return rev;
     else
     return rev*-1;
    }

