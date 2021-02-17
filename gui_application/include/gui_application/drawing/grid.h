#pragma once

#include "gui_application/drawing/drawable.h"

namespace gui_application {
namespace drawing {

    class Grid : public Drawable
    {
    public:
        Grid() {}
        virtual ~Grid() {}

        void setup() override
        {}
        void draw() override
        {}
    };

} // namespace drawing
} // namespace gui_application
