#include <iostream>
using namespace std;

class queues {
	int FRONT, REAR, max = 5;
	int queue_array[5];

public:
	queues() {
		FRONT = -1;
		REAR = -1;
	}

	void insert() {
		int num;
		cout << "enter a number: ";
		cin >> num;
		cout << endl;

		//cek apakah antian penuh
		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
			cout << "\nqueue overflow\n";
			return;
		}

		//cek apakah antrian kosong 
		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}
		else {
			//jika REAR berada diposisi terakhir array,kembali ke awal array
			if (REAR == max - 1)
				REAR = 0;
			else
				REAR = REAR + 1;
		}
		queue_array[REAR] = num;
	}

	void remove() {
		// cek apakah antrian kosong
		if (FRONT == -1) {
			cout << "queue underflow\n";
			return;
		}
		cout << "\nthe elment deleted from the queue is: " << queue_array[FRONT] << "\n";

		//cek jika antrian hanya memiliki satu elemen 
		if (FRONT == REAR) {
			FRONT = -1;
			REAR = -1;
		}
		

	void display() {
		int FRONT_position = FRONT;
	}


};

