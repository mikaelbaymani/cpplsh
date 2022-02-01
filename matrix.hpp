#pragma once
#include <map>
#include <vector>


/**
 * Class for matrix-based computing.
 *
 * Functions:
 *
 *  - Matrix    Constructor.
 *
 *  - shape     Return the shape of a matrix.
 *  - columns   Return the number of columns of a matrix.
 *  - rows      Return the number of rows of a matrix.
 *
 *  - get
 *  - set
 */
class Matrix
{
public:

  Matrix( int rows, int cols ) : _rows( rows ), _cols( cols )
  {
  }

  Matrix( int size ) : Matrix( size, size )
  {
  }

  Matrix( const Matrix& m );

  const std::vector<int> shape() { return {_rows, _cols}; }

  const int &columns() const { return _cols; }

  const int &rows() const { return _rows; }

  double get( int row, int col ) const;

  Matrix &set( int row, int col, double value );

private:

  int _rows, _cols;

  std::map<int, std::map<int, double> > _values;

}; // class Matrix
