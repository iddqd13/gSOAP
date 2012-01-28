/* CalcStub.h
   Generated by gSOAP 2.8.6 from calc.h

Copyright(C) 2000-2011, Robert van Engelen, Genivia Inc. All Rights Reserved.
The generated code is released under one of the following licenses:
1) GPL or 2) Genivia's license for commercial use.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
*/

#ifndef CalcStub_H
#define CalcStub_H
#ifndef WITH_NOGLOBAL
#define WITH_NOGLOBAL
#endif
#include "stdsoap2.h"

namespace Calc {

/******************************************************************************\
 *                                                                            *
 * Enumerations                                                               *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes and Structs                                                        *
 *                                                                            *
\******************************************************************************/


#if 0 /* volatile type: do not declare here, declared elsewhere */

#endif

#ifndef SOAP_TYPE_Calc_ns__addResponse
#define SOAP_TYPE_Calc_ns__addResponse (10)
/* ns:addResponse */
struct ns__addResponse
{
public:
	double *result;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:double */
};
#endif

#ifndef SOAP_TYPE_Calc_ns__add
#define SOAP_TYPE_Calc_ns__add (11)
/* ns:add */
struct ns__add
{
public:
	double a;	/* required element of type xsd:double */
	double b;	/* required element of type xsd:double */
};
#endif

#ifndef SOAP_TYPE_Calc_ns__subResponse
#define SOAP_TYPE_Calc_ns__subResponse (13)
/* ns:subResponse */
struct ns__subResponse
{
public:
	double *result;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:double */
};
#endif

#ifndef SOAP_TYPE_Calc_ns__sub
#define SOAP_TYPE_Calc_ns__sub (14)
/* ns:sub */
struct ns__sub
{
public:
	double a;	/* required element of type xsd:double */
	double b;	/* required element of type xsd:double */
};
#endif

#ifndef SOAP_TYPE_Calc_ns__mulResponse
#define SOAP_TYPE_Calc_ns__mulResponse (16)
/* ns:mulResponse */
struct ns__mulResponse
{
public:
	double *result;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:double */
};
#endif

#ifndef SOAP_TYPE_Calc_ns__mul
#define SOAP_TYPE_Calc_ns__mul (17)
/* ns:mul */
struct ns__mul
{
public:
	double a;	/* required element of type xsd:double */
	double b;	/* required element of type xsd:double */
};
#endif

#ifndef SOAP_TYPE_Calc_ns__divResponse
#define SOAP_TYPE_Calc_ns__divResponse (19)
/* ns:divResponse */
struct ns__divResponse
{
public:
	double *result;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:double */
};
#endif

#ifndef SOAP_TYPE_Calc_ns__div
#define SOAP_TYPE_Calc_ns__div (20)
/* ns:div */
struct ns__div
{
public:
	double a;	/* required element of type xsd:double */
	double b;	/* required element of type xsd:double */
};
#endif

#ifndef SOAP_TYPE_Calc_ns__powResponse
#define SOAP_TYPE_Calc_ns__powResponse (22)
/* ns:powResponse */
struct ns__powResponse
{
public:
	double *result;	/* SOAP 1.2 RPC return element (when namespace qualified) */	/* optional element of type xsd:double */
};
#endif

#ifndef SOAP_TYPE_Calc_ns__pow
#define SOAP_TYPE_Calc_ns__pow (23)
/* ns:pow */
struct ns__pow
{
public:
	double a;	/* required element of type xsd:double */
	double b;	/* required element of type xsd:double */
};
#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_Calc_SOAP_ENV__Header
#define SOAP_TYPE_Calc_SOAP_ENV__Header (24)
/* SOAP Header: */
struct SOAP_ENV__Header
{
#ifdef WITH_NOEMPTYSTRUCT
private:
	char dummy;	/* dummy member to enable compilation */
#endif
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_Calc_SOAP_ENV__Code
#define SOAP_TYPE_Calc_SOAP_ENV__Code (25)
/* SOAP Fault Code: */
struct SOAP_ENV__Code
{
public:
	char *SOAP_ENV__Value;	/* optional element of type xsd:QName */
	struct SOAP_ENV__Code *SOAP_ENV__Subcode;	/* optional element of type SOAP-ENV:Code */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_Calc_SOAP_ENV__Detail
#define SOAP_TYPE_Calc_SOAP_ENV__Detail (27)
/* SOAP-ENV:Detail */
struct SOAP_ENV__Detail
{
public:
	char *__any;
	int __type;	/* any type of element <fault> (defined below) */
	void *fault;	/* transient */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_Calc_SOAP_ENV__Reason
#define SOAP_TYPE_Calc_SOAP_ENV__Reason (30)
/* SOAP-ENV:Reason */
struct SOAP_ENV__Reason
{
public:
	char *SOAP_ENV__Text;	/* optional element of type xsd:string */
};
#endif

#endif

#ifndef WITH_NOGLOBAL

#ifndef SOAP_TYPE_Calc_SOAP_ENV__Fault
#define SOAP_TYPE_Calc_SOAP_ENV__Fault (31)
/* SOAP Fault: */
struct SOAP_ENV__Fault
{
public:
	char *faultcode;	/* optional element of type xsd:QName */
	char *faultstring;	/* optional element of type xsd:string */
	char *faultactor;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *detail;	/* optional element of type SOAP-ENV:Detail */
	struct SOAP_ENV__Code *SOAP_ENV__Code;	/* optional element of type SOAP-ENV:Code */
	struct SOAP_ENV__Reason *SOAP_ENV__Reason;	/* optional element of type SOAP-ENV:Reason */
	char *SOAP_ENV__Node;	/* optional element of type xsd:string */
	char *SOAP_ENV__Role;	/* optional element of type xsd:string */
	struct SOAP_ENV__Detail *SOAP_ENV__Detail;	/* optional element of type SOAP-ENV:Detail */
};
#endif

#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/

#ifndef SOAP_TYPE_Calc__QName
#define SOAP_TYPE_Calc__QName (5)
typedef char *_QName;
#endif

#ifndef SOAP_TYPE_Calc__XML
#define SOAP_TYPE_Calc__XML (6)
typedef char *_XML;
#endif


/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


} // namespace Calc


#endif

/* End of CalcStub.h */
