#include<iostream>
#include<string>
#include<fstream>
#include<random>
using namespace std;

int SUM, SUM2, SUM3;

int countX;

class Pakistan
{
    protected:
    int population;
    int elite;
    int underpri;
    int middle;
    float elite_per;
    float underpri_per;
    public:

    void setprovince()
    {
        cout << "\nEnter Population : ";
        cin >> population;
        cout << "Enter Percentage of Elites (Capital of 500k to 700k) : ";
        cin >> elite_per;
        cout << "Enter Percentage of Underprivileged (Capital of 0 to 50,000 : ";
        cin >> underpri_per;
    }

    int calculate_elite()
    {
        elite = (population / 100) * elite_per;

        return elite;
    }

    int calculate_underpri()
    {
        underpri = ((population / 100) * underpri_per);

        return underpri;
    }

    int calculate_middle()
    {
        middle = (population - elite - underpri);

        return middle;
    }

    virtual void  info() = 0;
    virtual void distribute() = 0;
    virtual void invest() = 0;

};





class KPK :public Pakistan
{
    public:

    void info()
    {
        cout << "\n\n\tTotal Population of KPK : " << population;
        cout << " \n\tElite Class Members : " << calculate_elite();
        cout << " \n\tMiddle Class Members : " << calculate_middle();
        cout << " \n\tUnder-priviliged Members : " << calculate_underpri();
        cout<<endl<<endl<<endl;
    }

        int array1[10000];
        int array1m[10000];

        void generate_Money_Elite()
    {
        int Size_Elite=elite;

        int max_n = 700000;
        int min_n = 500000;
        int new_n;
        int i;

        int sum=0;
        int sum2=0;

        for (i = 0; i < Size_Elite; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array1[i]=new_n;
            array1m[i]= ((array1[i]/100)*2.5);
            cout<<"Elite "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<"\t(Tax Collected = "<<array1m[i]<<")"<<endl;
            sum2+=array1[i];
            sum+=array1m[i];
        }

        cout<<endl<<endl;
        int v=2021;
        cout<<"\tTotal Money Elites Have = "<<sum2<<endl;
        SUM2=sum2;
        cout<<"\tTotal Tax Collected from Elites = "<<sum<<"   (Year "<<v++<<")"<<endl;
                SUM=sum;

                for(i=0;i<Size_Elite;i++)
            {
                array1[i] = array1[i]-array1m[i];
            }
            cout<<endl<<endl<<endl;
    }

            void sorting_Riches()
        {
                int Size_Elite=elite;
                for (int i = 0; i < Size_Elite; i++)
            {
                int temp;
                for (int j = i+1; j < Size_Elite; j++)
                {
                    if (array1[i] < array1[j])
                    {
                        temp = array1[i];
                        array1[i] = array1[j];
                        array1[j] = temp;
                    }
                }
            }
        }   

    void Destroying_Elite_again()
    {
                int Size_Poor=underpri;
                int Size_Elite=elite;
                int count=0;

        cout<<"\n\n\n\tCollecting Tax Again";
        cout<<"\n\t--------------------\n\n";

            for(int i=0;i<Size_Poor;i++)
        {
                if(array2[i]<50000)
            {
                count++;
            }
        }
        

        countX=count;

        if(count<1)
        {
            cout<<"No more Underpriviliged Left to collect Tax for!\n\n";
        }

        else
        {
            int Tax2=0;
            for (int i = 0; i < Size_Elite; i++) 
            {
                array1m[i]= ((array1[i]/100)*2.5);
                Tax2+=array1m[i];

                if(array1[i]>500000)
                {
                    cout<<"Elite "<<i+1<<" Net Worth : "<<array1[i]<<" Rs"<<"\t(Tax Collected = "<<array1m[i]<<")"<<endl;
                }

                    array1[i] = array1[i]-array1m[i];

            }
                    cout<<"\n\n\tTotal Tax Collected from Elites Again = "<<Tax2<<"   (Year 2022)"<<endl<<endl;
                    SUM3=Tax2;
        }
    }

        int array2[10000];
    void generate_Money_Poor()
    {
            int Size_Poor=underpri;

        int max_n = 50000;
        int min_n = 0;
        int new_n;
        int i;
            for (i = 0; i < Size_Poor; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array2[i]=new_n;
            cout<<"Underprivileged "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }
            cout<<endl<<endl<<endl;

        cout<<"----------------------------------------------------\n\n\n";
    }

