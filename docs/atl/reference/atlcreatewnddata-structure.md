---
title: Struttura atlcreatewnddata
ms.date: 11/04/2016
f1_keywords:
- ATL::_AtlCreateWndData
- ATL._AtlCreateWndData
- _AtlCreateWndData
helpviewer_keywords:
- _AtlCreateWndData structure
- AtlCreateWndData structure
ms.assetid: 76ed5382-bfbf-4b8b-8a29-912688dfd2ae
ms.openlocfilehash: 860d5772279d0ca0581a8cac1e0ef224f829586d
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50534186"
---
# <a name="atlcreatewnddata-structure"></a>Struttura atlcreatewnddata

Questa struttura contiene dati di istanza di classe nel codice di windowing in ATL.

## <a name="syntax"></a>Sintassi

```
    struct _AtlCreateWndData{
    void* m_pThis;
    DWORD m_dwThreadID;
    _AtlCreateWndData* m_pNext;
};
```

## <a name="members"></a>Membri

`m_pThis`<br/>
Il **ciò** puntatore utilizzato per ottenere l'accesso all'istanza della classe nella routine della finestra.

`m_dwThreadID`<br/>
ID del thread dell'istanza della classe corrente.

`m_pNext`<br/>
Puntatore al successivo `_AtlCreateWndData` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedere anche

[Classi e struct](../../atl/reference/atl-classes.md)

