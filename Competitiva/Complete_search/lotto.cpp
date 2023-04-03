#include <bits/stdc++.h>
using namespace std;

int l[105];

int main(int argc, char const *argv[])
{
	int t, n, p;
	cin >> t;
	while(t--)
	{
		cin >> p >> n;
		for (int i = 0; i < n; ++i)
			cin >> l[i];
		int suma = 0;
		bool flag = false;
		for (int i = 0; i < (1 << n); ++i)
		{
			suma = 0;
			for (int j = 0; j < n; ++j){
                auto x = 1 << j;
				i & (1 << j) ? suma += l[j] : false;
            }
			if (suma == p)
			{
				flag = true;
				break;
			}
		}

		if (flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}
