import java.util.Scanner;

class Assign38_Q3
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo;

        System.out.print("Enter a number: ");
        iNo = sobj.nextInt();

        Logic.checkBits(iNo);

        sobj.close();
    }
}

class Logic
{
    static void checkBits(int iNo)
    {
        int iMask9 = 0x00000100;
        int iMask12 = 0x00000800;

        if ((iNo & iMask9) != 0)
        {
            System.out.println("9th bit is ON");
        }
        else
        {
            System.out.println("9th bit is OFF");
        }

        if ((iNo & iMask12) != 0)
        {
            System.out.println("12th bit is ON");
        }
        else
        {
            System.out.println("12th bit is OFF");
        }
    }
}

