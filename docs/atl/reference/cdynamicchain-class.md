---
title: Classe CDynamicChain | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
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
caps.latest.revision: 21
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
ms.openlocfilehash: 4da97d0b3d72400d7e285fde187e6860759900af
ms.lasthandoff: 02/24/2017

---
# <a name="cdynamicchain-class"></a>Classe CDynamicChain
Questa classe fornisce metodi che supportano la concatenazione dinamica di mappe messaggi.  
  
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
|[CDynamicChain::](#setchainentry)|Aggiunge una voce della mappa messaggi alla raccolta o modifica una voce esistente.|  
  
## <a name="remarks"></a>Note  
 `CDynamicChain`gestisce una raccolta di mappe messaggi, attivazione di un messaggio di Windows vengano indirizzati in fase di esecuzione alla mappa messaggi di un altro oggetto.  
  
 Per aggiungere supporto per la concatenazione dinamica di mappe messaggi, procedere come segue:  
  
-   Derivare la classe da `CDynamicChain`. Nella mappa messaggi, specificare il [CHAIN_MSG_MAP_DYNAMIC](http://msdn.microsoft.com/library/7e5c72b7-cb31-4f3b-8a1b-6293804af220) macro a catena alla mappa messaggi predefinita di un altro oggetto.  
  
-   Ogni classe che si desidera concatenare da derivare [CMessageMap](../../atl/reference/cmessagemap-class.md). `CMessageMap`consente a un oggetto di esporre le mappe messaggi ad altri oggetti.  
  
-   Chiamare `CDynamicChain::SetChainEntry` per identificare quale oggetto ed eseguire il mapping il messaggio che si desidera catena.  
  
 Si supponga, ad esempio, che la classe è definita come segue:  
  
 [!code-cpp[NVC_ATL_Windowing&#88;](../../atl/codesnippet/cpp/cdynamicchain-class_1.h)]  
  
 Il client chiama quindi `CMyWindow::SetChainEntry`:  
  
 [!code-cpp[NVC_ATL_Windowing&#89;](../../atl/codesnippet/cpp/cdynamicchain-class_2.cpp)]  
  
 dove `chainedObj` è l'oggetto concatenata e un'istanza di una classe derivata da `CMessageMap`. A questo punto, se `myCtl` riceve un messaggio che non è gestito da `OnPaint` o `OnSetFocus`, la procedura di finestra indirizza il messaggio `chainedObj`della mappa messaggi predefinita.  
  
 Per ulteriori informazioni sul messaggio mappa concatenamento, vedere [mappe messaggi](../../atl/message-maps-atl.md) nell'articolo "Classi di finestra ATL".  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlwin. h  
  
##  <a name="callchain"></a>CDynamicChain::CallChain  
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
 [in] L'identificatore univoco associato all'oggetto concatenata e una mappa messaggi.  
  
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
 **TRUE** se il messaggio è stato completamente elaborato; in caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 Per richiamare la procedura di finestra `CallChain`, è necessario specificare il [CHAIN_MSG_MAP_DYNAMIC](http://msdn.microsoft.com/library/7e5c72b7-cb31-4f3b-8a1b-6293804af220) macro della mappa del messaggio. Per un esempio, vedere il [CDynamicChain](../../atl/reference/cdynamicchain-class.md) Panoramica.  
  
 `CallChain`richiede una precedente chiamata a [SetChainEntry](#setchainentry) per associare il `dwChainID` valore con un oggetto e una mappa messaggi.  
  
##  <a name="cdynamicchain"></a>CDynamicChain::CDynamicChain  
 Costruttore.  
  
```
CDynamicChain();
```  
  
##  <a name="dtor"></a>CDynamicChain:: ~ CDynamicChain  
 Distruttore.  
  
```
~CDynamicChain();
```  
  
### <a name="remarks"></a>Note  
 Libera tutte le risorse allocate.  
  
##  <a name="removechainentry"></a>CDynamicChain::RemoveChainEntry  
 Rimuove la mappa del messaggio specificato dalla raccolta.  
  
```
BOOL RemoveChainEntry(DWORD dwChainID);
```  
  
### <a name="parameters"></a>Parametri  
 `dwChainID`  
 [in] L'identificatore univoco associato all'oggetto concatenata e una mappa messaggi. Si definisce inizialmente questo valore tramite una chiamata a [SetChainEntry](#setchainentry).  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la mappa dei messaggi viene rimosso correttamente dalla raccolta. In caso contrario, **FALSE**.  
  
##  <a name="setchainentry"></a>CDynamicChain::  
 Aggiunge la mappa del messaggio specificato alla raccolta.  
  
```
BOOL SetChainEntry(  
    DWORD dwChainID,
    CMessageMap* pObject,
    DWORD dwMsgMapID = 0);
```  
  
### <a name="parameters"></a>Parametri  
 `dwChainID`  
 [in] L'identificatore univoco associato all'oggetto concatenata e una mappa messaggi.  
  
 `pObject`  
 [in] Un puntatore all'oggetto concatenata la dichiarazione della mappa messaggi. Questo oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).  
  
 `dwMsgMapID`  
 [in] Identificatore della mappa messaggi nell'oggetto concatenata. Il valore predefinito è 0, che identifica il mapping dei messaggi predefinito dichiarato con [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554). Per specificare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP(msgMapID)](http://msdn.microsoft.com/library/2c8871bf-abc0-4d52-bcf7-6b2ab9eb5af8), passare `msgMapID`.  
  
### <a name="return-value"></a>Valore restituito  
 **TRUE** se la mappa dei messaggi viene aggiunto correttamente alla raccolta. In caso contrario, **FALSE**.  
  
### <a name="remarks"></a>Note  
 Se il `dwChainID` valore esiste già nella raccolta, il relativo oggetto associato e la mappa messaggi vengono sostituiti da `pObject` e `dwMsgMapID`, rispettivamente. In caso contrario, viene aggiunta una nuova voce.  
  
## <a name="see-also"></a>Vedere anche  
 [CWindowImpl (classe)](../../atl/reference/cwindowimpl-class.md)   
 [Cenni preliminari sulla classe](../../atl/atl-class-overview.md)

