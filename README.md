
## Installation

How to test

```
export CC=/usr/local/bin/gcc-8
export CXX=/usr/local/bin/g++-8
R CMD INSTALL .

Rscript -e "oddish::absorb('yeah ok')"
Rscript -e "oddish::absorb('wow')"
```

debugging if you get a "symbol not found" error

```
nm src/oddish.so
```

## Common questions

### 'stdlib.h' file not found

Mac OS is weird, not sure what to tell you. You might need to do this

```
open /Library/Developer/CommandLineTools/Packages/macOS_SDK_headers_for_macOS_10.14.pkg
```

That re-installs the main C/C++ headers so `clang++` can find them.

## References

* [using C code in R](http://adv-r.had.co.nz/C-interface.html)
* [Raw-R](https://raw-r.org/R_API.php)
* [how XGBoost does it](https://github.com/dmlc/xgboost/tree/master/R-package/src)
* [intro to namespaces in C++](https://docs.microsoft.com/en-us/cpp/cpp/namespaces-cpp?view=vs-2019)
