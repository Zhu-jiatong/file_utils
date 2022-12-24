#include "src/file_utils/file_utils.hpp"
#include <SD.h>

void setup()
{
	Serial.begin(115200);
	Serial.println(SD.begin());
	Serial.printf("%u files", cst::for_each_file(
								  SD.open("/"), [](File &f)
								  { Serial.println(f.path()); },
								  false, 2));
}
void loop() {}