#pragma once
#include "SFML/Graphics.hpp"

template<typename T> class Singleton
{
public:

	/*
		\Brief return the current instance
	*/
	static T* getInstance()
	{
		if (m_instance == nullptr) // if the instance doesn't exist
		{
			m_instance = new T(); // create the instance
		}

		return m_instance; // return the instance
	}

	// default virtual destructor
	virtual ~Singleton() {};

private:
	// current instance
	static T* m_instance;
};

// defined the current instance
template<typename T>T* Singleton<T>::m_instance = nullptr;