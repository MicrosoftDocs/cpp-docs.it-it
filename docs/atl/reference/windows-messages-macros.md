---
title: Macro di messaggi Windows
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::WM_FORWARDMSG
ms.assetid: 63abd22c-372d-4148-bb04-c605950ae64f
ms.openlocfilehash: 7bb5e2fa265c3a5dcabcc16d8343d5b86a4aaf42
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57273915"
---
# <a name="windows-messages-macros"></a>Macro di messaggi Windows

Questa macro inoltra i messaggi della finestra.

|||
|-|-|
|[WM_FORWARDMSG](#wm_forwardmsg)|Usare per inoltrare un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

##  <a name="wm_forwardmsg"></a>  WM_FORWARDMSG

Questa macro inoltra un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione.

```
WM_FORWARDMSG
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio è stato elaborato, zero se non.

### <a name="remarks"></a>Note

Usare WM_FORWARDMSG per inoltrare un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione. I parametri LPARAM e WPARAM vengono usati come segue:

|Parametro|Utilizzo|
|---------------|-----------|
|WPARAM|Dati definiti dall'utente|
|LPARAM|Un puntatore a un `MSG` struttura che contiene informazioni su un messaggio|

### <a name="example"></a>Esempio

Nell'esempio seguente, `m_hWndOther` rappresenta l'altra finestra che riceve questo messaggio.

[!code-cpp[NVC_ATL_Windowing#137](../../atl/codesnippet/cpp/windows-messages-macros_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
