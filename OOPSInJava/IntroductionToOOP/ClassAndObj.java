class Rectangle{
 
    //Attributes or fields
	public int length;
	public int breadth;


    //Methods or Behavior
	public int Area(){
		return length*breadth;
	}

	public int Perimeter(){
		return 2*(length+breadth);
	} 
}

class Main{
	public static void main(String args[]){
        //Creating the Object of the class
		Rectangle r=new Rectangle();

		r.length=10;
		r.breadth=20;

		System.out.println("The Area of Rectangle is :"+r.Area());
		System.out.println("The Perimeter of Rectangle is :"+r.Perimeter());

	}
}
