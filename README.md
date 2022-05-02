# LuaSwiftBindings

Pasted together from [lua4swift](https://github.com/weyhan/lua4swift) and [Lua 5.4.4](https://www.lua.org/download.html) which are both under the MIT license.

`Sources/lua4swift` contains a slightly modified version of lua4swift with the following changes:

 - A few files and folders deleted
 
 - The readme and license file moved


`Sources/lua-5.4.4` contains a slightly modified version of the actual Lua 5.4.4 with the following changes:

- docs folder deleted

- header files moved into `include`

- Makefiles deleted

- `module.modulemap` added


Then there is the `Package.swift` at the root of this repo which glues together the two projects.
  
