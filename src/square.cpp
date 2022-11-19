#include <Rcpp.h>
using namespace Rcpp;

//' square
//' 
//' 
//' @param x a numeric vector 
//' @returns a numeric vector 
//'@export 
// [[Rcpp::export]]
NumericVector square(NumericVector x) {
    for (int i = 0; i < x.size(); i++) {
        x[i] *= x[i]; 
    }
    return x;
}


