#include<list>
#include<iostream>
using namespace std;

int main()
{
  list<int> test1;
  int i;

  for(i=0; i!=4; i++)
    test1.push_back(10*i);

  list<int>::iterator print;
  print = test1.begin();

  for(int i=1; i<21; i++){
    cout << "num in list:" << i << "\t" << *print << endl;
    print++;
  }

  return 0;
}
