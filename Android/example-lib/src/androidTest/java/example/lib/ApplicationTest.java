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

    public void testDotProduct() {
        Math m = new Math();
        double[] arr1 = {2.0, 1.5, 4};
        double[] arr2 = {1.0, 2.0, 2};
        double n = m.dotProduct(arr1, arr2);
        assertEquals(n, 13.0);
    }
}
