#include <iostream>
#include <cstdlib>
using namespace std;

string LongestWord(string sen) {

  string longest, curr;
  for( string::iterator i = sen.begin(); i <= sen.end(); i++ )
  {
    if( (*i >= 'A' && *i <= 'Z')
            || (*i >= 'a' && *i <= 'z')
            || (*i >= '0' && *i <= '9'))
    {
      curr.push_back( *i );
    } else {
      if( curr.length() > longest.length() )
        longest = curr;
      curr.clear();
    }
  }

  return longest;
}

int main() {

  string input;
  getline(cin, input);
  cout << LongestWord(input) << endl;
  return 0;

}
