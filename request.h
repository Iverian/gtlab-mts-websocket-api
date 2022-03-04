#pragma once

#include <QObject>

#include "types.h"
#include "connection.h"
#include "render.h"

class request : public QObject
{
	Q_OBJECT

public:
	request(command cmd, connection * con);
	~request();
	command _cmd;
	connection* _connection;

public slots:
	virtual void start();
	virtual void stop();
	void sendResponse(QString);

signals:
	void requestCompleted();
};