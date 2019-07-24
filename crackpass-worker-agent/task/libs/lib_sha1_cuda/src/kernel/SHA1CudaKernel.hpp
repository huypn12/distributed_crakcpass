#ifndef __MD5_CUDA_KERNEL__
#define __MD5_CUDA_KERNEL__

#include <cuda.h>


__global__ void SHA1CudaKernel(
        cudaTextureObject_t HashToCrack, uint4 *ret,
        cudaTextureObject_t texRefBaseKey, unsigned int baseLen,
        cudaTextureObject_t texRefCharset, unsigned int charsetLen,
        int data_size
        );


#endif