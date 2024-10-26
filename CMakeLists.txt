cmake_minimum_required(VERSION 3.5)

if (DEFINED ESP_PLATFORM)

    idf_build_get_property(target IDF_TARGET)

    set(srcs "")

    if(CONFIG_LDAC_DECODER)
        list(APPEND srcs "bit_allocation.c"
                         "bit_reader.c"
                         "huffCodes.c"
                         "imdct.c"
                         "libldacdec.c"
                         "spectrum.c"
                         "utility.c")
    endif()

    idf_component_register(SRCS "${srcs}"
                           INCLUDE_DIRS .)

else()

    include($ENV{IDF_PATH}/tools/cmake/project.cmake)
    project(libldacdec)

endif()
