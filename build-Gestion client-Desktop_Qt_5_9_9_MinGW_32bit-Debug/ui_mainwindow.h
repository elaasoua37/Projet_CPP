/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *cin;
    QLabel *nom;
    QLabel *prenom;
    QLabel *date_naisc;
    QLabel *tel;
    QLabel *adresse;
    QLineEdit *le_cin;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QLineEdit *le_tel;
    QLineEdit *le_adresse;
    QPushButton *b_ajouter;
    QDateEdit *dateEdit_2;
    QWidget *tab_2;
    QTableView *tab_client;
    QWidget *tab_3;
    QLabel *adresse_2;
    QLabel *prenom_2;
    QLabel *nom_2;
    QLabel *cin_3;
    QLabel *tel_2;
    QLineEdit *le_cin_3;
    QLineEdit *le_adresse_2;
    QLineEdit *le_tel_2;
    QLabel *date_naisc_2;
    QLineEdit *le_nom_2;
    QLineEdit *le_prenom_2;
    QPushButton *b_modifier;
    QDateEdit *dateEdit;
    QWidget *tab_4;
    QGroupBox *groupBox_2;
    QPushButton *b_supprimer;
    QLineEdit *le_cin_2;
    QLabel *cin_2;
    QWidget *tab_6;
    QWidget *tab_5;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menuBar;
    QMenu *menuGESTION_DES_CLIENTS;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1029, 586);
        MainWindow->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px white ;\n"
"     background-color: #601700;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 100;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #601700;\n"
"    background-color: #e0d0c1;\n"
"}\n"
"\n"
"/*QWidget:item\n"
"{\n"
"	 border-top-color: #601700;\n"
"    border-color: #601700;\n"
"    color: #e0d0c1;\n"
"	background-color: #e0d0c1;\n"
"	\n"
"}*/\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e0d0c1, stop: 1 #a07461);\n"
"    color: #601700;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #a07461, stop: 1 #a07461);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: white;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: "
                        "QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #343434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #601700;\n"
"    background-color: #e0d0c1;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: #e0d0c1/*QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);*/\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color:white;\n"
"/*QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #a07461, stop: 0 #a07461, stop: 1 #a074"
                        "61);*/\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #601700;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #e0d0c1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e0d0c1, stop: 0.1 #a07461, stop: 0.5 #a07461, stop: 0.9 #a07461, stop: 1 #e0d0c1);\n"
"    border-width: 1px;\n"
"    border-color: #601700;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #a07461, stop: 0.2 #601700, stop: 0.5 #601700, stop: 0.8 #601700, stop: 1 #a07461);\n"
"/*QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #a07461, stop: 0.1 #601700, stop: 0.5 #601700, stop: 0.9 #601700, stop: 1 #61700);*/\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0"
                        ", y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #a07461, stop: 1 #c18c75);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid white;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     borde"
                        "r-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"     image: url(:/down_arrow.png);\n"
"}\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid #e0d0c1/*QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e0d0c1, stop: 1 #a07461);*/\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid #e0d0c1/*QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #601700;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #601700, stop: 0.2 #601700, stop: 1 #601700);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #e0d0c1, stop: 0.5 #e0d0c1"
                        ", stop: 1 #e0d0c1);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #601700;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #e0d0c1, stop: 1 #e0d0c1);\n"
"      width: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #601700;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #e0d0c1, stop: 1 #e0d0c1);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
""
                        "}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #601700, stop: 0.2 #601700, stop: 1 #601700);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #601700;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e0d0c1, stop: 0.5 #e0d0c1, stop: 1 #e0d0c1);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #601700;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e0d0c1, stop: 1 #e0d0c1);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #601700;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e0d0c1, stop: 1 #e0d0c1);\n"
" "
                        "     height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #e0d0c1;\n"
"border:#e0d0c1;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #e0d0c1;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e0d0c1, stop: 0.2 #a07461, stop: 0.5 #a07461, stop: 0.8 #a07461, stop: 1 #e0d0c1);/*QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #c1b4a7, stop: 0.5 #8c6555, stop: 0.6 #601700, stop:1 #8c6555);*/\n"
"    color: #e0d0c1;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #601700;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
""
                        "}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px "
                        "solid #e0d0c1;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QToolBar::handle\n"
