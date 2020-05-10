/*  dds.h version 2020050901

    DDS Interface Library

    Anthony Good - anthony dot good at gmail dot com
    K3NG


    DDS9851 Initialization Routine was written by George N2APB

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/

#ifndef dds_h
#define dds_h


#define DDS9850 1
#define DDS9851 2
#define DDS9834 3

// #define DEBUG_DDS

class dds {
  public:

    dds(uint8_t dds_chip, uint8_t dds_data_pin, uint8_t dds_load_pin, uint8_t dds_clock_pin, unsigned long dds_clock_hz);
        
    static void calibrate(float dds_calibration);
    
    static void setfrequency(unsigned long frequency);
		
		static void set_clock_multiplier(uint8_t state);
		
		static void set_triangle_wave(uint8_t state);
		
		static void raw_send(unsigned long bits_to_send, uint8_t number_of_bits_to_send);
		
		static void init_chip();

};

#endif
  