#include <iostream>
using namespace std;

int funk1(int x, int y)
{
	return x + y;
}

int funk2(int i, int j)
{
	return i * j;
}

int main()
{
	cout << "hey!" << endl;
	cout << funk1(2, 5) << endl;
	cout << funk2(4, 10) << endl;
  
	return 0;
}