---
title: "CRowset::ReleaseRows | Microsoft Docs"
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
  - "ReleaseRows"
  - "CRowset::ReleaseRows"
  - "ATL::CRowset<TAccessor>::ReleaseRows"
  - "CRowset<TAccessor>.ReleaseRows"
  - "CRowset.ReleaseRows"
  - "ATL.CRowset.ReleaseRows"
  - "ATL.CRowset<TAccessor>.ReleaseRows"
  - "CRowset<TAccessor>::ReleaseRows"
  - "ATL::CRowset::ReleaseRows"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseRows (metodo)"
ms.assetid: fa7254f5-566f-4754-bdf7-d0874256926f
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowset::ReleaseRows
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Chiama [IRowset::ReleaseRows](https://msdn.microsoft.com/en-us/library/ms719771.aspx) per rilasciare l'handle di riga corrente.  
  
## Sintassi  
  
```  
  
HRESULT ReleaseRows( ) throw( );  
  
```  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)