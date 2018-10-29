#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL s[1000001];
int main() {///O(nlogn)  n<=10^7
	int n;
	cin>>n;
	
	s[0]=0;
	for(int i=1;i<=n;i++)
	s[i]=s[i-1]+i;
//	copy(s,s+n+1,ostream_iterator<int>(cout," "));
	for(int i=0;i<=n;i++){
		int x=s[i];
		int y=x+n;
		int pos=lower_bound(s,s+n+1,y)-s;
		if(s[pos]==y&&pos>i+1){
			cout<<i+1<<" "<<pos<<endl;			
		}		
	}
	return 0;
}
