---
title: Classe CMessageMap | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
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
caps.latest.revision: 22
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 5a0c6a1062330f952bb8fa52bc934f6754465513
ms.openlocfilehash: f0b40c73101463b934e3fcf299171bea142fe838
ms.lasthandoff: 02/24/2017

---
# <a name="cmessagemap-class"></a>Classe CMessageMap
Questa classe consente di che mappe di messaggi di un oggetto per l'accesso da un altro oggetto.  
  
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
  
 ATL utilizza `CMessageMap` supporto contenuto windows e il concatenamento della mappa messaggi dinamici. Ad esempio, qualsiasi classe che contiene un [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) oggetto deve derivare da `CMessageMap`. Il codice seguente è tratto dalla [SUBEDIT](../../visual-cpp-samples.md) esempio. Tramite [CComControl](../../atl/reference/ccomcontrol-class.md), `CAtlEdit` classe deriva automaticamente da `CMessageMap`.  
  
 [!code-cpp[NVC_ATL_Windowing&#90;](../../atl/codesnippet/cpp/cmessagemap-class_1.h)]  
  
 Poiché la finestra indipendente, `m_EditCtrl`, utilizzerà una mappa messaggi nella classe che lo contiene, `CAtlEdit` deriva da `CMessageMap`.  
  
 Per ulteriori informazioni sulle mappe messaggi, vedere [mappe messaggi](../../atl/message-maps-atl.md) nell'articolo "Classi di finestra ATL".  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="processwindowmessage"></a>CMessageMap::ProcessWindowMessage  
 Consente di accedere alla mappa messaggi identificata da `dwMsgMapID` in un `CMessageMap`-classe derivata.  
  
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
 [in] Identificatore della mappa messaggi che elaborerà il messaggio. Il mapping dei messaggi predefinito, dichiarato con [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554), identificato da 0. Una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP(msgMapID)](http://msdn.microsoft.com/library/2c8871bf-abc0-4d52-bcf7-6b2ab9eb5af8), identificato da `msgMapID`.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se il messaggio è stato completamente gestito; in caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 Chiamato da routine della finestra di un [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) dell'oggetto o di un oggetto che è concatenato in modo dinamico alla mappa messaggi.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CDynamicChain](../../atl/reference/cdynamicchain-class.md)   
 [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554)   
 [ALT_MSG_MAP](http://msdn.microsoft.com/library/2c8871bf-abc0-4d52-bcf7-6b2ab9eb5af8)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

