
template<typename T>uint16_t getType(T param)
{
   return 0;
}

// integer types
// unsigned
template<>uint16_t getType<unsigned char>(unsigned char param)
{
   return IS_NUMERIC|IS_INTEGER|IS_8BIT;
}

template<>uint16_t getType<unsigned short int>(unsigned short int param)
{
   return IS_NUMERIC|IS_INTEGER|IS_16BIT;
}

template<>uint16_t getType<unsigned long int>(unsigned long int param)
{
   return IS_NUMERIC|IS_INTEGER|IS_32BIT;
}

template<>uint16_t getType<unsigned int>(unsigned int param)
{
  if(sizeof(param)==1){
    return IS_NUMERIC|IS_INTEGER|IS_8BIT;
  }else if(sizeof(param)==2){
    return IS_NUMERIC|IS_INTEGER|IS_16BIT;
  }else if(sizeof(param)==4){
    return IS_NUMERIC|IS_INTEGER|IS_32BIT;
  }else if(sizeof(param)==8){
    return IS_NUMERIC|IS_INTEGER|IS_64BIT;
  }
}

// signed
template<>uint16_t getType<signed char>(signed char param)
{
   return IS_NUMERIC|IS_INTEGER|IS_SIGNED|IS_8BIT;
}

template<>uint16_t getType<char>(char param)
{
   return IS_NUMERIC|IS_INTEGER|IS_SIGNED|IS_8BIT;
}

template<>uint16_t getType<short int>(short int param)
{
   return IS_NUMERIC|IS_INTEGER|IS_SIGNED|IS_16BIT;
}

template<>uint16_t getType<long int>(long int param)
{
   return IS_NUMERIC|IS_INTEGER|IS_SIGNED|IS_32BIT;
}

template<>uint16_t getType<int>(int param)
{
  if(sizeof(param)==1){
    return IS_NUMERIC|IS_INTEGER|IS_SIGNED|IS_8BIT;
  }else if(sizeof(param)==2){
    return IS_NUMERIC|IS_INTEGER|IS_SIGNED|IS_16BIT;
  }else if(sizeof(param)==4){
    return IS_NUMERIC|IS_INTEGER|IS_SIGNED|IS_32BIT;
  }else if(sizeof(param)==8){
    return IS_NUMERIC|IS_INTEGER|IS_SIGNED|IS_64BIT;
  }
}

// floating point types
template<>uint16_t getType<float>(float param)
{
  if(sizeof(param)==4){
    return IS_NUMERIC|IS_FLOAT|IS_SIGNED|IS_32BIT;
  }else if(sizeof(param)==8){
    return IS_NUMERIC|IS_FLOAT|IS_SIGNED|IS_64BIT;
  }else{
    return IS_NUMERIC|IS_FLOAT|IS_SIGNED;
  }
}

template<>uint16_t getType<double>(double param)
{
  if(sizeof(param)==4){
    return IS_NUMERIC|IS_FLOAT|IS_SIGNED|IS_32BIT;
  }else if(sizeof(param)==8){
    return IS_NUMERIC|IS_FLOAT|IS_SIGNED|IS_64BIT;
  }else{
    return IS_NUMERIC|IS_FLOAT|IS_SIGNED;
  }
}

template<>uint16_t getType<char*>(char* param)
{
  return IS_CHAR|IS_POINTER;
}

template<>uint16_t getType<const char*>(const char* param)
{
  return IS_CHAR|IS_CONST|IS_POINTER;
}

template<>uint16_t getType<String>(String param)
{
  return IS_STRING;
}

template<>uint16_t getType<const String>(const String param)
{
  return IS_STRING|IS_CONST;
}
