#pragma once

#include "gui_application/imgui_gl.h"
#include "gui_application/version.h"

#include <string>

namespace gui_application {

class GuiApplication
{
public:
    GuiApplication();
    virtual ~GuiApplication();

    int run();

    virtual std::string name();
    virtual void setup();
    virtual void setupFonts();
    virtual void frame();
    virtual void teardown();
protected:
    
    GLFWwindow* m_window;

};

} // namespace gui_application
