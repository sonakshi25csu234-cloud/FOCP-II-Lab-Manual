float basic_salary, bonus=1.12, no , n;

    cout<<"Enter total no. of employees: ";
    cin>>n;

    for (int i=1; i<=n; i++){

    cout<<"\n Enter no. of employee: ";
    cin>>no;

    cout<<"\n Enter basic salary of employee: ";
    cin>>basic_salary;

    cout<<"\n Net salary of employee: "<<basic_salary*bonus;
