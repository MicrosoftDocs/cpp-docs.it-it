---
title: Struttura _ATL_MODULE70 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- _ATL_MODULE70
- ATL::_ATL_MODULE70
- ATL._ATL_MODULE70
dev_langs:
- C++
helpviewer_keywords:
- ATL_MODULE70 structure
- _ATL_MODULE70 structure
ms.assetid: b059b2c8-dfd1-4ac9-b07d-39df638cc7b3
caps.latest.revision: 16
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: c55726a1728185f699afbac4ba68a6dc0f70c2bf
ms.openlocfilehash: 104596d55ee2580cbee3cfc916ad9ef7390ce4c1
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

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








