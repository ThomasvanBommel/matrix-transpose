/**
 * @author Thomas vanBommel
 * @since 01-08-2021
 */

 #include "Matrix.h"
 #include <iostream>

 using namespace std;

 int main(){
   Matrix A{5, 3};

   A(0, 0) = 1;
   A(1, 1) = 2;
   A(2, 2) = 3;

   A(4, 0) = 7;
   A(4, 1) = 8;
   A(4, 2) = 9;

   cout << A << endl;

   A.transp();

   cout << A << endl;

   return 0;
 }
