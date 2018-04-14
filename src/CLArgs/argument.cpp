#include "argument.h"

using namespace std;

namespace cl
{
	namespace args
	{

		argument::argument()
		{
			this->number_of_args_ = 0;
			this->names_ = vector<string>();
			this->help_ = "";
			this->meta_ = "";
			this->required_ = false;
			this->action_ = nullptr;
		}

		argument::~argument() = default;

		argument argument::add_name(const string name)
		{
			this->names_.push_back(name);
			return *this;
		}

		void argument::remove_name(const string name)
		{
			for (unsigned int i = 0; i < this->names_.size(); i++)
			{
				if (this->names_[i] == name)
				{
					this->names_.erase(this->names_.begin() + i);
					i--;
				}
			}
		}

		argument::action argument::get_action() const
		{
			return this->action_;
		}

		void argument::set_action(const action action)
		{
			this->action_ = action;
		}

		bool argument::get_required() const
		{
			return this->required_;
		}

		void argument::set_required(const bool required)
		{
			this->required_ = required;
		}

		string argument::get_help() const
		{
			return this->help_;
		}

		void argument::set_help(const string help)
		{
			this->help_ = help;
		}

		string argument::get_meta() const
		{
			return this->meta_;
		}

		void argument::set_meta(const string meta)
		{
			this->meta_ = meta;
		}
	}
}