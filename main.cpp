#include <iostream>
using namespace std;

void printHello()
{
  cout << "Hello\n";
}

void likeFunc()
{
  cout << "like\n";
}

int main()
{
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
    printHello();
}
