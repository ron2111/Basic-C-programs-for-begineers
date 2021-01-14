#include <stdio.h>

int km_to_miles()
{
  float km;
  printf("Enter the distance in km:\n");
  scanf("%f", &km);
  printf("The converted distance is %.2f miles", km * 0.62);
}

int inches_to_foot()
{
  float inches;
  printf("Enter the length in inches:\n");
  scanf("%f", &inches);
  printf("The converted length is %.2f feet.", inches / 12);
}

int cms_to_inches()
{
  float cms;
  printf("Enter the length in cms:\n");
  scanf("%f", &cms);
  printf("The converted length is %.2f inches.", cms / 2.54);
}

int pounds_to_kgs()
{
  float pounds;
  printf("Enter the weight in pounds:\n");
  scanf("%f", &pounds);
  printf("The converted weight is %.2f kgs.", pounds / 2.205);
}

int inches_to_mtr()
{
  float inches;
  printf("Enter the length in inches:\n");
  scanf("%f", &inches);
  printf("The converted length is %.2f meters.", inches / 39.37);
}
int main()
{
  new : while (1)
  {
    int i;

    printf("\n\n\n|||||| This is a Unit Conertor Program ||||||\n\nEnter 1 for kms to miles conversion.\nEnter 2 for inches to feet conversion.\nEnter 3 for cms to inches conversion.\nEnter 4 for pounds to kgs conversion.\nEnter 5 for inches to meters conversion.\nENTER HERE:: ");
    scanf("%d", &i);

    if (i > 5)
    {
      printf("Pls Choose from the above options only");
      goto new;
    }
    else if (i < 1)
    {
      printf("Pls Choose from the above options only");
      goto new;
    }

    switch (i)
    {
    case 1:
      km_to_miles();
      break;

    case 2:
      inches_to_foot();
      break;

    case 3:
      cms_to_inches();
      break;

    case 4:
      pounds_to_kgs();
      break;

    default:
      inches_to_mtr();
      break;
    }
  }
end:
  return 0;
}
