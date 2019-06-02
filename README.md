

## Installation

How to test

```
R CMD INSTALL .

Rscript -e "oddish::absorb('yeah ok')"
```

debugging if you get a "symbol not found" error

```
nm src/oddish.so
```

## References

* [using C code in R](http://adv-r.had.co.nz/C-interface.html)
* [Raw-R](https://raw-r.org/R_API.php)
* [how XGBoost does it](https://github.com/dmlc/xgboost/tree/master/R-package/src)
* [intro to namespaces in C++](https://docs.microsoft.com/en-us/cpp/cpp/namespaces-cpp?view=vs-2019)
