#include "databaseGlobal.h"
namespace CONN {
    class Connector : public QObject {
    public:
        explicit Connector(QObject *parent = nullptr);
        ~Connector() override;

        bool connectToDatabase(const QString &host, int port, const QString &databaseName,
                               const QString &userName, const QString &password);

        void closeDatabase();

    private:
        QSqlDatabase m_database;
    };
}


