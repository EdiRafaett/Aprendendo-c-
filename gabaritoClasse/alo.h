#ifndef ALO_H
#define ALO_H
template<typename T>
class Alo{
private:
    T x, y;
public:
    Alo(T x_, T y_);
    T getX();
};

template<typename T>
Alo<T>::Alo(T x_, T y_){
    x = x_;
    y = y_;

}

template<typename T>
T Alo<T>::getX(){
    return x;
}
#endif // ALO_H
