#ifndef PERSEGI_PANJANG_HPP
#define PERSEGI_PANJANG_HPP

class persegipanjang{
    private:
    float Xmin, Xmax, Ymin, Ymax ;

    public:  
    persegipanjang(int Xcenter, int Ycenter, int long, int wide) ;
    persegipanjang( float Xmin_ , float Xmax_ , float Ymin_ , float Ymax_ ) {Xmin = Xmin_ ; Xmax = Xmax_ ; Ymin = Ymin_ ; Ymax = Ymax_ ; }

    void SetXmin(float value) { Xmin = value ;}
    void SetXmax(float value) { Xmax = value ;}
    void SetYmin(float value) { Ymin = value ;}
    void SetYmax(float value) { Ymax = value ;}

    float GetXmin(){ return Xmin ;}
    float GetXmax(){ return Xmax ;}
    float GetYmin(){ return Ymin ;}
    float GetYmax(){ return Ymin ;}

    int Getlong() { return Xmax - Xmin; }
        int Getwide() { return Ymax - Ymin; }
        int GetXcenter() { return Xmin + (Getlong() / 2.f); }
        int GetYcenter() { return Ymin + (Getwide() / 2.f); }

    bool operator == (persegipanjang& pp) ;
    persegipanjang operator+(persegipanjang& pp) ;
    persegipanjang operator-(persegipanjang& pp) ;
    persegipanjang& operator++() ;
    persegipanjang operator++(int) ;
    persegipanjang& operator--() ;
    persegipanjang operator--(int) ;
    float operator[](int index) ; 
};

#endif