"{\n"
"     spacing: 3px; /* spacing between items in the tool bar */\n"
"     background: url(:/images/handle.png);\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    b"
                        "ackground-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #e0d0c1;\n"
"    border: 1px solid #601700;\n"
"    border-bottom-style: none;\n"
"    background-color:   QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #601700, stop:.4 #841e00);;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #601700;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #601700;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    ba"
                        "ckground-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #a07461, stop:.4 #bc8872);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #a07461, stop:0.4 #bc8872, stop:0.2 #bc8872, stop:0.1 #a07461);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #601700;\n"
"    background-color: #a07461;\n"
"    border: 1px solid #601700;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #e0d0c1,\n"
"        stop: 0.3 #601700\n"
"   "
                        " );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #601700;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(:/images/checkbox.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 70, 851, 441));
        tabWidget->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px white ;\n"
"     background-color: #601700;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 100;\n"
"}\n"
"\n"
"QWidget\n"
"{\n"
"    color: #601700;\n"
"    background-color: #e0d0c1;\n"
"}\n"
"\n"
"/*QWidget:item\n"
"{\n"
"	 border-top-color: #601700;\n"
"    border-color: #601700;\n"
"    color: #e0d0c1;\n"
"	background-color: #e0d0c1;\n"
"	\n"
"}*/\n"
"QWidget:item:hover\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e0d0c1, stop: 1 #a07461);\n"
"    color: #601700;\n"
"}\n"
"\n"
"QWidget:item:selected\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #a07461, stop: 1 #a07461);\n"
"}\n"
"\n"
"QMenuBar::item\n"
"{\n"
"    background: white;\n"
"}\n"
"\n"
"QMenuBar::item:selected\n"
"{\n"
"    background: transparent;\n"
"    border: 1px solid #ffaa00;\n"
"}\n"
"\n"
"QMenuBar::item:pressed\n"
"{\n"
"    background: #444;\n"
"    border: 1px solid #000;\n"
"    background-color: "
                        "QLinearGradient(\n"
"        x1:0, y1:0,\n"
"        x2:0, y2:1,\n"
"        stop:1 #212121,\n"
"        stop:0.4 #343434/*,\n"
"        stop:0.2 #343434,\n"
"        stop:0.1 #ffaa00*/\n"
"    );\n"
"    margin-bottom:-1px;\n"
"    padding-bottom:1px;\n"
"}\n"
"\n"
"QMenu\n"
"{\n"
"    border: 1px solid #000;\n"
"}\n"
"\n"
"QMenu::item\n"
"{\n"
"    padding: 2px 20px 2px 20px;\n"
"}\n"
"\n"
"QMenu::item:selected\n"
"{\n"
"    color: #000000;\n"
"}\n"
"\n"
"QWidget:disabled\n"
"{\n"
"    color: #601700;\n"
"    background-color: #e0d0c1;\n"
"}\n"
"\n"
"QAbstractItemView\n"
"{\n"
"    background-color: #e0d0c1/*QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #4d4d4d, stop: 0.1 #646464, stop: 1 #5d5d5d);*/\n"
"}\n"
"\n"
"QWidget:focus\n"
"{\n"
"    /*border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QLineEdit\n"
"{\n"
"    background-color:white;\n"
"/*QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #a07461, stop: 0 #a07461, stop: 1 #a074"
                        "61);*/\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border: 1px solid #601700;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QPushButton\n"
"{\n"
"    color: #e0d0c1;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e0d0c1, stop: 0.1 #a07461, stop: 0.5 #a07461, stop: 0.9 #a07461, stop: 1 #e0d0c1);\n"
"    border-width: 1px;\n"
"    border-color: #601700;\n"
"    border-style: solid;\n"
"    border-radius: 6;\n"
"    padding: 3px;\n"
"    font-size: 12px;\n"
"    padding-left: 5px;\n"
"    padding-right: 5px;\n"
"}\n"
"\n"
"QPushButton:pressed\n"
"{\n"
"    background-color:QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #a07461, stop: 0.2 #601700, stop: 0.5 #601700, stop: 0.8 #601700, stop: 1 #a07461);\n"
"/*QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #a07461, stop: 0.1 #601700, stop: 0.5 #601700, stop: 0.9 #601700, stop: 1 #61700);*/\n"
"}\n"
"\n"
"QComboBox\n"
"{\n"
"    selection-background-color: #ffaa00;\n"
"    background-color: QLinearGradient( x1: 0"
                        ", y1: 0, x2: 0, y2: 1, stop: 0 #565656, stop: 0.1 #525252, stop: 0.5 #4e4e4e, stop: 0.9 #4a4a4a, stop: 1 #464646);\n"
