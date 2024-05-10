// sphere.cpp
#include "sphere.h"

sphere::sphere() : object() {
    this->scale = new vector3(1,1,1);
    this->position = new vector3(0,0,0);
    this->rotation = new vector3(0,0,0);
}

sphere::sphere(vector3* scale) : object() {
    this->scale = scale;
    this->position = new vector3(0,0,0);
    this->rotation = new vector3(0,0,0);
}

sphere::sphere(vector3* scale, vector3* position) : object() {
    this->scale = scale;
    this->position = position;
    this->rotation = new vector3(0,0,0);
}

sphere::sphere(vector3* scale, vector3* position, vector3* rotation ) : object() {
    this->scale = scale;
    this->position = position;
    this->rotation = rotation;
}

std::string sphere::to_string() {
    //return ("{ mesh: sphere, position: " + position->to_string() + ", rotation: " + rotation->to_string() + " }");
    return ("{\n\tmesh: sphere,\n\tscale: " + scale->to_string() + "\n\tposition: " + position->to_string() +",\n\trotation: " + rotation->to_string() + "\n}");
}
