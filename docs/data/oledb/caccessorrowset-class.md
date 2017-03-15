---
title: "Classe CAccessorRowset | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CAccessorRowset"
  - "ATL.CAccessorRowset"
  - "ATL::CAccessorRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAccessorRowset (classe)"
ms.assetid: bd4f58ed-cebf-4d43-8985-1e5fcbf06953
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Classe CAccessorRowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Incapsula un rowset e le relative funzioni di accesso collegate in una singola classe.  
  
## Sintassi  
  
```  
template <   
   class TAccessor = CNoAccessor,    
   template <typename T> class TRowset = CRowset    
>  
class CAccessorRowset :   
   public TAccessor,    
   public TRowset<TAccessor>  
```  
  
#### Parametri  
 `TAccessor`  
 Una classe di funzione di accesso.  
  
 `TRowset`  
 Una classe di rowset.  
  
## Membri  
  
### Metodi  
  
|||  
|-|-|  
|[Bind](../../data/oledb/caccessorrowset-bind.md)|Crea le associazioni let \(utilizzate quando **bBind** viene specificato come false in [CCommand::Open](../../data/oledb/ccommand-open.md)\).|  
|[CAccessorRowset](../../data/oledb/caccessorrowset-caccessorrowset.md)|Costruttore.|  
|[Chiudi](../../data/oledb/caccessorrowset-close.md)|Chiude il rowset e tutte le funzioni di accesso.|  
|[FreeRecordMemory](../../data/oledb/caccessorrowset-freerecordmemory.md)|Libera tutte le colonne del record corrente che devono essere rilasciati.|  
|[GetColumnInfo](../../data/oledb/caccessorrowset-getcolumninfo.md)|Implementa [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx).|  
  
## Note  
 La classe `TAccessor` gestisce la funzione di accesso.  La classe *TRowset* gestisce il rowset.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [Riferimenti ai modelli consumer OLE DB](../../data/oledb/ole-db-consumer-templates-reference.md)