import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    private static BigInteger four = new BigInteger("4");
    private static BigInteger hun = new BigInteger("100");
    private static BigInteger fourhun = new BigInteger("400");
    private static BigInteger fivefive = new BigInteger("55");
    private static BigInteger fiv = new BigInteger("15");

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        while (scanner.hasNext()){
            BigInteger year = new BigInteger(scanner.next());

            boolean leap = isLeap(year);
            boolean bulukulu = bulukuluOrNot(year);

            if(leap) System.out.println("This is leap year.");

            if(year.mod(fiv).equals(BigInteger.ZERO)) System.out.println("This is huluculu festival year.");

            if(bulukulu) System.out.println("This is bulukulu festival year.");

            if(!leap && !(year.mod(fiv).equals(BigInteger.ZERO)) && !bulukulu) System.out.println("This is an ordinary year.");

            if(scanner.hasNext()) System.out.println();
        }

    }


    public static boolean isLeap (BigInteger y) {
        return y.mod(fourhun).equals(BigInteger.ZERO) || (y.mod(four).equals(BigInteger.ZERO) && !y.mod(hun).equals(BigInteger.ZERO));
    }

    private static boolean bulukuluOrNot(BigInteger year){
        boolean leap = isLeap(year);

        if(leap && year.mod(fivefive).equals(BigInteger.ZERO)) return true;
        else return false;

    }
}
