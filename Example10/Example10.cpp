// Multidimensional arrays

#include <iostream>
#include <assert.h>

void print_2d_array(const double* q, const size_t nrow, const size_t ncol)
{
    //const double* q = *p;
    for (size_t i = 0; i < nrow; ++i) {
        for (size_t j = 0; j < ncol; ++j) {
            std::cout << *(q + (i*ncol + j)) << "  ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    // row-major array[irow][icol]
    // array[i0][i1][i2][...]


    // declare and initialize, first dimension can be left empty
    constexpr int nc = 4;
    double numbers[][nc] = {
        {1.10, 1.20, 1.30, 1.40},
        {2.10, 2.20, 2.30, 2.40},
        {3.10, 3.20, 3.30, 3.40},
        {4.10, 4.20, 4.30, 4.40},
    };
    const int nr = sizeof(numbers) / sizeof(double[nc]);
    assert(nr == 4);

    print_2d_array(numbers[0], nr, nc);

    // access
    for (size_t i = 0; i < nr; ++i) {
        for (size_t j = 0; j < nc; ++j) {
            numbers[i][j] += (i+1) * 10 + (j+1) * 0.001;
        }
    }        

    print_2d_array(numbers[0], nr, nc);
}
