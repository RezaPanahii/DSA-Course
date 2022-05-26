#pragma once

template <typename type>
class vector
{
    // data members
    type* arr;
    int current;
    int max_size;

public:
    // constructors and destructors and methods

    vector(const int& size = 1) {
        current = 0;
        max_size = size;
        arr = new type[max_size];
    }

    vector(const int& size, const type& value) {
        max_size = size;
        current = size;
        arr = new type[max_size];
        for (int i = 0; i < current; i++) {
            arr[i] = value;
        }
    }

    void push_back(const type& value) {
        // reallocation
        if (current == max_size) {
            // create a new array and copy the old one, double the capacity
            type* oldArr = arr;
            // double the capacity
            max_size *= 2;
            // new allocated array
            arr = new type[max_size];
            // copy the old array to new one
            for (int i = 0; i < current; i++) {
                arr[i] = oldArr[i];
            }
            // delete old array
            delete[] oldArr;
        }
        // assign @param value to the first empty index
        arr[current] = value;
        current++;
    }

    void pop_back() {
        if (current) {
            current--;
        }
    }

    bool isEmpty() const {
        return current == 0;
    }

    type front() const {
        return arr[0];
    }

    type back() const {
        return arr[current - 1];
    }

    type at(const int& i) const {
        return arr[i];
    }

    int size() const {
        return current;
    }

    int capacity() const {
        return max_size;
    }

    type& operator[](const int& i) const {
        return arr[i];
    }

    void operator=(const type& vec) {
        if (vec.size() <= this->size()) {
            for (int i = 0; i < vec.size(); i++) {
                arr[i] = vec[i];
            }
        }
    }
};
