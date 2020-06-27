class Test
{
	native void fact();
	static
	{
		System.loadLibrary("lit");
	}
	public static void main(String[] args) 
	{
		Test t = new Test();
		t.fact();
	}
}