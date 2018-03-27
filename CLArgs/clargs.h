#ifndef CLI_ARGS_H
#define CLI_ARGS_H

#include <string>
#include <vector>
#include "argument.h"

using namespace std;

namespace cl
{
	namespace args
	{

		class argument_parser
		{
		private:
			string description_;
			string version_;
			vector<argument<?>> arguments_;
		public:
			argument_parser();

			const string& get_description() const;
			void set_description(const string& description);


			const string& version() const;
			void set_version(const string& version);
		};

	}
}

#endif