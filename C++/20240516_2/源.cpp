#include <iostream>
#include <cstring>


class apple {
private:
    int* m_weight;

public:
    int m_nShape;
    int m_norder;
    char m_szDetail[100];


    apple(int weight, int shape, int order, const char* detail) {
        m_weight = new int(weight);
        m_nShape = shape;
        m_norder = order;
        strncpy_s(m_szDetail, detail, 99);
        m_szDetail[99] = '\0';
    }

    apple(const apple& other) {
        m_weight = new int(*(other.m_weight));
        m_nShape = other.m_nShape;
        m_norder = other.m_norder;
        strncpy_s(m_szDetail, other.m_szDetail, 99);
        m_szDetail[99] = '\0'; 
    }

    void apple_number_dec(int norder) {
        m_norder -= norder;
    }

    void apple_number_add(int norder) {
        m_norder += norder;
    }

    ~apple() {
        delete m_weight;
    }
};

int main() {
    apple a1(10, 1, 5, "This is an apple");
    apple a2 = a1;

    std::cout << "a1.m_norder: " << a1.m_norder << std::endl;
    std::cout << "a2.m_norder: " << a2.m_norder << std::endl;

    a1.apple_number_dec(2);
    a2.apple_number_add(3);

    std::cout << "After operation:" << std::endl;
    std::cout << "a1.m_norder: " << a1.m_norder << std::endl;
    std::cout << "a2.m_norder: " << a2.m_norder << std::endl;

    return 0;
}