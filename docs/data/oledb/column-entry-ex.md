---
title: "COLUMN_ENTRY_EX | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "COLUMN_ENTRY_EX"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_ENTRY_EX (macro)"
ms.assetid: dfad1b67-51c3-4289-b89a-da42d7e8bb88
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# COLUMN_ENTRY_EX
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un'associazione nel rowset a una determinata colonna nel database.  
  
## Sintassi  
  
```  
  
COLUMN_ENTRY_EX(  
nOrdinal  
,   
wType  
,   
nLength  
,   
nPrecision  
,   
nScale  
,   
data  
,   
length  
,   
status  
 )  
  
```  
  
#### Parametri  
 Vedere [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx)*in OLE DB Programmer's Reference*.  
  
 `nOrdinal`  
 \[in\] numero di colonne.  
  
 `wType`  
 \[in\] tipo di dati.  
  
 `nLength`  
 \[in\] dimensione di dati in byte.  
  
 `nPrecision`  
 \[in\] la massima precisione da utilizzare per ottenere i dati e `wType` è `DBTYPE_NUMERIC`.  In caso contrario, questo parametro viene ignorato.  
  
 `nScale`  
 \[in\] la scala da utilizzare per ottenere i dati e `wType` è `DBTYPE_NUMERIC` o **DBTYPE\_DECIMAL**.  
  
 `data`  
 \[in\] il membro dati corrispondente al record utente.  
  
 *length*  
 \[in\] la variabile da associare alla lunghezza della colonna.  
  
 *status*  
 \[in\] la variabile da associare allo stato della colonna.  
  
## Note  
 La macro di `COLUMN_ENTRY_EX` viene utilizzata nelle posizioni seguenti:  
  
-   Tra [BEGIN\_COLUMN\_MAP](../../data/oledb/begin-column-map.md) e macro di [END\_COLUMN\_MAP](../../data/oledb/end-column-map.md).  
  
-   Tra [BEGIN\_ACCESSOR](../../data/oledb/begin-accessor.md) e macro di [END\_ACCESSOR](../../data/oledb/end-accessor.md).  
  
-   Tra [BEGIN\_PARAM\_MAP](../../data/oledb/begin-param-map.md) e macro di [END\_PARAM\_MAP](../../data/oledb/end-param-map.md).  
  
## Esempio  
 Vedere [BOOKMARK\_ENTRY](../../data/oledb/bookmark-entry.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN\_ACCESSOR](../../data/oledb/begin-accessor.md)   
 [BEGIN\_ACCESSOR\_MAP](../../data/oledb/begin-accessor-map.md)   
 [BEGIN\_COLUMN\_MAP](../../data/oledb/begin-column-map.md)   
 [COLUMN\_ENTRY](../../data/oledb/column-entry.md)   
 [COLUMN\_ENTRY\_PS](../../data/oledb/column-entry-ps.md)   
 [COLUMN\_ENTRY\_PS\_LENGTH](../../data/oledb/column-entry-ps-length.md)   
 [COLUMN\_ENTRY\_LENGTH](../../data/oledb/column-entry-length.md)   
 [COLUMN\_ENTRY\_LENGTH\_STATUS](../../data/oledb/column-entry-length-status.md)   
 [COLUMN\_ENTRY\_PS\_LENGTH\_STATUS](../../data/oledb/column-entry-ps-length-status.md)   
 [COLUMN\_ENTRY\_STATUS](../../data/oledb/column-entry-status.md)   
 [COLUMN\_ENTRY\_PS\_STATUS](../../data/oledb/column-entry-ps-status.md)   
 [END\_ACCESSOR](../../data/oledb/end-accessor.md)   
 [END\_ACCESSOR\_MAP](../../data/oledb/end-accessor-map.md)   
 [END\_COLUMN\_MAP](../../data/oledb/end-column-map.md)