"    border-style: solid;\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 5;\n"
"}\n"
"\n"
"QComboBox:hover,QPushButton:hover\n"
"{\n"
"    border: 2px solid QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #a07461, stop: 1 #c18c75);\n"
"}\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    padding-top: 3px;\n"
"    padding-left: 4px;\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #2d2d2d, stop: 0.1 #2b2b2b, stop: 0.5 #292929, stop: 0.9 #282828, stop: 1 #252525);\n"
"    selection-background-color: #ffaa00;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView\n"
"{\n"
"    border: 2px solid white;\n"
"    selection-background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     borde"
                        "r-left-width: 0px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"     image: url(:/down_arrow.png);\n"
"}\n"
"\n"
"QGroupBox:focus\n"
"{\n"
"border: 2px solid #e0d0c1/*QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e0d0c1, stop: 1 #a07461);*/\n"
"}\n"
"\n"
"QTextEdit:focus\n"
"{\n"
"    border: 2px solid #e0d0c1/*QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #ffa02f, stop: 1 #d7801a);*/\n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"     border: 1px solid #601700;\n"
"     background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0.0 #601700, stop: 0.2 #601700, stop: 1 #601700);\n"
"     height: 7px;\n"
"     margin: 0px 16px 0 16px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #e0d0c1, stop: 0.5 #e0d0c1"
                        ", stop: 1 #e0d0c1);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"      border: 1px solid #601700;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #e0d0c1, stop: 1 #e0d0c1);\n"
"      width: 14px;\n"
"      subcontrol-position: right;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"      border: 1px solid #601700;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 #e0d0c1, stop: 1 #e0d0c1);\n"
"      width: 14px;\n"
"     subcontrol-position: left;\n"
"     subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::right-arrow:horizontal, QScrollBar::left-arrow:horizontal\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal\n"
"{\n"
"      background: none;\n"
""
                        "}\n"
"\n"
"QScrollBar:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 1, y2: 0, stop: 0.0 #601700, stop: 0.2 #601700, stop: 1 #601700);\n"
"      width: 7px;\n"
"      margin: 16px 0 16px 0;\n"
"      border: 1px solid #601700;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical\n"
"{\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e0d0c1, stop: 0.5 #e0d0c1, stop: 1 #e0d0c1);\n"
"      min-height: 20px;\n"
"      border-radius: 2px;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical\n"
"{\n"
"      border: 1px solid #601700;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e0d0c1, stop: 1 #e0d0c1);\n"
"      height: 14px;\n"
"      subcontrol-position: bottom;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical\n"
"{\n"
"      border: 1px solid #601700;\n"
"      border-radius: 2px;\n"
"      background: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e0d0c1, stop: 1 #e0d0c1);\n"
" "
                        "     height: 14px;\n"
"      subcontrol-position: top;\n"
"      subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical\n"
"{\n"
"      border: 1px solid black;\n"
"      width: 1px;\n"
"      height: 1px;\n"
"      background: white;\n"
"}\n"
"\n"
"\n"
"QScrollBar::add-page:vertical, QScrollBar::sub-page:vertical\n"
"{\n"
"      background: none;\n"
"}\n"
"\n"
"QTextEdit\n"
"{\n"
"    background-color: #e0d0c1;\n"
"border:#e0d0c1;\n"
"}\n"
"\n"
"QPlainTextEdit\n"
"{\n"
"    background-color: #e0d0c1;\n"
"}\n"
"\n"
"QHeaderView::section\n"
"{\n"
"    background-color: QLinearGradient( x1: 0, y1: 0, x2: 0, y2: 1, stop: 0 #e0d0c1, stop: 0.2 #a07461, stop: 0.5 #a07461, stop: 0.8 #a07461, stop: 1 #e0d0c1);/*QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #c1b4a7, stop: 0.5 #8c6555, stop: 0.6 #601700, stop:1 #8c6555);*/\n"
"    color: #e0d0c1;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #601700;\n"
"}\n"
"\n"
"QCheckBox:disabled\n"
"{\n"
"color: #414141;\n"
""
                        "}\n"
