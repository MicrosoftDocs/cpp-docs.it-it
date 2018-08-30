---
title: Macro di stato dell'oggetto | Microsoft Docs
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
ms.openlocfilehash: 6fcfffcd9508876399b30238cac0b4f65c92c733
ms.sourcegitcommit: 9a0905c03a73c904014ec9fd3d6e59e4fa7813cd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/29/2018
ms.locfileid: "43206501"
---
# <a name="object-status-macros"></a>Macro di stato oggetto
Questa macro imposta flag appartenenti a controlli ActiveX.  
  
|||  
|-|-|  
|[DECLARE_OLEMISC_STATUS](#declare_olemisc_status)|Utilizzato nei controlli ActiveX di ATL per impostare i flag OLEMISC.|  

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
 Questa macro viene usata per impostare i flag OLEMISC per un controllo ActiveX. Fare riferimento a [IOleObject::GetMiscStatus](/windows/desktop/api/oleidl/nf-oleidl-ioleobject-getmiscstatus) per altri dettagli.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_ATL_Windowing#124](../../atl/codesnippet/cpp/object-status-macros_1.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Macro](../../atl/reference/atl-macros.md)
