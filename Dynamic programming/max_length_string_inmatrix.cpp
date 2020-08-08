#include<iostream>
#include<string>
#include<algorithm>
#include<unordered_map>
#define N 5
using namespace std;

unordered_map<string,string>map;

bool isvalid(int i,int j)
{
	return (i>=0 && i<N && j>=0 && j<N);
}
string Path(int mat[N][N],int i,int j)
{
	if(!isvalid(i,j))
	return "";
	
	string key=to_string(i)+"|"+to_string(j);
	if(map.find(key)==map.end())
	{
		string path;
		if(i>0 && mat[i-1][j]-mat[i][j]==1)
		path=Path(mat,i-1,j);
		
		if(j+1<N && mat[i][j+1]-mat[i][j]==1)
		path=Path(mat,i,j+1);
		
		if(i+1<N && mat[i+1][j]-mat[i][j]==1)
		path=Path(mat,i+1,j);
		
		if(j>0 && mat[i][j-1]-mat[i][j]==1)
		path=Path(mat,i,j-1);
		
		map[key]=to_string(mat[i][j])+"-"+path;
	}
	return map[key];
}

int main()
{
	int mat[N][N]={{10,13,14,21,23},
					{11,9,22,2,3},
					{12,8,1,5,4},
					{15,24,7,6,20},
					{16,17,18,19,25}};
	int max=INT_MIN;
	string res;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			string str=Path(mat,i,j);
			int size=count(str.begin(),str.end(),'-');
			if(size>max)
			{
				max=size;
				res=str;
			}
			
		}
	}
	cout<<res;
}
