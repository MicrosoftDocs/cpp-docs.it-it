---
title: Struttura atlcreatewnddata | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- ATL::_AtlCreateWndData
- ATL._AtlCreateWndData
- _AtlCreateWndData
dev_langs:
- C++
helpviewer_keywords:
- _AtlCreateWndData structure
- AtlCreateWndData structure
ms.assetid: 76ed5382-bfbf-4b8b-8a29-912688dfd2ae
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: c5751fa3c5c8bc20f287ca3c48d885fc41c60ba0
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43764329"
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

`m_pThis`  
Il **ciò** puntatore utilizzato per ottenere l'accesso all'istanza della classe nella routine della finestra.

`m_dwThreadID`  
ID del thread dell'istanza della classe corrente.

`m_pNext`  
Puntatore al successivo `_AtlCreateWndData` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** atlbase. h

## <a name="see-also"></a>Vedere anche

[Classi e struct](../../atl/reference/atl-classes.md)

