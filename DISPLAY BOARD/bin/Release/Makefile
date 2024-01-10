all:
	# batchisp -device at89c51rc2 -hardware RS232 -port COM5 -baudrate 57600 -operation erase f memory flash blankcheck loadbuffer ./paulmon21.hex program verify
	# batchisp -device at89c51rc2 -hardware RS232 -port COM5 -baudrate 57600 -operation loadbuffer ./extra.hex program verify
	# batchisp -device at89c51rc2 -hardware RS232 -port COM5 -baudrate 57600 -operation loadbuffer ./Gesture_control_LED_matrix.hex program verify start reset 1
	batchisp -device at89c51rc2 -hardware RS232 -port COM5 -baudrate 57600 -operation erase f memory flash blankcheck loadbuffer ./Gesture_control_LED_matrix.hex program verify
