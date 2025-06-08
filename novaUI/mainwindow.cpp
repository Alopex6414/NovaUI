#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // initialize comboBox Test
    ui->comboBoxTest->clear();
    ui->comboBoxTest->addItem("IPMP");
    ui->comboBoxTest->addItem("PMP");
    ui->comboBoxTest->addItem("NPDP");
    ui->comboBoxTest->addItem("通信");
    ui->comboBoxTest->addItem("软考");
    ui->comboBoxTest->setCurrentIndex(0);
    // initialize comboBox Level
    ui->comboBoxLevel->clear();
    ui->comboBoxLevel->addItem("不分等级");
    ui->comboBoxLevel->setCurrentIndex(0);
    // initialize comboBox Subject
    ui->comboBoxSubject->clear();
    ui->comboBoxSubject->addItem("不分科目");
    ui->comboBoxSubject->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBoxTest_currentIndexChanged(int index)
{
    // switch index
    switch (index) {
    case 0:
        // initialize comboBox Level
        ui->comboBoxLevel->clear();
        ui->comboBoxLevel->addItem("不分等级");
        ui->comboBoxLevel->setCurrentIndex(0);
        // initialize comboBox Subject
        ui->comboBoxSubject->clear();
        ui->comboBoxSubject->addItem("不分科目");
        ui->comboBoxSubject->setCurrentIndex(0);
        break;
    case 1:
        // initialize comboBox Level
        ui->comboBoxLevel->clear();
        ui->comboBoxLevel->addItem("不分等级");
        ui->comboBoxLevel->setCurrentIndex(0);
        // initialize comboBox Subject
        ui->comboBoxSubject->clear();
        ui->comboBoxSubject->addItem("不分科目");
        ui->comboBoxSubject->setCurrentIndex(0);
        break;
    case 2:
        // initialize comboBox Level
        ui->comboBoxLevel->clear();
        ui->comboBoxLevel->addItem("不分等级");
        ui->comboBoxLevel->setCurrentIndex(0);
        // initialize comboBox Subject
        ui->comboBoxSubject->clear();
        ui->comboBoxSubject->addItem("不分科目");
        ui->comboBoxSubject->setCurrentIndex(0);
        break;
    case 3:
        // initialize comboBox Level
        ui->comboBoxLevel->clear();
        ui->comboBoxLevel->addItem("初级");
        ui->comboBoxLevel->addItem("中级");
        ui->comboBoxLevel->setCurrentIndex(0);
        // initialize comboBox Subject
        ui->comboBoxSubject->clear();
        ui->comboBoxSubject->addItem("初级综合能力");
        ui->comboBoxSubject->addItem("初级专业实务");
        ui->comboBoxSubject->setCurrentIndex(0);
        break;
    case 4:
        // initialize comboBox Level
        ui->comboBoxLevel->clear();
        ui->comboBoxLevel->addItem("程序员");
        ui->comboBoxLevel->addItem("信息系统运行管理员");
        ui->comboBoxLevel->addItem("网络管理员");
        ui->comboBoxLevel->addItem("信息处理技术员");
        ui->comboBoxLevel->addItem("软件设计师");
        ui->comboBoxLevel->addItem("网络工程师");
        ui->comboBoxLevel->addItem("软件测评师");
        ui->comboBoxLevel->addItem("电子商务设计师");
        ui->comboBoxLevel->addItem("嵌入式系统设计师");
        ui->comboBoxLevel->addItem("信息系统监理师");
        ui->comboBoxLevel->addItem("信息安全工程师");
        ui->comboBoxLevel->addItem("信息系统管理工程师");
        ui->comboBoxLevel->addItem("多媒体应用设计师");
        ui->comboBoxLevel->addItem("系统集成项目管理工程师");
        ui->comboBoxLevel->addItem("系统分析师");
        ui->comboBoxLevel->addItem("系统架构设计师");
        ui->comboBoxLevel->addItem("网络规划设计师");
        ui->comboBoxLevel->addItem("系统规划与管理师");
        ui->comboBoxLevel->addItem("信息系统项目管理师");
        ui->comboBoxLevel->setCurrentIndex(0);
        // initialize comboBox Subject
        ui->comboBoxSubject->clear();
        ui->comboBoxSubject->addItem("综合知识");
        ui->comboBoxSubject->addItem("案例分析");
        ui->comboBoxSubject->setCurrentIndex(0);
        break;
    default:
        break;
    }
}


void MainWindow::on_comboBoxLevel_currentIndexChanged(int index)
{
    switch (ui->comboBoxTest->currentIndex()) {
    case 0:
        switch (index) {
        case 0:
            break;
        default:
            break;
        }
        break;
    case 1:
        switch (index) {
        case 0:
            break;
        default:
            break;
        }
        break;
    case 2:
        switch (index) {
        case 0:
            break;
        default:
            break;
        }
        break;
    case 3:
        switch (index) {
        case 0:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("初级综合能力");
            ui->comboBoxSubject->addItem("初级专业实务");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 1:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("中级综合能力");
            ui->comboBoxSubject->addItem("中级交换技术");
            ui->comboBoxSubject->addItem("中级设备环境");
            ui->comboBoxSubject->addItem("中级互联网技术");
            ui->comboBoxSubject->addItem("中级终端与业务");
            ui->comboBoxSubject->addItem("中级传输与接入（无线）");
            ui->comboBoxSubject->addItem("中级传输与接入（有线）");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        default:
            break;
        }
        break;
    case 4:
        switch (index) {
        case 0:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 1:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 2:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 3:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 4:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 5:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 6:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 7:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 8:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 9:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 10:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 11:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 12:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 13:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 14:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->addItem("论文");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 15:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->addItem("论文");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 16:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->addItem("论文");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 17:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->addItem("论文");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        case 18:
            // initialize comboBox Subject
            ui->comboBoxSubject->clear();
            ui->comboBoxSubject->addItem("综合知识");
            ui->comboBoxSubject->addItem("案例分析");
            ui->comboBoxSubject->addItem("论文");
            ui->comboBoxSubject->setCurrentIndex(0);
            break;
        default:
            break;
        }
        break;
    default:
        break;
    }
}

