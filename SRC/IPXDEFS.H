#ifndef __IPX__DEFS__
#define __IPX__DEFS__

#include "IPX/IPX.H"

#define IPX_END 0
#define IPX_SERVERSEARCH 1
#define IPX_TEXTMESSAGE 2
#define IPX_SERVERANSWER 3
#define IPX_SERVERSHUTDOWN 4
#define IPX_JOINREQUEST 5
#define IPX_JOINACCEPT 6
#define IPX_SENDLEVELINFO 7
#define IPX_SENDLEVEL 8
#define IPX_LEVELINFO 9
#define IPX_TRANSMITLEVEL 10
#define IPX_GAMEDATA 11
#define IPX_IMJOININGNOW 12
#define IPX_PLYXY 13
#define IPX_PLYRANGLE 14
#define IPX_ALIVE 15
#define IPX_PLYANIM 16
#define IPX_SENDCRATES 17
#define IPX_UPDCRATE 18
#define IPX_UPDKILLS 19
#define IPX_NEWBULLET 20
#define IPX_BURNING 21
#define IPX_MESSAGE 22
#define IPX_SOUND 23

#define SERVER 1
#define CLIENT 0
#define RECEIVERS 16

extern word SOCKET;// DOOM Socket
extern int IPXMSGLEN[];
#endif
