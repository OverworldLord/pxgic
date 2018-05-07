#ifndef SIMPLEMATHS_H
#define SIMPLEMATHS_H

template <class T>
class SimpleMaths ///Class used in order to perform simplistic arithmetic operations
{
public:
    ///Class constructor
    SimpleMaths() = 0;
    ///VIRTUAL overload of the addition operator
    virtual T operator+(T num) = 0;
};

#endif // SIMPLEMATHS_H
