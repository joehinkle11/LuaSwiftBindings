//
//  export_5_4_4.cpp
//  
//
//  Created by Joseph Hinkle on 5/27/22.
//

#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"

extern "C" {
    const char *(lua_pushstring_5_4_4) (lua_State *L, const char *s) {
        return lua_pushstring(L, s);
    }

    void (lua_pushnil_5_4_4) (lua_State *L) {
        return lua_pushnil(L);
    }
    void (lua_pushnumber_5_4_4) (lua_State *L, lua_Number n) {
        return lua_pushnumber(L, n);
    }
    void (lua_pushinteger_5_4_4) (lua_State *L, lua_Integer n) {
        return lua_pushinteger(L, n);
    }
    void (lua_pushcclosure_5_4_4) (lua_State *L, lua_CFunction fn, int n) {
        return lua_pushcclosure(L, fn, n);
    }
    void (lua_pushboolean_5_4_4) (lua_State *L, int b) {
        return lua_pushboolean(L, b);
    }

    void (lua_pushvalue_5_4_4) (lua_State *L, int idx) {
        return lua_pushvalue(L, idx);
    }




    int (lua_gettop_5_4_4) (lua_State *L) {
        return lua_gettop(L);
    }
    int (lua_getglobal_5_4_4) (lua_State *L, const char *name) {
        return lua_getglobal(L, name);
    }
    int (lua_gettable_5_4_4) (lua_State *L, int idx) {
        return lua_gettable(L, idx);
    }
    int (lua_getfield_5_4_4) (lua_State *L, int idx, const char *k) {
        return lua_getfield(L, idx, k);
    }
    int (lua_rawgeti_5_4_4) (lua_State *L, int idx, lua_Integer n) {
        return lua_rawgeti(L, idx, n);
    }





    void (lua_settop_5_4_4) (lua_State *L, int idx) {
        return lua_settop(L, idx);
    }
    void (lua_settable_5_4_4) (lua_State *L, int idx) {
        return lua_settable(L, idx);
    }
    void (lua_setfield_5_4_4) (lua_State *L, int idx, const char *k) {
        return lua_setfield(L, idx, k);
    }
    int (lua_setmetatable_5_4_4) (lua_State *L, int objindex) {
        return lua_setmetatable(L, objindex);
    }


    lua_Number (lua_tonumberx_5_4_4) (lua_State *L, int idx, int *isnum) {
        return lua_tonumberx(L, idx, isnum);
    }
    lua_Integer (lua_tointegerx_5_4_4) (lua_State *L, int idx, int *isnum) {
        return lua_tointegerx(L, idx, isnum);
    }
    int (lua_toboolean_5_4_4) (lua_State *L, int idx) {
        return lua_toboolean(L, idx);
    }
    const  char *(lua_tolstring_5_4_4) (lua_State *L, int idx, size_t *len) {
        return lua_tolstring(L, idx, len);
    }
    void *(lua_touserdata_5_4_4) (lua_State *L, int idx) {
        return lua_touserdata(L, idx);
    }


    int (lua_isinteger_5_4_4) (lua_State *L, int idx) {
        return lua_isinteger(L, idx);
    }




    lua_State *(luaL_newstate_5_4_4) (void) {
        return luaL_newstate();
    }
    int (lua_compare_5_4_4) (lua_State *L, int idx1, int idx2, int op) {
        return lua_compare(L, idx1, idx2, op);
    }
    void *(luaL_testudata_5_4_4) (lua_State *L, int ud, const char *tname) {
        return luaL_testudata(L, ud, tname);
    }
    int (lua_next_5_4_4) (lua_State *L, int idx) {
        return lua_next(L, idx);
    }
    int (lua_pcallk_5_4_4) (lua_State *L, int nargs, int nresults, int errfunc, lua_KContext ctx, lua_KFunction k) {
        return lua_pcallk(L, nargs, nresults, errfunc, ctx, k);
    }
    void (luaL_openlibs_5_4_4) (lua_State *L) {
        return luaL_openlibs(L);
    }
    void (lua_close_5_4_4) (lua_State *L) {
        return lua_close(L);
    }
    int (lua_type_5_4_4) (lua_State *L, int idx) {
        return lua_type(L, idx);
    }
    int (luaL_typeerror_5_4_4) (lua_State *L, int arg, const char *tname) {
        return luaL_typeerror(L, arg, tname);
    }
    void (lua_createtable_5_4_4) (lua_State *L, int narr, int nrec) {
        return lua_createtable(L, narr, nrec);
    }
    int (luaL_ref_5_4_4) (lua_State *L, int t) {
        return luaL_ref(L, t);
    }
    void (luaL_unref_5_4_4) (lua_State *L, int t, int ref) {
        return luaL_unref(L, t, ref);
    }
    int (lua_absindex_5_4_4) (lua_State *L, int idx) {
        return lua_absindex(L, idx);
    }
    void (lua_rotate_5_4_4) (lua_State *L, int idx, int n) {
        return lua_rotate(L, idx, n);
    }

    int (luaL_loadfilex_5_4_4) (lua_State *L, const char *filename, const char *mode) {
        return luaL_loadfilex(L, filename, mode);
    }
    void (luaL_setmetatable_5_4_4) (lua_State *L, const char *tname) {
        return luaL_setmetatable(L, tname);
    }
    void *(lua_newuserdatauv_5_4_4) (lua_State *L, size_t sz, int nuvalue) {
        return lua_newuserdatauv(L, sz, nuvalue);
    }
    int (luaL_loadstring_5_4_4) (lua_State *L, const char *s) {
        return luaL_loadstring(L, s);
    }
    int (lua_error_5_4_4) (lua_State *L) {
        return lua_error(L);
    }
}
