---
title: "COLUMN_ENTRY_PS_STATUS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "COLUMN_ENTRY_PS_STATUS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_ENTRY_PS_STATUS (macro)"
ms.assetid: c02140c6-246f-4df5-8b86-698d7d137022
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# COLUMN_ENTRY_PS_STATUS
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un'associazione nel rowset a una determinata colonna nel database.  
  
## Sintassi  
  
```  
  
COLUMN_ENTRY_PS_STATUS(  
nOrdinal  
,   
nPrecision  
,   
nScale  
,   
data  
,   
status  
 )  
  
```  
  
#### Parametri  
 Vedere [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx)*in OLE DB Programmer's Reference*.  
  
 `nOrdinal`  
 \[in\] numero di colonne.  
  
 `nPrecision`  
 \[in\] la precisione massima della colonna che si desidera associare.  
  
 `nScale`  
 \[in\] la scala di una colonna che si desidera associare.  
  
 `data`  
 \[in\] il membro dati corrispondente al record utente.  
  
 *status*  
 \[in\] la variabile da associare allo stato della colonna.  
  
## Note  
 Consente di specificare la precisione e la scala di una colonna si desidera associare.  Questa macro supporta la variabile dello *stato*.  Viene utilizzata nelle posizioni seguenti:  
  
-   Tra [BEGIN\_COLUMN\_MAP](../../data/oledb/begin-column-map.md) e macro di [END\_COLUMN\_MAP](../../data/oledb/end-column-map.md).  
  
-   Tra [BEGIN\_ACCESSOR](../../data/oledb/begin-accessor.md) e macro di [END\_ACCESSOR](../../data/oledb/end-accessor.md).  
  
-   Tra [BEGIN\_PARAM\_MAP](../../data/oledb/begin-param-map.md) e macro di [END\_PARAM\_MAP](../../data/oledb/end-param-map.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN\_ACCESSOR](../../data/oledb/begin-accessor.md)   
 [BEGIN\_ACCESSOR\_MAP](../../data/oledb/begin-accessor-map.md)   
 [BEGIN\_COLUMN\_MAP](../../data/oledb/begin-column-map.md)   
 [COLUMN\_ENTRY](../../data/oledb/column-entry.md)   
 [COLUMN\_ENTRY\_EX](../../data/oledb/column-entry-ex.md)   
 [COLUMN\_ENTRY\_LENGTH](../../data/oledb/column-entry-length.md)   
 [COLUMN\_ENTRY\_PS](../../data/oledb/column-entry-ps.md)   
 [COLUMN\_ENTRY\_PS\_LENGTH](../../data/oledb/column-entry-ps-length.md)   
 [COLUMN\_ENTRY\_LENGTH\_STATUS](../../data/oledb/column-entry-length-status.md)   
 [COLUMN\_ENTRY\_PS\_LENGTH\_STATUS](../../data/oledb/column-entry-ps-length-status.md)   
 [COLUMN\_ENTRY\_STATUS](../../data/oledb/column-entry-status.md)   
 [END\_ACCESSOR](../../data/oledb/end-accessor.md)   
 [END\_ACCESSOR\_MAP](../../data/oledb/end-accessor-map.md)   
 [END\_COLUMN\_MAP](../../data/oledb/end-column-map.md)