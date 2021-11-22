// Lic:
// Medals.hpp
// Medals - Header
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
#pragma once
#include <string>
#include <jcr6_core.hpp>

namespace TrickyMedals {
	//extern char Storage[100];
	void LoadFromInternet(); // Make sure all points are known
	void LoadFromJCR6(std::string main, std::string medalfile);
	void LoadFromJCR6(jcr6::JT_Dir* main, std::string medalfile);
	int MedalValue(const char* game, const char* medal);
	int FullScore();
	void Award(const char* game, const char* medal);
	int MaxScore();
	int ScorePercent();

	void Storage(const char* s);
	std::string Storage();
}