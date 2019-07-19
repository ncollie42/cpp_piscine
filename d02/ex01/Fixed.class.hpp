#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H


class Fixed
{
    public:
        Fixed( void );
        Fixed( const float fnum );
        Fixed( const int inum );
        Fixed(const Fixed &src);
        ~Fixed( void );
        Fixed & operator = (Fixed const & rhs);
        
        float toFloat (void) const;
        int toInt(void) const;
        int getRawBits( void ) const;
        void setRawBits ( int const raw);
    private:
        int _fixed_point_value; //raw, 
        static const int _fractional_bits = 8; //exponent value, higher = more precision 
};

std::ostream & operator << (std::ostream &out, const Fixed &rhs);
#endif
        