#include <Rcpp.h>
using namespace Rcpp;

//'@export 
// [[Rcpp::export]]
NumericVector square(NumericVector x) {
    for (int i = 0; i < x.size(); i++) {
        x[i] *= x[i]; 
    }
    return x;
}


