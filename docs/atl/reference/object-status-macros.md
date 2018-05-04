---
title: Oggetto stato macro | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- atlcom/ATL::DECLARE_OLEMISC_STATUS
dev_langs:
- C++
ms.assetid: 727dbef2-a342-4157-9d64-a421805d9747
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: eddfc28c659d0c1eb54794d8fc76a9f3a4f9e73b
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
---
# <a name="object-status-macros"></a>Oggetto stato macro
Questa macro imposta flag appartenenti ai controlli ActiveX.  
  
|||  
|-|-|  
|[DECLARE_OLEMISC_STATUS](#declare_olemisc_status)|Utilizzato nei controlli ActiveX di ATL per impostare il **OLEMISC** flag.|  

## <a name="requirements"></a>Requisiti  
 **Intestazione:** atlcom. h  

##  <a name="declare_olemisc_status"></a>  DECLARE_OLEMISC_STATUS  
 Utilizzato nei controlli ActiveX di ATL per impostare i flag OLEMISC.  
  
```
DECLARE_OLEMISC_STATUS( miscstatus )
```  
  
### <a name="parameters"></a>Parametri  
 *MiscStatus*  
 Tutti i flag OLEMISC.  
  
### <a name="remarks"></a>Note  
 Questa macro viene usata per impostare i flag OLEMISC per un controllo ActiveX. Fare riferimento a [IOleObject::GetMiscStatus](http://msdn.microsoft.com/library/windows/desktop/ms678521) per altri dettagli.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#124](../../atl/codesnippet/cpp/object-status-macros_1.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)
