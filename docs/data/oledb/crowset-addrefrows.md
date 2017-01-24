---
title: "CRowset::AddRefRows | Microsoft Docs"
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
  - "CRowset<TAccessor>.AddRefRows"
  - "CRowset.AddRefRows"
  - "ATL.CRowset.AddRefRows"
  - "AddRefRows"
  - "CRowset::AddRefRows"
  - "CRowset<TAccessor>::AddRefRows"
  - "ATL::CRowset::AddRefRows"
  - "ATL.CRowset<TAccessor>.AddRefRows"
  - "ATL::CRowset<TAccessor>::AddRefRows"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "AddRefRows (metodo)"
ms.assetid: 590b5a24-870f-4c42-b0c8-28491f368a82
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowset::AddRefRows
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiama [IRowset::AddRefRows](https://msdn.microsoft.com/en-us/library/ms719619.aspx) per incrementare \(uno\) dal conteggio dei riferimenti associato a un handle di riga corrente.  
  
## Sintassi  
  
```  
  
HRESULT AddRefRows( ) throw( );  
  
```  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Questo metodo incrementa il conteggio dei riferimenti per un handle di riga corrente.  Chiamata [ReleaseRows](../../data/oledb/crowset-releaserows.md) per diminuire il conteggio.  Le righe restituite con i metodi di spostamento hanno un conteggio dei riferimenti di uno.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)   
 [CRowset::ReleaseRows](../../data/oledb/crowset-releaserows.md)