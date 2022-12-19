#pragma once

#include <vector>
#include <windows.h>           // for windows
#include <conio.h>

using std::vector;
namespace Ampel {
	// Ampel blinkt auch im AUS-Zustand
	//constexpr int INFINIT = -1;
	// Ampel blinkt alle 2 Sec ==> im AUS-Zustand sind alle Ampeln aus!
	constexpr int INFINIT = 2;

	constexpr int A1GR_A2RT = 0;
	constexpr int A1GLB_A2RT = 1;
	constexpr int A1RT_A2RT_2 = 2;
	constexpr int A1RT_A2GLBRT = 3;
	constexpr int A1RT_A2GR = 4;
	constexpr int A1RT_A2GLB = 5;
	constexpr int A1RT_A2RT_6 = 6;
	constexpr int A1GLBRT_A2RT = 7;
	constexpr int BLINK = 8;

	enum class ePhase {
		A1GR_A2RT, A1GLB_A2RT, A1RT_A2RT_2, A1RT_A2GLBRT,
		A1RT_A2GR, A1RT_A2GLB, A1RT_A2RT_6, A1GLBRT_A2RT, BLINK
	};

	constexpr char AUS = 'q';
	constexpr char TAG = 't';
	constexpr char NACHT = 'n';

	enum class eAction { AUS, TAG, NACHT };

	struct Steuerung {
		int iphase;
		int dauer;
	};

	typedef struct Steuerung TSteuerung;

	inline vector<TSteuerung> vPhasen = { {0, 20},{1, 2},{2, 2},{3, 2},
										  {4, 20},{5, 2},{6, 2},{7, 2},
										  {8,INFINIT} };
	char UserAction();
	int switchAmpeln(ePhase);
	void showState(ePhase);
};