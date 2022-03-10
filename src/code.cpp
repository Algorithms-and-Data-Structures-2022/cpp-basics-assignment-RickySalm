 #include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right){
    int total;
    total = left - right;
    total = total * total;
    return total;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    if (mask < 0 || bit_pos < 0) {
      return false;
    }
    mask = mask >> bit_pos;
    if (mask % 2 == 0) {
      return false;
    }
    return true;
  }

  // Task 3
  int max3(int left, int middle, int right){
    if((left > middle) && (left > right)){
      return left;
    }
    if ((middle > left) && (middle > right)){
      return middle;
    }
    return right;
  }

  // Task 4
  void swap_args(int *left, int *right) {
    if (left != nullptr and right != nullptr) {
      int buff_l = *left;
      int buff_r = *right;
      *left = buff_r;
      *right = buff_l;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    if (arr != nullptr and length > 0) {
      int sum = 0;
      for (int i = 0; i < length; i++) {
        sum += arr[i];
      }
      return sum;
    }
    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if (arr != nullptr and length > 0) {
      int* max = arr;
      for (int i = 0; i < length; i++) {
        if (*max < arr[i]) {
          max = &arr[i];
        }
      }
      return max;
    }
    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length > 0) {
      int* arr = new int[length] {};
      std::fill(arr, arr + length, init_value);
      return arr;
    }
    else {
      return nullptr;
    }
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if ((arr_in == nullptr) || (length <= 0)) {
      return nullptr;
    }
    else {
      int* arr = new int[length] {};
      std::copy(arr_in, arr_in + length, arr);
      return arr;
    }

  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr) {
      os << "Invalid argument: arr\n";
    }
    else if (length <= 0) {
      os << "Invalid argument: length\n";
    }
    else if (k <= 0) {
      os << "Invalid argument: k\n";
    }
    else {
      for (int i = 0; i < length; i += k) {
        os << *(arr + i) << "\t";
      }
    }
  }

}  // namespace assignment
