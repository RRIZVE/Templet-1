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

#define MOD 1000000007
inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a * b) % MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a + b) % MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while (p) { if (p & 1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD - 2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

const int mx = 1e6;
int fac[mx];

ll allFactorial()
{
	fac[0] = 1;
	fac[1] = 1;
	for (int i = 2; i <= 1e6 ; i++)
	{
		fac[i] = modMul(fac[i - 1] , i);


	}

	return 0;
}
ll nCr(ll a, ll b)
{
	ll x, y, z, xx, yy;
	if (b == 0)
	{
		return 1;
	}
	x = fac[a];
	y = fac[b];
	z = fac[a - b];
	xx = modMul(y , z);
	yy = modDiv(x, xx);

	return yy;

}




void solve()
{
	allFactorial();

	int t;
	cin >> t;
	while (t--)
	{
		ll i, j, k , n, m, x, y, z, c = 0, cnt = 0, a, b;
		ll xx, yy, zz, qq, ww;
		string s;
		cin >> a >> b;
		cout << nCr(a, b) << endl;
	}



























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