#include<iostream>
using namespace std;
int main()
{
	int i,j,count=0;
	for(i=2; i<=100; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                count++;
				break;
            }
        }
        if(count==0)
            cout<<i<<"\t";
        count=0;
    }
}
