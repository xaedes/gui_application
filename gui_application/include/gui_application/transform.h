#pragma once

#include <glm/glm.hpp>

namespace gui_application {

    class Transform
    {
    public:
        Transform* parent;

        glm::vec3 position;
        glm::mat3 orientation;
    };

} // namespace gui_application
