#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={1,3,5,7,9,2,4,6,8,0,6,6};
	int n=sizeof(a)/sizeof(a[0]);
	sort(a,a+n);
	for(int i=0;i<n;i++)cout<<a[i]<<" ";cout<<endl;
	int k=6;
	bool flag=binary_search(a,a+n,k);
	cout<<flag<<endl;
	int left=lower_bound(a,a+n,k)-a;//o(logN)
	cout<<"lower:"<<left<<endl;
	int right=upper_bound(a,a+n,k)-a;//o(logN)
	cout<<"upper:"<<right<<endl;

	return 0;
}
