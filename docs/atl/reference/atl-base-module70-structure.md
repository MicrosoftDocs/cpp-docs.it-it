---
title: Struttura _ATL_BASE_MODULE70 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f711621188cffb739fe6895af3b222993c84576c
ms.sourcegitcommit: 6002df0ac79bde5d5cab7bbeb9d8e0ef9920da4a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/14/2018
---
# <a name="atlbasemodule70-structure"></a>Struttura _ATL_BASE_MODULE70
Usato da qualsiasi progetto che utilizza ATL.  
  
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
 Le dimensioni della struttura, utilizzata per il controllo delle versioni.  
  
 `m_hInst`  
 Il **hInstance** per questo modulo (exe o dll).  
  
 `m_hInstResource`  
 Handle di risorsa istanza predefinita.  
  
 **m_bNT5orWin98**  
 Informazioni sulla versione del sistema operativo. Utilizzato internamente da ATL.  
  
 **dwAtlBuildVer**  
 Archivia la versione di ATL. Attualmente 0x0700.  
  
 **pguidVer**  
 GUID interno ATL.  
  
 **m_csResource**  
 Usato per sincronizzare l'accesso per il **m_rgResourceInstance** matrice. Utilizzato internamente da ATL.  
  
 **m_rgResourceInstance**  
 Matrice utilizzata per cercare le risorse in tutte le istanze di risorse di cui è compatibile con ATL. Utilizzato internamente da ATL.  
  
## <a name="remarks"></a>Note  
 [_ATL_BASE_MODULE](atl-typedefs.md#_atl_base_module) è definito come un typedef di `_ATL_BASE_MODULE70`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcore  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)





