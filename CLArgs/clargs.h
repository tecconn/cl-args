#ifndef CLI_ARGS_H
#define CLI_ARGS_H

#include <string>

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
		public:
			argument_parser()
			{
				this->description_ = nullptr;
			}

			const string& get_description() const
			{
				return this->description_;
			}

			void set_description(const string& description)
			{
				this->description_ = description;
			}


			const string& version() const
			{
				return version_;
			}

			void set_version(const string& version)
			{
				version_ = version;
			}
		};

	}
}

#endif