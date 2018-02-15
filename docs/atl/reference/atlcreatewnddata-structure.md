---
title: Struttura _AtlCreateWndData | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: bfc663429cc7cc1fe8ff6fc917f3150d621f9f75
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="atlcreatewnddata-structure"></a>_AtlCreateWndData Structure
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
 **m_pThis**  
 Il **questo** puntatore utilizzato per accedere all'istanza della classe nella routine della finestra.  
  
 `m_dwThreadID`  
 ID del thread dell'istanza della classe corrente.  
  
 **m_pNext**  
 Puntatore al successivo `_AtlCreateWndData` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)





