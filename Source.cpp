#include<iostream>
using namespace std;

int main()
{
	int num;
	while (cin >> num)
	{
		int number[1000];
		int sum;
		int ans = 0;
		for(int i=0;i<num;i++)
			cin >> number[i];
		for (int a = 0; a < num - 2; a++)
		{
			for (int b = a + 1; b < num - 1; b++)
			{
				for (int c = b + 1; c < num; c++)
				{
					sum = number[a] + number[b] + number[c];
					for (int z = 0; z < num; z++)
					{
						if (sum == number[z])
							ans = sum;
					}
				}
			}
		}
		if (ans == 0)
			cout << "no solution" << endl;
		else
			cout << ans << endl;
	}
}