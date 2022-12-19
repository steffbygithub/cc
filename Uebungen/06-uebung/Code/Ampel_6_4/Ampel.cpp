// Ampel.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <iostream>
#include "Ampel.h"

using std::cout; using std::vector;
using namespace Ampel;

	char  Ampel::UserAction() {
		char cresult = TAG;
		if (_kbhit()) {
			switch (_getch()) {
			case int(TAG): break;
			case int(NACHT): {cresult = NACHT; break; }
			case int(AUS): {cresult = AUS; break; }
			default: break;
			}
		}
		return cresult;
	};

	int Ampel::switchAmpeln(ePhase aPhase) {

		if (aPhase == ePhase(BLINK)) {
			char cEndeBlinken = UserAction();
			//Blinken Beenden und mit AnfangsPhase der Ampeln weitermachen
			if (cEndeBlinken == AUS )  return vPhasen[A1RT_A2RT_2].iphase;
			// Bestaendig Blinken in der Nacht
			return vPhasen[BLINK].iphase;
		}
		else {
			// Am Tag alle Ampelphasen nacheinander durchlaufen
 			return (static_cast<int>(aPhase) + 1) % 7;
		}
	};

	void Ampel::showState(ePhase aphase) {
		switch (aphase) {
			// sleep in Linux klein!
		case ePhase(A1GR_A2RT): cout << "A1GR_A2RT\n"; Sleep(vPhasen[A1GR_A2RT].dauer*100); break;
		case ePhase(A1GLB_A2RT): cout << "A1GLB_A2RT\n"; Sleep(vPhasen[A1GLB_A2RT].dauer*100); break;
		case ePhase(A1RT_A2RT_2): cout << "A1RT_A2RT_2\n"; Sleep(vPhasen[A1RT_A2RT_2].dauer*100); break;
		case ePhase(A1RT_A2GLBRT): cout << "A1RT_A2GLBRT\n"; Sleep(vPhasen[A1RT_A2GLBRT].dauer*100); break;
		case ePhase(A1RT_A2GR): cout << "A1RT_A2GR\n"; Sleep(vPhasen[A1RT_A2GR].dauer*100); break;
		case ePhase(A1RT_A2GLB): cout << "A1RT_A2GLB\n"; Sleep(vPhasen[A1RT_A2GLB].dauer*100); break;
		case ePhase(A1RT_A2RT_6): cout << "A1RT_A2RT_6\n"; Sleep(vPhasen[A1RT_A2RT_6].dauer*100); break;
		case ePhase(A1GLBRT_A2RT): cout << "A1GLBRT_A2RT\n"; Sleep(vPhasen[A1GLBRT_A2RT].dauer*100); break;
		case ePhase(BLINK): cout << "BLINK\n"; Sleep(2000); break;
		default: cout << "Fehler in der Schaltung!!!\n"; break;
		}
	};