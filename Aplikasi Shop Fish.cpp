#include<iostream> 		//untuk memunculkan / menampilkan cin dan cout
#include<cstring>		//membandingkan dua string

using namespace std;	//digunakan untuk semua fungsi class / file
const int MAX_USERS = 10;
const int MAX_USERNAME_LENGTH = 20;
const int MAX_PASSWORD_LENGTH = 20;

struct User {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
};

User users[MAX_USERS];
int userCount = 0;

void registerUser() {
    if (userCount < MAX_USERS) {
        User newUser;
		cout << endl;
		cout << " Anda Memilih Daftar Akun " << endl;
        cout << " Masukkan Username: ";
        cin >> newUser.username;

        cout << " Masukkan Password: ";
        cin >> newUser.password;

        users[userCount] = newUser;
        userCount++;
        cout << " Daftar Akun Berhasil!" << endl;
        cout << endl << endl;
    } else 
        cout << " Pengguna Sudah Mencapai Maximum!" << endl;
    }


bool loginUser() {
    char enteredUsername[MAX_USERNAME_LENGTH];
    char enteredPassword[MAX_PASSWORD_LENGTH];
	cout << endl;
	cout << " Anda Memilih Login" << endl;
    cout << " Masukkan Username: ";
    cin >> enteredUsername;

    cout << " Masukkan Password: ";
    cin >> enteredPassword;

    for (int i = 0; i < userCount; ++i) {
        if (strcmp(enteredUsername, users[i].username) == 0 &&
            strcmp(enteredPassword, users[i].password) == 0) {
            cout << " Berhasil Login" << endl;
            return true;
        }
    }
	cout << endl;
    cout << " Gagal Login! Username atau Password Salah." << endl;
    cout << " Ulangi Login!" << endl;
    return false;
}
int main(){
//tipe data
	int bandeng, bawal_hitam, bawal_putih, cakalang, dori, teri, kakap_merah, kakap_putih, kembung, kerapu, layur, pari, sarden, salmon, tenggiri, tongkol, tuna;
	int hasil, total, total1;
	int z, ongkir;
	//tipe data berupa angka bulat tidak mengandung pecahan atau decimal
	
	char choice, ketik, ch, jual_ikan, a, alamat;
	// tipe data berupa angka, teks, huruf, dan simbol
	
	string nama, kodpos, tlp, u, p, r;
	// string adalah tipe data untuk menyimpan data berbentuk teks
	
	akun:
	do {
		cout << "                  Shop Fish                " << endl;
		cout << "            Bandar Lampung Center          " << endl;
		cout << "------------------------------------------ " << endl;
        cout << "1. Daftar Akun" << endl;
        cout << "2. Login" << endl;
        cout << "3. Keluar" << endl;
        cout << "Masukkan Pilihan: ";
        cin >> choice;

        switch (choice) {
            case '1':
                registerUser();
                break;
            case '2':
                if (loginUser()) {
                	goto awal;
                    // Perform actions after successful login if needed
                }
                break;
            case '3':
                cout << " Keluar Aplikasi." << endl;
                cout << endl;
                goto akhir;
                break;
            default:
                cout << "Invalid. Coba Lagi!" << endl;
                cout << endl;
        }

    } while (choice != '3');
    
	awal:
	cout << " SELAMAT DATANG " << ", Silahkan Berbelanja"<< endl;
	cout << endl;
	cout << "            >>    Menu List      <<        " << endl;
	cout << " a. Ikan Bandeng           (Rp. 22.500/kg) " << endl;
	cout << " b. Ikan Bawal Hitam       (Rp. 80.000/kg) " << endl;
	cout << " c. Ikan Bawal Putih       (Rp. 45.000/kg) " << endl;
	cout << " d. Ikan Cakalang          (Rp. 48.000/kg) " << endl;
	cout << " e. Ikan Dori              (Rp. 36.000/kg) " << endl;
	cout << " f. Ikan Kakap Merah       (Rp. 77.000/kg) " << endl;
	cout << " g. Ikan Kakap Putih       (Rp. 69.500/kg) " << endl;
	cout << " h. Ikan Kembung           (Rp. 47.500/kg) " << endl;		// menu utama pada program
	cout << " i. Ikan Kerapu            (Rp. 69.000/kg) " << endl;
	cout << " j. Ikan Layur             (Rp. 37.000/kg) " << endl;
	cout << " k. Ikan Pari              (Rp. 48.000/kg) " << endl;
	cout << " l. Ikan Sarden            (Rp. 21.000/kg) " << endl;
	cout << " m. Ikan Salmon            (Rp. 40.000/kg) " << endl;
	cout << " n. Ikan Tenggiri          (Rp. 80.000/kg) " << endl;
	cout << " o. Ikan Teri              (Rp. 42.000/kg) " << endl;
	cout << " p. Ikan Tongkol           (Rp. 35.000/kg) " << endl;
	cout << " q. Ikan Tuna              (Rp. 56.000/kg) " << endl;
	cout << " r. Kembali Login							" << endl << endl;
	cout << "       Silahkan Order di Bawah Sini        " << endl;
	cout << "===========================================" << endl;
	cout << " Masukkan Pilihan Anda: ";
	cin >> jual_ikan;
	cout << endl << endl;
	
// pemilihan
	while (true){ //berfungsi untuk menampilkan dan memasukkan teks berulang kali 
		if (jual_ikan == 'a'){
			cout << " Anda Memilih Ikan Bandeng " << endl;
			bandeng = 22500;
			cout << " Berapa Kilogram: ";
			cin >> bandeng;
			hasil = bandeng * 22500;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'b'){
			cout << " Anda Memilih Ikan Bawal Hitam " << endl;
			bawal_hitam = 80000;
			cout << " Berapa Kilogram: ";
			cin >> bawal_hitam;
			hasil = bawal_hitam * 80000;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'c'){
			cout << " Anda Memilih Ikan Bawal Putih " << endl;
			bawal_putih = 45000;
			cout << " Berapa Kilogram: ";
			cin >> bawal_putih;
			hasil = bawal_putih * 45000;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'd'){
			cout << " Anda Memilih Ikan Cakalang " << endl;
			cakalang = 48000;
			cout << " Berapa Kilogram: ";
			cin >> cakalang;
			hasil = cakalang * 48000;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'e'){
			cout << " Anda Memilih Ikan Dori " << endl;
			dori = 36000;
			cout << " Berapa Kilogram: ";
			cin >> dori;
			hasil = dori * 36000;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'f'){
			cout << " Anda Memilih Ikan Kakap Merah " << endl;
			kakap_merah = 77000;
			cout << " Berapa Kilogram: ";
			cin >> kakap_merah;
			hasil = kakap_merah * 77000;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'g'){
			cout << " Anda Memilih Ikan Kakap Putih " << endl;
			kakap_putih = 69500;
			cout << " Berapa Kilogram: ";
			cin >> kakap_putih;
			hasil = kakap_putih * 69500;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'h'){
			cout << " Anda Memilih Ikan Kembung " << endl;
			kembung = 47500;
			cout << " Berapa Kilogram: ";
			cin >> kembung;
			hasil = kembung * 47500;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'i'){
			cout << " Anda Memilih Ikan Kerapu " << endl;
			kembung = 69000;
			cout << " Berapa Kilogram: ";
			cin >> kembung;
			hasil = kembung * 69000;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'j'){
			cout << " Anda Memilih Ikan Layur " << endl;
			layur = 37000;
			cout << " Berapa Kilogram: ";
			cin >> layur;
			hasil = layur * 37000;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'k'){
			cout << " Anda Memilih Ikan Pari " << endl;
			pari = 48000;
			cout << " Berapa Kilogram: ";
			cin >> pari;
			hasil = pari * 48000;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'l'){
			cout << " Anda Memilih Ikan Sarden " << endl;
			sarden = 21000;
			cout << " Berapa Kilogram: ";
			cin >> sarden;
			hasil = sarden * 21000;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'm'){
			cout << " Anda Memilih Ikan Salmon " << endl;
			salmon = 40000;
			cout << " Berapa Kilogram: ";
			cin >> salmon;
			hasil = salmon * 40000;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'n'){
			cout << " Anda Memilih Ikan Tenggiri " << endl;
			tenggiri = 80000;
			cout << " Berapa Kilogram: ";
			cin >> tenggiri;
			hasil = tenggiri * 80000;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'o'){
			cout << " Anda Memilih Ikan Teri " << endl;
			teri = 42000;
			cout << " Berapa Kilogram: ";
			cin >> teri;
			hasil = teri * 42000;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'p'){
			cout << " Anda Memilih Ikan Tongkol " << endl;
			tongkol = 35000;
			cout << " Berapa Kilogram: ";
			cin >> tongkol;
			hasil = tongkol * 35000;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'q'){
			cout << " Anda Memilih Ikan Tuna " << endl;
			tuna = 56000;
			cout << " Berapa Kilogram: ";
			cin >> tuna;
			hasil = tuna * 56000;
			cout << " Total Pembayaran = Rp." << hasil << endl;
			break;
		}
		else if (jual_ikan == 'r'){
			goto akun;
		}
		else {
			cout << " Error!!! " << endl << endl;
			goto awal;
		}
		
	}
	cout << "                                           " << endl;
	cout << "    Silahkan Masukkan Tujuan Pengiriman    " << endl;
	cout << "===========================================" << endl;
	cout << " Nama		= "; 
	cin >> nama;
	cout << endl;
	
	alamat:
	cout << " Daftar Alamat      " << endl;
	cout << " a. Lampung Selatan     (Rp. 10.000) " << endl;
	cout << " b. Pesawaran           (Rp. 10.000) " << endl;
	cout << " c. Metro               (Rp. 10.000) " << endl;
	cout << " d. Lampung Timur       (Rp. 10.000) " << endl;
	cout << " e. Pringsewu           (Rp. 15.000) " << endl;
	cout << " f. Lampung Tengah      (Rp. 15.000) " << endl;
	cout << " g. Tanggamus           (Rp. 15.000) " << endl;
	cout << " h. Tulang Bawang       (Rp. 20.000) " << endl;
	cout << " i. Lampung Utara       (Rp. 20.000) " << endl;
	cout << " j. Tulang Bawang Barat (Rp. 20.000) " << endl;
	cout << " k. Pesisir Barat       (Rp. 25.000) " << endl;
	cout << " l. Lampung Barat       (Rp. 25.000) " << endl;
	cout << " m. Waykanan            (Rp. 30.000) " << endl;
	cout << " n. Mesuji              (Rp. 30.000) " << endl << endl;
	cout << " Masukkan Alamat  = "; cin >> alamat;
	cout << endl;
	if (alamat == 'a'){
		cout << " a. Lampung Selatan " << endl;
		ongkir = 10000;
		cout << " Harga Ongkir = " << ongkir << endl;
	}
	else if (alamat == 'b'){
		cout << " b. Pesawaran " << endl;
		ongkir = 10000;
		cout << " Harga Ongkir = " << ongkir << endl;
	}
	else if (alamat == 'c'){
		cout << " c. Metro " << endl;
		ongkir = 10000;
		cout << " Harga Ongkir = " << ongkir << endl;
	}
	else if (alamat == 'd'){
		cout << " d. Lampung Timur " << endl;
		ongkir = 10000;
		cout << " Harga Ongkir = " << ongkir << endl;
	}
	else if (alamat == 'e'){
		cout << " e. Pringsewu " << endl;
		ongkir = 15000;
		cout << " Harga Ongkir = " << ongkir << endl;
	}
	else if (alamat == 'f'){
		cout << " f. Lampung Tengah " << endl;
		ongkir = 15000;
		cout << " Harga Ongkir = " << ongkir << endl;
	}
	else if (alamat == 'g'){
		cout << " g. Tanggamus " << endl;
		ongkir = 15000;
		cout << " Harga Ongkir = " << ongkir << endl;
	}
	else if (alamat == 'h'){
		cout << " h. Tulang Bawang " << endl;
		ongkir = 20000;
		cout << " Harga Ongkir = " << ongkir << endl;
	}
	else if (alamat == 'i'){
		cout << " i. Lampung Utara " << endl;
		ongkir = 20000;
		cout << " Harga Ongkir = " << ongkir << endl;
	}
	else if (alamat == 'j'){
		cout << " j. Tulang Bawang Barat " << endl;
		ongkir = 20000;
		cout << " Harga Ongkir = " << ongkir << endl;
	}
	else if (alamat == 'k'){
		cout << " k. Pesisir Barat " << endl;
		ongkir = 25000;
		cout << " Harga Ongkir = " << ongkir << endl;
	}
	else if (alamat == 'l'){
		cout << " l. Lampung Barat " << endl;
		ongkir = 25000;
		cout << " Harga Ongkir = " << ongkir << endl;
	}
	else if (alamat == 'm'){
		cout << " m. Waykanan " << endl;
		ongkir = 30000;
		cout << " Harga Ongkir = " << ongkir << endl;
	}
	else if (alamat == 'n'){
		cout << " n. Mesuji " << endl;
		ongkir = 30000;
		cout << " Harga Ongkir = " << ongkir << endl;
	}
	else {
		cout << " Tidak Valid, Ulangi!!! ";
		goto alamat;
	}
	cout << endl;
	cout << " Kode Pos	= "; 
	cin >> kodpos;
	cout << endl;
	cout << " No. Telepon	= "; 
	cin >> tlp;
	cout << endl;
	cout << " Pesanan Atas Nama " << nama << ", Siap Untuk Dikirim. " << endl;
	cout << " Total Pembayaran Dengan Ongkir = " << hasil << " + " << ongkir << endl;
	cout << "                                = " << hasil + ongkir << endl << endl;
	cout << "===========================================" << endl;
	cout << "          Apakah Ingin Memesan Lagi?       " << endl;
	cout << "             y        /        n           " << endl;
	cin >> a;
	
	if (a == 'Y' || a == 'y')
	goto awal;
	else
	goto akhir;
	akhir:
	do {
		cout << " Terima Kasih Telah Berbelanja di Shop Fish " << endl;
		cout << "           Bandar Lampung Center            " << endl;
		cout << "      Semoga Hari Anda Menyenangkan         " << endl;
		cout << "============================================" << endl;
		z++;
	}
	while (z<0);
	return 0;
}
