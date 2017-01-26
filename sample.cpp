/** * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* *                                                               * *
* *                   Bismillahir Rahmanir Rahim                  * *
* *                                                               * *
* *                     Author: Emrul Chowdhury                   * *
* *                     Metropolitan University                   * *
* *                          Language: C++                        * *
* *                                                               * *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * **/

#include <bits/stdc++.h>
using namespace std;

#define ll              long long int
#define MX              123456
#define LCM(a,b)        (a / __gcd(a,b) ) * b
#define gcd(a,b)        __gcd(a,b)
#define Case(j)         printf("Case %ld: ", j)
#define Casen(j)        printf("Case %ld:\n", j)
#define Casee(j)        printf("Case #%ld: ", j)

#define mem0(n)         memset(n,0,sizeof(n))
#define mem_1(n)        memset(n,-1,sizeof(n))
#define mem1(n)         memset(n,1,sizeof(n))
#define for1(i, n)      for(i=1; i<=n; i++)
#define for0(i, n)      for(i=0; i<n; i++)
#define rf0(i, n)       for(i=n-1; i>=0; i--)
#define rf1(i, n)       for(i=n; i>=1; i--)
#define forab(i, a, b)  for(i=a; i<=b; i++)

#define pb              push_back
#define YES             printf("YES\n")
#define NO              printf("NO\n")
#define Yes             printf("Yes\n")
#define No              printf("No\n")
#define pf              printf
#define sf              scanf
#define sin(s)          getline(cin, s)

#define in(a)           cin >> a
#define in2(a, b)       cin >> a >> b
#define in3(a, b, c)    cin >> a >> b >> c
#define in4(a, b, c, d) cin >> a >> b >> c >> d
#define pn(a)           cout << a << endl
#define pn2(a, b)       cout << a << " " << b << endl
#define pn3(a, b, c)    cout << a << " " << b << " " << c << endl
#define pa(a)           cout << a
#define sp              printf(" ")
#define nl              printf("\n")

#define all(x)          (x).begin(), (x).end()
#define cl(v)           v.clear()
#define sq(n)           (ll) n * n
#define sz(s)           s.size()
#define bug(n)          cout << ">> " << n << " <<" << endl
#define gc              getchar()
#define min3(a, b, c)   min(a, min(b, c))
#define max3(a, b, c)   max(a, max(b, c))

ll vowel(char a)
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

ll p[1100002];
vector <ll> prime;

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
    prime.pb(2);
    prime.pb(3);
    for(i=4; i<=N; i+=2)
    {
        if(p[i]==0)
        {
            prime.pb(i);
        }
    }
}

ll ar[123456];
vector <ll> v;
string s;
map <ll, ll> mp;
map <string, ll> mps;
map <char, ll> mpc;

int main()
{
    // i will here :)
}
