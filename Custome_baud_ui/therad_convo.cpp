#include "therad_convo.h"

therad_convo::therad_convo(QObject *parent) : QObject(parent)
{

}


//void therad_convo::read(){


//}

//void therad_convo::format()
//{
//    union ulf {
//        unsigned long ul;
//        float rec, rec1, rec2;
//    };

//    ulf uus, uu1s, uu2s, uu, uu1, uu2;
//    QString formattedG, formattedG1, formattedG2, formattedF, formattedF1, formattedF2;



//    QString inputData = ui->plainTextEdit_2->toPlainText();
//    QString patternHeader = "FAFF361B102002";
//    static int patternLength = 65;
//    QStringList patterns;

//    int index = inputData.indexOf(patternHeader);
//    while (index != -1 && index + patternLength <= inputData.size()) {
//        QString pattern = inputData.mid(index, patternLength);
//        patterns.append(pattern);
//        index = inputData.indexOf(patternHeader, index + 1);
//    }

//    // Create a model for the TableView
//    QStandardItemModel *model = new QStandardItemModel(patterns.size(), 2, this); // Change column count to 2
//    model->setHorizontalHeaderItem(0, new QStandardItem("Packet"));
//    model->setHorizontalHeaderItem(1, new QStandardItem("Packet Counter")); // Add new header
//    model->setHorizontalHeaderItem(2, new QStandardItem("Sample Time"));
//    model->setHorizontalHeaderItem(3, new QStandardItem("Sensor Type"));
//    model->setHorizontalHeaderItem(4, new QStandardItem("Size of Sensor"));
//    model->setHorizontalHeaderItem(5,new QStandardItem("Ax"));
//     model->setHorizontalHeaderItem(6,new QStandardItem("Ay"));
//      model->setHorizontalHeaderItem(7,new QStandardItem("Az"));
//       model->setHorizontalHeaderItem(8,new QStandardItem("Gx"));
//        model->setHorizontalHeaderItem(9,new QStandardItem("Gy"));
//         model->setHorizontalHeaderItem(10,new QStandardItem("Gz"));
//          model->setHorizontalHeaderItem(11,new QStandardItem("Checksum"));

//    // Populate the model with patterns
//    for (int row = 0; row < patterns.size(); ++row) {
//        QStandardItem *patternItem = new QStandardItem(patterns.at(row));
//        model->setItem(row, 0, patternItem);
//        QString packetCounter = patternItem->text().mid(14, 4);
//        int pacDec = packetCounter.toInt(nullptr, 16);
//        QString sampleTime = patternItem->text().mid(24,8);

//        int sns = sampleTime.toInt(nullptr, 16);
//        QString sensorType = patternItem->text().mid(32, 4);

//        if (sensorType == "8040") {
//            QString Gx= patternItem->text().mid(38, 8);
//            QString Gy = patternItem->text().mid(46, 8);
//            QString Gz = patternItem->text().mid(54, 8);

//            std::string str = Gx.toStdString();
//            std::string str2 = Gy.toStdString();
//            std::string str3 = Gz.toStdString();

//            std::stringstream ss(str);
//            std::stringstream ss1(str2);
//            std::stringstream ss2(str3);

//            ss >> std::hex >> uus.ul;
//            ss1 >> std::hex >> uu1s.ul;
//            ss2 >> std::hex >> uu2s.ul;

//            float f = uus.rec;
//            float f1 = uu1s.rec1;
//            float f2 = uu2s.rec2;

//            formattedF = QString::number(f, 'f', 7);
//            formattedF1 = QString::number(f1, 'f', 7);
//            formattedF2 = QString::number(f2, 'f', 7);
//            QStandardItem *Gx_col = new QStandardItem(formattedF);
//              QStandardItem *Gy_col = new QStandardItem(formattedF1);
//              QStandardItem *Gz_col = new QStandardItem(formattedF2);

//              model->setItem(row, 8, Gx_col);
//              model->setItem(row, 9, Gy_col);
//              model->setItem(row, 10, Gz_col);
//        } else {
//            QString Ax = patternItem->text().mid(38, 8);
//            QString Ay = patternItem->text().mid(46, 8);
//            QString Az = patternItem->text().mid(54, 8);
//            std::string str = Ax.toStdString();
//            std::string str2 = Ay.toStdString();
//            std::string str3 = Az.toStdString();

//            std::stringstream ss(str);
//            std::stringstream ss1(str2);
//            std::stringstream ss2(str3);

