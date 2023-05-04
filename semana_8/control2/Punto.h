#ifndef __PUNTO_H__
#define __PUNTO_H__

class Punto {
    public:
        Punto() : x{0}, y{0} {}

        Punto(int _x, int _y) : x{_x}, y{_y} {}

        void setX(int _x) {
            x = _x;
        }
        int getX() const {
            return x;
        }
        void setY(int _y) {
            y = _y;
        }
        int getY() const {
            return y;
        }
    private:
        int x;
        int y;
};

#endif