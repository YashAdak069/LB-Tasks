import java.util.Scanner;

class Assign38_Q4
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo, iPos1, iPos2;

        System.out.print("Enter a number: ");
        iNo = sobj.nextInt();

        System.out.print("Enter first position: ");
        iPos1 = sobj.nextInt();

        System.out.print("Enter second position: ");
        iPos2 = sobj.nextInt();

        Logic.checkBits(iNo, iPos1, iPos2);

        sobj.close();
    }
}

class Logic
{
    static void checkBits(int iNo, int iPos1, int iPos2)
    {
        int iMask1 = 1;
        int iMask2 = 1;
        
        iMask1 = iMask1 << (iPos1 - 1);
        iMask2 = iMask2 << (iPos2 - 1);

        if ((iNo & iMask1) != 0)
        {
            System.out.println("Bit at position " + iPos1 + " is ON");
        }
        else
        {
            System.out.println("Bit at position " + iPos1 + " is OFF");
        }

        if ((iNo & iMask2) != 0)
        {
            System.out.println("Bit at position " + iPos2 + " is ON");
        }
        else
        {
            System.out.println("Bit at position " + iPos2 + " is OFF");
        }
    }
}