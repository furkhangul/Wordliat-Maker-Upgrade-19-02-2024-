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

//ana fonksiyon bölümü
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
    cout <<"\n                             Created by Furkan Gül                                  ";
    cout << "\n\n[UYARI]*Bu program illegal kullanýmlar için kodlanmamýþ. Kötü amaçlý yazýlýmlarý desteklememektedir.\nProgramý amacý dýþýnda kullanmak yasaktýr." << endl;
    cout << "\nYükleniyor..." << endl;

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
    cout << "| Lütfen wordlist oluþturacaðýnýz kiþiyi seçiniz.          |" << endl;
    cout << "| [1] Özel saldýrý Wordlist Oluþturucu                     |" << endl;
    cout << "| [2] Sayý Wordlist Oluþturucu                             |" << endl;
    cout << "| [3] Kelime Wordlist Oluþturucu                           |" << endl;
    cout << "| [4] Sayý ve Kelime Karýþýk Wordlist Oluþturucu           |" << endl;
    cout << "| [5] Kompleks Özel Ýfadeler Barndýran Wordlist Oluþturucu |" << endl;
    cout << "|__________________________________________________________|\n";
    cout<<"Wordlist Numarasýný giriniz:";
    cin >> person;

    switch (person) {
        case 1: special(); break;
        case 2: numbers(); break;
        case 3: words(); break;
        case 4: mix(); break;
        case 5: complex(); break;
        default: cout << "\n\n\n\nLütfen geçerli sayý giriniz !\n\n\n" << endl;
    }

    return 0;
}
//bu aralýk sadece ana menüdeki seçimlerin fonksiyonunu içerir
void special() {
    cout << "Deneme" << endl;
}
void numbers() {
	system("cls");
	system("color 2");
	int list;
	cout<<">>>Yalnýzca sayýlar ile wordlist oluþturucuya hoþgeldiniz.\n Burada sayýlar ile sýnýrlarýnýzý zorlamanýza yardýmcý olacaðýz.\n>>>Lütfen ilginizi çeken wordlisti numarasýný giriniz.\n";
    cout<<"_____________________________________________________________________\n";
    cout<<"|                                                                   |\n";
    cout<<"| [1] 1 Milyarlýk Wordlist Oluþturucu                               |\n";
    cout<<"| [2] Özel Sayý Aralýðýnda Wordlist Oluþturucu                      |\n";
	cout<<"| [3] TC Kimlik Numarasý Üzerinden Wordlist Oluþturucu              |\n";
	cout<<"| [4] Hýzlý Tarama Ýçin Hazýr Wordlist Oluþturucu                   |\n";
	cout<<"|___________________________________________________________________|\n";
	cout<<"Liste Numarasý: ";
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
		 cout<<"Lütfen Geçerli Bir Mod Seçiniz !";
		 break;
	}
}
void words() {
	system("cls");
	system("color 2");
	int numberword;
	cout<<">>>Merhaba, kelimeler ile wordlist oluþturma programýna hoþgeldiniz.\n>>>Bu bölüm girmek istediðiniz kelimeleri mixler ve size en iyi sonuçlar için wordlist programý oluþturur.\n>>>Lütfen sizr uygun olan modu seçiniz.\n";
	cout<<"_____________________________________________________________\n";
	cout<<"|                                                           |\n";
	cout<<"| [1]Kendin Ýçin Kelime Wordlist Oluþturucu                 |\n";
	cout<<"| [2]Temel Kelime Wordlist Olþturucu                        |\n";
	cout<<"| [3]Mix Kelime Wordlist Oluþturucu                         |\n";
	cout<<"| [4]Otomatik Kelime Wordlist Oluþturucu                    |\n";
	cout<<"| [5]Kompleks Kelime Wordlist Oluþturucu (Tavsiye edilir)   |\n";
	cout<<"|___________________________________________________________|\n";
	cout<<"Liste Numarasý: ";
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
		 cout<<"Lütfen Geçerli Bir Mod Seçiniz !";
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
	
	cout<<"Lüfen adýnýzý giriniz: ";
	cin>>name;
	cout<<"Lütfen soyadýnýzý giriniz: ";
	cin>>surname;
    cout<<"Lüfen  babanýzýn adýný giriniz: ";
	cin>>father;
	cout<<"Lüfen annenizin adýný giriniz: ";
	cin>>mother;
	cout<<"Lütfen doðum yýlýnýzý giriniz: ";
	cin>>born;
	cout<<"Lütfen tuttuðunuz takýmý giriniz: ";
	cin>>team;
	cout<<"Lütfen tuttuðunuz takýmýn kýsaltmasýný giriniz:" ;
	cin>>teamshort;
	cout<<"Lütfen yaþýnýzý giriniz: ";
	cin>>age;
	cout<<"\n\n\n WordList Oluþturuluyor...";
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
    std::cerr << "Dosya oluþturulamadý veya açýlamadý!" << std::endl;
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
	cout<<"\n\n\n\n\nLütfen bilgisayarýnýzda kendilistemdetayli.txt adýndaki dosyayý bulunuz. Wordlistiniz baþarýlý bir þekilde kendilistemdetayli.txt dosyasýnda oluþturuldu.\n\n\n\n ";

}
void complex() {
	
    cout << "Deneme" << endl;
    

}
//bu aralýk sayý fonksiyonun alt menüsündeki fonksiyonlarý içerir
void miliar(){
	system("cls");
	cout<<"\n\n\n\nÇok fazla girdi girildiðinden bu iþlem yaklaþýk olarak 5 dakika sürecek(opsiyonel):)\n\n\n\n1 milyarlýk sayý listesi oluþturuluyor... \n\n\n\n";
	std::ofstream dosya("milyar.txt");
	 if (!dosya.is_open()) {
    std::cerr << "Dosya oluþturulamadý veya açýlamadý!" << std::endl;
    }
    for(int i=0;i<10000000000;i++){
    	dosya<<i<<endl;
	}
	dosya.close();
	cout<<"\n\n\n\n\nLütfen bilgisayarýnýzda milyar.txt adýndaki dosyayý bulunuz. Wordlistiniz baþarýlý bir þekilde milyar.txt dosyasýnda oluþturuldu.\n\n\n\n ";
}
void specialnumber() {
    system("cls");
    int max, min;
    cout << "Özel aralýkta sayý wordlisti oluþturucusuna hoþgeldiniz. Lütfen girilecek sayýnýn hangi aralýkta olacaðýný giriniz.";
    cout << "\n\nMinimum deðer: ";
    cin >> min;
    cout << "\nMaksimum deðer: ";
    cin >> max;
    std::ofstream dosya("ozelnumaralar.txt");
    if (!dosya.is_open()) {
        std::cerr << "Dosya oluþturulamadý veya açýlamadý!" << std::endl;
    } else {
        while (min <= max) {
            dosya << min << endl;
            min++;
        }
        dosya.close();
        cout << "\n\n\n\n\nLütfen bilgisayarýnýzda ozelnumaralar.txt adýndaki dosyayý bulunuz. Wordlistiniz baþarýlý bir þekilde ozelnumaralar.txt dosyasýnda oluþturuldu.\n\n\n\n ";
    }
}
void tc() {
    system("cls");
    cout <<"TC  wordlisti oluþturucusuna hoþgeldiniz. (5 Dakika sürebilir)";
    std::ofstream dosya("tcler.txt");
    if (!dosya.is_open()) {
    std::cerr << "Dosya oluþturulamadý veya açýlamadý!" << std::endl;
    } 
    else{
	for(long long i=10000000000;i<=99999999999;i++){
    	dosya<<i<<endl;
	}

    dosya.close();
    cout << "\n\n\n\n\nLütfen bilgisayarýnýzda tcler.txt adýndaki dosyayý bulunuz. Wordlistiniz baþarýlý bir þekilde tcler.txt dosyasýnda oluþturuldu.\n\n\n\n ";
    }
}
void fastattack() {
    system("cls");
    cout <<"Özel derleme  wordlist oluþturucusuna hoþgeldiniz. Hýzlý saldýrýlarda en kullanýþlý sayýlarý derledik.";
    std::ofstream dosya("hizli.txt");
    if (!dosya.is_open()) {
    std::cerr << "Dosya oluþturulamadý veya açýlamadý!" << std::endl;
    } 
    else{
	for(int i=0;i<=100;i++){
    	dosya<<i<<endl;
	}
	for(int k=1800;k<=2030;k++){
		dosya<<k<<endl;
	}


    dosya.close();
    cout << "\n\n\n\n\nLütfen bilgisayarýnýzda hizli.txt adýndaki dosyayý bulunuz. Wordlistiniz baþarýlý bir þekilde hizli.txt dosyasýnda oluþturuldu.\n\n\n\n ";
    }
}
//bu aralýk kelime fonksiyonun alt menüsündeki fonksiyonlarý içerir
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
    cout <<"[*] Komplex kelime wordlisti oluþturucusuna hoþgeldiniz.\n[*]Burada sizin bilgilerinizi harmanlayýp en özel listeleri size sunacaðýz.\n ";
    ofstream dosya("komplekskelimeler.txt");
    if(!dosya.is_open()){	
    	cerr<<"osya oluþturulamadý veya açýlamadý!";
	}
	else{
    int uzunluk;
    vector<string> dizi(uzunluk);
    vector<string> dizi2(uzunluk);
    vector<string> birlesmisDizi;
    
    
    cout << "Lütfen dizinin uzunluðunu belirtin: ";
    cin >> uzunluk;
	if(uzunluk<10){
		system("cls");
		cout<<"Lütfen Minimum 10 kelime giriniz !";
		c
	}
	
    else{
	
	if(uzunluk>100){
		system("cls");
		cout<<"LÜtfen 100'den daha düþük kelime giriniz !";
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
		
		    // Birleþtirilmiþ diziyi oluþtur
		
		    for(int i = 0; i < uzunluk; ++i) {
		        birlesmisDizi.push_back(dizi[i] + dizi2[i]);
		    }
		    int yuksel=0;
		
		    // Birleþtirilmiþ diziyi yazdýr
		    while(yuksel<uzunluk){
				dosya<<birlesmisDizi[yuksel]<<"\n";
		    	dosya<<
		    	yuksel++;
			}
			
			for (int i=0;i<uzunluk;i++){
					dosya<<dizi[i]+dizi[i];
				
				}
			cout<<"\n\n\nWordlistiniz komplekskelimeler.txt dosyasýna kaydedildi. Bilgisayarýnýzdan dosyayý bulunuz.";
			}
		}
	}
}
