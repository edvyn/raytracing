#include "object.h"

object::~object() {
    // Fa�a a limpeza necess�ria, se houver
}

object::object() {
}

/*object::object(vector3* scale) {
}
object::object(vector3* scale, vector3* position) {
}
object::object(vector3* scale, vector3* position, vector3* rotation) {
}*/

void object::setColor(int r, int g, int b) {
    color.red = r;
    color.green = g;
    color.blue = b;
}
std::string object::getColor() {
    return (std::to_string(this->color.red) + " " + std::to_string(this->color.green) + " " + std::to_string(this->color.blue));

}


std::string object::to_string() {
    return "undefined";
}
