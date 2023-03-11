if(age < 18)
    {
        n= 18 - age;
        printf("Sorry %s, you are just %d years old. You will need wait till %d years from now to be able to buy alcohol\n",fname,age, n);
    }
    else if (age ==18)
    {
        printf("Congratulation to the club you can now buy alcohol.\n But remember %s Drink Responsibly", fname);
    }
    else{
        printf("Welcome %s, What would you like to buy today?", fname);
    }