#pragma once

#include "apiGlobal.h"
#include <QTcpSocket>

namespace APIC {
    class Client : public QObject {
    public:
        explicit Client(QTcpSocket *socket, QObject *parent = nullptr);
        ~Client() override;

    private slots:
        void readyRead();

    private:
        std::unique_ptr<QTcpSocket> m_socket;
    };
}
