---
title: "CRowset::MoveLast | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CRowset<TAccessor>::MoveLast"
  - "CRowset<TAccessor>::MoveLast"
  - "ATL.CRowset.MoveLast"
  - "ATL::CRowset::MoveLast"
  - "CRowset<TAccessor>.MoveLast"
  - "MoveLast"
  - "CRowset::MoveLast"
  - "ATL.CRowset<TAccessor>.MoveLast"
  - "CRowset.MoveLast"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MoveLast (metodo)"
ms.assetid: 81063578-ae9d-467b-8c88-81d8fc66e020
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CRowset::MoveLast
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Sposta il cursore all'ultima riga.  
  
## Sintassi  
  
```  
  
HRESULT MoveLast( ) throw( );  
  
```  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Chiama [IRowset::RestartPosition](https://msdn.microsoft.com/en-us/library/ms712877.aspx) per riposizionare la posizione di NeXT\- raccolta nell'ultima posizione e recupera l'ultima riga.  
  
 Questo metodo richiede che si **DBPROP\_CANSCROLLBACKWARDS** impostato su `VARIANT_TRUE` prima di chiamare **Apri** la tabella o il comando che contiene il rowset. \(Per ottenere prestazioni migliori, è anche possibile impostare **DBPROP\_QUICKRESTART** a `VARIANT_TRUE`\).  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)   
 [CRowset::MoveNext](../../data/oledb/crowset-movenext.md)   
 [IRowset::RestartPosition](https://msdn.microsoft.com/en-us/library/ms712877.aspx)   
 [CRowset::MovePrev](../../data/oledb/crowset-moveprev.md)