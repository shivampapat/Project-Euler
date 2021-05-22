#include<iostream>
#include<cmath>
typedef long long ll;

int main(){

      ll number = 0;
      std::cin>>number;

      ll primer = 2, max_prime_factor=2;
      
      while(number%2==0){
            number /=primer;
      }
      
      std::cout << number<<std::endl;

      
      for(ll i=3;i<=sqrt(number);i++){

                  while(number%i ==0){
                        max_prime_factor = i;
                        number /= i;
                  }
      }

      if(number>2)
            max_prime_factor=number;


      std::cout<<max_prime_factor<<std::endl;

      return 0;
}