---
title: Struttura _ATL_WIN_MODULE70 | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- _ATL_WIN_MODULE70
- ATL::_ATL_WIN_MODULE70
- ATL._ATL_WIN_MODULE70
dev_langs:
- C++
helpviewer_keywords:
- _ATL_WIN_MODULE70 structure
- ATL_WIN_MODULE70 structure
ms.assetid: a0aaf3ea-ca77-46ec-bd53-4dfb61dffbea
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 587b115c428b0d82183abbec9f712ff06ea448f4
ms.sourcegitcommit: 19a108b4b30e93a9ad5394844c798490cb3e2945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/17/2018
---
# <a name="atlwinmodule70-structure"></a>Struttura _ATL_WIN_MODULE70
Utilizzato dal codice di windowing in ATL.  
  
## <a name="syntax"></a>Sintassi  
  
```
struct _ATL_WIN_MODULE70 {
    UNIT cbSize; 
    CRITICAL_SECTION m_csWindowCreate;
    _AtlCreateWndData* m_pCreateWndList;
    CSimpleArray<ATOM> m_rgWindowClassAtoms;
};
```  
  
## <a name="members"></a>Membri  
 `cbSize`  
 Le dimensioni della struttura, utilizzata per il controllo delle versioni.  
  
 `m_csWindowCreate`  
 Utilizzato per serializzare l'accesso al codice di registrazione di finestra. Utilizzato internamente da ATL.  
  
 **m_pCreateWndList**  
 Utilizzato per associare i relativi oggetti di windows. Utilizzato internamente da ATL.  
  
 **m_rgWindowClassAtoms**  
 Utilizzato per tenere traccia di registrazioni a una classe finestra in modo che possano essere correttamente annullata la registrazione alla chiusura. Utilizzato internamente da ATL.  
  
## <a name="remarks"></a>Note  
 [_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module) è definito come un typedef di `_ATL_WIN_MODULE70`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
## <a name="see-also"></a>Vedere anche  
 [Classi e struct](../../atl/reference/atl-classes.md)





