import java.util.Scanner;

public class Prob1873A {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        
        int caseNum;

        // Case input
        caseNum = input.nextInt();
        input.nextLine();

        for (int counter = 0; counter < caseNum; counter++) {
            String myCase = input.nextLine();

            if (myCase.equals("bca") || myCase.equals("cab"))
                System.out.println("NO");
            else
                System.out.println("YES");
        }
        
        input.close();
    }
}