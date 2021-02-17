#pragma once

#include <string>
#include <vector>
#include <utility>
#include "gui_application/imgui_gl.h"
#include "gui_application/shader/program.h"
#include "gui_application/shader/default_shaders.h"
#include "gui_application/shader/program_uniform.h"

namespace gui_application {
namespace shader {

    struct DefaultProgram : public Program
    {
        DefaultProgram()
            : Program("Default", {defaultVertexShader(), defaultFragmentShader()})
        {}
        void setup() override
        {
            m_shaders[0].setup();
            m_shaders[1].setup();
            Program::setup();
            projection_view_model.init(getGlProgram(), "projection_view_model");
        }
        ProgramUniform<glm::mat4> projection_view_model;
    };


} // namespace shader
} // namespace gui_application
