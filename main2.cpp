#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
#include <ctime>
#include <chrono>
#include<algorithm>
using namespace std;


bool IsKPeriodic(string str, int k) 
{
	const int interval_length = k;
	const int count_blocks = str.length() / interval_length;
	const std::string first_block = str.substr(0, interval_length);
	for (int i = 1; i < count_blocks; ++i) {
		const std::string block = str.substr(static_cast<std::basic_string<char, std::char_traits<char>, std::allocator<char>>::size_type>(i) * interval_length, interval_length);
		if (block != first_block) {
			return false;
		}
	}


	return true;
}

int main()
{
	string str{ "cdefgcdefgcdefg" };
	int k = 5;
	if (IsKPeriodic(str, k)) {
		cout << "The string is a multiple of a number " << k << endl;
	}
	else {
		cout << "The string is not a multiple of a number " << k << endl;
	}
	return 0;
}
	
	





























/*template<typename X, typename Y > class MyPair
{
private:
	X val;
	Y value;
public:
	MyPair() = default;
	MyPair(X x, Y y): val(x), value(y){}
	void getMax( X val,  Y value)
	{
		if (val > value)
		{
	     cout << val << endl;
		}
		 cout << value << endl;
	}
	

};


int main()
{
	MyPair<int, int>a;
	a.getMax(563, 654);
	MyPair<float, float>b;
	b.getMax(56.5, 98);
	MyPair<string, string>c;
	c.getMax("Artem", "Genius");
	
	
	
	return 0;
}*/