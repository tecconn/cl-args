#include "clargs.h"

using namespace std;

namespace cl
{
	namespace args
	{
		argument_parser::argument_parser()
		{
			this->description_ = nullptr;
			this->version_ = "0.0.0.0";
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

	}
}