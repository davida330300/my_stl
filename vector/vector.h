#pragma once

namespace stl
{

	template <typename T>
	class Vector
	{

	public:
		Vector();
		~Vector();

        unsigned int size();
        unsigned int capacity();

		// Access
		T & at(unsigned int index);
		const T & at(unsigned int index) const;

		T & front();
		const T & front() const;

		T & back();
		const T & back() const;

		T * data();
		const T * data() const;
		
		T & operator [] (unsigned int index);
		const T & operator [] (unsigned int index)const;

		// modifier
		void push_back(const T & val);

		void pop_back();
	
	private:
		T* m_data;
		unsigned int m_size;
		unsigned int m_capacity;

	};
};