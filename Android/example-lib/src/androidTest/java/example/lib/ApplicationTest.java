package example.lib;

import android.app.Application;
import android.test.ApplicationTestCase;

/**
 * <a href="http://d.android.com/tools/testing/testing_android.html">Testing Fundamentals</a>
 */
public class ApplicationTest extends ApplicationTestCase<Application> {
  public ApplicationTest() {
    super(Application.class);
  }

  public void testMathDotProduct() {
    MathLib m = new MathLib();
    double[] arr1 = {2.0, 1.5, 4};
    double[] arr2 = {1.0, 2.0, 2};
    double n = m.dotProduct(arr1, arr2);
    assertEquals(n, 13.0);
  }

  public void testStrGet() {
    String str = "foobarbaz";
    StringLib s = new StringLib(str);
    String result = s.getStr();
    assertEquals(result, str);
  }

  public void testStrConcat() {
    StringLib s = new StringLib("foo");
    String result = s.concat("bar");
    assertEquals(result, "foobar");
  }

}
