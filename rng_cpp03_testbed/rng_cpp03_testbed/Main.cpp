#include <glad\glad.h>
#include <GLFW\glfw3.h>
#include <iostream>

/**
 * J Hoffman
 * 04/06/18
 */

const int WIDTH = 320;
const int HEIGHT = 224;
int scale = 2;
GLFWwindow* wi;

int main() {

	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); //omits legacy features

	wi = glfwCreateWindow(WIDTH * scale, HEIGHT * scale, "RNG03: testbed", NULL, NULL);

	glfwMakeContextCurrent(wi);

	gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

	glViewport(0, 0, WIDTH, HEIGHT);

	while(!glfwWindowShouldClose(wi)) {
		glfwSwapBuffers(wi);
		glfwPollEvents();
	}

	glfwTerminate();

}