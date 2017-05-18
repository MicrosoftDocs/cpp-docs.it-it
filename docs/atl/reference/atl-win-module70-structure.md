---
title: Struttura _ATL_WIN_MODULE70 | Documenti di Microsoft
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
ms.openlocfilehash: 383384c8f08b98592f92b5d38850137c1c0c6d54
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

---
# <a name="atlwinmodule70-structure"></a>Struttura _ATL_WIN_MODULE70
Utilizzato dal codice di finestre in ATL.  
  
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
 La dimensione della struttura, utilizzata per il controllo delle versioni.  
  
 `m_csWindowCreate`  
 Utilizzato per serializzare l'accesso al codice di registrazione di finestra. Utilizzato internamente da ATL.  
  
 **m_pCreateWndList**  
 Utilizzato per associare i relativi oggetti di windows. Utilizzato internamente da ATL.  
  
 **m_rgWindowClassAtoms**  
 Utilizzato per rilevare le registrazioni di classe di finestra in modo che possano essere correttamente annullata la registrazione al momento dell'arresto. Utilizzato internamente da ATL.  
  
## <a name="remarks"></a>Note  
 [_ATL_WIN_MODULE](atl-typedefs.md#_atl_win_module) è definito come typedef di `_ATL_WIN_MODULE70`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlbase. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture](../../atl/reference/atl-structures.md)






