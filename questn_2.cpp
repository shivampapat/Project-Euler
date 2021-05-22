#include<iostream>

#define MAX 4000000

int main(){

      int a=1,b=2;
      long long sum = 0;

      while(b<= MAX ){
            if(b%2==0)
                  sum+=b;
            
            int temp = b;
            b = b+a;
            a = temp;
      }


      std::cout<<sum<<std::endl;
      return 0;
}