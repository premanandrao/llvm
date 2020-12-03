// RUN: %clang_cc1 -fopenmp-simd -fsycl -fsycl-is-device -triple spir64 -verify -fsyntax-only %s

// Test that in the presence of OpenMP SIMD option, that null
// function declarations are accounted for when checking to emit diagnostics.

// expected-no-diagnostics

void *x;
