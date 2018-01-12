---
title: PROPERTY_INFO_ENTRY | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: PROPERTY_INFO_ENTRY
dev_langs: C++
helpviewer_keywords: PROPERTY_INFO_ENTRY macro
ms.assetid: f7bd23d6-52b4-4d6a-aa9a-1fca9834c8dc
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: 8b5193748f7a4f59abb8806e3d09bf0c77274b89
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="propertyinfoentry"></a>PROPERTY_INFO_ENTRY
Rappresenta una proprietà specifica in un insieme di proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
PROPERTY_INFO_ENTRY(  
dwPropID   
)  
  
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