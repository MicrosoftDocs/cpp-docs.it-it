---
title: Classe CMessageMap | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMessageMap
- ATLWIN/ATL::CMessageMap
- ATLWIN/ATL::CMessageMap::ProcessWindowMessage
dev_langs:
- C++
helpviewer_keywords:
- CMessageMap class
- message maps, ATL
- ATL, message handlers
ms.assetid: 1f97bc16-a8a0-4cf0-b90f-1778813a5c8e
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 04aff6922358048fcbd330096eb26a412cdb75ee
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmessagemap-class"></a>Classe CMessageMap
Questa classe consente di che mappe messaggi di un oggetto per l'accesso da un altro oggetto.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class ATL_NO_VTABLE CMessageMap
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMessageMap::ProcessWindowMessage](#processwindowmessage)|Accede a una mappa messaggi di `CMessageMap`-classe derivata.|  
  
## <a name="remarks"></a>Note  
 `CMessageMap`è una classe base astratta che consente i messaggi di un oggetto viene eseguito il mapping per l'accesso da un altro oggetto. Affinché un oggetto di esporre le mappe messaggi, la classe deve derivare da `CMessageMap`.  
  
 Utilizza ATL `CMessageMap` a windows di contenuti di supporto e il concatenamento della mappa messaggi dinamici. Ad esempio, qualsiasi classe che contiene un [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) oggetto deve derivare da `CMessageMap`. Il codice seguente è tratto dal [SUBEDIT](../../visual-cpp-samples.md) esempio. Tramite [CComControl](../../atl/reference/ccomcontrol-class.md), `CAtlEdit` classe deriva automaticamente da `CMessageMap`.  
  
 [!code-cpp[NVC_ATL_Windowing#90](../../atl/codesnippet/cpp/cmessagemap-class_1.h)]  
  
 Poiché la finestra contenuta `m_EditCtrl`, utilizzerà una mappa messaggi nella classe che contiene, `CAtlEdit` deriva da `CMessageMap`.  
  
 Per ulteriori informazioni sulle mappe messaggi, vedere [mappe messaggi](../../atl/message-maps-atl.md) nell'articolo "Classi di finestra ATL".  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="processwindowmessage"></a>CMessageMap::ProcessWindowMessage  
 Accede alla mappa messaggi identificata da `dwMsgMapID` in un `CMessageMap`-classe derivata.  
  
```
virtual BOOL ProcessWindowMessage(  
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT& lResult,
    DWORD dwMsgMapID) = 0;
```  
  
### <a name="parameters"></a>Parametri  
 `hWnd`  
 [in] L'handle della finestra che riceve il messaggio.  
  
 `uMsg`  
 [in] Il messaggio inviato alla finestra.  
  
 `wParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
 `lParam`  
 [in] Ulteriori informazioni specifiche del messaggio.  
  
 `lResult`  
 [out] Il risultato dell'elaborazione del messaggio.  
  
 `dwMsgMapID`  
 [in] Identificatore della mappa messaggi che elaborerà il messaggio. La mappa messaggi predefinito, dichiarato con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), identificato da 0. Una mappa messaggi alternativa, è dichiarato con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), identificato da `msgMapID`.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se il messaggio è completamente gestito; in caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 Chiamato da una routine della finestra di un [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) dell'oggetto o di un oggetto che è concatenato in modo dinamico la mappa dei messaggi.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicChain](../../atl/reference/cdynamicchain-class.md)   
 [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)   
 [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
