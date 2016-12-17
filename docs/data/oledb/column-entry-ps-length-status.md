---
title: "COLUMN_ENTRY_PS_LENGTH_STATUS | Microsoft Docs"
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
  - "COLUMN_ENTRY_PS_LENGTH_STATUS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_ENTRY_PS_LENGTH_STATUS (macro)"
ms.assetid: 04291671-329d-4974-b04e-36ef3f037787
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COLUMN_ENTRY_PS_LENGTH_STATUS
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un'associazione sul rowset alla colonna specifica nel database.  
  
## Sintassi  
  
```  
  
COLUMN_ENTRY_PS_LENGTH_STATUS(  
nOrdinal  
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
 Vedere [DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx) nel *riferimento di programmatore OLE DB*.  
  
 `nOrdinal`  
 \[in\] Numero della colonna.  
  
 `nPrecision`  
 \[in\] La precisione massima della colonna che si desidera associare.  
  
 `nScale`  
 \[in\] La scala della colonna che si desidera associare.  
  
 `data`  
 \[in\] Membro dati corrispondente nel record utente.  
  
 *length*  
 \[in\] La variabile da associare alla lunghezza della colonna.  
  
 *status*  
 \[in\] La variabile da associare allo stato della colonna.  
  
## Note  
 Consente di specificare la precisione e la scala della colonna che si desidera associare.  Utilizzare questa macro quando si desidera supportare le variabili di stato e di lunghezza.  Viene utilizzata nei seguenti posti:  
  
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
 [COLUMN\_ENTRY\_LENGTH](../../data/oledb/column-entry-length.md)   
 [COLUMN\_ENTRY\_PS](../../data/oledb/column-entry-ps.md)   
 [COLUMN\_ENTRY\_PS\_LENGTH](../../data/oledb/column-entry-ps-length.md)   
 [COLUMN\_ENTRY\_LENGTH\_STATUS](../../data/oledb/column-entry-length-status.md)   
 [COLUMN\_ENTRY\_STATUS](../../data/oledb/column-entry-status.md)   
 [COLUMN\_ENTRY\_PS\_STATUS](../../data/oledb/column-entry-ps-status.md)   
 [END\_ACCESSOR](../../data/oledb/end-accessor.md)   
 [END\_ACCESSOR\_MAP](../../data/oledb/end-accessor-map.md)   
 [END\_COLUMN\_MAP](../../data/oledb/end-column-map.md)