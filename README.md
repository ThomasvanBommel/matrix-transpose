# Matrix transpose of time O(1)

A nice matrix transpose solution

## Method
### Conventional O(nm)
Loops through rows + columns of the matrix
```c++
void Matrix::transp() {
  double * T{new double[rows_ * cols_]};

  for (int i=0; i < rows_; i++)
    for (int j=0; j < cols_; j++)
      T[j * rows_ + i] = M_[i * cols_ + j];

  delete [] M_;
  M_ = T;
  std::swap(rows_, cols_);
}
```

### Solution O(1) : found [here](src/Matrix.cpp)
Stores boolean isTransposed. If transposed return cols=rows + rows=cols
```c++
void Matrix::transp() {
  t_ = !t_;
}
```

## Usage
Compile + Run
```bash
g++ src/*.h && g++ src/*.cpp && ./a.out
```

Output
```
1 0 0
0 2 0
0 0 3
0 0 0
7 8 9


1 0 0 0 7
0 2 0 0 8
0 0 3 0 9
```
