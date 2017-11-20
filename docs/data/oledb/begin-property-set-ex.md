---
title: BEGIN_PROPERTY_SET_EX | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: BEGIN_PROPERTY_SET_EX
dev_langs: C++
helpviewer_keywords: BEGIN_PROPERTY_SET_EX macro
ms.assetid: c95e7fab-edce-47b8-b282-200e53a2ea8a
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 57e1b6b75404bf2ccef7cff76adc3d23a3609b1a
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="beginpropertysetex"></a>BEGIN_PROPERTY_SET_EX
Mapping dell'insieme di segni di che imposta l'inizio di una proprietà in una proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
BEGIN_PROPERTY_SET_EX(  
guid  
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