---
description: 'Altre informazioni su: classe CMessageMap'
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
ms.openlocfilehash: 90ecdc101071b84362d328558ff2e74cb9bbeb6b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97141440"
---
# <a name="cmessagemap-class"></a>Classe CMessageMap

Questa classe consente l'accesso delle mappe messaggi di un oggetto a un altro oggetto.

> [!IMPORTANT]
> Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Windows Runtime.

## <a name="syntax"></a>Sintassi

```
class ATL_NO_VTABLE CMessageMap
```

## <a name="members"></a>Members

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CMessageMap::P rocessWindowMessage](#processwindowmessage)|Accede a una mappa messaggi nella `CMessageMap` classe derivata da.|

## <a name="remarks"></a>Commenti

`CMessageMap` è una classe di base astratta che consente di accedere ai mapping dei messaggi di un oggetto da un altro oggetto. Per consentire a un oggetto di esporre le relative mappe messaggi, la relativa classe deve derivare da `CMessageMap` .

ATL utilizza `CMessageMap` per supportare le finestre contenute e il concatenamento dinamico della mappa messaggi. Ad esempio, qualsiasi classe che contiene un oggetto [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) deve derivare da `CMessageMap` . Il codice seguente è tratto dall'esempio di [sottomodifica](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/SubEdit) . Tramite [CComControl](../../atl/reference/ccomcontrol-class.md), la `CAtlEdit` classe deriva automaticamente da `CMessageMap` .

[!code-cpp[NVC_ATL_Windowing#90](../../atl/codesnippet/cpp/cmessagemap-class_1.h)]

Poiché la finestra contenuta,, utilizzerà `m_EditCtrl` una mappa messaggi nella classe che lo contiene, `CAtlEdit` deriva da `CMessageMap` .

Per ulteriori informazioni sulle mappe messaggi, vedere [mappe messaggi](../../atl/message-maps-atl.md) nell'articolo "classi finestra ATL".

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

## <a name="cmessagemapprocesswindowmessage"></a><a name="processwindowmessage"></a> CMessageMap::P rocessWindowMessage

Accede alla mappa messaggi identificata da *dwMsgMapID* in una `CMessageMap` classe derivata da.

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
in Handle della finestra che riceve il messaggio.

*uMsg*<br/>
in Messaggio inviato alla finestra.

*wParam*<br/>
in Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
in Informazioni aggiuntive specifiche del messaggio.

*lResult*<br/>
out Risultato dell'elaborazione del messaggio.

*dwMsgMapID*<br/>
in Identificatore della mappa messaggi in cui viene elaborato il messaggio. La mappa messaggi predefinita, dichiarata con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), è identificata da 0. Una mappa messaggi alternativa, dichiarata con [ALT_MSG_MAP (msgMapID)](message-map-macros-atl.md#alt_msg_map), è identificata da `msgMapID` .

### <a name="return-value"></a>Valore restituito

TRUE se il messaggio è completamente gestito. in caso contrario, FALSE.

### <a name="remarks"></a>Commenti

Chiamato dalla routine della finestra di un oggetto [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) o di un oggetto che viene concatenato in modo dinamico alla mappa messaggi.

## <a name="see-also"></a>Vedi anche

[Classe CDynamicChain](../../atl/reference/cdynamicchain-class.md)<br/>
[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[ALT_MSG_MAP (msgMapID)](message-map-macros-atl.md#alt_msg_map)<br/>
[Cenni preliminari sulle classi](../../atl/atl-class-overview.md)
