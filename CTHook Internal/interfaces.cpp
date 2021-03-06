#include "interfaces.h"

IBaseClientDLL*			pClient;
IInputSystem*			pInputSystem;
IEngineClient*			pEngine;
IClientEntityList*		pEntityList;
CClientState*			pClientState;
IClientMode*			pClientMode;
ISurface*				pSurface;
IVDebugOverlay*			pDebugOverlay;
IVPanel*				pPanel;
IEngineTrace*			pTrace;
ILocalize*				pLocalize;
IMaterialSystem*		pMaterial;
IVModelRender*			pModelRender;
IPhysicsSurfaceProps*	pPhysics;
CEffects*				pEffects;
IVModelInfo*			pModelInfo;
ICvar*					pCvar;
CGlobalVars*			pGlobalVars;
IGameEventManager2*		pGameEvent;
CSGameRulesProxy**		pGameRules;
C_CSPlayerResource** csPlayerResource;
IDirect3DDevice9*		pD3device;
CGameUI*				pGameui;
IPrediction*			pPrediction;
IGameMovement*			pGameMovement;
IMoveHelper*			pMoveHelper;
CInput*					pInput;
IEngineSound*			pSound;
CViewRender*			pViewRender;
CGlowObjectManager*			pGlowManager;
IInputInternal*			pInputInternal;
IVRenderView*			pRenderView;
IViewRenderBeams*		pViewRenderBeams;

DWORD_PTR** dwPresent;
DWORD_PTR* dwAddress;
DWORD dwTemp;
int* pPredSeed;

std::unique_ptr<VMTHook>D3D9Hook;
std::unique_ptr<VMTHook>ClientModeHook;
std::unique_ptr<VMTHook>PanelHook;
std::unique_ptr<VMTHook>ClientHook;
std::unique_ptr<VMTHook>FireEventHook;
std::unique_ptr<VMTHook>PredictionHook;
std::unique_ptr<VMTHook>ModelRenderHook;
std::unique_ptr<VMTHook>TestHook;
std::unique_ptr<VMTHook>MaterialHook;
std::unique_ptr<VMTHook>SoundHook;
std::unique_ptr<VMTHook>SurfaceHook;
std::unique_ptr<VMTHook>RenderViewHook;
std::unique_ptr<VMTHook>pInputInternalHook;
std::unique_ptr<VMTHook>SceneEndHook;

HFont esp_font;
HFont esp_name_font;
HFont lby_font;
HFont freestanding_font;
HFont weapon_icon;
HFont weapon_icon_custom;

bool SendPacket;
bool bSendPackett;
Vector lastTickViewAngles;

Present_t Present;

DWORD KeyValues_KeyValues;
DWORD KeyValues_LoadFromBuffer;

RecvVarProxyFn fnSequenceProxyFn;

CViewSetup mirror;