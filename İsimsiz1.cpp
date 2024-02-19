#include <iostream>
#include <clocale>
#include <windows.h>
#include <fstream>
#include <cstring>
#include <stdexcept>
#include <cstdlib>
#include <vector>

using namespace std;

// Fonksiyon bildirimleri
void special();
void numbers();
void words();
void mix();
void complex();
void miliar();
void specialnumber();
void tc();
void fastattack();
void formeword();
void fundamentalword();
void mixword();
void autoword();
void complexword();

//ana fonksiyon b�l�m�
int main() {
	setlocale(LC_ALL,"Turkish");
    system("@echo off");
    system("title WordList Maker / FurOfTheWeak");
    //system("start https://bandirma.site");
    //system("mkdir WordLists");
    int color = 0;
    int person;
    
    cout << " _______           _______    ___ _______ _            _  _  _             _    \n";
    cout << "(_______)         (_______)  / __|_______) |          | || || |           | |    \n";
    cout << " _____ _   _  ____| |   | |_| |__    _   | |__  _____ | || || |_____ _____| |  _ \n";
    cout << "|  ___) | | |/ ___) |   | (_   __)  | |  |  _ \\| ___  | || || | ___ (____ | |_/ )\n";
    cout << "| |   | |_| | |   | |___| | | |     | |  | | | | ____ | || || | ____/ ___ |  _ ( \n";
    cout << "|_|   |____/|_|    \\_____/  |_|     |_|  |_| |_|_____) \\_____/|_____)_____|_| \\_)\n";
    cout <<"\n                             Created by Furkan G�l                                  ";
    cout << "\n\n[UYARI]*Bu program illegal kullan�mlar i�in kodlanmam��. K�t� ama�l� yaz�l�mlar� desteklememektedir.\nProgram� amac� d���nda kullanmak yasakt�r." << endl;
    cout << "\nY�kleniyor..." << endl;

     while (color < 10) {
        system("color 1");
        system("color 2");
        system("color 3");
        system("color 4");
        system("color 5");
        system("color 6");
        system("color 7");

        color++;
    }

    system("color 0");
    cout << "____________________________________________________________\n";
    cout << "|                                                          |" <<endl;
    cout << "| L�tfen wordlist olu�turaca��n�z ki�iyi se�iniz.          |" << endl;
    cout << "| [1] �zel sald�r� Wordlist Olu�turucu                     |" << endl;
    cout << "| [2] Say� Wordlist Olu�turucu                             |" << endl;
    cout << "| [3] Kelime Wordlist Olu�turucu                           |" << endl;
    cout << "| [4] Say� ve Kelime Kar���k Wordlist Olu�turucu           |" << endl;
    cout << "| [5] Kompleks �zel �fadeler Barnd�ran Wordlist Olu�turucu |" << endl;
    cout << "|__________________________________________________________|\n";
    cout<<"Wordlist Numaras�n� giriniz:";
    cin >> person;

    switch (person) {
        case 1: special(); break;
        case 2: numbers(); break;
        case 3: words(); break;
        case 4: mix(); break;
        case 5: complex(); break;
        default: cout << "\n\n\n\nL�tfen ge�erli say� giriniz !\n\n\n" << endl;
    }

    return 0;
}
//bu aral�k sadece ana men�deki se�imlerin fonksiyonunu i�erir
void special() {
    cout << "Deneme" << endl;
}
void numbers() {
	system("cls");
	system("color 2");
	int list;
	cout<<">>>Yaln�zca say�lar ile wordlist olu�turucuya ho�geldiniz.\n Burada say�lar ile s�n�rlar�n�z� zorlaman�za yard�mc� olaca��z.\n>>>L�tfen ilginizi �eken wordlisti numaras�n� giriniz.\n";
    cout<<"_____________________________________________________________________\n";
    cout<<"|                                                                   |\n";
    cout<<"| [1] 1 Milyarl�k Wordlist Olu�turucu                               |\n";
    cout<<"| [2] �zel Say� Aral���nda Wordlist Olu�turucu                      |\n";
	cout<<"| [3] TC Kimlik Numaras� �zerinden Wordlist Olu�turucu              |\n";
	cout<<"| [4] H�zl� Tarama ��in Haz�r Wordlist Olu�turucu                   |\n";
	cout<<"|___________________________________________________________________|\n";
	cout<<"Liste Numaras�: ";
    cin>>list;
    switch(list){
    	case 1: miliar();
		 break;
		case 2: specialnumber();
		 break;
		case 3: tc();
		 break;
		case 4: fastattack();
		 break;
		 default:
		 cout<<"L�tfen Ge�erli Bir Mod Se�iniz !";
		 break;
	}
}
void words() {
	system("cls");
	system("color 2");
	int numberword;
	cout<<">>>Merhaba, kelimeler ile wordlist olu�turma program�na ho�geldiniz.\n>>>Bu b�l�m girmek istedi�iniz kelimeleri mixler ve size en iyi sonu�lar i�in wordlist program� olu�turur.\n>>>L�tfen sizr uygun olan modu se�iniz.\n";
	cout<<"_____________________________________________________________\n";
	cout<<"|                                                           |\n";
	cout<<"| [1]Kendin ��in Kelime Wordlist Olu�turucu                 |\n";
	cout<<"| [2]Temel Kelime Wordlist Ol�turucu                        |\n";
	cout<<"| [3]Mix Kelime Wordlist Olu�turucu                         |\n";
	cout<<"| [4]Otomatik Kelime Wordlist Olu�turucu                    |\n";
	cout<<"| [5]Kompleks Kelime Wordlist Olu�turucu (Tavsiye edilir)   |\n";
	cout<<"|___________________________________________________________|\n";
	cout<<"Liste Numaras�: ";
    cin>>numberword;
    switch(numberword){
    	case 1: formeword();
		 break;
		case 2: fundamentalword();
		 break;
		case 3: mixword();
		 break;
		case 4: autoword();
		 break;
		case 5: complexword();
		 break;
		 default:
		 cout<<"L�tfen Ge�erli Bir Mod Se�iniz !";
		 break;
	}
	

	}
