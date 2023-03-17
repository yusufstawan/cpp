#include <iostream>

using namespace std;

int main()
{
  const string WEBSITE = "http://www.google.com";
  const double IPK = 3.5;

  cout << "Sedang belajar di " << WEBSITE;
  cout << '\n';

  cout << "IPK: " << IPK;
  cout << '\n';

  // IPK = 3.6; // Error: assignment of read-only variable 'IPK'

  return 0;
}
