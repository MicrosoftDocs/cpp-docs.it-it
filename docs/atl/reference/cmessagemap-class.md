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
ms.openlocfilehash: 325851b75cef340fe5dcc762df54c40ded1ed704
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50534082"
---
# <a name="cmessagemap-class"></a>Classe CMessageMap

Questa classe consente di che mappe messaggi di un oggetto accessibile tramite un altro oggetto.

> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite nel Runtime di Windows.

## <a name="syntax"></a>Sintassi

```
class ATL_NO_VTABLE CMessageMap
```

## <a name="members"></a>Membri

### <a name="public-methods"></a>Metodi pubblici

|Nome|Descrizione|
|----------|-----------------|
|[CMessageMap::ProcessWindowMessage](#processwindowmessage)|Accede a una mappa dei messaggi nel `CMessageMap`-classe derivata.|

## <a name="remarks"></a>Note

`CMessageMap` è una classe base astratta che consente i messaggi di un oggetto viene eseguito il mapping per l'accesso da un altro oggetto. Affinché un oggetto di esporre le mappe messaggi, la classe deve derivare da `CMessageMap`.

Usa ATL `CMessageMap` al supporto contenuto windows e il messaggio dinamico mappa concatenamento. Ad esempio, qualsiasi classe che contiene un [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) oggetto deve derivare da `CMessageMap`. Il codice seguente è tratto dal [SUBEDIT](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/Controls/SubEdit) esempio. Attraverso [CComControl](../../atl/reference/ccomcontrol-class.md), il `CAtlEdit` automaticamente deriva dalla classe `CMessageMap`.

[!code-cpp[NVC_ATL_Windowing#90](../../atl/codesnippet/cpp/cmessagemap-class_1.h)]

Poiché la finestra contenuta `m_EditCtrl`, userà una mappa messaggi nella classe che lo contiene `CAtlEdit` deriva da `CMessageMap`.

Per altre informazioni sulle mappe di messaggio, vedere [mappe messaggi](../../atl/message-maps-atl.md) nell'articolo "Classi di finestra ATL".

## <a name="requirements"></a>Requisiti

**Intestazione:** atlwin. h

##  <a name="processwindowmessage"></a>  CMessageMap::ProcessWindowMessage

Accede a mappa messaggi identificata da *dwMsgMapID* in un `CMessageMap`-classe derivata.

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
[in] Handle alla finestra di ricezione del messaggio.

*uMsg*<br/>
[in] Il messaggio inviato alla finestra.

*wParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

*lParam*<br/>
[in] Informazioni aggiuntive specifiche del messaggio.

*lResult*<br/>
[out] Il risultato dell'elaborazione del messaggio.

*dwMsgMapID*<br/>
[in] Identificatore della mappa messaggi che elaborerà il messaggio. Il mapping dei messaggi predefinito, dichiarato con [BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map), è identificato da 0. Una mappa messaggi alternativo dichiarato con [ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map), è identificato da `msgMapID`.

### <a name="return-value"></a>Valore restituito

TRUE se il messaggio è completamente gestito; in caso contrario, FALSE.

### <a name="remarks"></a>Note

Chiamato da routine della finestra di un [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) dell'oggetto o di un oggetto che è concatenato in modo dinamico alla mappa messaggi.

## <a name="see-also"></a>Vedere anche

[Classe CDynamicChain](../../atl/reference/cdynamicchain-class.md)<br/>
[BEGIN_MSG_MAP](message-map-macros-atl.md#begin_msg_map)<br/>
[ALT_MSG_MAP(msgMapID)](message-map-macros-atl.md#alt_msg_map)<br/>
[Panoramica della classe](../../atl/atl-class-overview.md)
