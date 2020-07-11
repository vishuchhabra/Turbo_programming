  #include<iostream.h>
  #include<conio.h>
  class a
  {
  void fun()
  {
  cout<<"my name is khan";
  }
  };
  class b
  {
  friend class a;

  };
  //void fun()
  //{
  //cout<<"my name is khan";
 // }
  void main()
  {
  a c,d;
  b f,g;
  fun();
  fun();
  getch();
  }