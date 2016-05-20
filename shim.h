// Don't load OpenGL
#define GLFW_INCLUDE_NONE

// find GLFW using include path
#include "GLFW/glfw3.h"

typedef void *GLXContext;

#define GLX_H
#define GLFW_EXPOSE_NATIVE_GLX
#define GLFW_EXPOSE_NATIVE_X11
#include "GLFW/glfw3native.h"
#undef GLX_H