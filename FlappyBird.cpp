#include "FlappyBird.h"

void FlappyBird::main(std::vector<std::wstring> &args) throw(AWTException)
{
	Robot *r = new Robot();
	while (true)
	{
		r->mouseMove(0, 0);
	}
}
