---
title: Struttura _ATL_COM_MODULE70 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 15
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: Machine Translation
ms.sourcegitcommit: 4e393abb2a904a0f5e101efe3d78d0645664397b
ms.openlocfilehash: 503c2a29cf0e70020b012911c51b056f00562374
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="atlcommodule70-structure"></a>Struttura _ATL_COM_MODULE70
Utilizzato dal codice correlato a COM in ATL.  
  
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
 La dimensione della struttura, utilizzata per il controllo delle versioni.  
  
 `m_hInstTypeLib`  
 L'istanza di handle per la libreria dei tipi per il modulo.  
  
 **m_ppAutoObjMapFirst**  
 Indirizzo dell'elemento della matrice che indica l'inizio delle voci della mappa oggetto per il modulo.  
  
 **m_ppAutoObjMapLast**  
 Indirizzo dell'elemento della matrice che indica la fine delle voci della mappa oggetto per il modulo.  
  
 `m_csObjMap`  
 Sezione critica per serializzare l'accesso per le voci della mappa oggetto. Utilizzato internamente da ATL.  
  
## <a name="remarks"></a>Note  
 [_ATL_COM_MODULE](atl-typedefs.md#_atl_com_module) è definito come typedef di `_ATL_COM_MODULE70`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)






