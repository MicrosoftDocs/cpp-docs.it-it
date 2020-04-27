---
title: Struttura _AtlCreateWndData
ms.date: 11/04/2016
f1_keywords:
- ATL::_AtlCreateWndData
- ATL._AtlCreateWndData
- _AtlCreateWndData
helpviewer_keywords:
- _AtlCreateWndData structure
- AtlCreateWndData structure
ms.assetid: 76ed5382-bfbf-4b8b-8a29-912688dfd2ae
ms.openlocfilehash: 6453156a59b73bcb06c7c86920e1dc524874cef8
ms.sourcegitcommit: 2bc15c5b36372ab01fa21e9bcf718fa22705814f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/27/2020
ms.locfileid: "82168540"
---
# <a name="_atlcreatewnddata-structure"></a>Struttura _AtlCreateWndData

Questa struttura contiene i dati dell'istanza della classe nel codice di finestra di ATL.

## <a name="syntax"></a>Sintassi

```cpp
    struct _AtlCreateWndData{
    void* m_pThis;
    DWORD m_dwThreadID;
    _AtlCreateWndData* m_pNext;
};
```

## <a name="members"></a>Members

`m_pThis`<br/>
Puntatore **this** utilizzato per ottenere l'accesso all'istanza della classe nelle routine della finestra.

`m_dwThreadID`<br/>
ID del thread dell'istanza della classe corrente.

`m_pNext`<br/>
Puntatore all'oggetto successivo `_AtlCreateWndData` .

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedere anche

[Classi e struct](../../atl/reference/atl-classes.md)