void mix() {
   	setlocale(LC_ALL,"Turkish");
	int born;
	int age;
	char name[20];
	char surname[20];
	char mother[20];
	char father[20];
	char team[20];
	char teamshort[20];
	
	cout<<"L�fen ad�n�z� giriniz: ";
	cin>>name;
	cout<<"L�tfen soyad�n�z� giriniz: ";
	cin>>surname;
    cout<<"L�fen  baban�z�n ad�n� giriniz: ";
	cin>>father;
	cout<<"L�fen annenizin ad�n� giriniz: ";
	cin>>mother;
	cout<<"L�tfen do�um y�l�n�z� giriniz: ";
	cin>>born;
	cout<<"L�tfen tuttu�unuz tak�m� giriniz: ";
	cin>>team;
	cout<<"L�tfen tuttu�unuz tak�m�n k�saltmas�n� giriniz:" ;
	cin>>teamshort;
	cout<<"L�tfen ya��n�z� giriniz: ";
	cin>>age;
	cout<<"\n\n\n WordList Olu�turuluyor...";
	for(int color=0;color<5;color++){
	system("color 0");
    system("color 1");
    system("color 2");
    system("color 3");
	}
	system("cls");
	system("color 0");
	std::ofstream dosya("kendilistemdetayli.txt");
	 if (!dosya.is_open()) {
    std::cerr << "Dosya olu�turulamad� veya a��lamad�!" << std::endl;
    }

	for(int i=1900;i<=2030;i++){
		dosya<<name<<i<<endl;
		dosya<<surname<<i<<endl;
		dosya<<born<<i<<endl;
		dosya<<age<<i<<endl;
		dosya<<father<<i<<endl;
		dosya<<mother<<i<<endl;
		dosya<<team<<i<<endl;
		dosya<<teamshort<<i<<endl;
		dosya<<i<<name<<endl;
		dosya<<i<<surname<<endl;
		dosya<<i<<born<<endl;
		dosya<<i<<age<<endl;
		dosya<<i<<mother<<endl;
		dosya<<i<<father<<endl;
		dosya<<i<<team<<endl;
		dosya<<i<<teamshort<<endl;
	}
	for(int k=0;k<=100;k++){
		dosya<<name<<k<<endl;
		dosya<<surname<<k<<endl;
		dosya<<born<<k<<endl;
		dosya<<age<<k<<endl;
		dosya<<father<<k<<endl;
		dosya<<mother<<k<<endl;
		dosya<<team<<k<<endl;
		dosya<<teamshort<<k<<endl;
		dosya<<k<<name<<endl;
		dosya<<k<<surname<<endl;
		dosya<<k<<born<<endl;
		dosya<<k<<age<<endl;
		dosya<<k<<mother<<endl;
		dosya<<k<<father<<endl;
		dosya<<k<<team<<endl;
		dosya<<k<<teamshort<<endl;
		
		
		
		
	}
	dosya.close();
	cout<<"\n\n\n\n\nL�tfen bilgisayar�n�zda kendilistemdetayli.txt ad�ndaki dosyay� bulunuz. Wordlistiniz ba�ar�l� bir �ekilde kendilistemdetayli.txt dosyas�nda olu�turuldu.\n\n\n\n ";

}
void complex() {
	
    cout << "Deneme" << endl;
    

}
//bu aral�k say� fonksiyonun alt men�s�ndeki fonksiyonlar� i�erir
void miliar(){
	system("cls");
	cout<<"\n\n\n\n�ok fazla girdi girildi�inden bu i�lem yakla��k olarak 5 dakika s�recek(opsiyonel):)\n\n\n\n1 milyarl�k say� listesi olu�turuluyor... \n\n\n\n";
	std::ofstream dosya("milyar.txt");
	 if (!dosya.is_open()) {
    std::cerr << "Dosya olu�turulamad� veya a��lamad�!" << std::endl;
    }
    for(int i=0;i<10000000000;i++){
    	dosya<<i<<endl;
	}
	dosya.close();
	cout<<"\n\n\n\n\nL�tfen bilgisayar�n�zda milyar.txt ad�ndaki dosyay� bulunuz. Wordlistiniz ba�ar�l� bir �ekilde milyar.txt dosyas�nda olu�turuldu.\n\n\n\n ";
}
void specialnumber() {
    system("cls");
    int max, min;
    cout << "�zel aral�kta say� wordlisti olu�turucusuna ho�geldiniz. L�tfen girilecek say�n�n hangi aral�kta olaca��n� giriniz.";
    cout << "\n\nMinimum de�er: ";
    cin >> min;
    cout << "\nMaksimum de�er: ";
    cin >> max;
    std::ofstream dosya("ozelnumaralar.txt");
    if (!dosya.is_open()) {
        std::cerr << "Dosya olu�turulamad� veya a��lamad�!" << std::endl;
    } else {
        while (min <= max) {
            dosya << min << endl;
            min++;
        }
        dosya.close();
        cout << "\n\n\n\n\nL�tfen bilgisayar�n�zda ozelnumaralar.txt ad�ndaki dosyay� bulunuz. Wordlistiniz ba�ar�l� bir �ekilde ozelnumaralar.txt dosyas�nda olu�turuldu.\n\n\n\n ";
    }
}
void tc() {
    system("cls");
    cout <<"TC  wordlisti olu�turucusuna ho�geldiniz. (5 Dakika s�rebilir)";
    std::ofstream dosya("tcler.txt");
    if (!dosya.is_open()) {
    std::cerr << "Dosya olu�turulamad� veya a��lamad�!" << std::endl;
    } 
    else{
	for(long long i=10000000000;i<=99999999999;i++){
    	dosya<<i<<endl;
	}

    dosya.close();
    cout << "\n\n\n\n\nL�tfen bilgisayar�n�zda tcler.txt ad�ndaki dosyay� bulunuz. Wordlistiniz ba�ar�l� bir �ekilde tcler.txt dosyas�nda olu�turuldu.\n\n\n\n ";
    }
}
void fastattack() {
    system("cls");
    cout <<"�zel derleme  wordlist olu�turucusuna ho�geldiniz. H�zl� sald�r�larda en kullan��l� say�lar� derledik.";
    std::ofstream dosya("hizli.txt");
    if (!dosya.is_open()) {
    std::cerr << "Dosya olu�turulamad� veya a��lamad�!" << std::endl;
    } 
    else{
	for(int i=0;i<=100;i++){
    	dosya<<i<<endl;
	}
	for(int k=1800;k<=2030;k++){
		dosya<<k<<endl;
	}


    dosya.close();
    cout << "\n\n\n\n\nL�tfen bilgisayar�n�zda hizli.txt ad�ndaki dosyay� bulunuz. Wordlistiniz ba�ar�l� bir �ekilde hizli.txt dosyas�nda olu�turuldu.\n\n\n\n ";
    }
}
//bu aral�k kelime fonksiyonun alt men�s�ndeki fonksiyonlar� i�erir
void formeword(){
}
void fundamentalword(){
}
void mixword(){
}
void autoword(){
}
void complexword(){
	system("cls");
	system("color 2");
    cout <<"[*] Komplex kelime wordlisti olu�turucusuna ho�geldiniz.\n[*]Burada sizin bilgilerinizi harmanlay�p en �zel listeleri size sunaca��z.\n ";
    ofstream dosya("komplekskelimeler.txt");
    if(!dosya.is_open()){	
    	cerr<<"osya olu�turulamad� veya a��lamad�!";
	}
	else{
    int uzunluk;
    vector<string> dizi(uzunluk);
    vector<string> dizi2(uzunluk);
    vector<string> birlesmisDizi;
    
    
    cout << "L�tfen dizinin uzunlu�unu belirtin: ";
    cin >> uzunluk;
	if(uzunluk<10){
		system("cls");
		cout<<"L�tfen Minimum 10 kelime giriniz !";
		c
	}
	
    else{
	
	if(uzunluk>100){
		system("cls");
		cout<<"L�tfen 100'den daha d���k kelime giriniz !";
		system("cd..");
	}
	else{
			
		    for(int i = 0; i < uzunluk; i++) {
		        cout << i + 1 << ". kelimeniz: ";
		        cin >> dizi[i];
		    }
		    for(int j = uzunluk - 1; j >= 0; j--) {
		        dizi2[uzunluk - 1 - j] = dizi[j];
		    }
		
		    // Birle�tirilmi� diziyi olu�tur
		
		    for(int i = 0; i < uzunluk; ++i) {
		        birlesmisDizi.push_back(dizi[i] + dizi2[i]);
		    }
		    int yuksel=0;
		
		    // Birle�tirilmi� diziyi yazd�r
		    while(yuksel<uzunluk){
				dosya<<birlesmisDizi[yuksel]<<"\n";
		    	dosya<<
		    	yuksel++;
			}
			
			for (int i=0;i<uzunluk;i++){
					dosya<<dizi[i]+dizi[i];
				
				}
			cout<<"\n\n\nWordlistiniz komplekskelimeler.txt dosyas�na kaydedildi. Bilgisayar�n�zdan dosyay� bulunuz.";
			}
		}
	}
}
