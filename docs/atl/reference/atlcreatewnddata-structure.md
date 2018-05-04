---
title: Struttura _AtlCreateWndData | Documenti Microsoft
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
ms.openlocfilehash: cc8bf88ce5258dc36a06f32ebaa5e2cdf15092fc
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="atlcreatewnddata-structure"></a>Struttura _AtlCreateWndData
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





