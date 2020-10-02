#include<bits/stdc++.h>
using namespace std;

bool primeCheck(long long num) {
	if(num < 2) return false;
	else if(num == 2) return true;
	long long limit = sqrt (num);
	if(num%2==0) return false;
	for(int i =3; i <= limit ; i+=2) {
		if(num%i == 0)
		return false;
	}
	return true;
}
int main()
{
    long long num;
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>num;
        long long sqr=sqrt(num);
        if(sqr*sqr==num && primeCheck(sqr)==true)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
