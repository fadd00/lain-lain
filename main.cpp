#include <iostream>

int main() {
    int x, y, z;
    char op;

	std::cout << "nilai x: ";
    std::cin >> x;

	std::cout << "operasi bilangan (+, -, *, /): ";
    std::cin >> op;

	std::cout << "nilai y: ";
	std::cin >> y;

	if (op == 'x') {
		std::cout << "program dihentikan." << std::endl;
        return 0;
    }

    if (op == '+') {
        z = x + y;
    } else if (op == '-') {
        z = x - y;
    } else if (op == '*') {
        z = x * y;
	} else if (op == '/') {
		if (y != 0) {
            z = x / y;
		} else {
			std::cout << "tidak bisa membagi bilangan dengan 0." << std::endl;
			return 1;
		}
	} else {
		std::cout << "operasi salah, gunakan seperti di samping +, -, *, or /." << std::endl;
		return 1;
    }

	std::cout << "Hasil: " << x << " " << op << " " << y << " = " << z << std::endl;
	while (x != z) {
		std::cout << "masukan operasi (+, -, *, /): ";
		std::cin >> op;

		std::cout << "nilai y: ";
        std::cin >> y;

        if (op == '+') {
            z = x + y;
        } else if (op == '-') {
            z = x - y;
        } else if (op == '*') {
            z = x * y;
        } else if (op == '/') {
            if (y != 0) {
                z = x / y;
            } else {
				std::cout << "tidak bisa membagi bilangan dengan 0." << std::endl;
                return 1;
            }
        } else {
			std::cout << "operasi salah, gunakan seperti di samping +, -, *, or /." << std::endl;
            return 1;
        }

        std::cout << "Hasil: " << x << " " << op << " " << y << " = " << z << std::endl;
    }

    return 0;
}
