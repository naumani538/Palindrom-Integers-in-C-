#include<iostream>
#include<conio.h>
using namespace std;

int main ( void ) 

{
	int a,orig,rev=0, i;
	
	cout<<"Enter a number: ";
	cin>>a;

	orig = a;
	
	for ( i = a ; i > 0 ; i/=10 ){
		rev = (rev * 10 ) + (i%10);
	}
	
	if( orig == rev ) {
		cout<<"Entered number is a Palindrome"<<endl;
	} else{
		cout<<"Entered number is not a Palindrome"<<endl;
	}
	getch();
}