//
// Created by pasi on 04-03-2024.
//

#ifndef Api
#define Api

#include <QObject>
#include <memory>
#include <QTcpServer>

namespace APIS{
class Server : public QObject {
public:
    explicit Server(QObject *parent = nullptr);
    ~Server() override;

    void start();
private:
    std::unique_ptr<QTcpServer>  m_server;
private slots:
    void newConnection();

};
}

#endif
