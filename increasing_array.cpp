
#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){
	ll  m_v = 0, i, count=0, n, f=0;

	cin>>n;
	ll arr[n];

	for(i = 0; i<n; i++){
		cin>>arr[i];
		m_v = max(m_v, arr[i]);
		count = m_v - arr[i];
		f += count;
	}
	cout<<f;
	cout<<endl;
}
