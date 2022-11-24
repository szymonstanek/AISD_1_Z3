#include <iostream>
using namespace std;

int main() {
    int wybor;
    cin >> wybor;
    switch (wybor) {
        default:
            cout << "Blad";
        case 1:{
            const int rozmiar = 10;
            int tab[rozmiar];
            int licznik = 0;
            for(int n=0; n<10;n++){
                cin >> tab[n];
            }
            int najwieksza = tab[9];
            for(int n=9;n>=0;n--){
                if (tab[n]<tab[n-1])
                       najwieksza = tab[n-1];
            }
            for(int n=0; n<10; n++){
                if (tab[n] == najwieksza)
                    licznik++;
            }
            cout << najwieksza << " " << licznik;
        }
        case 2:{
            string tekst;
            string wzorzec;
            int MEM; //Pamiec chwilowo znalezionych pasujacych/size
            int licznik =0; //ilosc MEM czyli pelnych znalezionych
            cin >> tekst >> wzorzec;
            for(int n = 0; n<tekst.size(); n++){
                MEM = 0;
                for (int i=0; i<wzorzec.size(); i++){
                    if (wzorzec[i] == tekst[n+i]){
                        MEM++;
                    //    cout << "Mem++" << endl;
                    //    cout << tekst[n] << "!!" << wzorzec[i]<<endl;
                    }//else
                    //    cout << tekst[n] << "??" << wzorzec[i]<<endl;

                }
                if(MEM == wzorzec.size())
                    licznik++;
            }
            cout << licznik;
            }
            case 3:{   //omylkowo napisalem program szukajacy drugiej najwiekszej zamiast drugiej najmniejszej
                const int rozmiar = 10;
                double tablica[rozmiar];
                double MEM1 ;
                double MEM2 = 0;
                for(int n=0;n<rozmiar;n++){
                    cin >> tablica[n];
                }
                if (tablica[0]<tablica[1]){
                    MEM1 = tablica[1];
                }
                else if (tablica[0]>tablica[1]){
                    MEM1 = tablica[0];
                }
                else
                    MEM1 = tablica[0];
                for(int n=1; n<rozmiar;n++){
                    if (MEM1<tablica[n+1]){
                        MEM1 = tablica[n+1];}
                    }//2
                if(tablica[0]==MEM1 || tablica[1]==MEM1){
                    if (tablica[0]==MEM1)
                        MEM2=tablica[1];
                    else if (tablica[1]==MEM1)
                        MEM2=tablica[0];
                    else
                        MEM2=MEM1;
                }else if (tablica[0]!=MEM1 && tablica[1]!=MEM1){
                    if (tablica[0]==tablica[1])
                        MEM2=tablica[0];
                    if (tablica[0]>tablica[1])
                        MEM2=tablica[0];
                    if (tablica[0]<tablica[1])
                        MEM2=tablica[1];
                }

                for(int n=1; n<rozmiar-1;n++){
                    if (tablica[n]<tablica[n+1] && tablica[n+1]<MEM1 && tablica[n+1]>MEM2) {
                        MEM2 = tablica[n+1];
                        //cout << "n="<< n << " MEM2=" << MEM2 << " TABn=" << tablica[n] << " TABn+1=" << tablica[n+1]<< endl;
                    }
                    else if (tablica[n]>tablica[n+1] && tablica[n+1]<MEM1 && tablica[n+1]>MEM2){
                        MEM2 = tablica[n+1];
                        //cout << "!n="<< n << " MEM2=" << MEM2 << " TABn=" << tablica[n] << " TABn+1=" << tablica[n+1]<< endl;
                    }
                    else if (tablica[n+1] == MEM1)
                        MEM2=tablica[n];
                }
                if (MEM2 == MEM1)
                    cout << "Nie istnieje" << endl;
                else
                    cout << MEM2 << endl;
            }
        }
    return 0;
}
