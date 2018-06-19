---
title: Classe CDynamicChain | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- CDynamicChain
- ATLWIN/ATL::CDynamicChain
- ATLWIN/ATL::CDynamicChain::CDynamicChain
- ATLWIN/ATL::CDynamicChain::CallChain
- ATLWIN/ATL::CDynamicChain::RemoveChainEntry
- ATLWIN/ATL::CDynamicChain::SetChainEntry
dev_langs:
- C++
helpviewer_keywords:
- message maps, chaining
- chaining message maps
- CDynamicChain class
ms.assetid: f084b2be-0e77-4836-973d-ae278a1e9da8
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 08f6d09546d4514950b5b45ffb9494116294d051
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32364264"
---
# <a name="cdynamicchain-class"></a>Classe CDynamicChain
Questa classe fornisce metodi che supportano la concatenazione dinamica delle mappe messaggi.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## <a name="syntax"></a>Sintassi  
  
```
class CDynamicChain
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDynamicChain::CDynamicChain](#cdynamicchain)|Costruttore.|  
|[CDynamicChain:: ~ CDynamicChain](#dtor)|Distruttore.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CDynamicChain::CallChain](#callchain)|Indirizza un messaggio di Windows alla mappa messaggi di un altro oggetto.|  
|[CDynamicChain::RemoveChainEntry](#removechainentry)|Rimuove una voce della mappa messaggi dalla raccolta.|  
|[CDynamicChain::](#setchainentry)|Aggiunge una voce della mappa messaggi per la raccolta o modifica una voce esistente.|  
  
## <a name="remarks"></a>Note  
 `CDynamicChain` gestisce una raccolta di mappe messaggi, l'abilitazione di un messaggio di Windows da indirizzare, in fase di esecuzione alla mappa messaggi di un altro oggetto.  
  
 Per aggiungere supporto per la concatenazione dinamica delle mappe messaggi, eseguire le operazioni seguenti:  
  
-   Derivare la classe da `CDynamicChain`. Nella mappa messaggi, specificare il [CHAIN_MSG_MAP_DYNAMIC](message-map-macros-atl.md#chain_msg_map_dynamic) macro a catena alla mappa messaggi predefinito di un altro oggetto.  
  
-   Ogni classe che si desidera concatenare da derivare [CMessageMap](../../atl/reference/cmessagemap-class.md). `CMessageMap` consente a un oggetto per esporre le mappe messaggi ad altri oggetti.  
  
-   Chiamare `CDynamicChain::SetChainEntry` per identificare quale oggetto ed eseguire il mapping il messaggio che si vuole catena.  
  
 Si supponga, ad esempio, che la classe viene definita come segue:  
  
 [!code-cpp[NVC_ATL_Windowing#88](../../atl/codesnippet/cpp/cdynamicchain-class_1.h)]  
  
 Il client chiama quindi `CMyWindow::SetChainEntry`:  
  
 [!code-cpp[NVC_ATL_Windowing#89](../../atl/codesnippet/cpp/cdynamicchain-class_2.cpp)]  
  
 dove `chainedObj` è l'oggetto concatenata e un'istanza di una classe derivata da `CMessageMap`. A questo punto, se `myCtl` riceve un messaggio che non è gestito da `OnPaint` o `OnSetFocus`, la procedura di finestra indirizza il messaggio `chainedObj`della mappa messaggi predefinita.  
  
 Per ulteriori informazioni sul messaggio mappa concatenamento, vedere [mappe messaggi](../../atl/message-maps-atl.md) nell'articolo "Classi di finestra ATL".  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="callchain"></a>  CDynamicChain::CallChain  
 Indirizza il messaggio di Windows alla mappa messaggi di un altro oggetto.  
  
```
BOOL CallChain(  
    DWORD dwChainID,
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam,
    LRESULT& lResult);
```  
  
### <a name="parameters"></a>Parametri  
 `dwChainID`  
 [in] L'identificatore univoco associato all'oggetto concatenata e propria mappa messaggi.  
  
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
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se il messaggio è completamente elaborato; in caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 Per la procedura di finestra richiamare `CallChain`, è necessario specificare il [CHAIN_MSG_MAP_DYNAMIC](message-map-macros-atl.md#chain_msg_map_dynamic) macro della mappa del messaggio. Per un esempio, vedere il [CDynamicChain](../../atl/reference/cdynamicchain-class.md) Panoramica.  
  
 `CallChain` richiede una chiamata precedente a [SetChainEntry](#setchainentry) per associare il `dwChainID` valore con un oggetto e propria mappa messaggi.  
  
##  <a name="cdynamicchain"></a>  CDynamicChain::CDynamicChain  
 Costruttore.  
  
```
CDynamicChain();
```  
  
##  <a name="dtor"></a>  CDynamicChain:: ~ CDynamicChain  
 Distruttore.  
  
```
~CDynamicChain();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
##  <a name="removechainentry"></a>  CDynamicChain::RemoveChainEntry  
 Rimuove la mappa del messaggio specificato dalla raccolta.  
  
```
BOOL RemoveChainEntry(DWORD dwChainID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwChainID`  
 [in] L'identificatore univoco associato all'oggetto concatenata e propria mappa messaggi. È originariamente definire questo valore tramite una chiamata a [SetChainEntry](#setchainentry).  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la mappa dei messaggi viene rimosso correttamente dalla raccolta. In caso contrario, **FALSE**.  
  
##  <a name="setchainentry"></a>  CDynamicChain::  
 Aggiunge la mappa del messaggio specificato alla raccolta.  
  
```
BOOL SetChainEntry(  
    DWORD dwChainID,
    CMessageMap* pObject,
    DWORD dwMsgMapID = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `dwChainID`  
 [in] L'identificatore univoco associato all'oggetto concatenata e propria mappa messaggi.  
  
 `pObject`  
 [in] Un puntatore all'oggetto concatenata dichiarando la mappa messaggi. Questo oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).  
  
 `dwMsgMapID`  
 [in] Identificatore della mappa messaggi nell'oggetto concatenata. Il valore predefinito è 0, che identifica la mappa dei messaggi predefinito dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). Per specificare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID`.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la mappa dei messaggi viene aggiunto correttamente alla raccolta. In caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 Se il `dwChainID` valore esiste già nella raccolta, il relativo oggetto associato e la mappa messaggi vengono sostituiti da `pObject` e `dwMsgMapID`, rispettivamente. In caso contrario, viene aggiunta una nuova voce.  
  
## <a name="see-also"></a>Vedere anche  
 [Classe di CWindowImpl](../../atl/reference/cwindowimpl-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)