"\n"
"QDockWidget::title\n"
"{\n"
"    text-align: center;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button, QDockWidget::float-button\n"
"{\n"
"    text-align: center;\n"
"    spacing: 1px; /* spacing between items in the tool bar */\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #323232, stop: 0.5 #242424, stop:1 #323232);\n"
"}\n"
"\n"
"QDockWidget::close-button:hover, QDockWidget::float-button:hover\n"
"{\n"
"    background: #242424;\n"
"}\n"
"\n"
"QDockWidget::close-button:pressed, QDockWidget::float-button:pressed\n"
"{\n"
"    padding: 1px -1px -1px 1px;\n"
"}\n"
"\n"
"QMainWindow::separator\n"
"{\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px "
                        "solid #e0d0c1;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QMainWindow::separator:hover\n"
"{\n"
"\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #d7801a, stop:0.5 #b56c17 stop:1 #ffa02f);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    border: 1px solid #6c6c6c;\n"
"    spacing: 3px; /* spacing between items in the tool bar */\n"
"}\n"
"\n"
"QToolBar::handle\n"
"{\n"
"     spacing: 3px; /* spacing between items in the tool bar */\n"
"     background: url(:/images/handle.png);\n"
"}\n"
"\n"
"QMenu::separator\n"
"{\n"
"    height: 2px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:0 #161616, stop: 0.5 #151515, stop: 0.6 #212121, stop:1 #343434);\n"
"    color: white;\n"
"    padding-left: 4px;\n"
"    margin-left: 10px;\n"
"    margin-right: 5px;\n"
"}\n"
"\n"
"QProgressBar\n"
"{\n"
"    border: 2px solid grey;\n"
"    border-radius: 5px;\n"
"    text-align: center;\n"
"}\n"
"\n"
"QProgressBar::chunk\n"
"{\n"
"    b"
                        "ackground-color: #d7801a;\n"
"    width: 2.15px;\n"
"    margin: 0.5px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    color: #e0d0c1;\n"
"    border: 1px solid #601700;\n"
"    border-bottom-style: none;\n"
"    background-color:   QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #601700, stop:.4 #841e00);;\n"
"    padding-left: 10px;\n"
"    padding-right: 10px;\n"
"    padding-top: 3px;\n"
"    padding-bottom: 2px;\n"
"    margin-right: -1px;\n"
"}\n"
"\n"
"QTabWidget::pane {\n"
"    border: 1px solid #601700;\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabBar::tab:last\n"
"{\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"    border-top-right-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:first:!selected\n"
"{\n"
" margin-left: 0px; /* the last selected tab has nothing to overlap with on the right */\n"
"\n"
"\n"
"    border-top-left-radius: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected\n"
"{\n"
"    color: #601700;\n"
"    border-bottom-style: solid;\n"
"    margin-top: 3px;\n"
"    ba"
                        "ckground-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #a07461, stop:.4 #bc8872);\n"
"}\n"
"\n"
"QTabBar::tab:selected\n"
"{\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    margin-bottom: 0px;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover\n"
"{\n"
"    /*border-top: 2px solid #ffaa00;\n"
"    padding-bottom: 3px;*/\n"
"    border-top-left-radius: 3px;\n"
"    border-top-right-radius: 3px;\n"
"    background-color: QLinearGradient(x1:0, y1:0, x2:0, y2:1, stop:1 #a07461, stop:0.4 #bc8872, stop:0.2 #bc8872, stop:0.1 #a07461);\n"
"}\n"
"\n"
"QRadioButton::indicator:checked, QRadioButton::indicator:unchecked{\n"
"    color: #601700;\n"
"    background-color: #a07461;\n"
"    border: 1px solid #601700;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:checked\n"
"{\n"
"    background-color: qradialgradient(\n"
"        cx: 0.5, cy: 0.5,\n"
"        fx: 0.5, fy: 0.5,\n"
"        radius: 1.0,\n"
"        stop: 0.25 #e0d0c1,\n"
"        stop: 0.3 #601700\n"
"   "
                        " );\n"
