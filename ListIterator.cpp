#include <iostream>
#include <list>
#include <iterator>

using namespace std;

void printLots(const list<int>& L, const list<int>& P)
{ /*
  std::list<int>::const_iterator itr;
  std::list<int>::const_iterator it;
  for(itr=P.begin(); itr != P.end(); ++itr)
  {
  //  cout<< *itr << endl;
    it=L.begin();
    cout << std::next(it, itr) << endl;
  //  cout << *it << endl;
  }
*/

std::list<int>::const_iterator itr = P.begin();
std::list<int>::const_iterator it = L.begin();

  for(itr=P.begin(); itr != P.end(); ++itr)
  {
    int counter = 0;
    for(it=L.begin(); it != L.end(); ++it)
    {
      if(*itr == counter)
      {
        cout << *it << endl;
      }
      counter++;
    }
  }
}

int main()
{
  list<int> L = {1,2,3,4,5,6,7,8,9};
  list<int> P = {1,2,3};
  printLots(L, P);

  return 0;
}
