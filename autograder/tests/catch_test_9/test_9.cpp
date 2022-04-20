//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p9.h"
using namespace std;

static void test_1() {
}

TEST_CASE("Question #9") {
    execute_test("test_9.in", test_1);
}