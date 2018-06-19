---
title: PROPERTY_INFO_ENTRY | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
f1_keywords:
- PROPERTY_INFO_ENTRY
dev_langs:
- C++
helpviewer_keywords:
- PROPERTY_INFO_ENTRY macro
ms.assetid: f7bd23d6-52b4-4d6a-aa9a-1fca9834c8dc
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 2603d3257edad6e90357c425a8b5aef60af611dc
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33105192"
---
# <a name="propertyinfoentry"></a>PROPERTY_INFO_ENTRY
Rappresenta una proprietà specifica in un insieme di proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```cpp
PROPERTY_INFO_ENTRY(dwPropID)  
  
```  
  
#### <a name="parameters"></a>Parametri  
 *dwPropID*  
 [in] Un valore [DBPROPID](https://msdn.microsoft.com/en-us/library/ms723882.aspx) che può essere usato unitamente all'insieme di proprietà GUID per identificare una proprietà.  
  
## <a name="remarks"></a>Note  
 La macro imposta il valore della proprietà di tipo `DWORD` su un valore predefinito definito in ATLDB. H. Per impostare la proprietà su un valore di propria scelta, usare [PROPERTY_INFO_ENTRY_VALUE](../../data/oledb/property-info-entry-value.md). Per impostare contemporaneamente il tipo di dati [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4) e [DBPROPFLAGS](https://msdn.microsoft.com/en-us/library/ms724342.aspx) della proprietà, usare [PROPERTY_INFO_ENTRY_EX](../../data/oledb/property-info-entry-ex.md).  
  
## <a name="example"></a>Esempio  
 Vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro per modelli Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)