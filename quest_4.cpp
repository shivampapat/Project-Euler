#include<iostream>
typedef long long ll;

int isPalindrome(ll x){
	
	ll temp = x;
	ll rev = 0;
	while(temp!=0){
		rev = rev*10+(temp%10);
		temp/=10;	
	}

	if(rev==x)
		return 1;
	return 0;
}

int main(){
		
	int k = isPalindrome(9009);
	printf(k);	
	 

	return 0;
}