# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "")
  file(REMOVE_RECURSE
  "/Users/jorgerodriguez/MPLABProjects/multiMatrix/out/multiMatrix/default.cmf"
  "/Users/jorgerodriguez/MPLABProjects/multiMatrix/out/multiMatrix/default.hex"
  "/Users/jorgerodriguez/MPLABProjects/multiMatrix/out/multiMatrix/default.hxl"
  "/Users/jorgerodriguez/MPLABProjects/multiMatrix/out/multiMatrix/default.mum"
  "/Users/jorgerodriguez/MPLABProjects/multiMatrix/out/multiMatrix/default.o"
  "/Users/jorgerodriguez/MPLABProjects/multiMatrix/out/multiMatrix/default.sdb"
  "/Users/jorgerodriguez/MPLABProjects/multiMatrix/out/multiMatrix/default.sym"
  )
endif()
