---
title: Classe CDynamicChain | Microsoft Docs
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
ms.openlocfilehash: af215609ac9579a357539a0d2d0a85c78f6dbc13
ms.sourcegitcommit: 913c3bf23937b64b90ac05181fdff3df947d9f1c
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/18/2018
ms.locfileid: "46017963"
---
# <a name="cdynamicchain-class"></a>Classe CDynamicChain

Questa classe fornisce metodi che supportano la concatenazione dinamica di mappe messaggi.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

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

`CDynamicChain` gestisce una raccolta di mappe messaggi, l'abilitazione di un messaggio di Windows essere reindirizzati in fase di esecuzione alla mappa messaggi di un altro oggetto.

Per aggiungere supporto per la concatenazione dinamica di mappe messaggi, eseguire le operazioni seguenti:

- Derivare la classe da `CDynamicChain`. Nella mappa messaggi, specificare il [CHAIN_MSG_MAP_DYNAMIC](message-map-macros-atl.md#chain_msg_map_dynamic) macro concatenarsi a mappa dei messaggi predefinita di un altro oggetto.

- Ogni classe di cui si vuole concatenare a da derivare [CMessageMap](../../atl/reference/cmessagemap-class.md). `CMessageMap` consente a un oggetto di esporre le mappe messaggi ad altri oggetti.

- Chiamare `CDynamicChain::SetChainEntry` per identificare quale oggetto ed eseguire il mapping che si desidera catena.

Si supponga, ad esempio, che la classe viene definita come segue:

[!code-cpp[NVC_ATL_Windowing#88](../../atl/codesnippet/cpp/cdynamicchain-class_1.h)]

Il client chiama quindi `CMyWindow::SetChainEntry`:

[!code-cpp[NVC_ATL_Windowing#89](../../atl/codesnippet/cpp/cdynamicchain-class_2.cpp)]

in cui `chainedObj` è l'oggetto concatenata e un'istanza di una classe derivata da `CMessageMap`. A questo punto, se `myCtl` riceve un messaggio che non viene gestito da `OnPaint` o `OnSetFocus`, la procedura della finestra indirizza il messaggio `chainedObj`della mappa del messaggio predefinito.

Per altre informazioni sul concatenamento di mapping dei messaggi, vedere [mappe messaggi](../../atl/message-maps-atl.md) nell'articolo "Classi di finestra ATL".

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

*dwChainID*<br/>
[in] L'identificatore univoco associato l'oggetto concatenata e propria mappa messaggi.

*hWnd*<br/>
[in] Handle alla finestra di ricezione del messaggio.

*uMsg*<br/>
[in] Il messaggio inviato alla finestra.

*wParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

*lResult*<br/>
[out] Il risultato dell'elaborazione del messaggio.

### <a name="return-value"></a>Valore restituito

TRUE se il messaggio viene elaborato completamente; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Per la procedura di finestra per richiamare `CallChain`, è necessario specificare il [CHAIN_MSG_MAP_DYNAMIC](message-map-macros-atl.md#chain_msg_map_dynamic) macro della mappa del messaggio. Per un esempio, vedere la [CDynamicChain](../../atl/reference/cdynamicchain-class.md) Panoramica.

`CallChain` richiede una chiamata precedente a [SetChainEntry](#setchainentry) per associare le *dwChainID* valore con un oggetto e propria mappa messaggi.

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

Rimuove la mappa dei messaggi specificato dalla raccolta.

```
BOOL RemoveChainEntry(DWORD dwChainID);
```

### <a name="parameters"></a>Parametri

*dwChainID*<br/>
[in] L'identificatore univoco associato l'oggetto concatenata e propria mappa messaggi. Si definisce inizialmente questo valore tramite una chiamata a [SetChainEntry](#setchainentry).

### <a name="return-value"></a>Valore restituito

TRUE se la mappa dei messaggi viene rimosso correttamente dalla raccolta. In caso contrario, FALSE.

##  <a name="setchainentry"></a>  CDynamicChain::

Aggiunge la mappa dei messaggi specificato alla raccolta.

```
BOOL SetChainEntry(  
    DWORD dwChainID,
    CMessageMap* pObject,
    DWORD dwMsgMapID = 0);
```

### <a name="parameters"></a>Parametri

*dwChainID*<br/>
[in] L'identificatore univoco associato l'oggetto concatenata e propria mappa messaggi.

*pObject*<br/>
[in] Un puntatore all'oggetto concatenata dichiarando la mappa dei messaggi. Questo oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).

*dwMsgMapID*<br/>
[in] L'identificatore della mappa del messaggio nell'oggetto concatenata. Il valore predefinito è 0, che identifica la mappa dei messaggi predefinito dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). Per specificare una mappa messaggi alternativa dichiarato con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID`.

### <a name="return-value"></a>Valore restituito

TRUE se la mappa dei messaggi viene aggiunto correttamente alla raccolta. In caso contrario, FALSE.

### <a name="remarks"></a>Note

Se il *dwChainID* valore esiste già nella raccolta, il suo oggetto associato e mappa dei messaggi vengono sostituite da *pObject* e *dwMsgMapID*, rispettivamente. In caso contrario, viene aggiunta una nuova voce.

## <a name="see-also"></a>Vedere anche

[Classe CWindowImpl](../../atl/reference/cwindowimpl-class.md)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
