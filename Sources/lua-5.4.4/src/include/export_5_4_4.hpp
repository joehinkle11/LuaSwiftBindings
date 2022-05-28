//
//  export_5_4_4.hpp
//  
//
//  Created by Joseph Hinkle on 5/27/22.
//

#ifndef export_5_4_4_h
#define export_5_4_4_h
#include "lua.h"

#ifdef __cplusplus
extern "C" {
#endif
    const char *(lua_pushstring_5_4_4) (lua_State *L, const char *s);
    void (lua_pushnil_5_4_4) (lua_State *L);
    void (lua_pushnumber_5_4_4) (lua_State *L, lua_Number n);
    void (lua_pushinteger_5_4_4) (lua_State *L, lua_Integer n);
    void (lua_pushcclosure_5_4_4) (lua_State *L, lua_CFunction fn, int n);
    void (lua_pushboolean_5_4_4) (lua_State *L, int b);
    void (lua_pushvalue_5_4_4) (lua_State *L, int idx);
    int (lua_gettop_5_4_4) (lua_State *L);
    int (lua_getglobal_5_4_4) (lua_State *L, const char *name);
    int (lua_gettable_5_4_4) (lua_State *L, int idx);
    int (lua_getfield_5_4_4) (lua_State *L, int idx, const char *k);
    int (lua_rawgeti_5_4_4) (lua_State *L, int idx, lua_Integer n);
    void (lua_settop_5_4_4) (lua_State *L, int idx);
    void (lua_settable_5_4_4) (lua_State *L, int idx);
    void (lua_setfield_5_4_4) (lua_State *L, int idx, const char *k);
    int (lua_setmetatable_5_4_4) (lua_State *L, int objindex);
    lua_Number (lua_tonumberx_5_4_4) (lua_State *L, int idx, int *isnum);
    lua_Integer (lua_tointegerx_5_4_4) (lua_State *L, int idx, int *isnum);
    int (lua_toboolean_5_4_4) (lua_State *L, int idx);
    const  char *(lua_tolstring_5_4_4) (lua_State *L, int idx, size_t *len);
    void *(lua_touserdata_5_4_4) (lua_State *L, int idx);
    int (lua_isinteger_5_4_4) (lua_State *L, int idx);
    lua_State *(luaL_newstate_5_4_4) (void);
    int (lua_compare_5_4_4) (lua_State *L, int idx1, int idx2, int op);
    void *(luaL_testudata_5_4_4) (lua_State *L, int ud, const char *tname);
    int (lua_next_5_4_4) (lua_State *L, int idx);
    int (lua_pcallk_5_4_4) (lua_State *L, int nargs, int nresults, int errfunc, lua_KContext ctx, lua_KFunction k);
    void (luaL_openlibs_5_4_4) (lua_State *L);
    void (lua_close_5_4_4) (lua_State *L);
    int (lua_type_5_4_4) (lua_State *L, int idx);
    int (luaL_typeerror_5_4_4) (lua_State *L, int arg, const char *tname);
    void (lua_createtable_5_4_4) (lua_State *L, int narr, int nrec);
    int (luaL_ref_5_4_4) (lua_State *L, int t);
    void (luaL_unref_5_4_4) (lua_State *L, int t, int ref);
    int (lua_absindex_5_4_4) (lua_State *L, int idx);
    void (lua_rotate_5_4_4) (lua_State *L, int idx, int n);
    int (luaL_loadfilex_5_4_4) (lua_State *L, const char *filename, const char *mode);
    void (luaL_setmetatable_5_4_4) (lua_State *L, const char *tname);
    void *(lua_newuserdatauv_5_4_4) (lua_State *L, size_t sz, int nuvalue);
    int (luaL_loadstring_5_4_4) (lua_State *L, const char *s);
    int (lua_error_5_4_4) (lua_State *L);

#ifdef __cplusplus
}
#endif

#endif
