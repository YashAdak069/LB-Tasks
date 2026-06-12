class Logic
{
    void findSmallestDigit(int num)
    {
        int iDigit = 0;
        int iMin = 9;

        while( num != 0)
        {
            iDigit = num % 10;
            if(iDigit < iMin)
            {
                iMin = iDigit;
            }
           num =  num / 10;
        }
        System.out.println("Smallest digit is : "+iMin); 
    }

}

class Assign20_Q5
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}