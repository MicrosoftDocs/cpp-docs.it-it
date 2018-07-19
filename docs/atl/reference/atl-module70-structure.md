---
title: Struttura _ATL_MODULE70 | Microsoft Docs
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
ms.openlocfilehash: 9666d73eec770ff8231e5730e01520b0bee68012
ms.sourcegitcommit: 7d68f8303e021e27dc8f4d36e764ed836e93d24f
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/06/2018
ms.locfileid: "37886219"
---
# <a name="atlmodule70-structure"></a>Struttura _ATL_MODULE70
Contiene i dati usati da ogni modulo ATL.  
  
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
 Le dimensioni della struttura, usata per il controllo delle versioni.  
  
 `m_nLockCnt`  
 Conteggio dei riferimenti per determinare quanto tempo il modulo deve rimanere attivo.  
  
 `m_pTermFuncs`  
 Funzioni tracce registrate da chiamare quando ATL viene arrestato.  
  
 `m_csStaticDataInitAndTypeInfo`  
 Consente di coordinare l'accesso ai dati interni in situazioni multithread.  
  
## <a name="remarks"></a>Note  
 [_ATL_MODULE](atl-typedefs.md#_atl_module) viene definito come un typedef di `_ATL_MODULE70`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
## <a name="see-also"></a>Vedere anche  
  [Classi e struct](../../atl/reference/atl-classes.md)







