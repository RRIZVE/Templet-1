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

string add(string a, string b)
{
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	int sz = max(a.size(), b.size());

	while (a.size() < sz)
		a.push_back('0');

	while (b.size() < sz)
		b.push_back('0');

	string ans;

	int carry = 0;

	for (int i = 0; i < sz; i++)
	{
		int sum = a[i] - '0' + b[i] - '0' + carry;
		ans += '0' + sum % 10;
		carry = sum / 10;
	}

	if (carry)
		ans += '0' + carry;

	reverse(ans.begin(), ans.end());

	return ans;
}




void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s, s1;
	cin >> s >> s1;
	string s2 = add(s, s1);
	cout << s2;

	/*
	123
	456

	579

	*/




















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