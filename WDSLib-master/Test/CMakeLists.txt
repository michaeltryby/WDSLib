cmake_minimum_required(VERSION 2.6)
add_executable(TEST UnitTest.cc)
TARGET_LINK_LIBRARIES(TEST
                       WDSLib)

add_test(NYTP_GGA TEST ../../WDSLib-master/Test/test1/GGAconfig.txt ../../WDSLib-master/Test/test1/LinkResult.txt ../../WDSLib-master/Test/test1/NodeResult.txt)

add_test(NYTP_GGA_FCPA TEST ../../WDSLib-master/Test/test1/GGAFCPAconfig.txt ../../WDSLib-master/Test/test1/LinkResult.txt ../../WDSLib-master/Test/test1/NodeResult.txt)

add_test(NYTP_RCTM TEST ../../WDSLib-master/Test/test1/RCTMconfig.txt ../../WDSLib-master/Test/test1/LinkResult.txt ../../WDSLib-master/Test/test1/NodeResult.txt)

add_test(NYTP_RCTM_FCPA TEST ../../WDSLib-master/Test/test1/RCTMFCPAconfig.txt ../../WDSLib-master/Test/test1/LinkResult.txt ../../WDSLib-master/Test/test1/NodeResult.txt)


  
add_test(hanoi_GGA TEST ../../WDSLib-master/Test/test2/GGAconfig.txt ../../WDSLib-master/Test/test2/LinkResult.txt ../../WDSLib-master/Test/test2/NodeResult.txt)

add_test(hanoi_GGA_FCPA TEST ../../WDSLib-master/Test/test2/GGAFCPAconfig.txt ../../WDSLib-master/Test/test2/LinkResult.txt ../../WDSLib-master/Test/test2/NodeResult.txt)

add_test(hanoi_RCTM TEST ../../WDSLib-master/Test/test2/RCTMconfig.txt ../../WDSLib-master/Test/test2/LinkResult.txt ../../WDSLib-master/Test/test2/NodeResult.txt)

add_test(hanoi_RCTM_FCPA TEST ../../WDSLib-master/Test/test2/RCTMFCPAconfig.txt ../../WDSLib-master/Test/test2/LinkResult.txt ../../WDSLib-master/Test/test2/NodeResult.txt)


  
add_test(n1_GGA TEST ../../WDSLib-master/Test/test3/GGAconfig.txt ../../WDSLib-master/Test/test3/LinkResult.txt ../../WDSLib-master/Test/test3/NodeResult.txt)

add_test(n1_GGA_FCPA TEST ../../WDSLib-master/Test/test3/GGAFCPAconfig.txt ../../WDSLib-master/Test/test3/LinkResult.txt ../../WDSLib-master/Test/test3/NodeResult.txt)

add_test(n1_RCTM TEST ../../WDSLib-master/Test/test3/RCTMconfig.txt ../../WDSLib-master/Test/test3/LinkResult.txt ../../WDSLib-master/Test/test3/NodeResult.txt)

add_test(n1_RCTM_FCPA TEST ../../WDSLib-master/Test/test3/RCTMFCPAconfig.txt ../../WDSLib-master/Test/test3/LinkResult.txt ../../WDSLib-master/Test/test3/NodeResult.txt)


  



  