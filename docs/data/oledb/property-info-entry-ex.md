---
title: "PROPERTY_INFO_ENTRY_EX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "PROPERTY_INFO_ENTRY_EX"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PROPERTY_INFO_ENTRY_EX (macro)"
ms.assetid: af32dfcd-4c50-449d-af3b-48d21bd67a04
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# PROPERTY_INFO_ENTRY_EX
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta una proprietà specifica in un insieme di proprietà.  
  
## Sintassi  
  
```  
  
PROPERTY_INFO_ENTRY_EX(  
dwPropID  
,  
vt  
,  
dwFlags  
,  
value  
,  
options  
)  
  
```  
  
#### Parametri  
 *dwPropID*  
 \[in\] Un valore [DBPROPID](https://msdn.microsoft.com/en-us/library/ms723882.aspx) che può essere usato unitamente all'insieme di proprietà GUID per identificare una proprietà.  
  
 *vt*  
 \[in\] Il [VARTYPE](http://msdn.microsoft.com/it-it/317b911b-1805-402d-a9cb-159546bc88b4) di questa voce di proprietà.  
  
 `dwFlags`  
 \[in\] Un valore [DBPROPFLAGS](https://msdn.microsoft.com/en-us/library/ms724342.aspx) che descrive la voce di proprietà.  
  
 *valore*  
 \[in\] Il valore della proprietà di tipo `DWORD`.  
  
 `options`  
 **DBPROPOPTIONS\_REQUIRED** o **DBPROPOPTIONS\_SETIFCHEAP**. Di solito un provider non ha bisogno di impostare `options` in quanto è impostato dal consumer.  
  
## Note  
 Con questa macro è possibile specificare direttamente il valore della proprietà di tipo `DWORD` nonché le opzioni e i flag. Per impostare semplicemente una proprietà sul valore predefinito indicato in ATLDB.H, usare [PROPERTY\_INFO\_ENTRY](../../data/oledb/property-info-entry.md). Per impostare una proprietà su un valore a scelta, senza impostare opzioni o flag, usare [PROPERTY\_INFO\_ENTRY\_VALUE](../../data/oledb/property-info-entry-value.md).  
  
## Esempio  
 Vedere [BEGIN\_PROPSET\_MAP](../../data/oledb/begin-propset-map.md).  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Macro per i modelli di provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)