//            ss >> std::hex >> uu.ul;
//            ss1 >> std::hex >> uu1.ul;
//            ss2 >> std::hex >> uu2.ul;

//            float g = uu.rec;
//            float g1 = uu1.rec1;
//            float g2 = uu2.rec2;

//            formattedG = QString::number(g, 'f', 7);
//            formattedG1 = QString::number(g1, 'f', 7);
//            formattedG2 = QString::number(g2, 'f', 7);
//            QStandardItem *Ax_col = new QStandardItem(formattedG);
//                QStandardItem *Ay_col = new QStandardItem(formattedG1);
//                QStandardItem *Az_col = new QStandardItem(formattedG2);

//                model->setItem(row, 5, Ax_col);
//                model->setItem(row, 6, Ay_col);
//                model->setItem(row, 7, Az_col);
//        }
//        QString checksumNumber = patternItem->text().mid(63, 2);
//        QString sizee_sens = patternItem->text().mid(36,2);
//        QStandardItem *counterItem = new QStandardItem(QString::number(pacDec));
//        model->setItem(row, 1, counterItem); // Add packet counter item
//        QStandardItem *sensort = new QStandardItem(QString::number(sns));
//        model->setItem(row,2,sensort);
//        QStandardItem *sens = new QStandardItem(sensorType);
//        model->setItem(row,3,sens);
//        QStandardItem *size_sensor = new QStandardItem(sizee_sens);
//        model->setItem(row,4,size_sensor);
// //        QStandardItem *Ax_col = new QStandardItem(formattedG);
// //        model->setItem(row,5,Ax_col);
// //        QStandardItem *Ay_col = new QStandardItem(formattedG1);
// //        QStandardItem *Az_col = new QStandardItem(formattedG2);
// //        model->setItem(row,7,Az_col);
// //        QStandardItem *Gx_col = new QStandardItem(formattedF);
// //        model->setItem(row,8,Gx_col);
// //        QStandardItem *Gy_col = new QStandardItem(formattedF1);
// //        model->setItem(row,9,Gy_col);
// //        QStandardItem *Gz_col = new QStandardItem(formattedF2);
// //        model->setItem(row,10,Gz_col);
//        QStandardItem *checksum = new QStandardItem(checksumNumber);
//        model->setItem(row,11,checksum);
//    }

//    // Set the model to the TableView
//    ui->tableView_3->setModel(model);



//    QStandardItemModel *uniqueModel = new QStandardItemModel(0, 11, this);
//     uniqueModel->setHorizontalHeaderItem(0, new QStandardItem("Packet Data"));
//    uniqueModel->setHorizontalHeaderItem(1, new QStandardItem("Packet Counter"));
//    uniqueModel-> setHorizontalHeaderItem(2, new QStandardItem("Sample Time"));
//     uniqueModel->setHorizontalHeaderItem(3, new QStandardItem("Sensor Type"));
//    uniqueModel->setHorizontalHeaderItem(4, new QStandardItem("Size of Sensor"));
//    uniqueModel->setHorizontalHeaderItem(5,new QStandardItem("Ax"));
//    uniqueModel->setHorizontalHeaderItem(6,new QStandardItem("Ay"));
//    uniqueModel->setHorizontalHeaderItem(7,new QStandardItem("Az"));
//    uniqueModel->setHorizontalHeaderItem(8,new QStandardItem("Gx"));
//    uniqueModel->setHorizontalHeaderItem(9,new QStandardItem("Gy"));
//    uniqueModel->setHorizontalHeaderItem(10,new QStandardItem("Gz"));
//    uniqueModel->setHorizontalHeaderItem(11,new QStandardItem("Checksum"));

//    QSet<QString> uniqueRows;

//    for (int row = 0; row < model->rowCount(); ++row) {
//        QStringList rowData;
//        for (int col = 0; col < model->columnCount(); ++col) {
//            rowData << model->index(row, col).data().toString();
//        }

//        QString rowStr = rowData.join(",");
//        if (!uniqueRows.contains(rowStr)) {
//            uniqueRows.insert(rowStr);

//            QList<QStandardItem*> items;
//            for (const QString& itemText : rowData) {
//                items.append(new QStandardItem(itemText));
//            }
//            uniqueModel->appendRow(items);
//        }
//    }

//    ui->tableView_unique->setModel(uniqueModel);
//    serialPort.flush();
//   // serialPort.clear();
//}
