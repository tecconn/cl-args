#include "argument.h"

using namespace std;

namespace cl
{
	namespace args
	{

		template <unsigned TypeId>
		argument<TypeId>::argument()
		{
			this->names_ = nullptr;
			this->action_ = nullptr;
			this->help_ = "";
			this->meta_ = "";
			this->number_of_args_ = 0;
			this->required_ = false;
			this->default_value_ = NULL;
		}

		template <unsigned TypeId>
		argument<TypeId>::~argument()
		{

		}

		template <unsigned TypeId>
		argument<TypeId> argument<TypeId>::add_name(const string name)
		{
			this->names_.insert(name);
			return this;
		}

		template <unsigned TypeId>
		void argument<TypeId>::remove_name(string name)
		{
			for (auto i = 0; i < this->names_.size(); i++)
			{
				if (this->names_[i] == name)
				{
					this->names_.erase(this->names_.begin() + i);
					i--;
				}
			}
		}

		template <unsigned TypeId>
		template <class T>
		argument<TypeId>::action<T> argument<TypeId>::get_action()
		{
			return this->action_;
		}

		template <unsigned TypeId>
		template <class T>
		void argument<TypeId>::set_action(const action<T> action)
		{
			this->action_ = action;
		}

		template <unsigned TypeId>
		bool argument<TypeId>::get_required() const
		{
			return this->required_;
		}

		template <unsigned TypeId>
		void argument<TypeId>::set_required(const bool required)
		{
			this->required_ = required;
		}

		template <unsigned TypeId>
		string argument<TypeId>::get_help() const
		{
			return this->help_;
		}

		template <unsigned TypeId>
		void argument<TypeId>::set_help(const string help)
		{
			this->help_ = help;
		}

		template <unsigned TypeId>
		string argument<TypeId>::get_meta() const
		{
			return this->meta_;
		}

		template <unsigned TypeId>
		void argument<TypeId>::set_meta(const string meta)
		{
			this->meta_ = meta;
		}

		template <unsigned TypeId>
		template <class T>
		T argument<TypeId>::get_default_value() const
		{
			return this->default_value_;
		}

		template <unsigned TypeId>
		template <class T>
		void argument<TypeId>::set_default_value(T default_value)
		{
			this->default_value_ = default_value;
		}
	}
}