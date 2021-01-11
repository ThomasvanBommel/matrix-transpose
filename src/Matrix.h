/**
 * @author Thomas vanBommel
 * @since 01-08-2021
 */

 #ifndef MATRIX_H_
 #define MATRIX_H_

#include <iostream>

using namespace std;

 class Matrix {
 public:
   Matrix(int, int, double=0.0, double=0.0);

   void transp();
   double & operator () (int, int);

   friend ostream & operator << (ostream &, Matrix &);

 private:
   int n_, m_;
   double * M_;

   bool t_{false};

   int indexOf(int, int);
   int rows();
   int cols();
 };

 #endif
