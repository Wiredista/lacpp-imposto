#include <bits/stdc++.h>
using namespace std;


int main() {
	float rendaSal, rendaServ, rendaCap, gastMed, gastEdu;
	float iSal, iServ, iCap, ded, abat;
	cout << "Renda anual com salário: ";
	cin >> rendaSal;
	cout << "Renda anual com prestação de serviço: ";
	cin >> rendaServ;
	cout << "Renda anual com ganho de capital: ";
	cin >> rendaCap;
	cout << "Gastos médicos: ";
	cin >> gastMed;
	cout << "Gastos educacionais: ";
	cin >> gastEdu;

	cout << fixed << setprecision(2);

	// Calculo imposto
	iSal = (rendaSal/12 < 3000) ? 0 : (rendaSal/12 < 5000) ? 0.1 * rendaSal : 0.2 * rendaSal;
	iServ = 0.15 * rendaServ;
	iCap = 0.2 * rendaCap;
	ded = 0.3 * (iSal + iServ + iCap);
	abat = ((0.3 * (iSal + iServ + iCap) > ded) ? ded : (0.3 * (iSal +iServ + iCap)));
	// -- END --

	cout << "\nRELATÓRIO DE IMPOSTO DE RENDA \n\nCONSOLIDADO DE RENDA:\n";
	cout << "Imposto sobre salário: " << iSal << endl;
	cout << "Imposto sobre serviços: " << iServ << endl;
	cout << "Imposto sobre ganho de capital: " << iCap << endl;

	cout << "\n\nDEDUÇÕES:\n";
	cout << "Máximo dedutível: " << ded << endl;
	cout << "Gastos dedutiveis: " << gastMed + gastEdu << endl;

	cout << "\nRESMO:\n";
	cout << "Imposto bruto total: " << iSal + iServ + iCap << endl;
	cout << "Abatimento: " << abat << endl;
	cout << "Imposto Devido: " << (iSal + iServ + iCap) - abat << endl;
}
