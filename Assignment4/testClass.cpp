[TestFixture]
public class TestClass
{
	int k;
	int m;
	int x;

	public void function() // function to test
	{
		int i;
		for(i=0; i<k; i++) {
			m = m + x;
		}
	}

	[Setup]
	public void Setup() //Will set the following vaules after each test
	{
		m = 2;
		x = 2;
	}

	[Test]
	public void Loop_KEqual_minus1()
	{
		k = -1;
		function();
		assert.AreEqual(m,0) //m should be 0, but will be 2
	}

	[Test]
	public void Loop_KEqual_0()
	{
		k = 0;
		function();
		assert.AreEqual(m,2) //Works fine
	}

	[Test]
	public void Loop_KEqual_1()
	{
		k = 1;
		function();
		assert.AreEqual(m,4) //Works fine
	}
}