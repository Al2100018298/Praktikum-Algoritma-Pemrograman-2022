
class Hitung {
	friend chostream& operator<<(ostream&, const Hitung&);
	friend istream& operator>>(istream&, Hitung&);
	public:
		Hitung();
		void hitung_jumlahnya(){ jumlah = (a + b + c); }
	private:
		int a,b,c;
		int jumlah;
};
