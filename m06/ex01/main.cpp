#include <iostream>

struct Data {
    int im_a_data;
};

uintptr_t serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main() {
    Data data;

    data.im_a_data = 42;

    Data *ptr = &data;
    uintptr_t serialized = serialize(ptr);

    Data *result = deserialize(serialized);
    std::cout << result->im_a_data << std::endl;
}
