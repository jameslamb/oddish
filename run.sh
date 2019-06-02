#!/bin/bash

R CMD BUILD .
R CMD CHECK \
    --no-tests \
    --as-cran \
    *.tar.gz
