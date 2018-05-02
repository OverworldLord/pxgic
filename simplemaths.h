#ifndef SIMPLEMATHS_H
#define SIMPLEMATHS_H

template <class T>
class SimpleMaths
{
public:
    SimpleMaths() = 0;
    virtual T operator+(T num) = 0;
};

#endif // SIMPLEMATHS_H
