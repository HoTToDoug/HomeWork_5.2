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

template<class T, class Tem>
class Pair {
private:
    T g;
    Tem h;
public:
    Pair(T n, Tem m) : g(n), h(m) {};
    T first() const {
        return g;
    };

    Tem second() const {
        return h;
    };

};

int main()
{
    {
        Pair1<int> p1(6, 9);
        cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

        const Pair1<double> p2(3.4, 7.8);
        cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
    };

    cout << "/--------------------------------------------------/" << endl;

    {
        Pair<int, double> p1(6, 7.8);
        cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

        const Pair<double, int> p2(3.4, 5);
        cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';
    };


    return 0;
}
