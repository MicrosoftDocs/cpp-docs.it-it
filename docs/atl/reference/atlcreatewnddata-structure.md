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
ms.openlocfilehash: a38ddb7e3575e883c11b14a9b01004bb54fcd4a4
ms.sourcegitcommit: 1f009ab0f2cc4a177f2d1353d5a38f164612bdb1
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/27/2020
ms.locfileid: "87230013"
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

## <a name="members"></a>Membri

`m_pThis`<br/>
**`this`** Puntatore utilizzato per ottenere l'accesso all'istanza della classe nelle routine della finestra.

`m_dwThreadID`<br/>
ID del thread dell'istanza della classe corrente.

`m_pNext`<br/>
Puntatore all'oggetto successivo `_AtlCreateWndData` .

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedere anche

[Classi e struct](../../atl/reference/atl-classes.md)
