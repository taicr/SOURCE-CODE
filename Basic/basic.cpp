#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	 int n;
	 cin>>n;
	 double s=0;
	for(int i=1; i<=n; i++){
         s += 1.0 / i;
}

	 printf("%.4lf",s);

}