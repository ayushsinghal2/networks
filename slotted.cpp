#include <bits/stdc++.h>
#define N 10000
using namespace std;
int main()
{	srand(time(NULL));
	for (float g = 0.1; g <= 2; g+=0.05)
	{
		float t[N] = {0.0};	
		bool coll[N]={false};
		int count = 0 ;
		int pack = 0;
		for(int i = 1;t[i-1]<1000;i++)
		{	
			float x = (int)(rand() % 10000-1) + 1.0 ;
			x= (float)x/10001;
			t[i]= (int)(t[i-1]-(log(x)/g));
			/*cout<<t[i]<<endl;*/
			pack++;
		}
		for(int i=0;i<pack-1;i++)
		{
			for (int j = i+1; j < pack; ++j)
			{
				if(t[i]-t[j] == 0)
				{
					coll[i]=true;
					coll[j]=true;
					//cout<<i<<endl;
				}
			}
		}
		for (int i = 0; i < pack; ++i)
		{
			/*cout<<t[i]<<endl;*/
			if(coll[i]==false)
				count++;
		}
		cout<<(float)count/1000<<endl;

	}
	
}