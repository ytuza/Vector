
class point{
private:
    double x;
    double y;
public:
    point(){x = 0;y = 0;}
    point(double nx, double ny){ x = nx; y = ny;}
    point(point &j){x=j.x; y = j.y;}
    void printp();
    void setx(double nx);
    void sety(double ny);
    double getx();
    double gety();
    void modpo(double nx, double ny);
};
