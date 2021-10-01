#include <iostream>

using namespace std;

main()
{
	string tab;
	int a;
	cin>>a;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0)
		tab[i]=i;
	}
	for(int i=0;i<tab.size();i++)cout<<tab[i]<<" ";
}
