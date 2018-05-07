#ifndef ADVANCEDMATHS_H
#define ADVANCEDMATHS_H
#include "simplemaths.h"
#include "QDebug"

template <class T>
class AdvancedMaths : public SimpleMaths<T> ///Class used for difficult arithmetic operations
{
public:
    ///Class constructor
    AdvancedMaths() = 0;
    ///Overloaded addition operator
    T operator+(T num);
    ///Overloaded incrementation operator
    T operator++(T num);
};

template <class T>
T AdvancedMaths<T>::operator+(T num) ///Overloading function
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
T AdvancedMaths<T>::operator++(T num) ///Overloading function
{
    return num = num+1+*num*1;
}


#endif // ADVANCEDMATHS_H
