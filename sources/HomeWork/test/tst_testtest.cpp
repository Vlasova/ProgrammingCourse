#include <QString>
#include <QtTest>
#include "search_clear.h"
#include "search_threat.h"
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


void TestTestCase1()
{
    QVERIFY2(true, "Failure");
}
void search_sine_test()
{
QCOMPARE(sinx(0.5, 0.001), 0.5);
}

void search_threat_test()
{
QCOMPARE(search_threat(2, 4, 1, 2, 3, 3), "threat from elephant");
}

void trancfer_test()
{
QCOMPARE(trancfer_to_meters(8, 2, 11.4), 19);
}

QTEST_APPLESS_MAIN(TestTest)

#include "tst_testtest.moc"
