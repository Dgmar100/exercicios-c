import java.util.Scanner;

public class Losango {

    public static void main(String[] args) {

        Scanner leitor = new Scanner(System.in);

        int R;

        do {
            System.out.print("Introduza o raio do losango (3 a 8): ");
            R = leitor.nextInt();

        } while (R < 3 || R > 8);

        // Metade de cima
        for (int i = 0; i < R; i++) {

            int espacosAntes = R - i - 1;
            int largura = 2 * i + 1;

            for (int j = 0; j < espacosAntes; j++) {
                System.out.print(" ");
            }

            if (largura == 1) {
                System.out.print("*");
            } else {
                System.out.print("*");

                for (int j = 0; j < largura - 2; j++) {

                    if (i == R - 1) {
                        System.out.print("-");
                    } else {
                        System.out.print(" ");
                    }
                }

                System.out.print("*");
            }

            System.out.println();
        }

        // Metade de baixo
        for (int i = R - 2; i >= 0; i--) {

            int espacosAntes = R - i - 1;
            int largura = 2 * i + 1;

            for (int j = 0; j < espacosAntes; j++) {
                System.out.print(" ");
            }

            if (largura == 1) {
                System.out.print("*");
            } else {
                System.out.print("*");

                for (int j = 0; j < largura - 2; j++) {
                    System.out.print(" ");
                }

                System.out.print("*");
            }

            System.out.println();
        }

        leitor.close();
    }
}
