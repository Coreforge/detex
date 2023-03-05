cmake_minimum_required(VERSION 3.0.0)
project(detex)

add_library(detex)

set_property(TARGET detex PROPERTY POSITION_INDEPENDENT_CODE ON)

target_sources(detex PRIVATE	${CMAKE_CURRENT_LIST_DIR}/bits.cpp
				${CMAKE_CURRENT_LIST_DIR}/bptc-tables.cpp
				${CMAKE_CURRENT_LIST_DIR}/clamp.cpp
				${CMAKE_CURRENT_LIST_DIR}/convert.cpp
				${CMAKE_CURRENT_LIST_DIR}/dds.cpp
				${CMAKE_CURRENT_LIST_DIR}/decompress-bc.cpp
				${CMAKE_CURRENT_LIST_DIR}/decompress-bptc.cpp
				${CMAKE_CURRENT_LIST_DIR}/decompress-bptc-float.cpp
				${CMAKE_CURRENT_LIST_DIR}/decompress-eac.cpp
				${CMAKE_CURRENT_LIST_DIR}/decompress-etc.cpp
				${CMAKE_CURRENT_LIST_DIR}/decompress-rgtc.cpp
				${CMAKE_CURRENT_LIST_DIR}/division-tables.cpp
				${CMAKE_CURRENT_LIST_DIR}/file-info.cpp
				${CMAKE_CURRENT_LIST_DIR}/half-float.cpp
				${CMAKE_CURRENT_LIST_DIR}/hdr.cpp
				${CMAKE_CURRENT_LIST_DIR}/ktx.cpp
				${CMAKE_CURRENT_LIST_DIR}/misc.cpp
				${CMAKE_CURRENT_LIST_DIR}/texture.cpp)
				
target_include_directories(detex INTERFACE ${CMAKE_CURRENT_LIST_DIR})
