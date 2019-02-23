import java.math.BigInteger;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String s = scanner.next();

        BigInteger e = new BigInteger("11");

        while(!s.equals("0")){
            BigInteger b = new BigInteger(s);

            if(b.equals(BigInteger.ZERO)) break;

            if(b.mod(e).equals(BigInteger.ZERO)) System.out.println(s+" is a multiple of 11.");
            else System.out.println(s+" is not a multiple of 11.");

            s = scanner.next();
        }

    }
}
