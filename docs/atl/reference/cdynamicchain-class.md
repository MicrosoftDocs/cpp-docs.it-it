---
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
ms.openlocfilehash: 4a72b3b4308ed83dfdc4a2895a04d1fe9a177ce5
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81327026"
---
# <a name="cdynamicchain-class"></a>Classe CDynamicChain

Questa classe fornisce metodi che supportano il concatenamento dinamico delle mappe messaggi.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class CDynamicChain
```

## <a name="members"></a>Membri

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDynamicChain::CDynamicChain](#cdynamicchain)|Costruttore.|
|[CDynamicChain:: CDynamicChain](#dtor)|Distruttore.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CDynamicChain::CallChain](#callchain)|Indirizza un messaggio di Windows alla mappa messaggi di un altro oggetto.|
|[CDynamicChain::RemoveChainEntry](#removechainentry)|Rimuove una voce della mappa messaggi dalla raccolta.|
|[CDynamicChain::SetChainEntry](#setchainentry)|Aggiunge una voce della mappa messaggi alla raccolta o modifica una voce esistente.|

## <a name="remarks"></a>Osservazioni

`CDynamicChain`gestisce una raccolta di mappe messaggi, consentendo a un messaggio di Windows di essere indirizzato, in fase di esecuzione, alla mappa messaggi di un altro oggetto.

Per aggiungere il supporto per il concatenamento dinamico delle mappe messaggi, eseguire le operazioni seguenti:

- Derivare la `CDynamicChain`classe da . Nella mappa messaggi, specificare la [CHAIN_MSG_MAP_DYNAMIC](message-map-macros-atl.md#chain_msg_map_dynamic) macro da concatenare alla mappa messaggi predefinita di un altro oggetto.

- Derivare ogni classe che si desidera concatenare da [CMessageMap](../../atl/reference/cmessagemap-class.md). `CMessageMap`consente a un oggetto di esporre le proprie mappe messaggi ad altri oggetti.

- Chiamata `CDynamicChain::SetChainEntry` per identificare l'oggetto e la mappa messaggi a cui si desidera concatenare.

Si supponga, ad esempio, che la classe sia definita come segue:For example, suppose your class is defined as follows:

[!code-cpp[NVC_ATL_Windowing#88](../../atl/codesnippet/cpp/cdynamicchain-class_1.h)]

Il client `CMyWindow::SetChainEntry`chiama quindi :

[!code-cpp[NVC_ATL_Windowing#89](../../atl/codesnippet/cpp/cdynamicchain-class_2.cpp)]

dove `chainedObj` è l'oggetto concatenato ed è `CMessageMap`un'istanza di una classe derivata da . A questo `myCtl` punto, se riceve un `OnPaint` messaggio `OnSetFocus`che non viene gestito `chainedObj`da o , la routine della finestra indirizza il messaggio alla mappa messaggi predefinita di '.

Per ulteriori informazioni sul concatenamento della mappa messaggi, vedere [mappe messaggi](../../atl/message-maps-atl.md) nell'articolo "Classi finestra ATL".

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="cdynamicchaincallchain"></a><a name="callchain"></a>CDynamicChain::CallChain

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

*dwChainID (IDDWChainID)*<br/>
[in] Identificatore univoco associato all'oggetto concatenato e alla relativa mappa messaggi.

*hWnd*<br/>
[in] Handle per la finestra che riceve il messaggio.

*Umsg*<br/>
[in] Messaggio inviato alla finestra.

*wParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

*lResult*<br/>
[fuori] Risultato dell'elaborazione del messaggio.

### <a name="return-value"></a>Valore restituito

TRUESe il messaggio è completamente elaborato. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Affinché la routine `CallChain`della finestra possa richiamare , è necessario specificare la [macro CHAIN_MSG_MAP_DYNAMIC](message-map-macros-atl.md#chain_msg_map_dynamic) nella mappa messaggi. Per un esempio, vedere il CDynamicChain cenno del [CDynamicChain.For](../../atl/reference/cdynamicchain-class.md) an example, see the CDynamicChain overview.

`CallChain`richiede una precedente chiamata a [SetChainEntry](#setchainentry) per associare il valore *dwChainID* a un oggetto e alla relativa mappa messaggi.

## <a name="cdynamicchaincdynamicchain"></a><a name="cdynamicchain"></a>CDynamicChain::CDynamicChain

Costruttore.

```
CDynamicChain();
```

## <a name="cdynamicchaincdynamicchain"></a><a name="dtor"></a>CDynamicChain:: CDynamicChain

Distruttore.

```
~CDynamicChain();
```

### <a name="remarks"></a>Osservazioni

Libera tutte le risorse allocate.

## <a name="cdynamicchainremovechainentry"></a><a name="removechainentry"></a>CDynamicChain::RemoveChainEntry

Rimuove la mappa messaggi specificata dalla raccolta.

```
BOOL RemoveChainEntry(DWORD dwChainID);
```

### <a name="parameters"></a>Parametri

*dwChainID (IDDWChainID)*<br/>
[in] Identificatore univoco associato all'oggetto concatenato e alla relativa mappa messaggi. Originariamente si definisce questo valore tramite una chiamata a [SetChainEntry](#setchainentry).

### <a name="return-value"></a>Valore restituito

TRUESe la mappa messaggi viene rimossa correttamente dalla raccolta. In caso contrario, FALSE.

## <a name="cdynamicchainsetchainentry"></a><a name="setchainentry"></a>CDynamicChain::SetChainEntry

Aggiunge la mappa messaggi specificata alla raccolta.

```
BOOL SetChainEntry(
    DWORD dwChainID,
    CMessageMap* pObject,
    DWORD dwMsgMapID = 0);
```

### <a name="parameters"></a>Parametri

*dwChainID (IDDWChainID)*<br/>
[in] Identificatore univoco associato all'oggetto concatenato e alla relativa mappa messaggi.

*pOggetto*<br/>
[in] Puntatore all'oggetto concatenato che dichiara la mappa messaggi. Questo oggetto deve derivare da [CMessageMap](../../atl/reference/cmessagemap-class.md).

*dwMsgMapID (ID dwMsgMapID)*<br/>
[in] Identificatore della mappa messaggi nell'oggetto concatenato. Il valore predefinito è 0, che identifica la mappa messaggi predefinita dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map). Per specificare una mappa messaggi alternativa dichiarata con `msgMapID` [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), passare .

### <a name="return-value"></a>Valore restituito

TRUESe la mappa messaggi viene aggiunta correttamente alla raccolta. In caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Se il valore *dwChainID* esiste già nell'insieme, l'oggetto associato e la mappa messaggi vengono sostituiti rispettivamente da *pObject* e *dwMsgMapID*. In caso contrario, viene aggiunta una nuova voce.

## <a name="see-also"></a>Vedere anche

[Classe CWindowImpl](../../atl/reference/cwindowimpl-class.md)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