"}\n"
"\n"
"QCheckBox::indicator{\n"
"    color: #b1b1b1;\n"
"    background-color: #323232;\n"
"    border: 1px solid #b1b1b1;\n"
"    width: 9px;\n"
"    height: 9px;\n"
"}\n"
"\n"
"QRadioButton::indicator\n"
"{\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"QRadioButton::indicator:hover, QCheckBox::indicator:hover\n"
"{\n"
"    border: 1px solid #601700;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked\n"
"{\n"
"    image:url(:/images/checkbox.png);\n"
"}\n"
"\n"
"QCheckBox::indicator:disabled, QRadioButton::indicator:disabled\n"
"{\n"
"    border: 1px solid #444;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 81, 21));
        cin = new QLabel(tab);
        cin->setObjectName(QStringLiteral("cin"));
        cin->setGeometry(QRect(50, 60, 63, 20));
        nom = new QLabel(tab);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(40, 110, 71, 20));
        prenom = new QLabel(tab);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(50, 160, 63, 20));
        date_naisc = new QLabel(tab);
        date_naisc->setObjectName(QStringLiteral("date_naisc"));
        date_naisc->setGeometry(QRect(10, 210, 141, 20));
        tel = new QLabel(tab);
        tel->setObjectName(QStringLiteral("tel"));
        tel->setGeometry(QRect(40, 270, 81, 20));
        adresse = new QLabel(tab);
        adresse->setObjectName(QStringLiteral("adresse"));
        adresse->setGeometry(QRect(50, 320, 63, 20));
        le_cin = new QLineEdit(tab);
        le_cin->setObjectName(QStringLiteral("le_cin"));
        le_cin->setGeometry(QRect(170, 60, 113, 26));
        le_nom = new QLineEdit(tab);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(170, 110, 113, 26));
        le_prenom = new QLineEdit(tab);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(170, 160, 113, 26));
        le_tel = new QLineEdit(tab);
        le_tel->setObjectName(QStringLiteral("le_tel"));
        le_tel->setGeometry(QRect(170, 270, 113, 26));
        le_adresse = new QLineEdit(tab);
        le_adresse->setObjectName(QStringLiteral("le_adresse"));
        le_adresse->setGeometry(QRect(170, 320, 113, 26));
        b_ajouter = new QPushButton(tab);
        b_ajouter->setObjectName(QStringLiteral("b_ajouter"));
        b_ajouter->setGeometry(QRect(390, 360, 101, 29));
        b_ajouter->setStyleSheet(QStringLiteral("font: 11pt \"Segoe UI\";"));
        dateEdit_2 = new QDateEdit(tab);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(170, 210, 110, 26));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_client = new QTableView(tab_2);
        tab_client->setObjectName(QStringLiteral("tab_client"));
        tab_client->setGeometry(QRect(20, 20, 941, 351));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        adresse_2 = new QLabel(tab_3);
        adresse_2->setObjectName(QStringLiteral("adresse_2"));
        adresse_2->setGeometry(QRect(80, 310, 63, 20));
        prenom_2 = new QLabel(tab_3);
        prenom_2->setObjectName(QStringLiteral("prenom_2"));
        prenom_2->setGeometry(QRect(90, 160, 63, 20));
        nom_2 = new QLabel(tab_3);
        nom_2->setObjectName(QStringLiteral("nom_2"));
        nom_2->setGeometry(QRect(100, 110, 71, 20));
        cin_3 = new QLabel(tab_3);
        cin_3->setObjectName(QStringLiteral("cin_3"));
        cin_3->setGeometry(QRect(100, 70, 63, 20));
        tel_2 = new QLabel(tab_3);
        tel_2->setObjectName(QStringLiteral("tel_2"));
        tel_2->setGeometry(QRect(80, 260, 81, 20));
        le_cin_3 = new QLineEdit(tab_3);
        le_cin_3->setObjectName(QStringLiteral("le_cin_3"));
        le_cin_3->setGeometry(QRect(210, 70, 113, 26));
        le_adresse_2 = new QLineEdit(tab_3);
        le_adresse_2->setObjectName(QStringLiteral("le_adresse_2"));
        le_adresse_2->setGeometry(QRect(210, 320, 113, 26));
        le_tel_2 = new QLineEdit(tab_3);
        le_tel_2->setObjectName(QStringLiteral("le_tel_2"));
        le_tel_2->setGeometry(QRect(210, 260, 113, 26));
        date_naisc_2 = new QLabel(tab_3);
        date_naisc_2->setObjectName(QStringLiteral("date_naisc_2"));
        date_naisc_2->setGeometry(QRect(70, 210, 141, 20));
        le_nom_2 = new QLineEdit(tab_3);
        le_nom_2->setObjectName(QStringLiteral("le_nom_2"));
        le_nom_2->setGeometry(QRect(210, 110, 113, 26));
        le_prenom_2 = new QLineEdit(tab_3);
        le_prenom_2->setObjectName(QStringLiteral("le_prenom_2"));
        le_prenom_2->setGeometry(QRect(210, 160, 113, 26));
        b_modifier = new QPushButton(tab_3);
        b_modifier->setObjectName(QStringLiteral("b_modifier"));
        b_modifier->setGeometry(QRect(440, 350, 93, 29));
        b_modifier->setStyleSheet(QStringLiteral("font: 11pt \"Segoe UI\";"));
        dateEdit = new QDateEdit(tab_3);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(210, 210, 110, 26));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(260, 20, 371, 361));
        b_supprimer = new QPushButton(groupBox_2);
        b_supprimer->setObjectName(QStringLiteral("b_supprimer"));
        b_supprimer->setGeometry(QRect(110, 230, 131, 51));
        b_supprimer->setStyleSheet(QLatin1String("font: 22pt \"Segoe UI\";\n"
"font: 8pt \"Segoe UI\";"));
        le_cin_2 = new QLineEdit(groupBox_2);
        le_cin_2->setObjectName(QStringLiteral("le_cin_2"));
        le_cin_2->setGeometry(QRect(120, 120, 113, 26));
        cin_2 = new QLabel(groupBox_2);
        cin_2->setObjectName(QStringLiteral("cin_2"));
        cin_2->setGeometry(QRect(50, 120, 63, 20));
        tabWidget->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget->addTab(tab_6, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget->addTab(tab_5, QString());
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 10, 521, 61));
        label->setStyleSheet(QLatin1String("color: rgb(96, 23, 0);\n"
"font: 26pt \"Sitka\";"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(900, 220, 93, 29));
        pushButton->setStyleSheet(QLatin1String("QToolTip\n"
"{\n"
"     border: 1px white ;\n"
"     background-color: #601700;\n"
"     padding: 1px;\n"
"     border-radius: 3px;\n"
"     opacity: 100;\n"
"}"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(900, 300, 93, 29));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1029, 26));
        menuGESTION_DES_CLIENTS = new QMenu(menuBar);
        menuGESTION_DES_CLIENTS->setObjectName(QStringLiteral("menuGESTION_DES_CLIENTS"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGESTION_DES_CLIENTS->menuAction());

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        cin->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        nom->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        prenom->setText(QApplication::translate("MainWindow", "Pr\303\251nom", Q_NULLPTR));
        date_naisc->setText(QApplication::translate("MainWindow", "Date de naissaince ", Q_NULLPTR));
        tel->setText(QApplication::translate("MainWindow", "T\303\251l\303\251phone", Q_NULLPTR));
        adresse->setText(QApplication::translate("MainWindow", "Adresse", Q_NULLPTR));
        b_ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        adresse_2->setText(QApplication::translate("MainWindow", "Adresse", Q_NULLPTR));
        prenom_2->setText(QApplication::translate("MainWindow", "Pr\303\251nom", Q_NULLPTR));
        nom_2->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        cin_3->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        tel_2->setText(QApplication::translate("MainWindow", "T\303\251l\303\251phone", Q_NULLPTR));
        date_naisc_2->setText(QApplication::translate("MainWindow", "Date de naissaince ", Q_NULLPTR));
        b_modifier->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        b_supprimer->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        cin_2->setText(QApplication::translate("MainWindow", "CIN", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "Mailing", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Client fid\303\250le", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "GESTION DES CLIENTS", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        menuGESTION_DES_CLIENTS->setTitle(QApplication::translate("MainWindow", "GESTION DES CLIENTS", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
