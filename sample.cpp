// Bismillahir Rahmanir Rahim

#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;
typedef long double ld;
typedef vector <int> vi;
typedef vector <ll> vl;
typedef pair <ll, ll> pll;
typedef pair <ll, pll> plp;
typedef pair <int, int> pii;
typedef pair <int, pii> pip;

const int MX = 2e6+5;
const int mod = 1e9 + 7;
const ll inf = 1LL << 62;

int dx4[] = {0, 0, -1, 1};
int dy4[] = {1, -1, 0, 0};

int dx[] = {1, 1, 1, 0, 0, -1, -1, -1};
int dy[] = {1, 0, -1, 1, -1, 1, 0, -1};

// TOOLS
#define LCM(a,b)        (a / __gcd(a,b) ) *b
#define gcd(a,b)        __gcd(a,b)
#define all(x)          (x).begin(), (x).end()
#define mem(a, n)       memset(a, n, sizeof(a))
#define for1(i, n)      for(int i=1; i<=n; i++)
#define for0(i, n)      for(int i=0; i<n; i++)
#define rof0(i, n)      for(int i=n-1; i>=0; i--)
#define rof1(i, n)      for(int i=n; i>=1; i--)
#define forab(i, a, b)  for(int i=a; i<=b; i++)
#define rofab(i, a, b)  for(int i=b; i>=a; i--)
#define pb              push_back
#define pbb             pop_back

// CIN/COUT
#define YES             cout << "YES" << endl
#define NO              cout << "NO" << endl
#define sin(s)          getline(cin, s)
#define scf(a)          cin >> a
#define scf2(a, b)      cin >> a >> b
#define scf3(a, b, c)   cin >> a >> b >> c
#define scf4(a,b,c,d)   cin >> a >> b >> c >> d
#define pnf(a)          cout << (a) << endl
#define pnf2(a, b)      cout << (a) << " " << (b) << endl
#define pnf3(a, b, c)   cout << (a) << " " << (b) << " " << (c) << endl
#define bug(n)          cout << ">> " << n << " <<" << endl
#define pnfa(a)         cout << (a) << " "
#define pf(a)           cout << (a)
#define sp              cout << " "
#define nl              cout << endl

// FAST I/O
#define fYES            printf("YES\n")
#define fNO             printf("NO\n")
#define Sin(s)          gets(s)
#define Scf(a)          scanf("%lld", &a)
#define Scf2(a, b)      scanf("%lld %lld", &a, &b)
#define Scf3(a, b, c)   scanf("%lld %lld %lld", &a, &b, &c)
#define Scf4(a,b,c,d)   scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
#define Pnf(a)          printf("%lld\n", a)
#define Pnf2(a, b)      printf("%lld %lld\n", a, b)
#define Pnf3(a, b, c)   printf("%lld %lld %lld\n", a, b, c)
#define Bug(n)          printf(">> %lld <<\n", n)
#define Pnfa(a)         printf("%lld ", a)
#define Pf(a)           printf("%lld", a)
#define Sp              printf(" ")
#define Nl              printf("\n")

// OTHER
#define sz(n)           n.size()
#define clr(v)          v.clear()
#define min3(a, b, c)   min(a, min(b, c))
#define max3(a, b, c)   max(a, max(b, c))
#define in              freopen("input.txt", "r", stdin)
#define out             freopen("output.txt", "w", stdout)
#define FastRead        { ios_base::sync_with_stdio(false); cin.tie(0); }
#define F               first
#define S               second
#define mpp             make_pair


///          IMPORTANT FUNCTIOM           ///


ll isVowel(char a)
{
    a = toupper(a);
    if((a == 'A') || (a == 'E') || (a == 'I') || (a == 'O') || (a == 'U'))
    {
        return 1;
    }
    return 0;
}

ll bigMod(ll a, ll b, ll c)
{
    if(b == 0)
    {
        return 1 % c;
    }
    ll x = bigMod(a, b/2, c);
    x = (x * x) % c;
    if(b % 2 == 1)
    {
        x = (x * a) % c;
    }
    return x;
}

ll fac(ll n)
{
    if(n == 1)
        return 1;
    return n*fac(n-1);
}

ll power(ll n, ll k)
{
    ll ans = 1;
    for1(i, k)
    {
        ans *= n;
    }
    return ans;
}

ll p[1100002];

void sieve()
{
    ll N = 1100002, sq=sqrt(N), i, j;
    for(i=4; i<=N; i+=2)
    {
        p[i]=1;
    }
    for(i=3; i<=sq; i+=2)
    {
        if(p[i] == 0)
        {
            for(j=i*i; j<=N; j+=i)
            {
                p[j]=1;
            }
        }
    }
    p[1] = 1;
    p[0] = 1;
}

//string s;
//vector<ll> v;
//vector<ll> v[MX];
//ll ar[MX], br[MX];
//ll vist[MX];
//map<ll,ll> mp;


///           MAIN FUNCTION           ///


int main()
{
    ll n, t, q, k, cnt=0, ans=0, mn=inf, mx=0;
    
    return 0;
}
