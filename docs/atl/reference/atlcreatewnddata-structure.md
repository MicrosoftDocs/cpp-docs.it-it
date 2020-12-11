---
description: 'Altre informazioni su: struttura _AtlCreateWndData'
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
ms.openlocfilehash: 912f2d108baa9cae1b91a34f3c5e386339d11f0b
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97158608"
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
**`this`** Puntatore utilizzato per ottenere l'accesso all'istanza della classe nelle routine della finestra.

`m_dwThreadID`<br/>
ID del thread dell'istanza della classe corrente.

`m_pNext`<br/>
Puntatore all'oggetto successivo `_AtlCreateWndData` .

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedi anche

[Classi e struct](../../atl/reference/atl-classes.md)
