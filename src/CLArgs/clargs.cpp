#include "clargs.h"

using namespace std;

namespace cl
{
	namespace args
	{
		argument_parser::argument_parser(const int argument_count, char* arguments[])
		{
			this->argument_count_ = argument_count;
			this->cli_arguments_ = arguments;
			this->description_ = nullptr;
			this->version_ = "0.0.0.0";
			this->arguments_ = vector<argument>();
		}

		const string& argument_parser::get_description() const
		{
			return this->description_;
		}

		void argument_parser::set_description(const string& description)
		{
			this->description_ = description;
		}


		const string& argument_parser::version() const
		{
			return version_;
		}

		void argument_parser::set_version(const string& version)
		{
			version_ = version;
		}

		argument_parser* argument_parser::add_argument(argument& argument)
		{
			this->arguments_.push_back(argument);
			return this;
		}

		void argument_parser::parse()
		{
			for (auto i = 0; i < this->argument_count_; i++)
			{
				
			}
		}

		void parseCliArgument(char cli_argument[])
		{
			
		}

	}
}