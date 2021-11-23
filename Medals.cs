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

// Please note - This is only a conversion of code originall written in C++
// If you do not have TrueMedals.cs present, make sure the project also doesn't refer to it or NALA will NOT compile.
// Since C# doesn't support #include, this is a bit of a downer, I suppose. Just as in C++ it also means that "#define TRUE_MEDALS" should be "#undef TRUE_Medals"

//#include "Medals.hpp"

// When you don't have the TrueMedals.hpp file (which you shouldn't have)
// Make sure you set this to "#undef TRUE_MEDALS" or the system may go a bit boom-boom!
#define TRUE_MEDALS

//#include <string.h>
//#include <string>

namespace TrickyMedals {

	partial class Medals {
		//char _Storage[100]{ "Store" };
		static string _Storage = "Store";

		static public void Storage(string s) { //void Storage(string s) {
			_Storage = s; //strcpy_s(_Storage, s);
		}

		static string Storage() {
			return _Storage;
		}

		static void LoadFromJCR6(string main, string medalfile) { LoadFromJCR6(UseJCR6.JCR6.Dir(main), medalfile); }

	}
}

#if TRUE_MEDALS
//#include "TrueMedals.hpp"
//#include "Medals.hpp"
#else
namespace TrickyMedals {
	partial class Medals {
		static void LoadFromInternet() { } // Make sure all points are known
		static int MedalValue(string game, string medal) { return 0; }
		static int FullScore() { return 0; }
		static void Award(string game, string medal) { }
		static int MaxScore() { return 0; }
		static int ScorePercent() { return 0; }
		static void LoadFromJCR6(UseJCR6.TJCRDIR main, string medalfile) { }
	}
}
#endif