#include "vector.h"

#include <stdexcept>

namespace stl{

    template <typename T>
    Vector<T>::Vector(){
        m_data = nullptr;
        m_size = 0;
        m_capacity = 0;
    }

    template <typename T>
    Vector<T>::~Vector(){
        if(m_data != nullptr){
            delete [] m_data;

        }
        m_size = 0;
        m_capacity = 0;
    }

    template <typename T>
    unsigned int Vector<T>::size(){
        return m_size;
    }

    template <typename T>
    unsigned int Vector<T>::capacity(){
        return m_capacity;
    }

    template <typename T>
    T & Vector<T>::at(unsigned int index){
        if(index < 0 && index >= m_size){
            throw std::out_of_range("index out of range");
        }
        return m_data[index];
    }

    template <typename T>
    const T & Vector<T>::at(unsigned int index) const{
        if(index < 0 && index >= m_size){
            throw std::out_of_range("index out of range");
        }
        return m_data[index];
    }

    template <typename T>
    T & Vector<T>::front(){
        return m_data[0];
    }

    template <typename T>
    const T & Vector<T>::front() const {
        return m_data[0];
    }

    template <typename T>
    T & Vector<T>::back(){
        return m_data[m_size -1];
    }

    template <typename T>
    const T & Vector<T>::back() const {
        return m_data[m_size -1];
    }

    template <typename T>
    T * Vector<T>::data() {
        return m_data;
    }

    template <typename T>
    T & Vector<T>::operator [] (unsigned int index) {
        return m_data[index];
    }

    template <typename T>
    const T & Vector<T>::operator [] (unsigned int index)const {
        return m_data[index];
    }    


    // modifier

    template<typename T>
    void Vector<T>::push_back(const T & val){
        
        if(m_size < m_capacity){
            m_data[m_size] = val;
            m_size++;
            return;
        }

        if(m_capacity == 0){
            m_capacity = 1;
        }else{
            m_capacity *= 2;
        }

        T * data = new T[m_capacity];

        // better?
        for(int i = 0; i<m_size; i++){
            data[i] = m_data[i];
        }

        if(m_data != nullptr){
            delete [] m_data;
            m_data = nullptr;
        }

        m_data = data;
        m_data[m_size] = val;
    }

    template <typename T>
    void Vector<T>::pop_back(){
        if(m_size > 0){
            m_size--;
        }
    }

};