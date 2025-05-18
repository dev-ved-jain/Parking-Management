#Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -I./Gates -I./Parking -I./Payment -I./Ticket -I./Vehicles

#source files
SRCS =	demo.cpp \
	Parking/parking_floor.cpp \
	Parking/parking_spot.cpp \
	Parking/bike_parking_spot.cpp \
	Parking/car_parking_spot.cpp \
	Parking/parking_service.cpp \
	Gates/entrance_gate.cpp \
	Gates/exit_gate.cpp \
	Payment/payment_service.cpp \
	Payment/credit_card_payment.cpp \
	Payment/upi_payment.cpp \
	Ticket/ticket.cpp \
	Vehicles/bike.cpp \
	Vehicles/car.cpp \
	Vehicles/vehicle_factory.cpp \
	Vehicles/vehicle.cpp

# Object files
OBJS = $(SRCS:.cpp=.o)

# Output binary
TARGET = parking_lot

# Default target
all: $(TARGET)

# Linking rule
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Compilation rule
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean build files
clean:
	rm -f $(OBJS) $(TARGET)