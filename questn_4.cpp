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
		
	int p=0,q=0;
	ll max_palindrome_mult = 0;

	for(p=990;p>99;p-=11){
		for(q=999;q>99;--q){
			ll mult = p*q;
			if(isPalindrome(mult))
				max_palindrome_mult = max_palindrome_mult > mult ? max_palindrome_mult : mult;			
		}
	} 

	std::cout<<max_palindrome_mult<<std::endl;

	return 0;
}