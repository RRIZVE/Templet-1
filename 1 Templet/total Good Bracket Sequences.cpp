//***********************Bismillah-ir-Rahman-ir-Rahim******************************\
//In the Name of Allah
//La ilaha illallah Muhammadur Rasulullah
//Rabbir Hamhuma Kama Rabba Yani Sagheera

#include<bits/stdc++.h>
using namespace std;

#define Alhamdulillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define pi acos(-1.0)
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define EPS 1e-9

ll ceilAB(ll a, ll b) { return (a + b - 1) / b; }
ll Pow(ll c, ll d) {return d == 0 ? 1 : c * pow(c, d - 1);}
ll gcd(ll a, ll b) {return b == 0 ? a : gcd(b, a % b);}
ll lcm(ll a, ll b) {return ((a * b) / gcd(a, b));}

const int mx = 1e6;
int a[mx];

bool IsBalance(char c1, char c2)
{
	return  ( c1 == '(' && c2 == ')' ) || ( c1 == '{' && c2 == '}' ) || ( c1 == '[' && c2 == ']' );
}
bool IsBracketSequences(string s)
{
	stack<char>st;
	bool done = 1;
	for (auto u : s)
	{
		if (u == '(' || u == '{' || u == '[')
			st.push(u);
		else
		{
			if (st.empty())
			{
				done = 0;
				break;
			}
			else
			{
				if ( IsBalance(st.top(), u))
				{
					st.pop();
				}
				else
				{
					done = 0;
					break;
				}

			}


		}

	}
	if ( !st.empty() ) done = 0;
	if (done)
		return 1;
	else
		return 0;


}



void solve()
{
	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;

	cin >> s;

	sort(s.begin(), s.end());

	do
	{
		//cout << s << endl;
		if (IsBracketSequences(s) == 1)
		{
			cout << s << endl;
		}


	}
	while ( next_permutation ( s.begin(), s.end() ) );


}









int main()
{

	Alhamdulillah;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	solve();
	return 0;

}