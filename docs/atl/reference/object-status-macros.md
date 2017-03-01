---
title: Oggetto stato macro | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
ms.assetid: 727dbef2-a342-4157-9d64-a421805d9747
caps.latest.revision: 16
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
ms.sourcegitcommit: 604a4bf49490ad2599c857eb3afd527d67e1e25b
ms.openlocfilehash: 433a816b19690f22f482f26f6ab70c73ed102673
ms.lasthandoff: 02/24/2017

---
# <a name="object-status-macros"></a>Oggetto stato macro
Questa macro imposta flag appartenenti ai controlli ActiveX.  
  
|||  
|-|-|  
|[DECLARE_OLEMISC_STATUS](#declare_olemisc_status)|Utilizzato nei controlli ActiveX di ATL per impostare il **OLEMISC** flag.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  

##  <a name="a-namedeclareolemiscstatusa--declareolemiscstatus"></a><a name="declare_olemisc_status"></a>DECLARE_OLEMISC_STATUS  
 Utilizzato nei controlli ActiveX di ATL per impostare i flag OLEMISC.  
  
```
DECLARE_OLEMISC_STATUS( miscstatus )
```  
  
### <a name="parameters"></a>Parametri  
 *MiscStatus*  
 Tutti i flag OLEMISC.  
  
### <a name="remarks"></a>Note  
 Questa macro viene utilizzata per impostare i flag OLEMISC per un controllo ActiveX. Fare riferimento a [IOleObject::GetMiscStatus](http://msdn.microsoft.com/library/windows/desktop/ms678521) per ulteriori dettagli.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing&#124;](../../atl/codesnippet/cpp/object-status-macros_1.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)

