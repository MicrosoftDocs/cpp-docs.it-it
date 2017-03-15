---
title: Struttura _ATL_BASE_MODULE70 | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- ATL::_ATL_BASE_MODULE70
- ATL._ATL_BASE_MODULE70
- _ATL_BASE_MODULE70
dev_langs:
- C++
helpviewer_keywords:
- ATL_BASE_MODULE70 structure
- _ATL_BASE_MODULE70 structure
ms.assetid: 4539282f-15b8-4d7c-aafa-a85dc56f4980
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
translationtype: Machine Translation
ms.sourcegitcommit: 347e7bf7cd9173fb2815f44fc052ec23ab4055a6
ms.openlocfilehash: 7456d441d7b3fb74f404f29c893c492feab10ed9
ms.lasthandoff: 02/24/2017

---
# <a name="atlbasemodule70-structure"></a>Struttura _ATL_BASE_MODULE70
Utilizzato da qualsiasi progetto che utilizza ATL.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct _ATL_BASE_MODULE70 {
    UINT cbSize;
    HINSTANCE m_hInst;
    HINSTANCE m_hInstResource;
    bool m_bNT5orWin98;
    DWORD dwAtlBuildVer;
    GUID* pguidVer;
    CRITICAL_SECTION m_csResource;
    CSimpleArray<HINSTANCE> m_rgResourceInstance;
};
```  
  
## <a name="members"></a>Membri  
 `cbSize`  
 La dimensione della struttura, utilizzata per il controllo delle versioni.  
  
 `m_hInst`  
 Il **hInstance** per il modulo (exe o dll).  
  
 `m_hInstResource`  
 Handle di risorsa istanza predefinita.  
  
 **m_bNT5orWin98**  
 Informazioni sulla versione del sistema operativo. Utilizzato internamente da ATL.  
  
 **dwAtlBuildVer**  
 Archivia la versione di ATL. Attualmente 0x0700.  
  
 **pguidVer**  
 GUID interno ATL.  
  
 **m_csResource**  
 Utilizzato per sincronizzare l'accesso per il **m_rgResourceInstance** matrice. Utilizzato internamente da ATL.  
  
 **m_rgResourceInstance**  
 Matrice usata per eseguire la ricerca di risorse in tutte le istanze di risorse di cui è compatibile con ATL. Utilizzato internamente da ATL.  
  
## <a name="remarks"></a>Note  
 [_ATL_BASE_MODULE](atl-typedefs.md#_atl_base_module) è definito come typedef di `_ATL_BASE_MODULE70`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)






