/*
*   Author: sikoeh (https://github.com/sikoeh)
*   
*   Implementation of a simple single linked list with the help of templates.
*   Objects stored in this list must have a copy-constructor and a valid == operator.
*/
#ifndef INCLUDED_SINGLE_LINKED_LIST
#define INCLUDED_SINGLE_LINKED_LIST

#include <stdexcept>

template<class T>
class single_linked_list{
 public:

    single_linked_list()
        :
        head_(nullptr),
        size_(0)
    {};

    single_linked_list(const single_linked_list<T>& other)
        :
        head_(nullptr),
        size_(0)
    {
        list_element* iterator = other.head_;
        while(iterator != nullptr){
            insert(iterator->data_);
            iterator = iterator->next_;
        }
    };

    single_linked_list(single_linked_list<T>&& other)
        :
        head_(other.head_),
        size_(other.size_)
    {
        other.head_ = nullptr;
        other.size_ = 0;
    };


    ~single_linked_list(){
        list_element* to_delete = head_;
        while(to_delete != nullptr){
            head_ = to_delete->next_;
            delete to_delete;
            to_delete = head_;
        }
    };

    //insert at the end
    void insert(const T& element){
        list_element* new_element = new list_element(nullptr, element);

        if(head_ == nullptr){
            head_ = new_element;
            ++size_;
            return;
        }

        list_element* iterator = head_;
        while(iterator->next_ != nullptr)
            iterator = iterator->next_;

        iterator->next_ = new_element;
        ++size_;
    };

    //insert at the given position (0 is head)
    void insert_at(const T& element, int position){
        if(position > size_ || position < 0){
            throw std::runtime_error("Invalid position");
        }

        if(position == 0){
            list_element* new_element = new list_element(head_, element);
            head_ = new_element;
            ++size_;
            return;
        }

        list_element* iterator = head_;
        for (int i = 0; i < position-1; ++i)
        {
            iterator = iterator->next_;
        }
        
        list_element* new_element = new list_element(iterator->next_, element);
        iterator->next_ = new_element;
        ++size_;
    };

    //remove the first element that is equal to the parameter (checked by == operator)
    //does nothing in case there is no such element
    void remove(const T& element){
        list_element* iterator = head_;
        if(element == head_->data_){
            head_ = head_->next_;
            delete iterator;
            return;
        }

        while (iterator != nullptr)
        {
            list_element* next_element = iterator->next_;
            if(next_element->data_ == element){
                iterator->next_ = next_element->next_;
                delete next_element;
                --size_;
                return;
            }
            iterator = iterator->next_;
        }
    };

    //remove element at given position (0 is head)
    void remove_at(int position){
        if(position < 0 || position >= size_)
            throw std::runtime_error("Invalid position");

        if(position == 0){
            list_element* new_head = head_->next_;
            delete head_;
            head_ = new_head;
            --size_;
            return;
        }

        list_element* iterator = head_;
        for(int i = 0; i < position - 1; ++i)
            iterator = iterator->next_;
        
        list_element* to_delete = iterator->next_;
        iterator->next_ = to_delete->next_;
        delete to_delete;
        --size_;
    };

    //return a reference to the element at the given position (0 is head)
    T& at(int position) const{
        if(position < 0 || position >= size_)
            throw std::runtime_error("Invalid position");

        list_element* iterator = head_;
        for(int i = 0; i < position; ++i){
            iterator = iterator->next_;
        }
        return iterator->data_;
    };

    int size() const{
        return size_;
    };

 private:
    struct list_element{
        list_element(list_element* next, T data)
            :
            next_(next),
            data_(data)
        {};
        list_element* next_;
        T data_;
    };

    list_element* head_;
    int size_;
};

#endif