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



void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	vi v;
	vi v1;
	cin >> n;
	for ( i = 1; i <= n ; i++)
	{
		cin >> x;
		v.pb(x);

	}

	ll s = (1 << v.size());//pow(2,v.size())
	cout << s << endl;
	for (int i = 1; i < s ; ++i)
	{
		ll sum = 0, cnt = 0;
		for (int j = 0; j < v.size(); ++j)
		{

			if (i & (1 << j))
			{
				//cout << i << " " << j << "    " << (1 << j) << " " << (i & (1 << j)) << "   " << v[j] << endl;

				sum += v[j];
				cnt++;
			}
		}
		v1.pb(sum);
		// if (sum > 0)
		// {
		// 	cout << sum << endl;
		// }

		//mp[sum] = cnt;
	}
	cout << endl;
	for ( i = 0; i < v1.size() ; i++)
	{
		cout << v1[i] << endl;

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