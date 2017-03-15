---
title: "CRowset::MovePrev | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRowset<TAccessor>.MovePrev"
  - "CRowset.MovePrev"
  - "MovePrev"
  - "CRowset::MovePrev"
  - "ATL.CRowset.MovePrev"
  - "ATL::CRowset<TAccessor>::MovePrev"
  - "ATL::CRowset::MovePrev"
  - "ATL.CRowset<TAccessor>.MovePrev"
  - "CRowset<TAccessor>::MovePrev"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MovePrev (metodo)"
ms.assetid: 7ced2bfb-f556-40fc-97ea-0d4e7213e114
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CRowset::MovePrev
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Sposta il cursore sul record precedente.  
  
## Sintassi  
  
```  
  
HRESULT MovePrev( ) throw( );  
  
```  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Questo metodo richiede che si **DBPROP\_CANFETCHBACKWARDS** impostato o **DBPROP\_CANSCROLLBACKWARDS** a `VARIANT_TRUE` prima di chiamare **Apri** la tabella o comandi contenente il rowset.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)   
 [CRowset::MoveNext](../../data/oledb/crowset-movenext.md)   
 [CRowset::MoveToBookmark](../../data/oledb/crowset-movetobookmark.md)   
 [CRowset::MoveLast](../../data/oledb/crowset-movelast.md)