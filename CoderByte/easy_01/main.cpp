#include <iostream>

using namespace std;

string FirstReverse(string str)
{
  char * pHead = const_cast<char*>(str.c_str());
  int length = str.length();

  for(int i = 0; i < length/2; ++i) {
      char tmp = pHead[i];
      pHead[i] = pHead[length - 1 - i];
      pHead[length - 1 - i] = tmp;
  }
  return str;
}

int main() {

  // keep this function call here
    string test;
  cin >> test;
  cout << FirstReverse(test) << endl;
  return 0;

}
