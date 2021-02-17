#pragma once

#include <string>
#include "gui_application/shader/shader.h"
#include "gui_application/shader/program.h"

namespace gui_application {
namespace shader {

    Shader defaultVertexShader();
    Shader defaultFragmentShader();
    Program defaultProgram();

    std::string defaultVertexShaderCode();
    std::string defaultFragmentShaderCode();

}
}
