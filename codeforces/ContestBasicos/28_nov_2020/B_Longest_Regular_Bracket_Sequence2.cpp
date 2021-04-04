#include<bits/stdc++.h>
#define REP(i,n) for (int i = 1; i <= n; i++)
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;
 
using namespace std;
int E[1000001] , S[1000001] , F[1000001];
 
int main()
{
	string st;
	int mx = 0;
	stack<int> stk;
	
	cin>>st;
	
	for(int i=0;i<st.size();i++)
	{
		char ch = st[i];
		
		if(ch == '(')
		{
			stk.push(i);
		}
		else
		{
			if(stk.empty())
			{
				S[i] = E[i] = -1;
			}
			else
			{
				int idx = stk.top();
				stk.pop();
				
				S[i] = E[i] = idx;
				
				if(idx > 0 && st[idx-1] == ')' && S[idx-1] >= 0)
				E[i] = E[idx - 1];
				
				int l = i - E[i] + 1;
				F[l]++;
				mx = max(mx , l);
			}
		}
	}
	
	F[0] = 1;
	
	cout<<mx<<" "<<F[mx];
}
