// UnitTest_9_2.cpp – unit-тест до проекту Lab_9_2 (макроси, варіант 9)
#include "pch.h"
#include "CppUnitTest.h"
#include "C:Users/Legion/Desktop/lab9.2/macros.h"
#include "C:Users/Legion/Desktop/lab9.2/output.h"
#include "C:Users/Legion/Desktop/lab9.2/variant9.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest_9_2
{
    TEST_CLASS(UnitTest_9_2)
    {
    public:

        TEST_METHOD(TestMaxMin)
        {
            Assert::AreEqual(5, MAX(2, 5));
            Assert::AreEqual(2, MIN(2, 5));
        }

        TEST_METHOD(TestAbs)
        {
            Assert::AreEqual(3, ABS(-3));
            Assert::AreEqual(3, ABS(3));
            Assert::AreEqual(5, ABS(2 - 7));     
        }

        TEST_METHOD(TestSqr)
        {
            Assert::AreEqual(9, SQR(3));
            Assert::AreEqual(25, SQR(2 + 3));   
        }

        TEST_METHOD(TestPowRoot)
        {
            Assert::AreEqual(8.0, (double)POW(2.0, 3), 1e-12);
            Assert::AreEqual(3.0, (double)ROOT(9.0), 1e-12);
        }

        TEST_METHOD(TestLogic)
        {
            Assert::IsTrue(AND(true, true));
            Assert::IsFalse(AND(true, false));
        }

        TEST_METHOD(TestW_GreaterThan5)
        {
            Assert::AreEqual(64.0, (double)W_GT(2.0, 1.0, 6.0), 1e-12);
        }

        TEST_METHOD(TestW_LessOrEqual5)
        {
            Assert::AreEqual(-1.0, (double)W_LE(2.0, 3.0, 1.0), 1e-12);
        }
    };
}