---
title: "CRowset::CRowset | Microsoft Docs"
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
  - "CRowset<TAccessor>::CRowset"
  - "CRowset.CRowset"
  - "ATL::CRowset::CRowset"
  - "ATL::CRowset<TAccessor>::CRowset"
  - "ATL.CRowset.CRowset"
  - "CRowset"
  - "CRowset<TAccessor>.CRowset"
  - "CRowset::CRowset"
  - "ATL.CRowset<TAccessor>.CRowset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CRowset (classe), costruttore"
ms.assetid: 1c6f72e2-f4f4-48dc-957e-038ae8914ba7
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowset::CRowset
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Crea un nuovo oggetto `CRowset` ed \(eventualmente\) lo associa ad un'interfaccia [IRowset](https://msdn.microsoft.com/en-us/library/ms720986.aspx) fornita come parametro.  
  
## Sintassi  
  
```  
  
      CRowset( );   
CRowset(  
   IRowset* pRowset   
);  
```  
  
#### Parametri  
 `pRowset`  
 \[in\] Un puntatore A ad un'interfaccia `IRowset` da associare a questa classe.  
  
## Requisiti  
 **Intestazione:** atldbcli.h  
  
## Vedere anche  
 [Classe CRowset](../../data/oledb/crowset-class.md)