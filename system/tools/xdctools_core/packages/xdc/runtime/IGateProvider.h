/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-H25
 */

/*
 * ======== GENERATED SECTIONS ========
 *
 *     PROLOGUE
 *     INCLUDES
 *
 *     PER-INSTANCE TYPES
 *     VIRTUAL FUNCTIONS
 *     FUNCTION STUBS
 *     FUNCTION SELECTORS
 *
 *     EPILOGUE
 *     PREFIX ALIASES
 */


/*
 * ======== PROLOGUE ========
 */

#ifndef xdc_runtime_IGateProvider__include
#define xdc_runtime_IGateProvider__include

#ifndef __nested__
#define __nested__
#define xdc_runtime_IGateProvider__top__
#endif

#ifndef __extern
#ifdef __cplusplus
#define __extern extern "C"
#else
#define __extern extern
#endif
#endif

#define xdc_runtime_IGateProvider___VERS 200


/*
 * ======== INCLUDES ========
 */

#include <xdc/std.h>

#include <xdc/runtime/xdc.h>
#include <xdc/runtime/Types.h>
#include <xdc/runtime/IInstance.h>
#include <xdc/runtime/package/package.defs.h>

#include <xdc/runtime/IModule.h>


/*
 * ======== AUXILIARY DEFINITIONS ========
 */

/* Q_BLOCKING */
#define xdc_runtime_IGateProvider_Q_BLOCKING (1)

/* Q_PREEMPTING */
#define xdc_runtime_IGateProvider_Q_PREEMPTING (2)


/*
 * ======== PER-INSTANCE TYPES ========
 */

/* Params */
struct xdc_runtime_IGateProvider_Params {
    size_t __size;
    const void *__self;
    void *__fxns;
    xdc_runtime_IInstance_Params *instance;
};


/*
 * ======== VIRTUAL FUNCTIONS ========
 */

/* Fxns__ */
struct xdc_runtime_IGateProvider_Fxns__ {
    const xdc_runtime_Types_Base* __base;
    const xdc_runtime_Types_SysFxns2* __sysp;
    xdc_Bool (*query)(xdc_Int qual);
    xdc_IArg (*enter)(void* inst);
    xdc_Void (*leave)(void* inst, xdc_IArg key);
    xdc_runtime_Types_SysFxns2 __sfxns;
};
#ifndef xdc_runtime_IGateProvider_Module__BASE__CR

/* Interface__BASE__C */
__extern const xdc_runtime_Types_Base xdc_runtime_IGateProvider_Interface__BASE__C;
#else
#define xdc_runtime_IGateProvider_Interface__BASE__C (*((xdc_runtime_Types_Base *)(xdcRomConstPtr + xdc_runtime_IGateProvider_Interface__BASE__C_offset)))
#endif


/*
 * ======== FUNCTION STUBS ========
 */

/* create */
xdc__CODESECT(xdc_runtime_IGateProvider_create, "xdc_runtime_IGateProvider_create")
__extern xdc_runtime_IGateProvider_Handle xdc_runtime_IGateProvider_create(xdc_runtime_IGateProvider_Module mod, const xdc_runtime_IGateProvider_Params *prms, xdc_runtime_Error_Block *eb);

/* delete */
xdc__CODESECT(xdc_runtime_IGateProvider_delete, "xdc_runtime_IGateProvider_delete")
__extern xdc_Void xdc_runtime_IGateProvider_delete(xdc_runtime_IGateProvider_Handle *inst);

/* Handle_to_Module */
static inline xdc_runtime_IGateProvider_Module xdc_runtime_IGateProvider_Handle_to_Module(xdc_runtime_IGateProvider_Handle inst);
static inline xdc_runtime_IGateProvider_Module xdc_runtime_IGateProvider_Handle_to_Module(xdc_runtime_IGateProvider_Handle inst)
{
    return inst->__fxns;
}

/* Handle_label */
static inline xdc_runtime_Types_Label *xdc_runtime_IGateProvider_Handle_label(xdc_runtime_IGateProvider_Handle inst, xdc_runtime_Types_Label *lab);
static inline xdc_runtime_Types_Label *xdc_runtime_IGateProvider_Handle_label(xdc_runtime_IGateProvider_Handle inst, xdc_runtime_Types_Label *lab)
{
    return inst->__fxns->__sysp->__label(inst, lab);
}

/* Module_id */
static inline xdc_runtime_Types_ModuleId xdc_runtime_IGateProvider_Module_id(xdc_runtime_IGateProvider_Module mod);
static inline xdc_runtime_Types_ModuleId xdc_runtime_IGateProvider_Module_id(xdc_runtime_IGateProvider_Module mod)
{
    return mod->__sysp->__mid;
}

/* query */
static inline xdc_Bool xdc_runtime_IGateProvider_query(xdc_runtime_IGateProvider_Module mod, xdc_Int qual);
static inline xdc_Bool xdc_runtime_IGateProvider_query( xdc_runtime_IGateProvider_Module mod, xdc_Int qual )
{
    return mod->query(qual);
}

