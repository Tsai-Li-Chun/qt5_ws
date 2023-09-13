ui檔設計完之後, 建立相對應的.hpp&.cpp檔, 關係如下:
    ui_xxx.ui -> ui_xxx.h -> xxx.h -> xxx.cpp
xxx class, 需要繼承兩樣物件
1. class中要添加Q_OBJECT, 引用qt-MateObject(管控物件)宣告
2. 視窗物件, QMainWiondow or QWidget
    2-1. 需於xxx class建構函數中初始預設*parent位址為0 or nullptr
3. ui_xxx.h中的Ui:xxx物件
    3-1. 需於xxx class建構函數中執行 Ui::xxx->setupUi()函式

---

main.cpp 必要引入以下3個header檔
1. #inlcude <memory>
2. #include <QApplication>
3. #include <QDeBug>
    3-1. qDebug() << qt.exec(); 這寫法可打印出執行狀態

---

uic xxx.ui -o path/xxx.h
qmake -project "QT += gui widgets"
qmake qt.pro
make