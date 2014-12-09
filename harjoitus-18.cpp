//Made by Toni Pajukanta,Ryhmä IIO14S1
#include <iostream> 
#include <cstring>
using namespace std;
struct god
{
	int ika;
	char nimi[20];
};
int main()
{
	int ind, i, j;
	const int maxdog = 5;
	god dog[maxdog];
	cout << "Koirien tiedot\n";
	for (ind = 0; ind < maxdog; ind++){

		cout << "Anna " << ind + 1 << ". koiran nimi ja ika: ";
		cin >> dog[ind].nimi >> dog[ind].ika;
	
	
	}
	cout << "\nTaulukko ennen jarjestysta\n";
	for (ind = 0; ind < maxdog; ind++) {
		cout << "Koira " << ind + 1 << ". Nimi ja ika: " << dog[ind].nimi << " " << dog[ind].ika << "\n";

	}

	cout << "\nSorting with age... \n";
	for (i = 0; i < (maxdog - 1); i++)
		for (j = i + 1; j < maxdog; j++)
			if (dog[j].ika<dog[i].ika)
			{
		god apu = dog[i];
		dog[i] = dog[j];
		dog[j] = apu;
			}
	cout << "Sorting done\n";
	for (ind = 0; ind < maxdog; ind++) {
		cout << "Koira " << ind + 1 << ". Nimi ja ika: " << dog[ind].nimi << " " << dog[ind].ika << "\n";
	}
		cout << "\nSorting with names... \n";
		for (i = 0; i < (maxdog - 1); i++)
			for (j = i + 1; j < maxdog; j++)
				if (strcmp (dog[i].nimi,dog[j].nimi)>0)
				{
			god apu = dog[i];
			dog[i] = dog[j];
			dog[j] = apu;
				}
		cout << "Sorting done\n";
		for (ind = 0; ind < maxdog; ind++) {
			cout << "Koira " << ind + 1 << ". Nimi ja ika: " << dog[ind].nimi << " " << dog[ind].ika << "\n";

	}


	
	
	/*const int maxtaulu = 4;
	int taulu[maxtaulu] = { 2, 7, 1, 3 };
	int ind;
	cout << "Taulukko ennen jarjestysta\n";
		for (ind = 0; ind < 5; ind++) {
			cout << taulu[ind] << " ";
		}
		cout << endl;
		for (int i = 0; i < maxtaulu - 1; i++)
			for (int j = i +1; j < maxtaulu; j++)
				if (taulu[i] > taulu[j])
				{
			int tmp = taulu[j];
			taulu[j] = taulu[i];
			taulu[i] = tmp;

				}

		cout << "Taulukko "

	return 0;*/ 
}