#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

class Fixed
{
    public:
        Fixed( void );
        Fixed(const Fixed &src);
        ~Fixed( void );
        Fixed & operator=(Fixed const & rhs);
        
        int getRawBits( void ) const;
        void setRawBits ( int const raw);
    private:
        int _fixed_point_value;
        static const int _fractional_bits = 8;
};

#endif