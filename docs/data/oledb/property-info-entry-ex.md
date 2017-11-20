---
title: PROPERTY_INFO_ENTRY_EX | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords: PROPERTY_INFO_ENTRY_EX
dev_langs: C++
helpviewer_keywords: PROPERTY_INFO_ENTRY_EX macro
ms.assetid: af32dfcd-4c50-449d-af3b-48d21bd67a04
caps.latest.revision: "8"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 61842dc963ae442d23f802c1fd64c037f4a882e7
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="propertyinfoentryex"></a>PROPERTY_INFO_ENTRY_EX
Rappresenta una proprietà specifica in un insieme di proprietà.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
PROPERTY_INFO_ENTRY_EX(  
dwPropID  
, vt, dwFlags, value, options )  
```  
  
#### <a name="parameters"></a>Parametri  
 *dwPropID*  
 [in] Un valore [DBPROPID](https://msdn.microsoft.com/en-us/library/ms723882.aspx) che può essere usato unitamente all'insieme di proprietà GUID per identificare una proprietà.  
  
 *vt*  
 [in] Il [VARTYPE](http://msdn.microsoft.com/en-us/317b911b-1805-402d-a9cb-159546bc88b4) di questa voce di proprietà.  
  
 `dwFlags`  
 [in] Un valore [DBPROPFLAGS](https://msdn.microsoft.com/en-us/library/ms724342.aspx) che descrive la voce di proprietà.  
  
 *valore*  
 [in] Il valore della proprietà di tipo `DWORD`.  
  
 `options`  
 **DBPROPOPTIONS_REQUIRED** o **DBPROPOPTIONS_SETIFCHEAP**. Di solito un provider non ha bisogno di impostare `options` in quanto è impostato dal consumer.  
  
## <a name="remarks"></a>Note  
 Con questa macro è possibile specificare direttamente il valore della proprietà di tipo `DWORD` nonché le opzioni e i flag. Per impostare semplicemente una proprietà sul valore predefinito indicato in ATLDB.H, usare [PROPERTY_INFO_ENTRY](../../data/oledb/property-info-entry.md). Per impostare una proprietà su un valore a scelta, senza impostare opzioni o flag, usare [PROPERTY_INFO_ENTRY_VALUE](../../data/oledb/property-info-entry-value.md).  
  
## <a name="example"></a>Esempio  
 Vedere [BEGIN_PROPSET_MAP](../../data/oledb/begin-propset-map.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** atldb.h  
  
## <a name="see-also"></a>Vedere anche  
 [Macro per modelli Provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli Provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli Provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)