---
title: "COLUMN_ENTRY_LENGTH | Microsoft Docs"
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
  - "COLUMN_ENTRY_LENGTH"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_ENTRY_LENGTH (macro)"
ms.assetid: 1758babf-204c-4d1d-b82a-f9a607072e9a
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COLUMN_ENTRY_LENGTH
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un'associazione sul rowset alla colonna specifica nel database.  
  
## Sintassi  
  
```  
  
COLUMN_ENTRY_LENGTH(  
nOrdinal  
,   
data  
,   
length  
 )  
  
```  
  
#### Parametri  
 Vedere [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) nel *riferimento di programmatore OLE DB*.  
  
 `nOrdinal`  
 \[in\] numero di colonne, a partire da uno.  Il segnalibro corrisponde alla colonna zero.  
  
 `data`  
 \[in\] Membro dati corrispondente nel record utente.  
  
 *length*  
 \[in\] La variabile da associare alla lunghezza della colonna.  
  
## Note  
 Questa macro supporta la variabile *length*.  Viene utilizzata nei seguenti posti:  
  
-   Tra le macro [BEGIN\_COLUMN\_MAP](../../data/oledb/begin-column-map.md) e [END\_COLUMN\_MAP](../../data/oledb/end-column-map.md).  
  
-   Tra le macro [BEGIN\_ACCESSOR](../../data/oledb/begin-accessor.md) e [END\_ACCESSOR](../../data/oledb/end-accessor.md).  
  
-   Tra le macro [BEGIN\_PARAM\_MAP](../../data/oledb/begin-param-map.md) e [END\_PARAM\_MAP](../../data/oledb/end-param-map.md).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN\_ACCESSOR](../../data/oledb/begin-accessor.md)   
 [BEGIN\_ACCESSOR\_MAP](../../data/oledb/begin-accessor-map.md)   
 [BEGIN\_COLUMN\_MAP](../../data/oledb/begin-column-map.md)   
 [COLUMN\_ENTRY](../../data/oledb/column-entry.md)   
 [COLUMN\_ENTRY\_EX](../../data/oledb/column-entry-ex.md)   
 [COLUMN\_ENTRY\_PS](../../data/oledb/column-entry-ps.md)   
 [COLUMN\_ENTRY\_PS\_LENGTH](../../data/oledb/column-entry-ps-length.md)   
 [COLUMN\_ENTRY\_LENGTH\_STATUS](../../data/oledb/column-entry-length-status.md)   
 [COLUMN\_ENTRY\_PS\_LENGTH\_STATUS](../../data/oledb/column-entry-ps-length-status.md)   
 [COLUMN\_ENTRY\_STATUS](../../data/oledb/column-entry-status.md)   
 [COLUMN\_ENTRY\_PS\_STATUS](../../data/oledb/column-entry-ps-status.md)   
 [END\_ACCESSOR](../../data/oledb/end-accessor.md)   
 [END\_ACCESSOR\_MAP](../../data/oledb/end-accessor-map.md)   
 [END\_COLUMN\_MAP](../../data/oledb/end-column-map.md)