---
description: 'Altre informazioni su: classe CDynamicChain'
title: Classe CDynamicChain
ms.date: 11/04/2016
f1_keywords:
- CDynamicChain
- ATLWIN/ATL::CDynamicChain
- ATLWIN/ATL::CDynamicChain::CDynamicChain
- ATLWIN/ATL::CDynamicChain::CallChain
- ATLWIN/ATL::CDynamicChain::RemoveChainEntry
- ATLWIN/ATL::CDynamicChain::SetChainEntry
helpviewer_keywords:
- message maps, chaining
- chaining message maps
- CDynamicChain class
ms.assetid: f084b2be-0e77-4836-973d-ae278a1e9da8
ms.openlocfilehash: 5ada99b519900150afa2143fb1527245797fed98
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141817"
---
# <a name="cdynamicchain-class"></a>Classe CDynamicChain

Questa classe fornisce metodi che supportano il concatenamento dinamico delle mappe messaggi.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CDynamicChain
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CDynamicChain:: CDynamicChain](#cdynamicchain)|Costruttore.|
|[CDynamicChain:: ~ CDynamicChain](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CDynamicChain:: CallChain](#callchain)|Indirizza un messaggio di Windows alla mappa messaggi di un altro oggetto.|
|[CDynamicChain:: RemoveChainEntry](#removechainentry)|Rimuove una voce della mappa messaggi dalla raccolta.|
|[CDynamicChain:: SetChainEntry](#setchainentry)|Aggiunge una voce della mappa messaggi alla raccolta o modifica una voce esistente.|

## <a name="remarks"></a>Commenti

`CDynamicChain` gestisce una raccolta di mappe messaggi, che consente di indirizzare un messaggio di Windows, in fase di esecuzione, alla mappa messaggi di un altro oggetto.

Per aggiungere il supporto per la concatenazione dinamica delle mappe messaggi, procedere come segue:

- Derivare la classe da `CDynamicChain` . Nella mappa messaggi specificare la macro [CHAIN_MSG_MAP_DYNAMIC](message-map-macros-atl.md#chain_msg_map_dynamic) da concatenare alla mappa messaggi predefinita di un altro oggetto.

- Derivare tutte le classi a cui si desidera concatenare da [CMessageMap](../../atl/reference/cmessagemap-class.md). `CMessageMap` consente a un oggetto di esporre le mappe dei messaggi ad altri oggetti.

- Chiamare `CDynamicChain::SetChainEntry` per identificare l'oggetto e la mappa dei messaggi a cui si desidera eseguire la concatenazione.

Si supponga, ad esempio, che la classe sia definita nel modo seguente:

[!code-cpp[NVC_ATL_Windowing#88](../../atl/codesnippet/cpp/cdynamicchain-class_1.h)]

Il client chiama quindi `CMyWindow::SetChainEntry` :

[!code-cpp[NVC_ATL_Windowing#89](../../atl/codesnippet/cpp/cdynamicchain-class_2.cpp)]

dove `chainedObj` è l'oggetto concatenato ed è un'istanza di una classe derivata da `CMessageMap` . A questo punto, se `myCtl` riceve un messaggio che non è gestito da `OnPaint` o `OnSetFocus` , la routine della finestra indirizza la `chainedObj` mappa messaggi predefinita del messaggio.

Per ulteriori informazioni sul concatenamento della mappa messaggi, vedere [mappe messaggi](../../atl/message-maps-atl.md) nell'articolo "classi di finestra ATL".

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="cdynamicchaincallchain"></a><a name="callchain"></a> CDynamicChain:: CallChain

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
in Identificatore univoco associato all'oggetto concatenato e alla relativa mappa messaggi.

*hWnd*<br/>
in Handle della finestra che riceve il messaggio.

*uMsg*<br/>
in Messaggio inviato alla finestra.

*wParam*<br/>
in Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
in Informazioni aggiuntive specifiche del messaggio.

*lResult*<br/>
out Risultato dell'elaborazione del messaggio.

### <a name="return-value"></a>Valore restituito

TRUE se il messaggio è completamente elaborato; in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Per richiamare la routine della finestra `CallChain` , è necessario specificare la [CHAIN_MSG_MAP_DYNAMIC](message-map-macros-atl.md#chain_msg_map_dynamic) macro nella mappa messaggi. Per un esempio, vedere Panoramica di [CDynamicChain](../../atl/reference/cdynamicchain-class.md) .

`CallChain` richiede una chiamata precedente a [SetChainEntry](#setchainentry) per associare il valore *dwChainID* a un oggetto e alla relativa mappa messaggi.

## <a name="cdynamicchaincdynamicchain"></a><a name="cdynamicchain"></a> CDynamicChain:: CDynamicChain

Costruttore.

```
CDynamicChain();
```

## <a name="cdynamicchaincdynamicchain"></a><a name="dtor"></a> CDynamicChain:: ~ CDynamicChain

Distruttore.

```
~CDynamicChain();
```

### <a name="remarks"></a>Commenti

Libera tutte le risorse allocate.

## <a name="cdynamicchainremovechainentry"></a><a name="removechainentry"></a> CDynamicChain:: RemoveChainEntry

Rimuove la mappa messaggi specificata dalla raccolta.

```
BOOL RemoveChainEntry(DWORD dwChainID);
```

### <a name="parameters"></a>Parametri

*dwChainID*<br/>
in Identificatore univoco associato all'oggetto concatenato e alla relativa mappa messaggi. Questo valore è stato originariamente definito tramite una chiamata a [SetChainEntry](#setchainentry).

### <a name="return-value"></a>Valore restituito

TRUE se la mappa messaggi è stata rimossa correttamente dalla raccolta. In caso contrario, FALSE.

## <a name="cdynamicchainsetchainentry"></a><a name="setchainentry"></a> CDynamicChain:: SetChainEntry

Aggiunge la mappa messaggi specificata alla raccolta.

```
BOOL SetChainEntry(
    DWORD dwChainID,
    CMessageMap* pObject,
    DWORD dwMsgMapID = 0);
```

### <a name="parameters"></a>Parametri

*dwChainID*<br/>
in Identificatore univoco associato all'oggetto concatenato e alla relativa mappa messaggi.

*pObject*<br/>
in Puntatore all'oggetto concatenato che dichiara la mappa messaggi. Questo oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).

*dwMsgMapID*<br/>
in Identificatore della mappa messaggi nell'oggetto concatenato. Il valore predefinito è 0, che identifica la mappa messaggi predefinita dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). Per specificare una mappa messaggi alternativa dichiarata con [ALT_MSG_MAP (msgMapID)](message-map-macros-atl.md#alt_msg_map), passare `msgMapID` .

### <a name="return-value"></a>Valore restituito

TRUE se la mappa messaggi è stata aggiunta correttamente alla raccolta. In caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Se il valore *dwChainID* esiste già nella raccolta, l'oggetto associato e la mappa messaggi vengono sostituiti rispettivamente da *pObject* e *dwMsgMapID*. In caso contrario, viene aggiunta una nuova voce.

## <a name="see-also"></a>Vedi anche

[Classe CWindowImpl](../../atl/reference/cwindowimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
