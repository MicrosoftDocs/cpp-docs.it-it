---
title: Struttura _ATL_WIN_MODULE70 | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
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
caps.latest.revision: 15
author: mikeblome
ms.author: mblome
manager: ghogen
ms.translationtype: MT
ms.sourcegitcommit: c55726a1728185f699afbac4ba68a6dc0f70c2bf
ms.openlocfilehash: 7f521b418b7d179eb506a5e9df2887addec059ef
ms.contentlocale: it-it
ms.lasthandoff: 10/09/2017

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
 [Strutture](../../atl/reference/atl-structures.md)






