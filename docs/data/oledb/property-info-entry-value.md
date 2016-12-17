---
title: "PROPERTY_INFO_ENTRY_VALUE | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "PROPERTY_INFO_ENTRY_VALUE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PROPERTY_INFO_ENTRY_VALUE (macro)"
ms.assetid: 9690f7f3-fb20-4a7e-a75f-8a3a1cb1ce0d
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# PROPERTY_INFO_ENTRY_VALUE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta una proprietà specifica in un insieme di proprietà.  
  
## Sintassi  
  
```  
  
PROPERTY_INFO_ENTRY_VALUE(  
dwPropID  
, value )  
```  
  
#### Parametri  
 *dwPropID*  
 \[in\] valore A [DBPROPID](https://msdn.microsoft.com/en-us/library/ms723882.aspx) che può essere utilizzato con la proprietà GUID per identificare una proprietà.  
  
 *corrispondente*  
 \[in\] il valore di una proprietà di tipo `DWORD`.  
  
## Note  
 Con questa macro, è possibile specificare direttamente il valore di una proprietà di tipo `DWORD`.  Per impostare la proprietà sul valore predefinito definito in ATLDB.H, utilizzare [PROPERTY\_INFORMATION\_ENTRY](../../data/oledb/property-info-entry.md).  Per impostare il valore, i flag e le opzioni per la proprietà, utilizzare [PROPERTY\_INFORMATION\_ENTRY\_EX](../../data/oledb/property-info-entry-ex.md).  
  
## Esempio  
 Vedere [BEGIN\_PROPSET\_MAP](../../data/oledb/begin-propset-map.md).  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Macro per i modelli di provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)