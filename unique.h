
template <class T> class uni_pointer {

  public:
    uni_pointer(T *block) : ptr(block) {};
    ~uni_pointer(){
    };
    
    T* operator->();
    T& operator*();

    void auto_cleanup() {
      if(this->ptr)
        delete this->ptr;
    };

  private: 
    T* ptr;

};
