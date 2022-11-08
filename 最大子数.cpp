package koko;
 
import static org.junit.Assert.*;
 
import org.junit.Test;
 
public class mkmktest {
 
    @Test
    public void test1() {
        int []a={-1,2,2,3,4,5};
        assertEquals(16,mkmk.maxSubSum1(a));
    }
    @Test
    public void test2(){
        int []a={-6,-2,13,-7,14,-1,-2,-2};
        assertEquals(20,mkmk.maxSubSum1(a));
    }
    @Test
    public void test3(){
        int []a={1,2,3,4,1,2};
        assertEquals(13,mkmk.maxSubSum1(a));
    }
    @Test
    public void test4(){
        int []a={-1,-2,-4,-7,-9};
        assertEquals(0,mkmk.maxSubSum1(a));
    } 
 
}