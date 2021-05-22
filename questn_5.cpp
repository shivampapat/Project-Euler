#include<iostream>

int main(){

      int arr[20];

      for (int i = 0; i < 20;++i){
            arr[i] = i+1;
      }

      for (int i = 0; i < 20;++i){
            std::cout<<arr[i]<<"\t";
      }
      std::cout <<std::endl;

      int divisor = 2,flag=0;
      int lcm = 1;

      while(divisor<=20){

            for (int i = 0; i < 20;++i){
                  if(arr[i]%divisor == 0){
                        flag++;
                  }
            }
            
            std::cout<<"\nflag:"<<flag<<std::endl;
                  for (int i = 0; i < 20;++i){
            std::cout<<arr[i]<<"\t";
      }
            


            if(flag>=2){
                  for (int i = 0; i < 20;++i){
                        if(arr[i]%divisor == 0){
                              arr[i]/=divisor;
                        }
                  }     
                  lcm = lcm * divisor;
            }
            else{
                  divisor++;
            }

            
            std::cout <<"lcm : "<<lcm;
            std::cout <<std::endl;
            flag = 0;
      }

 
      for (int i = 0; i < 20;++i){
            lcm = lcm * arr[i];
      }

      std::cout << lcm;

      return 0;
}