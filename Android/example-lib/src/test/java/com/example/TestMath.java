package com.example;

import org.junit.Test;

import static org.junit.Assert.*;

/**
 * To work on unit tests, switch the Test Artifact in the Build Variants view.
 */
public class TestMath {
    @Test
    public void testBasic() throws Exception {
      Math m = new Math();
      int result = m.basic();
      assertEquals(result, 42);
    }
}
