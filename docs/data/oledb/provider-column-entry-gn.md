---
title: "PROVIDER_COLUMN_ENTRY_GN | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "PROVIDER_COLUMN_ENTRY_GN"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "PROVIDER_COLUMN_ENTRY_GN (macro)"
ms.assetid: be77ba85-634c-4e28-832f-d2fa40413254
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# PROVIDER_COLUMN_ENTRY_GN
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta una determinata colonna supportati dal provider.  
  
## Sintassi  
  
```  
  
PROVIDER_COLUMN_ENTRY_GN (  
name  
, ordinal, flags, colSize, dbtype, precision, scale, guid )  
```  
  
#### Parametri  
 *name*  
 \[in\] nome della colonna.  
  
 `ordinal`  
 \[in\] numero di colonne.  A meno che la colonna sia una colonna bookmark, il numero di colonne non deve essere 0.  
  
 `flags`  
 \[in\] specifica quale i dati vengono restituiti.  Vedere la descrizione di `dwFlags` in [Di strutture DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx).  
  
 *colSize*  
 \[in\] dimensione della colonna.  
  
 `dbtype`  
 \[in\] indica il tipo di dati del valore.  Vedere la descrizione di **wType** in [Di strutture DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx).  
  
 *precision*  
 \[in\] indica la precisione da utilizzare per ottenere i dati se *il dbType* è `DBTYPE_NUMERIC` o **DBTYPE\_DECIMAL**.  Vedere la descrizione di **bPrecision** in [Di strutture DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx).  
  
 `scale`  
 \[in\] indica la scala da utilizzare per ottenere i dati se il dbType è `DBTYPE_NUMERIC` o **DBTYPE\_DECIMAL**.  Vedere la descrizione di **bScale** in [Di strutture DBBINDING](https://msdn.microsoft.com/en-us/library/ms716845.aspx).  
  
 `guid`  
 Un GUID rowset dello schema.  Vedere [IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx)*in OLE DB Programmer's Reference* per un elenco dei rowset dello schema e dei relativi GUID.  
  
## Note  
 Consente di specificare la dimensione della colonna, il tipo di dati, la precisione, la scala e il GUID rowset dello schema.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Macro per i modelli di provider OLE DB](../../data/oledb/macros-for-ole-db-provider-templates.md)   
 [Modelli provider OLE DB](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [Architettura dei modelli di provider OLE DB](../../data/oledb/ole-db-provider-template-architecture.md)   
 [Creazione di un provider OLE DB](../../data/oledb/creating-an-ole-db-provider.md)