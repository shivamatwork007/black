#include<iostream.h>
#include<vector>


int main(){
	vector<int> vec;
	int num = 2;
	uint8 u_vecSize_u8 = 4;
	
	for(vector::iterator<int> it = vec.begin();it != u_vecSize_u8;it++)
	{
		vec.push_back(num);
	}
	
	for(it = begin();it != end();it++)
	{
		cout<<"value :\n"<<*it;
	}
}