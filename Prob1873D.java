import java.util.Scanner;

public class Prob1873D {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        // Case input here
        int caseNum = input.nextInt();
        
        for (int currCase = 0; currCase < caseNum; currCase++) {
            // First line input
            int n = input.nextInt(), // Not really needed here
                k = input.nextInt(); // Consecutive number for each scan
            input.nextLine();

            // Second line input
            String cell = input.nextLine();

            int counter = 0;

            // Check all substr with consecutive sub sequence
            int i = 0;
            while (i < cell.length()) {
                if (cell.charAt(i) == 'B') {
                    counter++;

                    i += k;
                }
                else
                    i++;
            }
            
            System.out.println(counter);
        }
        
        input.close();
    }
}