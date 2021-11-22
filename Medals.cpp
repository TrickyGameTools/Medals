
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
