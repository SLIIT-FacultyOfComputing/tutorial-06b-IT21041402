class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height
       // write prototypes of getters for length, width and height
       void setmeasurements(int h, int l, int w);
        int getHeight();
        int getLength();
        int getWidth();
       int calcVolume();
};
