---
title: Struttura _ATL_MODULE70 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f189ef58ab83a6e77852c109e6da3ae86dc5555d
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
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







