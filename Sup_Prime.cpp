#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n);
bool isSup_Prime(int n);

bool isPrime(int n)
{
	if(n==1) return false;
	for(int i=2;i<sqrt(n);i++)
	{
		if(n%i==0) return false;
	}
	return true;
}

bool isSup_Prime(int n)
{
	while(n>0){
		if(isPrime(n)) n/=10;
		else return false;
	}
	return true;//
}

int main()
{
	int max=2,sum=0;
	for(int i=1001;i<=100000;i++){
	if(isSup_Prime(i)) 
	{
	cout<<i<<endl;
	if(i>max) max=i;
	sum+=i;
   }
	return 0;
}
/*#include<iostream>
using namespace std;


int main()
{
	int x;
	SuperPrime sps;
	sps.count();
	sps.max;
	return 0;
}*/





