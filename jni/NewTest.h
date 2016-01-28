/*
 * NewTest.h
 *
 *  Created on: Jan 28, 2016
 *      Author: mamunul
 */

#include <jni.h>
#include <string>
#include <iostream>

#ifndef NEWTEST_H_
#define NEWTEST_H_

class NewTest {
public:
	NewTest();
	virtual ~NewTest();

	std::string getMessage();
};

#endif /* NEWTEST_H_ */
