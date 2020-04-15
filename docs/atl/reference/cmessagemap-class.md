---
title: Classe CMessageMap
ms.date: 11/04/2016
f1_keywords:
- CMessageMap
- ATLWIN/ATL::CMessageMap
- ATLWIN/ATL::CMessageMap::ProcessWindowMessage
helpviewer_keywords:
- CMessageMap class
- message maps, ATL
- ATL, message handlers
ms.assetid: 1f97bc16-a8a0-4cf0-b90f-1778813a5c8e
ms.openlocfilehash: a822f36d6b6fd49301d8240324e27f0ad9ce52e7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81326715"
---
# <a name="cmessagemap-class"></a>Classe CMessageMap

Questa classe consente alle mappe messaggi di un oggetto di accedere da un altro oggetto.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class ATL_NO_VTABLE CMessageMap
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMessageMap::ProcessWindowMessage](#processwindowmessage)|Accede a una mappa `CMessageMap`messaggi nella classe derivata.|

## <a name="remarks"></a>Osservazioni

`CMessageMap`è una classe base astratta che consente l'accesso alle mappe messaggi di un oggetto da parte di un altro oggetto. Affinché un oggetto esponga le proprie `CMessageMap`mappe messaggi, la relativa classe deve derivare da .

ATL `CMessageMap` utilizza per supportare le finestre contenute e il concatenamento dinamico della mappa messaggi. Ad esempio, qualsiasi classe contenente un oggetto `CMessageMap` [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) deve derivare da . Il codice seguente è tratto dall'esempio [SUBEDIT.](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/SubEdit) Tramite [CComControl](../../atl/reference/ccomcontrol-class.md), la `CAtlEdit` `CMessageMap`classe deriva automaticamente da .

[!code-cpp[NVC_ATL_Windowing#90](../../atl/codesnippet/cpp/cmessagemap-class_1.h)]

Poiché la `m_EditCtrl`finestra contenuta, , utilizzerà `CAtlEdit` una mappa `CMessageMap`messaggi nella classe che lo contiene, deriva da .

Per ulteriori informazioni sulle mappe messaggi, vedere [mappe messaggi](../../atl/message-maps-atl.md) nell'articolo "Classi finestra ATL".

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin.h

## <a name="cmessagemapprocesswindowmessage"></a><a name="processwindowmessage"></a>CMessageMap::ProcessWindowMessage

Accede alla mappa messaggi identificata da *dwMsgMapID* in una `CMessageMap`classe derivata.

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

*dwMsgMapID (ID dwMsgMapID)*<br/>
[in] Identificatore della mappa messaggi che elaborerà il messaggio. La mappa messaggi predefinita, dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), è identificata da 0. Una mappa messaggi alternativa, dichiarata con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), è identificata da `msgMapID`.

### <a name="return-value"></a>Valore restituito

TRUESe il messaggio è completamente gestito. in caso contrario, FALSE.

### <a name="remarks"></a>Osservazioni

Chiamato dalla routine della finestra di un [oggetto CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) o di un oggetto concatenato dinamicamente alla mappa messaggi.

## <a name="see-also"></a>Vedere anche

[Classe CDynamicChain](../../atl/reference/cdynamicchain-class.md)<br/>
[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
