#include <stdio.h>
#include "../Interface/IApplication.hpp"

using namespace My;

namespace My
{
	extern IApplication* g_pApp;
}

int main(int argc, char** argv)
{
	int ret;

	if ((ret = g_pApp->Initialize() != 0))
	{
		printf("App Initialize failed, will exit now.\n");
		return ret;
	}

	return 0;
}