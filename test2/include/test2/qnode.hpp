/**
 * @file /include/test2/qnode.hpp
 *
 * @brief Communications central!
 *
 * @date February 2011
 **/
#ifndef test2_QNODE_HPP_
#define test2_QNODE_HPP_


#include <ros/ros.h>
#include <string>
#include <QThread>
#include <QStringListModel>

namespace test2 {

class QNode : public QThread {
    Q_OBJECT
public:
	QNode(int argc, char** argv );
	virtual ~QNode();
	bool init();
	bool init(const std::string &master_url, const std::string &host_url);
	void run();

	/*********************
	** Logging
	**********************/
	enum LogLevel {
	         Debug,
	         Info,
	         Warn,
	         Error,
	         Fatal
	 };

	QStringListModel* loggingModel() { return &logging_model; }
	void log( const LogLevel &level, const std::string &msg);

Q_SIGNALS:
	void loggingUpdated();
   void rosShutdown();

private:
	int init_argc;
	char** init_argv;
	ros::Publisher chatter_publisher;
   QStringListModel logging_model;
};

}  // namespace test2

#endif /* test2_QNODE_HPP_ */
