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

int string_divisor(string s, int x)
{
    ll i, j, k, a, b, c;
    int len = s.size();
    if (s[0] == '-')
        j = 1;
    else
        j = 0;

    if (x < 0)
    {
        x = x * (-1);
    }
    c = 0;
    for (i = j; i < len; i++)
    {
        a = s[i] - '0';
        b = a + c * 10;
        c = b % x;

    }
    if (c == 0)
        return 1;
    else
        return 0;

}

void solve()
{


    long long int i, j, k, n, t, x, y, z, a, b, c, d, e, f;
    string s;
    cin >> s >> x;
    y = string_divisor(s, x);
    if (y == 1)
        cout <<  " divisible" << endl;
    else
        cout <<  " not divisible" << endl;




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