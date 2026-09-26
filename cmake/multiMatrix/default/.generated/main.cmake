include("${CMAKE_CURRENT_LIST_DIR}/rule.cmake")
include("${CMAKE_CURRENT_LIST_DIR}/file.cmake")

set(multiMatrix_default_library_list )

# Handle files with suffix (s|as|asm|AS|ASM|As|aS|Asm), for group default-XC8
if(multiMatrix_default_default_XC8_FILE_TYPE_assemble)
add_library(multiMatrix_default_default_XC8_assemble OBJECT ${multiMatrix_default_default_XC8_FILE_TYPE_assemble})
    multiMatrix_default_default_XC8_assemble_rule(multiMatrix_default_default_XC8_assemble)
    list(APPEND multiMatrix_default_library_list "$<TARGET_OBJECTS:multiMatrix_default_default_XC8_assemble>")

endif()

# Handle files with suffix S, for group default-XC8
if(multiMatrix_default_default_XC8_FILE_TYPE_assemblePreprocess)
add_library(multiMatrix_default_default_XC8_assemblePreprocess OBJECT ${multiMatrix_default_default_XC8_FILE_TYPE_assemblePreprocess})
    multiMatrix_default_default_XC8_assemblePreprocess_rule(multiMatrix_default_default_XC8_assemblePreprocess)
    list(APPEND multiMatrix_default_library_list "$<TARGET_OBJECTS:multiMatrix_default_default_XC8_assemblePreprocess>")

endif()

# Handle files with suffix [cC], for group default-XC8
if(multiMatrix_default_default_XC8_FILE_TYPE_compile)
add_library(multiMatrix_default_default_XC8_compile OBJECT ${multiMatrix_default_default_XC8_FILE_TYPE_compile})
    multiMatrix_default_default_XC8_compile_rule(multiMatrix_default_default_XC8_compile)
    list(APPEND multiMatrix_default_library_list "$<TARGET_OBJECTS:multiMatrix_default_default_XC8_compile>")

endif()

# Handle files with suffix elf, for group default-XC8
if(multiMatrix_default_default_XC8_FILE_TYPE_objcopy_lss)
add_library(multiMatrix_default_default_XC8_objcopy_lss OBJECT ${multiMatrix_default_default_XC8_FILE_TYPE_objcopy_lss})
    multiMatrix_default_default_XC8_objcopy_lss_rule(multiMatrix_default_default_XC8_objcopy_lss)
    list(APPEND multiMatrix_default_library_list "$<TARGET_OBJECTS:multiMatrix_default_default_XC8_objcopy_lss>")

endif()


# Main target for this project
add_executable(multiMatrix_default_image_CPSJdk4a ${multiMatrix_default_library_list})

set_target_properties(multiMatrix_default_image_CPSJdk4a PROPERTIES
    OUTPUT_NAME "default"
    SUFFIX ".elf"
    ADDITIONAL_CLEAN_FILES "${output_extensions}"
    RUNTIME_OUTPUT_DIRECTORY "${multiMatrix_default_output_dir}")
target_link_libraries(multiMatrix_default_image_CPSJdk4a PRIVATE ${multiMatrix_default_default_XC8_FILE_TYPE_link})
# Add the link options from the rule file.
multiMatrix_default_link_rule( multiMatrix_default_image_CPSJdk4a)


#Add objcopy steps
multiMatrix_default_objcopy_lss_rule(multiMatrix_default_image_CPSJdk4a)

