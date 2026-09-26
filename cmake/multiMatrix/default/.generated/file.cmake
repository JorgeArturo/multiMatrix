# The following variables contains the files used by the different stages of the build process.
set(multiMatrix_default_default_XC8_FILE_TYPE_assemble)
set_source_files_properties(${multiMatrix_default_default_XC8_FILE_TYPE_assemble} PROPERTIES LANGUAGE ASM)

# For assembly files, add "." to the include path for each file so that .include with a relative path works
foreach(source_file ${multiMatrix_default_default_XC8_FILE_TYPE_assemble})
        set_source_files_properties(${source_file} PROPERTIES INCLUDE_DIRECTORIES "$<PATH:NORMAL_PATH,$<PATH:REMOVE_FILENAME,${source_file}>>")
endforeach()

set(multiMatrix_default_default_XC8_FILE_TYPE_assemblePreprocess)
set_source_files_properties(${multiMatrix_default_default_XC8_FILE_TYPE_assemblePreprocess} PROPERTIES LANGUAGE ASM)

# For assembly files, add "." to the include path for each file so that .include with a relative path works
foreach(source_file ${multiMatrix_default_default_XC8_FILE_TYPE_assemblePreprocess})
        set_source_files_properties(${source_file} PROPERTIES INCLUDE_DIRECTORIES "$<PATH:NORMAL_PATH,$<PATH:REMOVE_FILENAME,${source_file}>>")
endforeach()

set(multiMatrix_default_default_XC8_FILE_TYPE_compile
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../config.mcc/hc164.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../config.mcc/main.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../config.mcc/mcc_generated_files/system/src/clock.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../config.mcc/mcc_generated_files/system/src/config_bits.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../config.mcc/mcc_generated_files/system/src/interrupt.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../config.mcc/mcc_generated_files/system/src/pins.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../config.mcc/mcc_generated_files/system/src/system.c"
    "${CMAKE_CURRENT_SOURCE_DIR}/../../../config.mcc/mcc_generated_files/timer/src/tmr0.c")
set_source_files_properties(${multiMatrix_default_default_XC8_FILE_TYPE_compile} PROPERTIES LANGUAGE C)
set(multiMatrix_default_default_XC8_FILE_TYPE_link)
set(multiMatrix_default_default_XC8_FILE_TYPE_objcopy_lss)
set(multiMatrix_default_image_name "default.elf")
set(multiMatrix_default_image_base_name "default")

# The output directory of the final image.
set(multiMatrix_default_output_dir "${CMAKE_CURRENT_SOURCE_DIR}/../../../out/multiMatrix")

# The full path to the final image.
set(multiMatrix_default_full_path_to_image ${multiMatrix_default_output_dir}/${multiMatrix_default_image_name})

# Potential output file extensions
set(output_extensions
    .hex
    .hxl
    .mum
    .o
    .sdb
    .sym
    .cmf)
list(TRANSFORM output_extensions PREPEND "${multiMatrix_default_output_dir}/${multiMatrix_default_image_base_name}")
