#include <bits/stdc++.h>

typedef long long LL;
typedef double DB;

#define sf scanf
#define pf printf
#define mp make_pair
#define nl printf("\n")

#define FOR(i,a,b) for(i = a; i <= b; ++i)
#define FORD(i,a,b) for(i = a; i >= b; --i)
#define FORS(i,n) for(i = 0; i < n; ++i)
#define FORM(i,n) for(i = n - 1; i >= 0; --i)
#define reset(i,n) memset(i, n, sizeof(i))

using namespace std;

const LL mod = 1e9 + 7;
const LL INF = 4e18;
const int inf = 2e9;
const int N = 5e5 + 5;

int gcd(int a, int b) { return b? gcd(b, a%b): a; }
int lcm(int a, int b) { return a*b / gcd(a, b); }

int a[N];

int main(void)
{
	int n, i;
	sf("%d", &n);
	FORS(i,n) sf("%d", a + i);
	sort(a, a + n);
	int j = n/2;
	if(n & 1) j++;
	int ans = n;
	FORS(i, n/2) {
		while(a[i]*2 > a[j] && j < n) j++;
		if(j == n) break;
		ans--;
		j++;
	}
	cout << ans << endl;
	return 0;
}
