#include<iostream>
using namespace std;

int isprime(int n)
{
	if (n <= 1)
		return 0;

	// Check from 2 to n-1
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return 0;

	return 1;

}

int main()
{
    int A[20];
    int a=0;
    for(int i=51;i<=71;i++)
    {
        if(isprime(i)){
        A[a]=i;
        a++;
        }
    }
    for(int i=0;i<a;i++)
    cout<<A[i]<<endl;
    return 0;
}