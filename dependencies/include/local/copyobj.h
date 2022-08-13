// deep copy
struct CopyObj
{  
    CopyObj(size_t count)
    :m_count(count),m_arr(new int[count]){}

    ~CopyObj()
    {
        clear();
    }

    CopyObj(const CopyObj& rhs)
    {
        *this = rhs;
    }

    CopyObj& operator=(const CopyObj& rhs)
    {
        clear();
        this->m_count = rhs.m_count;
        this->m_arr = new int[this->m_count];
        for(size_t i = 0; i < this->m_count; ++i)
        {
            this->m_arr[i] = rhs.m_arr[i];
        }
        return *this;
    }

    CopyObj(const CopyObj&&) = delete;
    CopyObj& operator=(const CopyObj&& rhs) = delete;

    void clear()
    {
        this->m_count = 0;
        delete[] this->m_arr;
    }

    size_t m_count = 0;
    int * m_arr = nullptr;
};

// shallow copy
struct CloneObj
{  
    CloneObj(size_t count)
    :m_count(count),m_arr(new int[count]){}

    ~CloneObj()
    {
        clear();
    }

    CloneObj(const CloneObj& rhs) = default;
    CloneObj& operator=(const CloneObj& rhs) = default;

    CloneObj(const CloneObj&&) = delete;
    CloneObj& operator=(const CloneObj&& rhs) = delete;


    void clear()
    {
        this->m_count = 0;
        delete[] this->m_arr;
    }

    size_t m_count = 0;
    int * m_arr = nullptr;
};