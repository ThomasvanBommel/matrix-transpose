/**
 * @author Thomas vanBommel
 * @since 01-08-2021
 */

#include "Matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix(int n, int m, double d, double e)
: n_{n}, m_{m}, M_{ new double[n_ * m_] } {
  for(int row = 0; row < n_; row++)
    for(int col = 0; col < m_; col++)
      M_[row * m_ + col] = (row == col) ? d : e;
}

/**
 * Transpose with O(1) time
 */
void Matrix::transp() {
  t_ = !t_;
}

double & Matrix::operator () (int n, int m){
  return M_[indexOf(n, m)];
}

ostream & operator << (ostream & out, Matrix & in) {
  out << endl;

  for(int row = 0; row < in.rows(); row++){
    for(int col = 0; col < in.cols(); col++){
      out << in.M_[in.indexOf(row, col)] << " ";
    }

    out << endl;
  }

  return out;
}

int Matrix::indexOf(int n, int m) {
  return t_ ? m * rows() + n : n * cols() + m;
}

int Matrix::rows() {
  return t_ ? m_ : n_;
}

int Matrix::cols() {
  return t_ ? n_ : m_;
}
