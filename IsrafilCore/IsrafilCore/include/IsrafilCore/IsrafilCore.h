#ifndef ISRAFILCORE_H
#define ISRAFILCORE_H


#pragma once


#include <IsrafilCore-api.h>
#include <IsrafilBase/IsrafilBase.h>
#include <IsrafilNetwork/IsrafilNetwork.h>
#include <qqmusic.h>
#include <netease.h>

namespace Israfil {
namespace Core {
class ISRAFILCORE_API IsrafilCore {
public:

  IsrafilCore();
  SongList SearchSong(std::string strName);
  SongListInfoList GetUserSongList(std::string strUserID);
  SongList GetSongsInSLD(std::string strSongListID);

private:

  Israfil::QQMusic::QQMusic *pQM;
  Israfil::Netease::Netease *pNE;
};
} // namespace Core
} // namespace Israfil


#endif // ISRAFILCORE_H
