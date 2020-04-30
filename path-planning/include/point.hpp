#pragma once

namespace pathmapping::geometry {

    class Point {
    public:
        Point(double x, double y);

        double getX() const;
        double getY() const;
    private:
        double x;
        double y;
    };

}