---
title: "CBulkRowset::MoveNext | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL.CBulkRowset<TAccessor>.MoveNext"
  - "ATL::CBulkRowset::MoveNext"
  - "CBulkRowset::MoveNext"
  - "ATL.CBulkRowset.MoveNext"
  - "CBulkRowset.MoveNext"
  - "ATL::CBulkRowset<TAccessor>::MoveNext"
  - "CBulkRowset<TAccessor>.MoveNext"
  - "CBulkRowset<TAccessor>::MoveNext"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MoveNext (metodo)"
ms.assetid: 788f3344-cf60-4af1-8f5f-0098c8d1a3f0
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# CBulkRowset::MoveNext
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera la riga successiva di dati.  
  
## Sintassi  
  
```  
  
HRESULT MoveNext( ) throw( );  
  
```  
  
## Valore restituito  
 `HRESULT`standard.  Quando la fine del rowset è stata raggiunta, restituisce **DB\_S\_ENDOFROWSET**.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CBulkRowset](../../data/oledb/cbulkrowset-class.md)