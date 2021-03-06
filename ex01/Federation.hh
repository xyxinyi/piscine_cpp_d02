#ifndef FEDERATION_H_
# define FEDERATION_H_

#include <iostream>
#include <string>
#include "Warpsystem.hh"

namespace Federation
{
	namespace Starfleet
	{
		class Ship
		{
			int _length;
			int _width;
			std::string _name;
			short _maxWarp;
			WarpSystem::Core *core;

		public:
			Ship(int length, int width, std::string name, short maxWarp);
			~Ship();
			void setupCore(WarpSystem::Core *core);
			void checkCore();
		};
	};

	class Ship
	{
		int _length;
		int _width;
		std::string _name;
		WarpSystem::Core *core;

	public:
		Ship(int length, int width, std::string name);
		~Ship();
		void setupCore(WarpSystem::Core *core);
		void checkCore();
	};
};

#endif
