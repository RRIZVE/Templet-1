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

void display(int a[], int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << "  ";
	}
	cout << endl;
}

void findPermutations(int a[], int n)
{

	// Sort the given array
	sort(a + 1, a + n + 1);

	// Find all possible permutations
	//cout << "Possible permutations are:\n";
	do
	{
		display(a, n);

	} while (next_permutation(a + 1, a + n + 1));
}


void solve()
{

	int i, j, k , n, m, x, y, z, c = 0, cnt = 0;
	string s;
	cin >> n;
	for ( i = 1; i <= n ; i++)
	{
		cin >> a[i];

	}
	findPermutations(a, n);

	/*

	3
	1 2 3


	Possible permutations are:
	1  2  3
	1  3  2
	2  1  3
	2  3  1
	3  1  2
	3  2  1


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