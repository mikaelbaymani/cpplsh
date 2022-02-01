#include <matrix.hpp>


Matrix::Matrix( const Matrix& m )
{
  _rows = m._rows;
  _cols = m._cols;
  for ( int r = 0; r < m.rows(); ++r )
  {
    auto it = m._values.find( r );
    if ( it != m._values.end() ) { _values[r] = it->second; }
  }
}

double Matrix::get( int row, int col ) const
{
  auto rowIt = _values.find( row );
  if ( rowIt != _values.end() )
  {
    auto colIt = rowIt->second.find( col );
    if ( colIt != rowIt->second.end() ) { return colIt->second; }
  }
  return double();
}

Matrix &Matrix::set( int row, int col, double value )
{
  if ( value != double() ) { _values[row][col] = value; }
  else if ( _values.find( row ) != _values.end() )
  {
    if ( _values[row].find( col ) != _values[row].end() ) { _values[row].erase( col ); }
  }
  return *this;
}
