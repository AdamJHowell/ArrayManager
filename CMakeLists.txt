cmake_minimum_required( VERSION 3.24 )
project( ArrayManager )

set( CMAKE_CXX_STANDARD 14 )

include_directories( .
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/cores/esp32"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/freertos/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/freertos/include/esp_additions/freertos"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/dio_qspi/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/esp_common/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/freertos/port/xtensa/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/xtensa/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/xtensa/esp32/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/esp_rom/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/soc/esp32/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/esp_hw_support/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/hal/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/hal/esp32/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/soc/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/esp_system/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/esp_timer/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/newlib/platform_include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/newlib/platform_include/sys"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/tools/xtensa-esp32-elf-gcc/esp-2021r2-patch5-8.4.0/xtensa-esp32-elf/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/tools/xtensa-esp32-elf-gcc/esp-2021r2-patch5-8.4.0/xtensa-esp32-elf/sys-include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/heap/include/"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/log/include/"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/variants/esp32"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/driver/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/spi_flash/include"
		"C:/Users/Adam/AppData/Local/Arduino15/packages/esp32/hardware/esp32/2.0.14/tools/sdk/esp32/include/esp_hw_support/include/soc"
)

add_executable( ArrayManager
		ArrayManager/
		ArrayManager.cpp
		UnitTests.cpp )

set_target_properties( ArrayManager PROPERTIES LINKER_LANGUAGE CXX )
