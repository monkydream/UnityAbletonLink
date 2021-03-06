#ifndef Plugin_h
#define Plugin_h

#include "MyAbletonLink.h"

#ifdef __cplusplus
extern "C" {
#endif

	UNITY_INTERFACE_EXPORT void* UNITY_INTERFACE_API CreateAbletonLink();
	UNITY_INTERFACE_EXPORT void UNITY_INTERFACE_API DestroyAbletonLink(void* ptr);
	UNITY_INTERFACE_EXPORT void UNITY_INTERFACE_API setup(void* ptr, double bpm);
	UNITY_INTERFACE_EXPORT void UNITY_INTERFACE_API setTempo(void* ptr, double bpm);
	UNITY_INTERFACE_EXPORT double UNITY_INTERFACE_API tempo(void* ptr);
	UNITY_INTERFACE_EXPORT void UNITY_INTERFACE_API setQuantum(void* ptr, double quantum);
	UNITY_INTERFACE_EXPORT double UNITY_INTERFACE_API quantum(void* ptr);
    UNITY_INTERFACE_EXPORT void UNITY_INTERFACE_API forceBeatAtTime(void* ptr, double beat);
    UNITY_INTERFACE_EXPORT void UNITY_INTERFACE_API requestBeatAtTime(void* ptr, double beat);
	UNITY_INTERFACE_EXPORT void UNITY_INTERFACE_API enable(void* ptr, bool bEnable);
    UNITY_INTERFACE_EXPORT bool UNITY_INTERFACE_API isEnabled(void* ptr);
	UNITY_INTERFACE_EXPORT int UNITY_INTERFACE_API numPeers(void* ptr);
	UNITY_INTERFACE_EXPORT void UNITY_INTERFACE_API update(void* ptr, double* rbeat, double* rphase, double* rtempo, double* rtime, int* rnumPeers);
	//UNITY_INTERFACE_EXPORT void UNITY_INTERFACE_API setNumPeersCallback(void* ptr, numPeersCallback func);
	//UNITY_INTERFACE_EXPORT void UNITY_INTERFACE_API setTempoCallback(void* ptr, tempoCallback func);

#ifdef __cplusplus
}
#endif

#endif /* Plugin_h */
