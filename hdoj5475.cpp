#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>

using namespace std;
const int MAXN = 1e5 + 5;
typedef long long ll;

ll a[MAXN], m;
int q, op;

int main()
{
	int times;
	scanf("%d", &times);
	for(int cas = 1; cas <= times; ++cas)
	{
		printf("Case #%d:\n", cas);
		scanf("%d%lld", &q, &m);
		ll ans = 1;
		for(int i = 1; i <= q; ++i)
		{
			scanf("%d%lld", &op, &a[i]);
			if(op == 1) ans = ans * a[i] % m;
			else
			{
				a[a[i]] = 1, a[i] = 1, ans = 1;
				for(int j = 1; j < i; ++j)
					ans = ans * a[j] % m;
			}
			printf("%lld\n", ans);
		}
	}

	return 0;
}
