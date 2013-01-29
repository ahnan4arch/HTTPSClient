#pragma once

#define ERROR_OK				(0)
#define ERROR_GENERAL			(-1)
#define ERROR_HTTP				(-2)
#define ERROR_LOGIC				(-3)
#define ERROR_VALIDATE			(-4)
#define ERROR_USERNAME			(-5)
#define ERROR_PASSWORD			(-6)
#define ERROR_OVERLOAD			(-7)
#define ERROR_NOSEAT			(-8)
#define ERROR_ORDER				(-9)
#define ERROR_CANCEL_TOO_MANY	(-10)
#define ERROR_REAL_NAME			(-11)
#define ERROR_USER_CANCEL		(-12)

enum STATUS
{
	LOGINV = 0,
	RAND,
	LOGIN,
	QUERY,
	BOOK,
	BOOKV,
	CHECK,
	QUEUE,
	CONFRM,
	WAIT,
	EXIT
};