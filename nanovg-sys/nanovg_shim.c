#if defined(__APPLE__)
#include <OpenGL/gl.h>
#include <OpenGL/gl3.h>
#include <OpenGL/glu.h>
#include <OpenGL/glext.h>
#include <GLUT/glut.h>
#elif defined(_WIN32)
#include <glad.h>
#elif defined(__ANDROID__)
#include <GLES2/gl2.h>
#else
#include <GL/gl.h>
#endif

#include <nanovg.h>
#include <nanovg_gl.h>