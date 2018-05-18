---
title: Struttura _ATL_COM_MODULE70 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- ATL::_ATL_COM_MODULE70
- ATL._ATL_COM_MODULE70
- _ATL_COM_MODULE70
dev_langs:
- C++
helpviewer_keywords:
- _ATL_COM_MODULE70 structure
- ATL_COM_MODULE70 structure
ms.assetid: 5b0b2fd0-bdeb-4c7e-8870-78fa69ace6e6
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5d78165481c8f2e9d8bba33ad14ebd0794f04fde
ms.sourcegitcommit: 19a108b4b30e93a9ad5394844c798490cb3e2945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2018
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
 [Classi e struct](../../atl/reference/atl-classes.md)





