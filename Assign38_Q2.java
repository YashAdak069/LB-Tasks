import java.util.Scanner;

class Assign38_Q2
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo1, iNo2;

        System.out.print("Enter first number: ");
        iNo1 = sobj.nextInt();

        System.out.print("Enter second number: ");
        iNo2 = sobj.nextInt();

        Logic.commonOnBits(iNo1, iNo2);

        sobj.close();
    }
}

class Logic
{
    static void commonOnBits(int iNo1, int iNo2)
    {
        int iSame = iNo1 & iNo2;
        int iPos = 1;
        while (iSame != 0)
        {
            if ((iSame & 1) == 1)
            {
                System.out.println("Common ON bit at position: " + iPos);
            }
            iSame >>= 1;
            iPos++;
        }
    }
}
