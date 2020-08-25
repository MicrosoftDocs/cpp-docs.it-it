---
title: Macro di messaggi di Windows
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::WM_FORWARDMSG
ms.assetid: 63abd22c-372d-4148-bb04-c605950ae64f
ms.openlocfilehash: b4cd3c2eea24449eb17050b147d9c59560d8358f
ms.sourcegitcommit: ec6dd97ef3d10b44e0fedaa8e53f41696f49ac7b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/25/2020
ms.locfileid: "88834440"
---
# <a name="windows-messages-macros"></a>Macro di messaggi di Windows

Questa macro trasmette i messaggi della finestra.

|Nome|Descrizione|
|-|-|
|[WM_FORWARDMSG](#wm_forwardmsg)|Utilizzare per inviare un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="wm_forwardmsg"></a><a name="wm_forwardmsg"></a> WM_FORWARDMSG

Questa macro trasmette un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione.

```
WM_FORWARDMSG
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio è stato elaborato; in caso contrario, zero.

### <a name="remarks"></a>Osservazioni

Utilizzare WM_FORWARDMSG per inviare un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione. I parametri LPARAM e WPARAM vengono usati come indicato di seguito:

|Parametro|Utilizzo|
|---------------|-----------|
|WPARAM|Dati definiti dall'utente|
|LPARAM|Puntatore a una `MSG` struttura che contiene informazioni su un messaggio|

### <a name="example"></a>Esempio

Nell'esempio seguente, `m_hWndOther` rappresenta l'altra finestra che riceve questo messaggio.

[!code-cpp[NVC_ATL_Windowing#137](../../atl/codesnippet/cpp/windows-messages-macros_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
