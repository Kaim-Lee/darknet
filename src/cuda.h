#ifndef CUDA_H
#define CUDA_H

#define BLOCK 256

#include "cuda_runtime.h"
#include "cublas_v2.h"

extern int gpu_index;

void check_error(cudaError_t status);
cublasHandle_t blas_handle();
float *cuda_make_array(float *x, int n);
int *cuda_make_int_array(int n);
void cuda_push_array(float *x_gpu, float *x, int n);
void cuda_pull_array(float *x_gpu, float *x, int n);
void cuda_free(float *x_gpu);
float cuda_compare(float *x_gpu, float *x, int n, char *s);
dim3 cuda_gridsize(size_t n);

#endif
