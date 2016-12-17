---
title: "COLUMN_NAME | Microsoft Docs"
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
  - "COLUMN_NAME"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_NAME (macro)"
ms.assetid: a213b9a0-2148-4a08-9111-d9fa8fdec462
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COLUMN_NAME
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un'associazione nel rowset a una determinata colonna nel rowset.  Simile a [COLUMN\_ENTRY](../../data/oledb/column-entry.md), tranne per il fatto che questa macro accetta il nome della colonna anziché il numero di colonne.  
  
## Sintassi  
  
```  
  
COLUMN_NAME(  
pszName  
,   
data  
 )  
  
```  
  
#### Parametri  
 `pszName`  
 \[in\] puntatore Al nome della colonna.  Il nome deve essere una stringa Unicode.  È possibile ottenere questo risultato inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.  
  
 `data`  
 \[in\] il membro dati corrispondente al record utente.  
  
## Note  
 Le macro di **COLUMN\_NAME\_\*** vengono utilizzate negli stessi percorsi come [COLUMN\_ENTRY](../../data/oledb/column-entry.md):  
  
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
 [COLUMN\_NAME\_EX](../../data/oledb/column-name-ex.md)   
 [COLUMN\_NAME\_LENGTH](../../data/oledb/column-name-length.md)   
 [COLUMN\_NAME\_LENGTH\_STATUS](../../data/oledb/column-name-length-status.md)   
 [COLUMN\_NAME\_STATUS](../../data/oledb/column-name-status.md)   
 [COLUMN\_NAME\_PS](../../data/oledb/column-name-ps.md)   
 [COLUMN\_NAME\_PS\_LENGTH](../../data/oledb/column-name-ps-length.md)   
 [COLUMN\_NAME\_PS\_STATUS](../../data/oledb/column-name-ps-status.md)   
 [COLUMN\_NAME\_PS\_LENGTH\_STATUS](../../data/oledb/column-name-ps-length-status.md)   
 [COLUMN\_NAME\_TYPE](../../data/oledb/column-name-type.md)   
 [COLUMN\_NAME\_TYPE\_PS](../../data/oledb/column-name-type-ps.md)   
 [COLUMN\_NAME\_TYPE\_SIZE](../../data/oledb/column-name-type-size.md)   
 [COLUMN\_NAME\_TYPE\_STATUS](../../data/oledb/column-name-type-status.md)