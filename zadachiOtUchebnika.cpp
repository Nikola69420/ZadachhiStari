#include<iostream>
#include<cmath>
using namespace std;
////////////////////////////////////////////////////////////////
int prostoChislo(int n)
{
	bool isPrime = true;
	if (n == 0 || n == 1) {
		isPrime = false;
	}
	else {
		for (int i = 2; i <= n / 2; ++i) {
			if (n % i == 0) {
				isPrime = false;
				break;
			}
		}
	}
	return isPrime ;
}
////////////////////////////////////////////////////////////////
int exersise9()
{
	int k;
	cin >> k;
	for (int i = 1; i <= k; i++)//for za stotici
	{
		for (int n = 0; n <= k; n++)//for za desetici
		{
			for (int m = 0; m <= k; m++)//for za edinici
			{
				int sum = i + n + m;
				if (sum == k)
				{
					cout << i * 100 + n * 10 + m<<endl;
				}
			}
		}
	}
	
	
return 0;
}
////////////////////////////////////////////////////////////////
int exersise10()
{
	//razglezhdam che w interwala [m,n] wkluichitelno m i n
	int m, n;
	cin >> m >> n;
	for (int i = m; i >= n; i--)
	{
		if (i % 5 == 0)
		{
			cout << i << endl;
		}
	}
	return 0;
}
////////////////////////////////////////////////////////////////
int exersise11()
{
	
	int chislo;
	for (int i = 1; i <= 9; i++)//for za stotici
	{
		for (int n = 0; n <= 9; n++)//for za desetici
		{
			for (int m = 0; m <=9; m++)//for za edinici
			{
				chislo = i * 100 + n * 10 + m;
				if (i != 0 && n != 0 && m != 0 && chislo % i == 0 && chislo % n == 0 && chislo % m == 0)
				{
					cout << chislo << endl;
				}
			}
		}
	}


	return 0;
}
////////////////////////////////////////////////////////////////
int exersise12()
{
	for (int k = 1; k <= 9; k++)//for za hilqdni
	{
		for (int i = 0; i <= 9; i++)//for za stotici
		{
			for (int n = 0; n <= 9; n++)//for za desetici
			{
				for (int m = 0; m <= 9; m++)//for za edinici
				{
					if(k+i+n+m<100&&k+i+n+m>9&&(k+i+n+m)%2==0)
					{
						cout << k * 1000 + i * 100 + n * 10 + m << endl;
					}
				}
			}
		}
	}
	return 0;
}
////////////////////////////////////////////////////////////////
int exersise13()
{
	for (int k = 1; k <= 9; k++)//for za hilqdni
	{
		for (int i = 0; i <= 9; i++)//for za stotici
		{
			for (int n = 0; n <= 9; n++)//for za desetici
			{
				for (int m = 0; m <= 9; m++)//for za edinici
				{
					if (k == i || k == n || k == m || i == n || i == m || n == m)
					{				
							cout << k * 1000 + i * 100 + n * 10 + m << endl;						
					}
				}
			}
		}
	}
	return 0;
}
////////////////////////////////////////////////////////////////
int exersise14()
{	
		for (int i = 1; i <= 9; i++)//for za stotici
		{
			for (int n = 0; n <= 9; n++)//for za desetici
			{
				for (int m = 0; m <= 9; m++)//for za edinici
				{
					int sum = i + n + m;
					bool dali = prostoChislo(sum);
					if (dali==true)
					{
						cout << i * 100 + n * 10 + m << endl;
					}
				}
			}
		}
	return 0;
}
////////////////////////////////////////////////////////////////
int main()
{
	exersise9();
	exersise10();
	exersise11();
	exersise12();
	exersise13();
	exersise14();
	return 0;
}