#ifndef STEP_WRITER_PHYSVOL_H
#define STEP_WRITER_PHYSVOL_H 1

#include <string>

class PhysicalVolume
{
 private:
  std::string logicalVolumeRef;
  std::string positionRef;
  std::string rotationRef;
 public:
  PhysicalVolume(std::string setLogicalVolumeRef, std::string setPositionRef, std::string setRotationRef)
  {
   logicalVolumeRef = setLogicalVolumeRef;
   positionRef = setPositionRef;
   rotationRef = setRotationRef;
  }
  std::string getLogicalVolumeRef()
  {
   return logicalVolumeRef;
  }
  std::string getPositionRef()
  {
   return positionRef;
  }
  std::string getRotationRef()
  {
   return rotationRef;
  }
};

#endif // STEP_WRITER_PHYSVOL_H
