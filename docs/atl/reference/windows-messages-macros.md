---
description: 'Altre informazioni su: macro messaggi di Windows'
title: Macro di messaggi di Windows
ms.date: 11/04/2016
f1_keywords:
- atlbase/ATL::WM_FORWARDMSG
ms.assetid: 63abd22c-372d-4148-bb04-c605950ae64f
ms.openlocfilehash: be5913c5eaa88ca0020a978f2b3f6686a6756715
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97157581"
---
# <a name="windows-messages-macros"></a>Macro di messaggi di Windows

Questa macro trasmette i messaggi della finestra.

|Nome|Description|
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

### <a name="remarks"></a>Commenti

Utilizzare WM_FORWARDMSG per inviare un messaggio ricevuto da una finestra a un'altra finestra per l'elaborazione. I parametri LPARAM e WPARAM vengono usati come indicato di seguito:

|Parametro|Utilizzo|
|---------------|-----------|
|WPARAM|Dati definiti dall'utente|
|LPARAM|Puntatore a una `MSG` struttura che contiene informazioni su un messaggio|

### <a name="example"></a>Esempio

Nell'esempio seguente, `m_hWndOther` rappresenta l'altra finestra che riceve questo messaggio.

[!code-cpp[NVC_ATL_Windowing#137](../../atl/codesnippet/cpp/windows-messages-macros_1.cpp)]

## <a name="see-also"></a>Vedi anche

[Macro](../../atl/reference/atl-macros.md)
