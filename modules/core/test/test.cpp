////
//// Created by huber stark on 9/5/19.
////
#define BOOST_TEST_MODULE My Test
#include <boost/test/unit_test.hpp>

#include "../include/Sort.h"

//int A[] = {6,2,3,1,9,10,15,13,12,17}; // creating an array of integers.
//int numberOfElements;

BOOST_AUTO_TEST_CASE(MyTest)
{
    int A[] = {6,2,3,1,9,10,15,13,12,17};
    int nums = sizeof(A)/sizeof(A[0]);
    Sort sort;
    sort.MergeSort(A, nums);

    // seven ways to detect and report the same error:
    for(int i=0; i<nums-1; i++){
        for(int j=1; j<nums; j++){
            BOOST_CHECK( A[i]<=A[j] );        // #1 continues on error

            BOOST_REQUIRE( A[i]<=A[j]  );      // #2 throws on error

            if( A[i]>A[j]  )
                BOOST_ERROR( "Ouch..." );            // #3 continues on error

            if( A[i]>A[j])
                BOOST_FAIL( "Ouch..." );             // #4 throws on error

            if( A[i]>A[j] ) throw "Ouch..."; // #5 throws on error

            BOOST_CHECK_MESSAGE( A[i]<=A[j],  // #6 continues on error
                                 "result: yes" );
        }
    }

}
