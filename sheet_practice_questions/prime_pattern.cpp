#include<iostream>
using namespace std;
int main()
{
	int i,j,count=0,a[11],k=1;
	for(i=1; i<=23; i++)
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
            {
            	a[k]=i;
            	k++;
			}
        count=0;
    }
    
    k=1;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<a[k]<<"\t";
			k++;
		}
		cout<<"\n";
	}

}
