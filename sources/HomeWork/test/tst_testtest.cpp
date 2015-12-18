#include <QString>
#include <QtTest>
#include "search_clear.h"
#include "search_threat"
#include "sin_x.h"
#include "trancfer_to_meter.h"


class TestTest : public QObject
{
    Q_OBJECT


private Q_SLOTS:
    void testCase1();
    void search_sine_test();
    void search_threat_test();
    void trancfer_test();
};


void TestTest::testCase1()
{
    QVERIFY2(true, "Failure");
}
void TestTest::search_sine_test()
{
QOMPARE(sinx(0.5, 0.001), 0.5);
}

void TestTest::search_threat_test()
{
QOMPARE(search_threat(2, 4, 1, 2, 3, 3), "Угроза от слона");
}

void TestTest::trancfer_test()
{
QOMPARE(trancfer_to_meters(8, 2, 11.4), 19);
}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"
