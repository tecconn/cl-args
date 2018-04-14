#include "stdafx.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace cl::args;

namespace CLArgsUnitTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* test[] = { "this is a test" };
			auto arg_parser = argument_parser(0, test);
			arg_parser.set_version("0.0.0.1");

		}

	};
}