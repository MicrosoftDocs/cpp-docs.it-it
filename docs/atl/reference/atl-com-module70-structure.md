---
title: Struttura _ATL_COM_MODULE70 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::_ATL_COM_MODULE70
- ATL._ATL_COM_MODULE70
- _ATL_COM_MODULE70
dev_langs: C++
helpviewer_keywords:
- _ATL_COM_MODULE70 structure
- ATL_COM_MODULE70 structure
ms.assetid: 5b0b2fd0-bdeb-4c7e-8870-78fa69ace6e6
caps.latest.revision: "15"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: f5d1e1d2716c5ab97c2b805a943ffe4587341dc4
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="atlcommodule70-structure"></a>Struttura _ATL_COM_MODULE70
Utilizzato da codice COM correlato in ATL.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct _ATL_COM_MODULE70 {
    UINT cbSize;
    HINSTANCE m_hInstTypeLib;
    _ATL_OBJMAP_ENTRY** m_ppAutoObjMapFirst;
    _ATL_OBJMAP_ENTRY** m_ppAutoObjMapLast;
    CRITICAL_SECTION m_csObjMap;
};
```  
  
## <a name="members"></a>Membri  
 `cbSize`  
 Le dimensioni della struttura, utilizzata per il controllo delle versioni.  
  
 `m_hInstTypeLib`  
 Handle di istanza alla libreria dei tipi per questo modulo.  
  
 **m_ppAutoObjMapFirst**  
 Indirizzo dell'elemento della matrice indica l'inizio delle voci della mappa di oggetto per il modulo.  
  
 **m_ppAutoObjMapLast**  
 Indirizzo dell'elemento della matrice che indica la fine delle voci della mappa di oggetto per il modulo.  
  
 `m_csObjMap`  
 Sezione critica per serializzare l'accesso per le voci della mappa oggetto. Utilizzato internamente da ATL.  
  
## <a name="remarks"></a>Note  
 [_ATL_COM_MODULE](atl-typedefs.md#_atl_com_module) è definito come un typedef di `_ATL_COM_MODULE70`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)





