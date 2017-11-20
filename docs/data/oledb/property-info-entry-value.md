---
title: PROPERTY_INFO_ENTRY_VALUE | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: PROPERTY_INFO_ENTRY_VALUE
dev_langs: C++
helpviewer_keywords: PROPERTY_INFO_ENTRY_VALUE macro
ms.assetid: 9690f7f3-fb20-4a7e-a75f-8a3a1cb1ce0d
caps.latest.revision: "7"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 25eb1627f4024fd18dbf0d22114c2e762ab8b897
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="propertyinfoentryvalue"></a>PROPERTY_INFO_ENTRY_VALUE
Rappresenta una proprietà specifica in un insieme di proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
PROPERTY_INFO_ENTRY_VALUE(  
dwPropID  
, value )  
```  
  
#### <a name="parameters"></a>Parametri  
 *dwPropID*  
 [in] Un valore [DBPROPID](https://msdn.microsoft.com/en-us/library/ms723882.aspx) che può essere usato unitamente all'insieme di proprietà GUID per identificare una proprietà.  
  
 *value*  
 [in] Il valore della proprietà di tipo `DWORD`.  
  
## <a name="remarks"></a>Note  
 Con questa macro, è possibile specificare direttamente il valore della proprietà di tipo `DWORD`. Per impostare la proprietà valore predefinito definito in ATLDB. H, usare [PROPERTY_INFO_ENTRY](../../data/oledb/property-info-entry.md). Per impostare il valore, flag e le opzioni per la proprietà, utilizzare [PROPERTY_INFO_ENTRY_EX](../../data/oledb/property-info-entry-ex.md).  
  
## <a name="example"></a>Esempio  
 Vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro per modelli Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)