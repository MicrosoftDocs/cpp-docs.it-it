---
title: BEGIN_PROPERTY_SET_EX | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- BEGIN_PROPERTY_SET_EX
dev_langs:
- C++
helpviewer_keywords:
- BEGIN_PROPERTY_SET_EX macro
ms.assetid: c95e7fab-edce-47b8-b282-200e53a2ea8a
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 239ee5810b0ebf46e01c9c97b01a36fdca4a1392
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33093100"
---
# <a name="beginpropertysetex"></a>BEGIN_PROPERTY_SET_EX
Mapping dell'insieme di segni di che imposta l'inizio di una proprietà in una proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
BEGIN_PROPERTY_SET_EX(guid  
, flags )  
```  
  
#### <a name="parameters"></a>Parametri  
 `guid`  
 [in] La proprietà GUID.  
  
 `flags`  
 [in] **UPROPSET_HIDDEN** per qualsiasi set di proprietà non si desidera rendere visibili, o **UPROPSET_PASSTHROUGH** per un provider di esporre le proprietà definite all'esterno dell'ambito del provider.  
  
## <a name="example"></a>Esempio  
 Vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro per modelli Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)