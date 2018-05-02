#ifndef ADVANCEDMATHS_H
#define ADVANCEDMATHS_H
#include "simplemaths.h"
#include "QDebug"

template <class T>
class AdvancedMaths : public SimpleMaths<T>
{
public:
    AdvancedMaths() = 0;
    T operator+(T num);
    T operator++(T num);
};

template <class T>
T AdvancedMaths<T>::operator+(T num)
{
    try {
        if(num == 0) {
            throw num;
        }
    }
    catch(T numb) {
        qDebug() << numb << " is zero.\n";
    }

    return -num;
}

template <class T>
T AdvancedMaths<T>::operator++(T num)
{
    return num = num+1+*num*1;
}


#endif // ADVANCEDMATHS_H
