class IllegalNumberInputException extends Exception {
    public IllegalNumberInputException(String msg) {
        super(msg);
    }
}
class A {
    public static int func(int a, int b) throws IllegalNumberInputException {
        System.out.println("Checking");
        if(a > b || b > 1000) {
            throw new IllegalNumberInputException("Failed");
        }
        System.out.println("Successful");
        return a + b;
    }
}
public class cau10{
    public static void main(String[] args) {
        try {
            int result = A.func(3, 1001);
            System.out.println(result);
        } catch (IllegalNumberInputException e) {
            System.out.println(e.getMessage());
        } finally {
            System.out.println("Done");
        }
    }
}