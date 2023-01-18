#include "mydefs.h"

using namespace std;

size_t showAll(vector<string>& vnames, vector<float>& vdegrees) {
    int i = 0;
    for (string name : vnames) {
        cout << "\nName: " << name << " hat die Note: " << vdegrees.at(i++);
    }
    return vnames.size();
}

void addZeile(vector<string>& parmNames, vector<float>& parmDegrees)
{
    string strName = " ";
    float fDegree;
    cout << "Namen eingeben: ";
    getline(cin, strName);
    parmNames.push_back(strName);

    cout << "\nNote eingeben: ";
    cin >> fDegree;
    parmDegrees.push_back(fDegree);
}

void delZeile(vector<string>& parmNames, vector<float>& parmDegrees)
{
    if (!parmNames.empty()) {
        cout << parmNames.at(parmNames.size() - 1) << " mit der Note ";
        // alternativ paramNames.back()
        cout << parmDegrees.at(parmDegrees.size() - 1) << " wird geloescht!" << endl;
        // alternativ paramDegrees.back()
        parmNames.pop_back();
        parmDegrees.pop_back();
    }
    else {
        cout << "Die Notenliste ist leer!" << endl;
    }
}