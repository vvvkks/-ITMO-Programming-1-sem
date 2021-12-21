#include "rectangle.h"
#include <math.h>
float rectanglePerimeter(struct Rectangle rect){
    return 2 * ((rect.x2 - rect.x1) + (rect.y2 - rect.y1));
}

float rectangleArea(struct Rectangle rect) {
    return pow((rect.x2 - rect.x1), 2);
}

// реализация всех функций из Rectangle.h