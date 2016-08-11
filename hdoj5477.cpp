#include<iostream>
#include<stdio.h>
#include<memory.h>
#include<algorithm>

using namespace std;
struct Node
{
	int begin;
	int end;
	int dis;
}; 

Node swamp[101];

bool cmp(Node a, Node b)
{
	if(a.begin < b.begin)
		return true;
	return false;
}

int main()
{
	int n,m,i,a,b,l,start,termin,result,tmp,index = 1;
	cin >> n;
	while(n--)
	{
		cin>>m>>a>>b>>l;
		for(i=0;i<m;i++)
		{
			cin>>swamp[i].begin>>swamp[i].end;
			swamp[i].dis = swamp[i].end - swamp[i].begin;
		}

		sort(swamp, swamp + m, cmp);
		result = 0;
		tmp = 0;
		start = 0;
		termin = 0;
		for(i=0;i<m;i++)
		{
			tmp = tmp+(swamp[i].begin-termin) * b - swamp[i].dis * a;
			termin = swamp[i].end;
			if(result > tmp) {result = tmp;}
		}
		tmp += (l - termin) * b;
		if (result > tmp) {result = tmp;}
		if (result < 0)
		{
			printf("Case #%d: %d\n", index, -result);
		}
		else
		{
			printf("Case #%d: 0\n", index);
		}
		index++;
	}
}
