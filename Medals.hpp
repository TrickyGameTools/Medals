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