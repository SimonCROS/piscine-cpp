#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate() {
    srand(time(0));
    switch (std::rand() % 3) {
        case 0:
            return new A();
        case 1:
            return new B();
        default:
            return new C();
    }
}

void identify(Base *p) {
    void *ptr;

    ptr = dynamic_cast<A *>(p);
    if (ptr) {
        std::cout << "A" << std::endl;
        return;
    }
    ptr = dynamic_cast<B *>(p);
    if (ptr) {
        std::cout << "B" << std::endl;
        return;
    }
    ptr = dynamic_cast<C *>(p);
    if (ptr) {
        std::cout << "C" << std::endl;
        return;
    }
}

void identify(Base &r) {
    Base b;
    try {
        b = dynamic_cast<A &>(r);
        std::cout << "A" << std::endl;
    } catch (std::exception &e) {
        try {
            b = dynamic_cast<B &>(r);
            std::cout << "B" << std::endl;
        } catch (std::exception &e) {
            try {
                b = dynamic_cast<C &>(r);
                std::cout << "C" << std::endl;
            } catch (std::exception &e) {}
        }
    }
}

int main() {
    Base *clazz = generate();
    identify(clazz);
    identify(*clazz);
}
