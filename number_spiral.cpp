
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

int main(){
	ll t,l,r,c,d,diff;
	cin>>t;
	for(ll i=0; i<t; i++){
		cin>>r >> c;
		l = max(r,c);
		d = l*l - (l-1);
		if(r>c){
			diff = r-c;
			if(l%2==0){
				cout<<d+diff;
			}else{
				cout<<d-diff;
			}
		}
		else if(r == c){
			cout<<d;
		}
		else{
			diff = c-r;
			if(l%2==0){
				cout<< d-diff;
			}else{
				cout<<d+diff;
			}
		}
		cout<<endl;
	}
	cout<<endl;
	return 0;
}
