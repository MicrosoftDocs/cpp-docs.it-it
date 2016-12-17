---
title: "COLUMN_NAME_TYPE_SIZE | Microsoft Docs"
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
  - "COLUMN_NAME_TYPE_SIZE"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "COLUMN_NAME_TYPE_SIZE (macro)"
ms.assetid: b10f8ef9-78ce-4ec9-b4cc-4278271a46dd
caps.latest.revision: 7
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# COLUMN_NAME_TYPE_SIZE
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta un'associazione nel rowset a una determinata colonna nel rowset.  Simile a [E](../../data/oledb/column-name.md), tranne per il fatto che questa macro anche accetta il tipo di dati e la stessa dimensione.  
  
## Sintassi  
  
```  
  
COLUMN_NAME_TYPE_SIZE(  
pszName  
,   
wType  
,   
nLength  
,   
data  
 )  
  
```  
  
#### Parametri  
 `pszName`  
 \[in\] puntatore Al nome della colonna.  Il nome deve essere una stringa Unicode.  È possibile ottenere questo risultato inserendo una "L" davanti al nome, ad esempio: `L"MyColumn"`.  
  
 `wType`  
 \[in\] tipo di dati.  
  
 `nLength`  
 \[in\] dimensione di dati in byte.  
  
 `data`  
 \[in\] il membro dati corrispondente al record utente.  
  
## Note  
 Vedere [E](../../data/oledb/column-name.md) per informazioni sulla posizione in cui le macro di **COLUMN\_NAME\_\*** sono utilizzate.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Macro e funzioni globali per modelli consumer OLE DB](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md)   
 [BEGIN\_ACCESSOR](../../data/oledb/begin-accessor.md)   
 [BEGIN\_ACCESSOR\_MAP](../../data/oledb/begin-accessor-map.md)   
 [BEGIN\_COLUMN\_MAP](../../data/oledb/begin-column-map.md)   
 [COLUMN\_NAME](../../data/oledb/column-name.md)   
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
 [COLUMN\_NAME\_TYPE\_STATUS](../../data/oledb/column-name-type-status.md)