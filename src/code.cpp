#include <Rcpp.h>
using namespace Rcpp;


//'  Squares the function
//'
//' @param x First value
//' @return Product of v1 and v2
//[[Rcpp::export]]
float square(float x) {
    return x * x;
}
