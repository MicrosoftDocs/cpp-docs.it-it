---
title: Macro di messaggi di Windows
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::WM_FORWARDMSG
ms.assetid: 63abd22c-372d-4148-bb04-c605950ae64f
ms.openlocfilehash: a5a6d45c64d6123128ae362c1ef5643392439f41
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81329415"
---
# <a name="windows-messages-macros"></a>Macro di messaggi di Windows

Questa macro inoltra i messaggi della finestra.

|||
|-|-|
|[WM_FORWARDMSG](#wm_forwardmsg)|Consente di inoltrare un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione.|

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase.h

## <a name="wm_forwardmsg"></a><a name="wm_forwardmsg"></a>WM_FORWARDMSG

Questa macro inoltra un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione.

```
WM_FORWARDMSG
```

### <a name="return-value"></a>Valore restituito

Diverso da zero se il messaggio è stato elaborato, zero in caso contrario.

### <a name="remarks"></a>Osservazioni

Utilizzare WM_FORWARDMSG per inoltrare un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione. I parametri LPARAM e WPARAM vengono utilizzati come segue:

|Parametro|Uso|
|---------------|-----------|
|Wparam|Dati definiti dall'utente|
|Lparam|Puntatore a `MSG` una struttura che contiene informazioni su un messaggio|

### <a name="example"></a>Esempio

Nell'esempio seguente, `m_hWndOther` rappresenta l'altra finestra che riceve questo messaggio.

[!code-cpp[NVC_ATL_Windowing#137](../../atl/codesnippet/cpp/windows-messages-macros_1.cpp)]

## <a name="see-also"></a>Vedere anche

[Macro](../../atl/reference/atl-macros.md)
