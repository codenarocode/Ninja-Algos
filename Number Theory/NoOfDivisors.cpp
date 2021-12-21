 int divisor(int g)
    {
       int count = 0;
       for (int i = 1; i * i <= g; i++)
       {
          if (g % i == 0)
          {
             count++;
             if (i != g / i)
             {
                count++;
             }
          }
       }
       return (count);
    }
