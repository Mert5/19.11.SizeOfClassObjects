#include <iostream>

//  Reference(s) => https://www.youtube.com/watch?v=8jLOx1hD3_o
//               => freeCodeCamp.org

class Dog{
    public :
        Dog() = default;

        void print_info(){      // aren't accounted for the size of object
            std::cout << "You are in the dog class" << std::endl;
        }

        void do_something(){    // aren't accounted for the size of object
            int a{5};
            std::cout << "Integer value is : " << a+1 << std::endl;
        }

    private :   // -size of your object is mostly going to be determined by the member variables-
                // and the size will be total of them(member variables)
        size_t leg_count;   // 8 byte
        size_t arm_count;   // 8 byte
        int* p_age;         // 8    // we don't mind what this pointer is pointing to. We just mind pointer itself (int* in here)
};

int main(){

    Dog dog1;
    dog1.do_something();
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
    std::cout << "sizeof(Dog) : " << sizeof(Dog) << std::endl;
    std::cout << "sizeof(dog1) (the object) : " << sizeof(dog1) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int *) << std::endl;

    std::string word{"Hello. Death is real!"};  // even if the content of word change, size of it does not change.
                                                // because it is also looking for the size of pointer, not the content

    std::cout << "sizeof(word) : " << sizeof(word) << std::endl;

    return 0;
}