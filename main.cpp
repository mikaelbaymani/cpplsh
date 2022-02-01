#include <matrix.hpp>
#include <iostream>
using namespace std;

int main()
{
  {
    Matrix m( 2, 2 ); m.set( 1, 1, 2 );
    cout << m.shape()[0] << "x" << m.shape()[1] << endl;
    Matrix n = m;
    cout << n.shape()[0] << "x" << n.shape()[1] << endl;
    cout << n.get( 1, 1 ) << endl;
  }

  return 0;
}
