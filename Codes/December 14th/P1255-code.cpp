// https://www.luogu.com.cn/record/139582679

#include<bits/stdc++.h>
using namespace std;
int n, leng = 1, mp[5001][5001]; 
int main() {
	cin>>n;
	mp[1][1] = 1;
	mp[2][1] = 2;       
	for (int k = 3; k <= n; k++) {     
		for (int i = 1; i <= leng; i++){
			mp[k][i] = mp[k - 1][i] + mp[k - 2][i]; 
		} 
		for (int i = 1; i <= leng; i++){      
			if (mp[k][i] >= 10) {
				mp[k][i + 1] += 1; //mp[k][i + 1] += mp[k][i] / 10
				mp[k][i] = mp[k][i] % 10;
				if (mp[k][leng + 1]){
					leng++;
				}
			}
		}
	}
	for (int i = leng; i >= 1; i--)      
		cout<<mp[n][i];
	return 0;
}


/*
int n,mp[5000][5001],leng;
void mplus(int k) {
	for(int i=1; i<=leng; i++)
	    mp[k][i]=mp[k-1][i]+mp[k-2][i];
	for(int i=1; i<=leng; i++)
		if(mp[k][i]>=10)
		{
			mp[k][i+1]+=mp[k][i]/10;
			mp[k][i]%=10;
			if(mp[k][leng+1]>0)leng++;
		}
}
int main()
{
	cin>>n;
	leng=1;
	mp[1][1]=1;
	mp[2][1]=2;
	for(int i=3; i<=n; i++)
	    mplus(i);
	for(int i=leng; i>=1; i--)
	    cout<<mp[n][i];
	return 0;
}
*/