        void generate_Money_Poor_Option_1_2()
    {
        int Size_Poor=underpri;

        int max_n = 50000;
        int min_n = 0;
        int new_n;
        int i;
        for (i = 0; i < Size_Poor; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array2[i]=new_n;
            // cout<<"Underprivileged "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }
        // cout<<endl<<endl<<endl;
        // cout<<"----------------------------------------------------\n\n\n";
    }

        void sorting_Poor()
        {
                int Size_Poor=underpri;
                for (int i = 0; i < Size_Poor; i++)
            {
                int temp;
                for (int j = i+1; j < Size_Poor; j++)
                {
                    if (array2[i] > array2[j])
                    {
                        temp = array2[i];
                        array2[i] = array2[j];
                        array2[j] = temp;
                    }
                }
            }
        }   

    

        void generate_Money_Poor_Option2()
    {
            int Size_Poor=underpri;

            for(int i=0;i<Size_Poor;i++)
        {
            cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
        }

    }

    void generate_Money_Middle()
    {
            int Size_Middle=middle;
            int array3[Size_Middle];

        int max_n = 500000;
        int min_n = 50000;
        int new_n;
        int i;
            for (i = 0; i < Size_Middle; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array3[i]=new_n;
            cout<<"Middle "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }

        cout<<endl<<endl<<endl;
    }

        int array3[10000];
        void generate_Money_Middle_Option2()
    {
            int Size_Middle=middle;

        int max_n = 500000;
        int min_n = 50000;
        int new_n;
        int i;
            for (i = 0; i < Size_Middle; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array3[i]=new_n;
            // cout<<"Middle "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }
        // cout<<endl<<endl<<endl;
    }

    void distribute()
    {
        int EM;

            cout<<"\nTime to Distribute "<<SUM<<" Rs. Among the Underprivileged\n";
            cout<<"There are "<<underpri<<" Underpriviliged People before distribution.";
            cout<<"\n\n\tDetails (Y/N) : ";
            char choice2;
            cin>>choice2;
            cout<<endl<<endl;

            if(choice2=='y'|| choice2=='Y')
            {
                cout<<"\n\tBefore Distribution"<<endl;
                cout<<"\t---------------------"<<endl;
                generate_Money_Poor_Option2();
            }

                cout<<endl<<endl;
                EM=SUM/underpri;
                cout<<EM<<" Rs. will be distributed to everyone\n\n";
                cout<<"\n\tAfter Distribution"<<endl;
                cout<<"\t---------------------"<<endl;

                    for(int i=0;i<underpri;i++)
                {
                    array2[i]+=EM;
                        if(array2[i]<50000)
                    {
                        cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
                    }
                        else
                    {
                        cout<<"\n"<<i+1<<" : No more Underpriviliged!";
                    }
                }
    }


    void Distribute_2()
    {
        int EM2;

            cout<<"\nNow Distributing "<<SUM3<<" Rs. Among the Remaining\n";
            int Size_Poor = underpri;
            int count=0;

            for(int i=0;i<Size_Poor;i++)
        {
            if(array2[i]<50000)
            {
                count++;
            }
        }
            cout<<"There are "<<count<<" Underpriviliged People left.";
            cout<<"\n\n\tDetails (Y/N) : ";
            char choice2;
            cin>>choice2;
            cout<<endl<<endl;

            if(choice2=='y'|| choice2=='Y')
            {
                cout<<"\n\tBefore Distribution"<<endl;
                cout<<"\t---------------------"<<endl;

                    for(int i=0;i<underpri;i++)
                {
                    if(array2[i]<50000)
                    {
                        cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
                    }
                }
            }

                cout<<endl<<endl;
                EM2=SUM3/count;
                cout<<EM2<<" Rs. will be distributed to everyone this time\n\n";
                cout<<"\n\tAfter Distribution"<<endl;
                cout<<"\t---------------------"<<endl;

                for(int i=0;i<count;i++)
                {
                    array2[i]+=EM2;
                        if(array2[i]<50000)
                    {
                        cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
                    }
                        else
                    {
                        cout<<"\n"<<i+1<<" : No more Underpriviliged!";
                    }
                }

            int count2=0;
            for(int i=0;i<Size_Poor;i++)
        {
                        if(array2[i]<50000)
                    {
                        count2++;
                    }
        }
            cout<<"\n\n\nThere are now "<<count2<<" Underpriviliged People left in KPK.\n\n\n";
    }


    void invest()
    {
        cout<<"\n\n\tYou can not Invest Zakat Money!\n\n";

    }

};





class Punjab :public Pakistan
{
    public:

    void info()
    {
        cout << "\n\n\tTotal Population of Punjab : " << population;
        cout << " \n\tElite Class Members : " << calculate_elite();
        cout << " \n\tMiddle Class Members : " << calculate_middle();
        cout << " \n\tUnder-priviliged Members : " << calculate_underpri();
        cout<<endl<<endl<<endl;
    }

        int array1[10000];
        int array1m[10000];

        void generate_Money_Elite()
    {
        int Size_Elite=elite;

        int max_n = 700000;
        int min_n = 500000;
        int new_n;
        int i;

        int sum=0;
        int sum2=0;

        for (i = 0; i < Size_Elite; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array1[i]=new_n;
            array1m[i]= ((array1[i]/100)*2.5);
            cout<<"Elite "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<"\t(Tax Collected = "<<array1m[i]<<")"<<endl;
            sum2+=array1[i];
            sum+=array1m[i];
        }

        cout<<endl<<endl;
        int v=2021;
        cout<<"\tTotal Money Elites Have = "<<sum2<<endl;
        SUM2=sum2;
        cout<<"\tTotal Tax Collected from Elites = "<<sum<<"   (Year "<<v++<<")"<<endl;
                SUM=sum;

                for(i=0;i<Size_Elite;i++)
            {
                array1[i] = array1[i]-array1m[i];
            }
            cout<<endl<<endl<<endl;
    }

            void sorting_Riches()
        {
                int Size_Elite=elite;
                for (int i = 0; i < Size_Elite; i++)
            {
                int temp;
                for (int j = i+1; j < Size_Elite; j++)
                {
                    if (array1[i] < array1[j])
                    {
                        temp = array1[i];
                        array1[i] = array1[j];
                        array1[j] = temp;
                    }
                }
            }
        }   

    void Destroying_Elite_again()
    {
                int Size_Poor=underpri;
                int Size_Elite=elite;
                int count=0;

        cout<<"\n\n\n\tCollecting Tax Again";
        cout<<"\n\t--------------------\n\n";

            for(int i=0;i<Size_Poor;i++)
        {
                if(array2[i]<50000)
            {
                count++;
            }
        }
        

        countX=count;

        if(count<1)
        {
            cout<<"No more Underpriviliged Left to collect Tax for!\n\n";
        }

        else
        {
            int Tax2=0;
            for (int i = 0; i < Size_Elite; i++) 
            {
                array1m[i]= ((array1[i]/100)*2.5);
                Tax2+=array1m[i];

                if(array1[i]>500000)
                {
                    cout<<"Elite "<<i+1<<" Net Worth : "<<array1[i]<<" Rs"<<"\t(Tax Collected = "<<array1m[i]<<")"<<endl;
                }

                    array1[i] = array1[i]-array1m[i];

            }
                    cout<<"\n\n\tTotal Tax Collected from Elites Again = "<<Tax2<<"   (Year 2022)"<<endl<<endl;
                    SUM3=Tax2;
        }
    }

        int array2[10000];
    void generate_Money_Poor()
    {
            int Size_Poor=underpri;

        int max_n = 50000;
        int min_n = 0;
        int new_n;
        int i;
            for (i = 0; i < Size_Poor; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array2[i]=new_n;
            cout<<"Underprivileged "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }
            cout<<endl<<endl<<endl;

        cout<<"----------------------------------------------------\n\n\n";
    }

        void generate_Money_Poor_Option_1_2()
    {
        int Size_Poor=underpri;

        int max_n = 50000;
        int min_n = 0;
        int new_n;
        int i;
        for (i = 0; i < Size_Poor; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array2[i]=new_n;
            // cout<<"Underprivileged "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }
        // cout<<endl<<endl<<endl;
        // cout<<"----------------------------------------------------\n\n\n";
    }

        void sorting_Poor()
        {
                int Size_Poor=underpri;
                for (int i = 0; i < Size_Poor; i++)
            {
                int temp;
                for (int j = i+1; j < Size_Poor; j++)
                {
                    if (array2[i] > array2[j])
                    {
                        temp = array2[i];
                        array2[i] = array2[j];
                        array2[j] = temp;
                    }
                }
            }
        }   

    

        void generate_Money_Poor_Option2()
    {
            int Size_Poor=underpri;

            for(int i=0;i<Size_Poor;i++)
        {
            cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
        }

    }

    void generate_Money_Middle()
    {
            int Size_Middle=middle;
            int array3[Size_Middle];

        int max_n = 500000;
        int min_n = 50000;
        int new_n;
        int i;
            for (i = 0; i < Size_Middle; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array3[i]=new_n;
            cout<<"Middle "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }

        cout<<endl<<endl<<endl;
    }

        int array3[10000];
        void generate_Money_Middle_Option2()
    {
            int Size_Middle=middle;

        int max_n = 500000;
        int min_n = 50000;
        int new_n;
        int i;
            for (i = 0; i < Size_Middle; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array3[i]=new_n;
            // cout<<"Middle "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }
        // cout<<endl<<endl<<endl;
    }

    void distribute()
    {
        int EM;

            cout<<"\nTime to Distribute "<<SUM<<" Rs. Among the Underprivileged\n";
            cout<<"There are "<<underpri<<" Underpriviliged People before distribution.";
            cout<<"\n\n\tDetails (Y/N) : ";
            char choice2;
            cin>>choice2;
            cout<<endl<<endl;

            if(choice2=='y'|| choice2=='Y')
            {
                cout<<"\n\tBefore Distribution"<<endl;
                cout<<"\t---------------------"<<endl;
                generate_Money_Poor_Option2();
            }

                cout<<endl<<endl;
                EM=SUM/underpri;
                cout<<EM<<" Rs. will be distributed to everyone\n\n";
                cout<<"\n\tAfter Distribution"<<endl;
                cout<<"\t---------------------"<<endl;

                    for(int i=0;i<underpri;i++)
                {
                    array2[i]+=EM;
                        if(array2[i]<50000)
                    {
                        cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
                    }
                        else
                    {
                        cout<<"\n"<<i+1<<" : No more Underpriviliged!";
                    }
                }
    }


    void Distribute_2()
    {
        int EM2;

            cout<<"\nNow Distributing "<<SUM3<<" Rs. Among the Remaining\n";
            int Size_Poor = underpri;
            int count=0;

            for(int i=0;i<Size_Poor;i++)
        {
            if(array2[i]<50000)
            {
                count++;
            }
        }
            cout<<"There are "<<count<<" Underpriviliged People left.";
            cout<<"\n\n\tDetails (Y/N) : ";
            char choice2;
            cin>>choice2;
            cout<<endl<<endl;

            if(choice2=='y'|| choice2=='Y')
            {
                cout<<"\n\tBefore Distribution"<<endl;
                cout<<"\t---------------------"<<endl;

                    for(int i=0;i<underpri;i++)
                {
                    if(array2[i]<50000)
                    {
                        cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
                    }
                }
            }

                cout<<endl<<endl;
                EM2=SUM3/count;
                cout<<EM2<<" Rs. will be distributed to everyone this time\n\n";
                cout<<"\n\tAfter Distribution"<<endl;
                cout<<"\t---------------------"<<endl;

                for(int i=0;i<count;i++)
                {
                    array2[i]+=EM2;
                        if(array2[i]<50000)
                    {
                        cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
                    }
                        else
                    {
                        cout<<"\n"<<i+1<<" : No more Underpriviliged!";
                    }
                }

            int count2=0;
            for(int i=0;i<Size_Poor;i++)
        {
                        if(array2[i]<50000)
                    {
                        count2++;
                    }
        }
            cout<<"\n\n\nThere are now "<<count2<<" Underpriviliged People left in Punjab.\n\n\n";
    }


    void invest()
    {
        cout<<"\n\n\tYou can not Invest Zakat Money!\n\n";

    }

};




class Sindh :public Pakistan
{
    public:

    void info()
    {
        cout << "\n\n\tTotal Population of Sindh : " << population;
        cout << " \n\tElite Class Members : " << calculate_elite();
        cout << " \n\tMiddle Class Members : " << calculate_middle();
        cout << " \n\tUnder-priviliged Members : " << calculate_underpri();
        cout<<endl<<endl<<endl;
    }

        int array1[10000];
        int array1m[10000];

        void generate_Money_Elite()
    {
        int Size_Elite=elite;

        int max_n = 700000;
        int min_n = 500000;
        int new_n;
        int i;

        int sum=0;
        int sum2=0;

        for (i = 0; i < Size_Elite; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array1[i]=new_n;
            array1m[i]= ((array1[i]/100)*2.5);
            cout<<"Elite "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<"\t(Tax Collected = "<<array1m[i]<<")"<<endl;
            sum2+=array1[i];
            sum+=array1m[i];
        }

        cout<<endl<<endl;
        int v=2021;
        cout<<"\tTotal Money Elites Have = "<<sum2<<endl;
        SUM2=sum2;
        cout<<"\tTotal Tax Collected from Elites = "<<sum<<"   (Year "<<v++<<")"<<endl;
                SUM=sum;

                for(i=0;i<Size_Elite;i++)
            {
                array1[i] = array1[i]-array1m[i];
            }
            cout<<endl<<endl<<endl;
    }

            void sorting_Riches()
        {
                int Size_Elite=elite;
                for (int i = 0; i < Size_Elite; i++)
            {
                int temp;
                for (int j = i+1; j < Size_Elite; j++)
                {
                    if (array1[i] < array1[j])
                    {
                        temp = array1[i];
                        array1[i] = array1[j];
                        array1[j] = temp;
                    }
                }
            }
        }   

    void Destroying_Elite_again()
    {
                int Size_Poor=underpri;
                int Size_Elite=elite;
                int count=0;

        cout<<"\n\n\n\tCollecting Tax Again";
        cout<<"\n\t--------------------\n\n";

            for(int i=0;i<Size_Poor;i++)
        {
                if(array2[i]<50000)
            {
                count++;
            }
        }
        

        countX=count;

        if(count<1)
        {
            cout<<"No more Underpriviliged Left to collect Tax for!\n\n";
        }

        else
        {
            int Tax2=0;
            for (int i = 0; i < Size_Elite; i++) 
            {
                array1m[i]= ((array1[i]/100)*2.5);
                Tax2+=array1m[i];

                if(array1[i]>500000)
                {
                    cout<<"Elite "<<i+1<<" Net Worth : "<<array1[i]<<" Rs"<<"\t(Tax Collected = "<<array1m[i]<<")"<<endl;
                }

                    array1[i] = array1[i]-array1m[i];

            }
                    cout<<"\n\n\tTotal Tax Collected from Elites Again = "<<Tax2<<"   (Year 2022)"<<endl<<endl;
                    SUM3=Tax2;
        }
    }

        int array2[10000];
    void generate_Money_Poor()
    {
            int Size_Poor=underpri;

        int max_n = 50000;
        int min_n = 0;
        int new_n;
        int i;
            for (i = 0; i < Size_Poor; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array2[i]=new_n;
            cout<<"Underprivileged "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }
            cout<<endl<<endl<<endl;

        cout<<"----------------------------------------------------\n\n\n";
    }

        void generate_Money_Poor_Option_1_2()
    {
        int Size_Poor=underpri;

        int max_n = 50000;
        int min_n = 0;
        int new_n;
        int i;
        for (i = 0; i < Size_Poor; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array2[i]=new_n;
            // cout<<"Underprivileged "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }
        // cout<<endl<<endl<<endl;
        // cout<<"----------------------------------------------------\n\n\n";
    }

        void sorting_Poor()
        {
                int Size_Poor=underpri;
                for (int i = 0; i < Size_Poor; i++)
            {
                int temp;
                for (int j = i+1; j < Size_Poor; j++)
                {
                    if (array2[i] > array2[j])
                    {
                        temp = array2[i];
                        array2[i] = array2[j];
                        array2[j] = temp;
                    }
                }
            }
        }   

    

        void generate_Money_Poor_Option2()
    {
            int Size_Poor=underpri;

            for(int i=0;i<Size_Poor;i++)
        {
            cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
        }

    }

    void generate_Money_Middle()
    {
            int Size_Middle=middle;
            int array3[Size_Middle];

        int max_n = 500000;
        int min_n = 50000;
        int new_n;
        int i;
            for (i = 0; i < Size_Middle; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array3[i]=new_n;
            cout<<"Middle "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }

        cout<<endl<<endl<<endl;
    }

        int array3[10000];
        void generate_Money_Middle_Option2()
    {
            int Size_Middle=middle;

        int max_n = 500000;
        int min_n = 50000;
        int new_n;
        int i;
            for (i = 0; i < Size_Middle; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array3[i]=new_n;
            // cout<<"Middle "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }
        // cout<<endl<<endl<<endl;
    }

    void distribute()
    {
        int EM;

            cout<<"\nTime to Distribute "<<SUM<<" Rs. Among the Underprivileged\n";
            cout<<"There are "<<underpri<<" Underpriviliged People before distribution.";
            cout<<"\n\n\tDetails (Y/N) : ";
            char choice2;
            cin>>choice2;
            cout<<endl<<endl;

            if(choice2=='y'|| choice2=='Y')
            {
                cout<<"\n\tBefore Distribution"<<endl;
                cout<<"\t---------------------"<<endl;
                generate_Money_Poor_Option2();
            }

                cout<<endl<<endl;
                EM=SUM/underpri;
                cout<<EM<<" Rs. will be distributed to everyone\n\n";
                cout<<"\n\tAfter Distribution"<<endl;
                cout<<"\t---------------------"<<endl;

                    for(int i=0;i<underpri;i++)
                {
                    array2[i]+=EM;
                        if(array2[i]<50000)
                    {
                        cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
                    }
                        else
                    {
                        cout<<"\n"<<i+1<<" : No more Underpriviliged!";
                    }
                }
    }


    void Distribute_2()
    {
        int EM2;

            cout<<"\nNow Distributing "<<SUM3<<" Rs. Among the Remaining\n";
            int Size_Poor = underpri;
            int count=0;

            for(int i=0;i<Size_Poor;i++)
        {
            if(array2[i]<50000)
            {
                count++;
            }
        }
            cout<<"There are "<<count<<" Underpriviliged People left.";
            cout<<"\n\n\tDetails (Y/N) : ";
            char choice2;
            cin>>choice2;
            cout<<endl<<endl;

            if(choice2=='y'|| choice2=='Y')
            {
                cout<<"\n\tBefore Distribution"<<endl;
                cout<<"\t---------------------"<<endl;

                    for(int i=0;i<underpri;i++)
                {
                    if(array2[i]<50000)
                    {
                        cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
                    }
                }
            }

                cout<<endl<<endl;
                EM2=SUM3/count;
                cout<<EM2<<" Rs. will be distributed to everyone this time\n\n";
                cout<<"\n\tAfter Distribution"<<endl;
                cout<<"\t---------------------"<<endl;

                for(int i=0;i<count;i++)
                {
                    array2[i]+=EM2;
                        if(array2[i]<50000)
                    {
                        cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
                    }
                        else
                    {
                        cout<<"\n"<<i+1<<" : No more Underpriviliged!";
                    }
                }

            int count2=0;
            for(int i=0;i<Size_Poor;i++)
        {
                        if(array2[i]<50000)
                    {
                        count2++;
                    }
        }
            cout<<"\n\n\nThere are now "<<count2<<" Underpriviliged People left in Sindh.\n\n\n";
    }


    void invest()
    {
        cout<<"\n\n\tYou can not Invest Zakat Money!\n\n";

    }

};




class Balochistan :public Pakistan
{
    public:

    void info()
    {
        cout << "\n\n\tTotal Population of Balochistan : " << population;
        cout << " \n\tElite Class Members : " << calculate_elite();
        cout << " \n\tMiddle Class Members : " << calculate_middle();
        cout << " \n\tUnder-priviliged Members : " << calculate_underpri();
        cout<<endl<<endl<<endl;
    }

        int array1[10000];
        int array1m[10000];

        void generate_Money_Elite()
    {
        int Size_Elite=elite;

        int max_n = 700000;
        int min_n = 500000;
        int new_n;
        int i;

        int sum=0;
        int sum2=0;

        for (i = 0; i < Size_Elite; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array1[i]=new_n;
            array1m[i]= ((array1[i]/100)*2.5);
            cout<<"Elite "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<"\t(Tax Collected = "<<array1m[i]<<")"<<endl;
            sum2+=array1[i];
            sum+=array1m[i];
        }

        cout<<endl<<endl;
        int v=2021;
        cout<<"\tTotal Money Elites Have = "<<sum2<<endl;
        SUM2=sum2;
        cout<<"\tTotal Tax Collected from Elites = "<<sum<<"   (Year "<<v++<<")"<<endl;
                SUM=sum;

                for(i=0;i<Size_Elite;i++)
            {
                array1[i] = array1[i]-array1m[i];
            }
            cout<<endl<<endl<<endl;
    }

            void sorting_Riches()
        {
                int Size_Elite=elite;
                for (int i = 0; i < Size_Elite; i++)
            {
                int temp;
                for (int j = i+1; j < Size_Elite; j++)
                {
                    if (array1[i] < array1[j])
                    {
                        temp = array1[i];
                        array1[i] = array1[j];
                        array1[j] = temp;
                    }
                }
            }
        }   

    void Destroying_Elite_again()
    {
                int Size_Poor=underpri;
                int Size_Elite=elite;
                int count=0;

        cout<<"\n\n\n\tCollecting Tax Again";
        cout<<"\n\t--------------------\n\n";

            for(int i=0;i<Size_Poor;i++)
        {
                if(array2[i]<50000)
            {
                count++;
            }
        }
        

        countX=count;

        if(count<1)
        {
            cout<<"No more Underpriviliged Left to collect Tax for!\n\n";
        }

        else
        {
            int Tax2=0;
            for (int i = 0; i < Size_Elite; i++) 
            {
                array1m[i]= ((array1[i]/100)*2.5);
                Tax2+=array1m[i];

                if(array1[i]>500000)
                {
                    cout<<"Elite "<<i+1<<" Net Worth : "<<array1[i]<<" Rs"<<"\t(Tax Collected = "<<array1m[i]<<")"<<endl;
                }

                    array1[i] = array1[i]-array1m[i];

            }
                    cout<<"\n\n\tTotal Tax Collected from Elites Again = "<<Tax2<<"   (Year 2022)"<<endl<<endl;
                    SUM3=Tax2;
        }
    }

        int array2[10000];
    void generate_Money_Poor()
    {
            int Size_Poor=underpri;

        int max_n = 50000;
        int min_n = 0;
        int new_n;
        int i;
            for (i = 0; i < Size_Poor; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array2[i]=new_n;
            cout<<"Underprivileged "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }
            cout<<endl<<endl<<endl;

        cout<<"----------------------------------------------------\n\n\n";
    }

        void generate_Money_Poor_Option_1_2()
    {
        int Size_Poor=underpri;

        int max_n = 50000;
        int min_n = 0;
        int new_n;
        int i;
        for (i = 0; i < Size_Poor; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array2[i]=new_n;
            // cout<<"Underprivileged "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }
        // cout<<endl<<endl<<endl;
        // cout<<"----------------------------------------------------\n\n\n";
    }

        void sorting_Poor()
        {
                int Size_Poor=underpri;
                for (int i = 0; i < Size_Poor; i++)
            {
                int temp;
                for (int j = i+1; j < Size_Poor; j++)
                {
                    if (array2[i] > array2[j])
                    {
                        temp = array2[i];
                        array2[i] = array2[j];
                        array2[j] = temp;
                    }
                }
            }
        }   

    

        void generate_Money_Poor_Option2()
    {
            int Size_Poor=underpri;

            for(int i=0;i<Size_Poor;i++)
        {
            cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
        }

    }

    void generate_Money_Middle()
    {
            int Size_Middle=middle;
            int array3[Size_Middle];

        int max_n = 500000;
        int min_n = 50000;
        int new_n;
        int i;
            for (i = 0; i < Size_Middle; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array3[i]=new_n;
            cout<<"Middle "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }

        cout<<endl<<endl<<endl;
    }

        int array3[10000];
        void generate_Money_Middle_Option2()
    {
            int Size_Middle=middle;

        int max_n = 500000;
        int min_n = 50000;
        int new_n;
        int i;
            for (i = 0; i < Size_Middle; i++) 
        {
            new_n = ((rand() % (max_n + 1 - min_n)) + min_n);
            array3[i]=new_n;
            // cout<<"Middle "<<i+1<<" Net Worth : "<<new_n<<" Rs"<<endl;
        }
        // cout<<endl<<endl<<endl;
    }

    void distribute()
    {
        int EM;

            cout<<"\nTime to Distribute "<<SUM<<" Rs. Among the Underprivileged\n";
            cout<<"There are "<<underpri<<" Underpriviliged People before distribution.";
            cout<<"\n\n\tDetails (Y/N) : ";
            char choice2;
            cin>>choice2;
            cout<<endl<<endl;

            if(choice2=='y'|| choice2=='Y')
            {
                cout<<"\n\tBefore Distribution"<<endl;
                cout<<"\t---------------------"<<endl;
                generate_Money_Poor_Option2();
            }

                cout<<endl<<endl;
                EM=SUM/underpri;
                cout<<EM<<" Rs. will be distributed to everyone\n\n";
                cout<<"\n\tAfter Distribution"<<endl;
                cout<<"\t---------------------"<<endl;

                    for(int i=0;i<underpri;i++)
                {
                    array2[i]+=EM;
                        if(array2[i]<50000)
                    {
                        cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
                    }
                        else
                    {
                        cout<<"\n"<<i+1<<" : No more Underpriviliged!";
                    }
                }
    }


    void Distribute_2()
    {
        int EM2;

            cout<<"\nNow Distributing "<<SUM3<<" Rs. Among the Remaining\n";
            int Size_Poor = underpri;
            int count=0;

            for(int i=0;i<Size_Poor;i++)
        {
            if(array2[i]<50000)
            {
                count++;
            }
        }
            cout<<"There are "<<count<<" Underpriviliged People left.";
            cout<<"\n\n\tDetails (Y/N) : ";
            char choice2;
            cin>>choice2;
            cout<<endl<<endl;

            if(choice2=='y'|| choice2=='Y')
            {
                cout<<"\n\tBefore Distribution"<<endl;
                cout<<"\t---------------------"<<endl;

                    for(int i=0;i<underpri;i++)
                {
                    if(array2[i]<50000)
                    {
                        cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
                    }
                }
            }

                cout<<endl<<endl;
                EM2=SUM3/count;
                cout<<EM2<<" Rs. will be distributed to everyone this time\n\n";
                cout<<"\n\tAfter Distribution"<<endl;
                cout<<"\t---------------------"<<endl;

                for(int i=0;i<count;i++)
                {
                    array2[i]+=EM2;
                        if(array2[i]<50000)
                    {
                        cout<<"Poor "<<i+1<<" Net Worth : "<<array2[i]<<" Rs"<<endl;
                    }
                        else
                    {
                        cout<<"\n"<<i+1<<" : No more Underpriviliged!";
                    }
                }

            int count2=0;
            for(int i=0;i<Size_Poor;i++)
        {
                        if(array2[i]<50000)
                    {
                        count2++;
                    }
        }
            cout<<"\n\n\nThere are now "<<count2<<" Underpriviliged People left in Balochistan.\n\n\n";
    }


    void invest()
    {
        cout<<"\n\n\tYou can not Invest Zakat Money!\n\n";

    }

};

int main()
{
    string pr;
    string k = "kpk", p = "punjab", s = "sindh", b = "balochistan";

            cout << "\n\n\tChoose Your Province : ";
            cin >> pr;
    

    if (pr == k)
    {
        KPK K;
        K.setprovince();
        K.calculate_elite();
        K.calculate_middle();
        K.calculate_underpri();
        K.info();
        K.generate_Money_Elite();
        cout<<"\tDo you want Further Details? (Y/N): ";
        char choice1;
        cin>>choice1;
        if(choice1=='y'|| choice1=='Y')
        {
            cout<<endl<<endl<<endl;

            K.generate_Money_Middle();
            K.generate_Money_Poor();
            K.sorting_Poor();
        }

        else
        {
            K.generate_Money_Poor_Option_1_2();
            K.sorting_Poor();
            K.generate_Money_Middle_Option2();
            cout<<"\n\tProceeding...\n";
        }

        cout<<"What do you want to do with this money? (Distribute/Invest) : ";
        string choice2;
        cin>>choice2;

        if(choice2=="distribute"|| choice2=="Distribute"|| choice2=="D"|| choice2=="d")
        {
            K.distribute();
        }

        else if(choice2=="Invest"||choice2=="invest"||choice2=="i"||choice2=="I")
        {
            K.invest();
        }

        K.sorting_Riches();
        cout<<"\n\nDo you want to Collect Tax Again? (Y/N) : ";
        char choice4;
        cin>>choice4;
        if(choice4=='y'|| choice4=='Y')
        {
                K.Destroying_Elite_again();

                    if(countX<1)
                {
                    cout<<".....\n\n";
                }

                else
                {

                    cout<<"What do you want to do with Tax this time? (Distribute/Invest) : ";
                    string choice7;
                    cin>>choice7;

                        if(choice7=="distribute"|| choice7=="Distribute"||choice7=="d"||choice7=="D")
                    {
                        K.Distribute_2();
                    }

                        else if(choice7=="Invest"||choice7=="invest"||choice7=="i"||choice7=="I")
                    {
                        K.invest();
                    }
                }

        }

        else
        {
            cout<<"\nThanks you...\n\n";
        }

    }



        if (pr == p)
    {
        Punjab K;
        K.setprovince();
        K.calculate_elite();
        K.calculate_middle();
        K.calculate_underpri();
        K.info();
        K.generate_Money_Elite();
        cout<<"\tDo you want Further Details? (Y/N): ";
        char choice1;
        cin>>choice1;
        if(choice1=='y'|| choice1=='Y')
        {
            cout<<endl<<endl<<endl;

            K.generate_Money_Middle();
            K.generate_Money_Poor();
            K.sorting_Poor();
        }

        else
        {
            K.generate_Money_Poor_Option_1_2();
            K.sorting_Poor();
            K.generate_Money_Middle_Option2();
            cout<<"\n\tProceeding...\n";
        }

        cout<<"What do you want to do with this money? (Distribute/Invest) : ";
        string choice2;
        cin>>choice2;

        if(choice2=="distribute"|| choice2=="Distribute"|| choice2=="D"|| choice2=="d")
        {
            K.distribute();
        }

        else if(choice2=="Invest"||choice2=="invest"||choice2=="i"||choice2=="I")
        {
            K.invest();
        }

        K.sorting_Riches();
        cout<<"\n\nDo you want to Collect Tax Again? (Y/N) : ";
        char choice4;
        cin>>choice4;
        if(choice4=='y'|| choice4=='Y')
        {
                K.Destroying_Elite_again();

                    if(countX<1)
                {
                    cout<<".....\n\n";
                }

                else
                {

                    cout<<"What do you want to do with Tax this time? (Distribute/Invest) : ";
                    string choice7;
                    cin>>choice7;

                        if(choice7=="distribute"|| choice7=="Distribute"||choice7=="d"||choice7=="D")
                    {
                        K.Distribute_2();
                    }

                        else if(choice7=="Invest"||choice7=="invest"||choice7=="i"||choice7=="I")
                    {
                        K.invest();
                    }
                }

        }

        else
        {
            cout<<"\nThanks you...\n\n";
        }

    }




        if (pr == s)
    {
        Sindh K;
        K.setprovince();
        K.calculate_elite();
        K.calculate_middle();
        K.calculate_underpri();
        K.info();
        K.generate_Money_Elite();
        cout<<"\tDo you want Further Details? (Y/N): ";
        char choice1;
        cin>>choice1;
        if(choice1=='y'|| choice1=='Y')
        {
            cout<<endl<<endl<<endl;

            K.generate_Money_Middle();
            K.generate_Money_Poor();
            K.sorting_Poor();
        }

        else
        {
            K.generate_Money_Poor_Option_1_2();
            K.sorting_Poor();
            K.generate_Money_Middle_Option2();
            cout<<"\n\tProceeding...\n";
        }

        cout<<"What do you want to do with this money? (Distribute/Invest) : ";
        string choice2;
        cin>>choice2;

        if(choice2=="distribute"|| choice2=="Distribute"|| choice2=="D"|| choice2=="d")
        {
            K.distribute();
        }

        else if(choice2=="Invest"||choice2=="invest"||choice2=="i"||choice2=="I")
        {
            K.invest();
        }

        K.sorting_Riches();
        cout<<"\n\nDo you want to Collect Tax Again? (Y/N) : ";
        char choice4;
        cin>>choice4;
        if(choice4=='y'|| choice4=='Y')
        {
                K.Destroying_Elite_again();

                    if(countX<1)
                {
                    cout<<".....\n\n";
                }

                else
                {

                    cout<<"What do you want to do with Tax this time? (Distribute/Invest) : ";
                    string choice7;
                    cin>>choice7;

                        if(choice7=="distribute"|| choice7=="Distribute"||choice7=="d"||choice7=="D")
                    {
                        K.Distribute_2();
                    }

                        else if(choice7=="Invest"||choice7=="invest"||choice7=="i"||choice7=="I")
                    {
                        K.invest();
                    }
                }

        }

        else
        {
            cout<<"\nThanks you...\n\n";
        }

    }





        if (pr == b)
    {
        Balochistan K;
        K.setprovince();
        K.calculate_elite();
        K.calculate_middle();
        K.calculate_underpri();
        K.info();
        K.generate_Money_Elite();
        cout<<"\tDo you want Further Details? (Y/N): ";
        char choice1;
        cin>>choice1;
        if(choice1=='y'|| choice1=='Y')
        {
            cout<<endl<<endl<<endl;

            K.generate_Money_Middle();
            K.generate_Money_Poor();
            K.sorting_Poor();
        }

        else
        {
            K.generate_Money_Poor_Option_1_2();
            K.sorting_Poor();
            K.generate_Money_Middle_Option2();
            cout<<"\n\tProceeding...\n";
        }

        cout<<"What do you want to do with this money? (Distribute/Invest) : ";
        string choice2;
        cin>>choice2;

        if(choice2=="distribute"|| choice2=="Distribute"|| choice2=="D"|| choice2=="d")
        {
            K.distribute();
        }

        else if(choice2=="Invest"||choice2=="invest"||choice2=="i"||choice2=="I")
        {
            K.invest();
        }

        K.sorting_Riches();
        cout<<"\n\nDo you want to Collect Tax Again? (Y/N) : ";
        char choice4;
        cin>>choice4;
        if(choice4=='y'|| choice4=='Y')
        {
                K.Destroying_Elite_again();

                    if(countX<1)
                {
                    cout<<".....\n\n";
                }

                else
                {

                    cout<<"What do you want to do with Tax this time? (Distribute/Invest) : ";
                    string choice7;
                    cin>>choice7;

                        if(choice7=="distribute"|| choice7=="Distribute"||choice7=="d"||choice7=="D")
                    {
                        K.Distribute_2();
                    }

                        else if(choice7=="Invest"||choice7=="invest"||choice7=="i"||choice7=="I")
                    {
                        K.invest();
                    }
                }

        }

        else
        {
            cout<<"\nThanks you...\n\n";
        }

    }




    return 0;
}
