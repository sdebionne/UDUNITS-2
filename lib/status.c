/*
 * Status of the last operation by the UDUNITS2(3) library.
 */

/*LINTLIBRARY*/

#ifndef	_XOPEN_SOURCE
#   define _XOPEN_SOURCE 500
#endif

#include <udunits2.h>

static utStatus		_status = UT_SUCCESS;


/*
 * Returns the status of the last operation by the units module.  This function
 * will not change the status.
 */
utStatus
utGetStatus()
{
    return _status;
}


/*
 * Sets the status of the units module.  This function would not normally be
 * called by the user unless they were doing their own parsing or formatting.
 *
 * Arguments:
 *	status	The status of the units module.
 */
void
utSetStatus(
    const utStatus	status)
{
    _status = status;
}