#ifndef PETROVA_D_A_PRJ_LABS_DYNAMICARRAY_DYNAMICARRAY_H_
#define PETROVA_D_A_PRJ_LABS_DYNAMICARRAY_DYNAMICARRAY_H_
#include <iosfwd>

template <typename T>
class DynamicArray {
 public:
    DynamicArray() = default;
    explicit DynamicArray(const ptrdiff_t size);
    DynamicArray(const ptrdiff_t size, const T &val);
    DynamicArray(const DynamicArray &arr);
    ~DynamicArray() { delete[] data_; data_ = nullptr; }
    ptrdiff_t size() const { return size_; }
    T& operator[](const ptrdiff_t index);
    const T& operator[](const ptrdiff_t index) const;
    void resize(const ptrdiff_t size);
    void resize(const ptrdiff_t size, const T &val);
    const DynamicArray &operator=(const DynamicArray<T> &arr);

 private:
    ptrdiff_t size_{ 0 };
    ptrdiff_t capacity_{ 0 };
    T* data_{ nullptr };
};

#endif  // PETROVA_D_A_PRJ_LABS_DYNAMICARRAY_DYNAMICARRAY_H_
