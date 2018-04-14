#ifndef ARGS_H
#define ARGS_H

#include <string>
#include <vector>

using namespace std;

namespace cl
{
	namespace args
	{

		class argument
		{
		public:
			typedef void *(*action)(void* arg);
		private:
			vector<string> names_;
			int number_of_args_;
			bool required_;
			action action_;
			string help_;
			string meta_;
			string default_value_;
		public:
			~argument();
			argument();
			argument add_name(string name);
			void remove_name(string name);
			action get_action() const;
			void set_action(action action);
			bool get_required() const;
			void set_required(bool required);
			string get_help() const;
			void set_help(string help);
			string get_meta() const;
			void set_meta(string meta);
			string get_default_value() const;
			void set_default_value(string default_value);
		};

	}
}

#endif