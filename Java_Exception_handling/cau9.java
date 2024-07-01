abstract class A {
    private int m = 5;
    protected int n = 7;
    public double func(double a) {
        return a + m - n;
    }
    public abstract int func(int a);
}
class B extends A {
    public int func(int a) {
        // khong the thay doi m trong abstract class vì m mang thuoc tinh private 
        n = 3; // có thể thay đổi n trong abstract class 
        return a + (int) func(2.5);
    }
}
public class cau9 {
    public static void main(String[] args) {
        A a = new B();
        System.out.println(a.func(5));
    }
}
