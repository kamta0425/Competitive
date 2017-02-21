class Obj{
    
  public:

    int data,i;

};

sort(r+1,r+n+1, [](const obj &x, const Obj &y) {
       
     return x.data > y.data;
        
});