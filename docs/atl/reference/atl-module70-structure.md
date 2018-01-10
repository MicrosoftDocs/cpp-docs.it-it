---
title: Struttura _ATL_MODULE70 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _ATL_MODULE70
- ATL::_ATL_MODULE70
- ATL._ATL_MODULE70
dev_langs: C++
helpviewer_keywords:
- ATL_MODULE70 structure
- _ATL_MODULE70 structure
ms.assetid: b059b2c8-dfd1-4ac9-b07d-39df638cc7b3
caps.latest.revision: "16"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: c8122f733282fa819c3d789a90e60171ee006e27
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="atlmodule70-structure"></a>Struttura _ATL_MODULE70
Contiene i dati utilizzati da ogni modulo ATL.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct _ATL_MODULE70 {
    UINT cbSize;
    LONG m_nLockCnt;
    _ATL_TERMFUNC_ELEM* m_pTermFuncs;
    CComCriticalSection m_csStaticDataInitAndTypeInfo;
};
```  
  
## <a name="members"></a>Membri  
 `cbSize`  
 Le dimensioni della struttura, utilizzata per il controllo delle versioni.  
  
 `m_nLockCnt`  
 Conteggio dei riferimenti per determinare quanto tempo il modulo deve rimanere attivo.  
  
 **m_pTermFuncs**  
 Funzioni di tracce che sono state registrate da chiamare quando viene arrestato ATL.  
  
 **m_csStaticDataInitAndTypeInfo**  
 Utilizzato per coordinare l'accesso ai dati interni in situazioni con multithreading.  
  
## <a name="remarks"></a>Note  
 [_ATL_MODULE](atl-typedefs.md#_atl_module) è definito come un typedef di `_ATL_MODULE70`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)







