#include <iostream>
#include <GLFW/glfw3.h>

int  main()
{
	if (!glfwInit())
		exit(EXIT_FAILURE);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
	auto window = glfwCreateWindow(800, 600, "VVQuiz", 0, 0);
    while (!glfwWindowShouldClose(window))
		glfwPollEvents();
    return 0;
}