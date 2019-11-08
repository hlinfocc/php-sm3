/*
  +----------------------------------------------------------------------+
  | PHP Version 7                                                        |
  +----------------------------------------------------------------------+
  | Copyright (c) 1997-2017 The PHP Group                                |
  +----------------------------------------------------------------------+
  | This source file is subject to version 3.01 of the PHP license,      |
  | that is bundled with this package in the file LICENSE, and is        |
  | available through the world-wide-web at the following url:           |
  | http://www.php.net/license/3_01.txt                                  |
  | If you did not receive a copy of the PHP license and are unable to   |
  | obtain it through the world-wide-web, please send a note to          |
  | license@php.net so we can mail you a copy immediately.               |
  +----------------------------------------------------------------------+
  | Author:                                                              |
  +----------------------------------------------------------------------+
*/

/* $Id$ */

#ifndef PHP_SM3_H
#define PHP_SM3_H

extern zend_module_entry sm3_module_entry;
#define phpext_sm3_ptr &sm3_module_entry

#define PHP_SM3_VERSION "2.2.1"
#define PHP_SM3_RELEASED "2019-11-08"
#define PHP_SM3_AUTHORS "luzhuqun,hlinfocc"
#define PHP_SM3_URL "https://github.com/hlinfocc/php-sm3"

#ifdef PHP_WIN32
#	define PHP_SM3_API __declspec(dllexport)
#elif defined(__GNUC__) && __GNUC__ >= 4
#	define PHP_SM3_API __attribute__ ((visibility("default")))
#else
#	define PHP_SM3_API
#endif

#ifdef ZTS
#include "TSRM.h"
#endif

/*
  	Declare any global variables you may need between the BEGIN
	and END macros here:

ZEND_BEGIN_MODULE_GLOBALS(sm3)
	zend_long  global_value;
	char *global_string;
ZEND_END_MODULE_GLOBALS(sm3)
*/

/* Always refer to the globals in your function as SM3_G(variable).
   You are encouraged to rename these macros something shorter, see
   examples in any other php module directory.
*/
#define SM3_G(v) ZEND_MODULE_GLOBALS_ACCESSOR(sm3, v)

#if defined(ZTS) && defined(COMPILE_DL_SM3)
ZEND_TSRMLS_CACHE_EXTERN()
#endif

#endif	/* PHP_SM3_H */


/*
 * Local variables:
 * tab-width: 4
 * c-basic-offset: 4
 * End:
 * vim600: noet sw=4 ts=4 fdm=marker
 * vim<600: noet sw=4 ts=4
 */
