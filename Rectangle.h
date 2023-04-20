#include <iostream>

#include "NegativeNumberException.cpp"

template <class T>
class Rectangle {
   private:
    T width;
    T length;

   public:
    Rectangle(T wid, T len) {
        setWidth(wid);
        setLength(len);
    }
    ~Rectangle() {}
    T getArea();
    T getWidth();
    T getLength();
    void setWidth(T wid);
    void setLength(T len);
    template <typename U>
    friend std::ostream &operator<<(std::ostream &, const Rectangle<U> &);
};

template <typename T>
T Rectangle<T>::getArea() {
    return width * length;
}

template <typename T>
T Rectangle<T>::getWidth() {
    return width;
}

template <typename T>
T Rectangle<T>::getLength() {
    return length;
}

template <typename T>
void Rectangle<T>::setWidth(T wid) {
    if (wid < 0) throw NegativeNumberException();
    width = wid;
}

template <typename T>
void Rectangle<T>::setLength(T len) {
    if (len < 0) throw NegativeNumberException();
    length = len;
}

template <typename T>
std::ostream &operator<<(std::ostream &output, const Rectangle<T> &r) {
    output << "Width: " << r.width << ", Length: " << r.length << std::endl;
    return output;
}
