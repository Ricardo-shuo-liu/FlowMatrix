#include <armadillo>
#ifndef TENSOR_HPP
#define TENSOR_HPP
namespace core{
template<typename T>
class Tensor
{
    public :
        uint32_t rows() const;
        uint32_t cols() const;
        uint32_t channels() const;
        uint32_t size() const;
        /**
         * @brief 定义gettar
         */
        
        explicit Tensor(T* raw_ptr, uint32_t size);

        explicit Tensor(T* raw_ptr, uint32_t rows, uint32_t cols);

        explicit Tensor(T* raw_ptr, uint32_t channels, uint32_t rows, uint32_t cols);

        explicit Tensor(T* raw_ptr, const std::vector<uint32_t>& shapes);
};


}
#endif