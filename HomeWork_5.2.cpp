#include <iostream>

using namespace std;

template<class T>
class Pair1 {
private:
    T a;
    T b;
public:
    Pair1(T c, T d) : a(c), b(d) {};
    T first() const {
        return a;
    };

    T second() const {
        return b;
    };

};

int main()
{
    Pair1<int> p1(6, 9);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

    const Pair1<double> p2(3.4, 7.8);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    return 0;
}
