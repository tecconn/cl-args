#ifndef ARGS_H
#define ARGS_H

#include <string>
#include <vector>

using namespace std;

namespace cl
{
	namespace args
	{

		template <unsigned int TypeId>
		class argument
		{
		public:
			template<class T> typedef void *(*action)(T arg);
		private:
			vector<string> names_;
			int number_of_args_;
			template<class T> action<T> action_;
			bool required_;
			string help_;
			string meta_;
			template<class T> T default_value_;
		public:
			~argument();
			argument();
			argument<TypeId> add_name(string name);
			void remove_name(string name);
			template<typename T> action<T> get_action();
			template<class T> void set_action(action<T> action);
			bool get_required() const;
			void set_required(bool required);
			string get_help() const;
			void set_help(string help);
			string get_meta() const;
			void set_meta(string meta);
			template<class T> T get_default_value() const;
			template<class T> void set_default_value(T default_value);
		};

	}
}

#endif