/* enter */
static inline xdc_IArg xdc_runtime_IGateProvider_enter(xdc_runtime_IGateProvider_Handle inst);
static inline xdc_IArg xdc_runtime_IGateProvider_enter( xdc_runtime_IGateProvider_Handle inst )
{
    return inst->__fxns->enter((void*)inst);
}

/* leave */
static inline xdc_Void xdc_runtime_IGateProvider_leave(xdc_runtime_IGateProvider_Handle inst, xdc_IArg key);
static inline xdc_Void xdc_runtime_IGateProvider_leave( xdc_runtime_IGateProvider_Handle inst, xdc_IArg key )
{
    inst->__fxns->leave((void*)inst, key);
}


/*
 * ======== FUNCTION SELECTORS ========
 */

/* These functions return function pointers for module and instance functions.
 * The functions accept modules and instances declared as types defined in this
 * interface, but they return functions defined for the actual objects passed
 * as parameters. These functions are not invoked by any generated code or
 * XDCtools internal code.
 */

/* query_{FxnT,fxnP} */
typedef xdc_Bool (*xdc_runtime_IGateProvider_query_FxnT)(xdc_Int qual);
static inline xdc_runtime_IGateProvider_query_FxnT xdc_runtime_IGateProvider_query_fxnP(xdc_runtime_IGateProvider_Module mod);
static inline xdc_runtime_IGateProvider_query_FxnT xdc_runtime_IGateProvider_query_fxnP(xdc_runtime_IGateProvider_Module mod)
{
    return (xdc_runtime_IGateProvider_query_FxnT)mod->query;
}

/* enter_{FxnT,fxnP} */
typedef xdc_IArg (*xdc_runtime_IGateProvider_enter_FxnT)(xdc_Void *inst);
static inline xdc_runtime_IGateProvider_enter_FxnT xdc_runtime_IGateProvider_enter_fxnP(xdc_runtime_IGateProvider_Handle inst);
static inline xdc_runtime_IGateProvider_enter_FxnT xdc_runtime_IGateProvider_enter_fxnP(xdc_runtime_IGateProvider_Handle inst)
{
    return (xdc_runtime_IGateProvider_enter_FxnT)inst->__fxns->enter;
}

/* leave_{FxnT,fxnP} */
typedef xdc_Void (*xdc_runtime_IGateProvider_leave_FxnT)(xdc_Void *inst, xdc_IArg key);
static inline xdc_runtime_IGateProvider_leave_FxnT xdc_runtime_IGateProvider_leave_fxnP(xdc_runtime_IGateProvider_Handle inst);
static inline xdc_runtime_IGateProvider_leave_FxnT xdc_runtime_IGateProvider_leave_fxnP(xdc_runtime_IGateProvider_Handle inst)
{
    return (xdc_runtime_IGateProvider_leave_FxnT)inst->__fxns->leave;
}


/*
 * ======== EPILOGUE ========
 */

#ifdef xdc_runtime_IGateProvider__top__
#undef __nested__
#endif

#endif /* xdc_runtime_IGateProvider__include */


/*
 * ======== PREFIX ALIASES ========
 */

#if !defined(__nested__) && !defined(xdc_runtime_IGateProvider__nolocalnames)

#ifndef xdc_runtime_IGateProvider__localnames__done
#define xdc_runtime_IGateProvider__localnames__done

/* module prefix */
#define IGateProvider_Instance xdc_runtime_IGateProvider_Instance
#define IGateProvider_Handle xdc_runtime_IGateProvider_Handle
#define IGateProvider_Module xdc_runtime_IGateProvider_Module
#define IGateProvider_Q_BLOCKING xdc_runtime_IGateProvider_Q_BLOCKING
#define IGateProvider_Q_PREEMPTING xdc_runtime_IGateProvider_Q_PREEMPTING
#define IGateProvider_Params xdc_runtime_IGateProvider_Params
#define IGateProvider_query xdc_runtime_IGateProvider_query
#define IGateProvider_query_fxnP xdc_runtime_IGateProvider_query_fxnP
#define IGateProvider_query_FxnT xdc_runtime_IGateProvider_query_FxnT
#define IGateProvider_enter xdc_runtime_IGateProvider_enter
#define IGateProvider_enter_fxnP xdc_runtime_IGateProvider_enter_fxnP
#define IGateProvider_enter_FxnT xdc_runtime_IGateProvider_enter_FxnT
#define IGateProvider_leave xdc_runtime_IGateProvider_leave
#define IGateProvider_leave_fxnP xdc_runtime_IGateProvider_leave_fxnP
#define IGateProvider_leave_FxnT xdc_runtime_IGateProvider_leave_FxnT
#define IGateProvider_Module_name xdc_runtime_IGateProvider_Module_name
#define IGateProvider_create xdc_runtime_IGateProvider_create
#define IGateProvider_delete xdc_runtime_IGateProvider_delete
#define IGateProvider_Handle_label xdc_runtime_IGateProvider_Handle_label
#define IGateProvider_Handle_to_Module xdc_runtime_IGateProvider_Handle_to_Module

#endif /* xdc_runtime_IGateProvider__localnames__done */
#endif
/*
 *  @(#) xdc.runtime; 2, 1, 0,0; 8-21-2019 13:22:46; /db/ztree/library/trees/xdc/xdc-H25/src/packages/
 */

