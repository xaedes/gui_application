# gui_application
Wrapper for ImGui and OpenGL (glfw, glew) boilerplate code with overridable setup(), frame() and teardown() functions

![](https://raw.githubusercontent.com/xaedes/gui_application/main/screenshots/screenshot-2021-02-17-1547.png)

Derive your own class from gui_application::GuiApplication and overwrite setup(), frame() and teardown() functions.
Put your drawing and ImGui code in frame().

You can use C++ classes in gui_application::shader namespace for managing GLSL shaders and programs.

Choose one of three predefined camera types: first person view, orbital view and look-at view; or define your own camera. 

