
#include <iostream>

using namespace std;

typedef long long ll;

int main(){
	ll n, i, sum1, sum2=0, v;

	cin >> n;
	for(i = 0; i<n-1; i++){
		cin>>v;
		sum2 += v;
	}
	
	sum1 = (n*(1+n))/2;

	cout<<sum1-sum2;

	cout<<endl;
	return 0;
	
}
