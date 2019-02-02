#include <iostream>
#include "glad/glad.h"
#include <GLFW/glfw3.h>


static int joysticks[GLFW_JOYSTICK_LAST + 1] = {0};
static int joystick_count = 0;

static void joysticProc(int jid, int event)
{
}

int  main()
{
	if (!glfwInit())
		exit(EXIT_FAILURE);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
	auto window = glfwCreateWindow(800, 600, "VVQuiz", 0, 0);
	if (!window) return 1;

	int jid, hat_buttons = GLFW_FALSE;

	for (jid = GLFW_JOYSTICK_1; jid <= GLFW_JOYSTICK_LAST; jid++)
	{
		if (glfwJoystickPresent(jid))
			joysticks[joystick_count++] = jid;
	}
	glfwSetJoystickCallback(joysticProc);
	glfwMakeContextCurrent(window);
	gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);
	for (;;)
	{
		glClear(GL_DEPTH_BUFFER_BIT | GL_COLOR_BUFFER_BIT);
		glClearColor(0.1,0.0,.0,1.0);
		glfwSwapBuffers(window);
		glfwPollEvents();
		if (glfwWindowShouldClose(window)) break;
	}
	glfwTerminate();
    return 0;
}