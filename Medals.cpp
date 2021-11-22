// Lic:
// Medals.cpp
// Medals - Fake File
// version: 21.11.22
// Copyright (C) 2021 Jeroen P. Broks
// This software is provided 'as-is', without any express or implied
// warranty.  In no event will the authors be held liable for any damages
// arising from the use of this software.
// Permission is granted to anyone to use this software for any purpose,
// including commercial applications, and to alter it and redistribute it
// freely, subject to the following restrictions:
// 1. The origin of this software must not be misrepresented; you must not
// claim that you wrote the original software. If you use this software
// in a product, an acknowledgment in the product documentation would be
// appreciated but is not required.
// 2. Altered source versions must be plainly marked as such, and must not be
// misrepresented as being the original software.
// 3. This notice may not be removed or altered from any source distribution.
// EndLic

#include "Medals.hpp"

// When you don't have the TrueMedals.hpp file (which you shouldn't have)
// Make sure you set this to "#undef TRUE_MEDALS" or the system may go a bit boom-boom!
#define TRUE_MEDALS

#include <string.h>
#include <string>

namespace TrickyMedals {
	char _Storage[100]{ "Store" };

	void Storage(const char* s) {
		strcpy_s(_Storage, s);
	}

	std::string Storage() {
		return _Storage;
	}
	
	void LoadFromJCR6(std::string main, std::string medalfile) { LoadFromJCR6(&jcr6::Dir(main), medalfile); }

}

#ifdef TRUE_MEDALS
#include "TrueMedals.hpp"
#include "Medals.hpp"
#else
namespace TrickyMedals {
	void LoadFromInternet(){} // Make sure all points are known
	int MedalValue(const char* game, const char* medal) { return 0; }
	int FullScore() { return 0; }
	void Award(const char* game, const char* medal){}
	int MaxScore() {}
	int ScorePercent() {}
	void LoadFromJCR6(jcr6::JT_Dir* main, std::string medalfile) {}
}
#endif