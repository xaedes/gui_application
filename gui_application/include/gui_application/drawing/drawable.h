#pragma once

namespace gui_application {
namespace drawing {

    class Drawable
    {
    public:
        Drawable() {}
        virtual ~Drawable() {}

        virtual void setup() {}
        virtual void draw() {}
    };

} // namespace drawing
} // namespace gui_application
