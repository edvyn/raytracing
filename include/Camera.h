#ifndef CAMERA_H
#define CAMERA_H

#include <string>
#include "Object.h"
#include "Screen.h"
#include <vector>


class Camera : public Object
{
    public:
        Camera();
        Camera(int horizontal, int vertical, double distance);
        int horizontal;
        int vertical;
        std::string to_string() override;
        Screen screen;
        double distance;
        std::string render(std::vector<Object*>objects);
        double MAX_DISTANCE;

    protected:
        colorRGB dephFog(colorRGB color, colorRGB fog, double distance);

    private:
};

#endif // CAMERA_H
