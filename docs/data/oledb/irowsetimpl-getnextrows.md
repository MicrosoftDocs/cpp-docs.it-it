---
title: "IRowsetImpl::GetNextRows | Microsoft Docs"
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
  - "GetNextRows"
  - "ATL.IRowsetImpl.GetNextRows"
  - "ATL::IRowsetImpl::GetNextRows"
  - "IRowsetImpl::GetNextRows"
  - "IRowsetImpl.GetNextRows"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetNextRows (metodo)"
ms.assetid: 1c0975d6-d770-4884-830b-6986c6fa8e65
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetImpl::GetNextRows
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Recupera le righe in sequenza, memorizzando la posizione precedente.  
  
## Sintassi  
  
```  
  
      STDMETHOD( GetNextRows )(  
   HCHAPTER hReserved,  
   DBROWOFFSET lRowsOffset,  
   DBROWCOUNT cRows,  
   DBCOUNTITEM* pcRowsObtained,  
   HROW** prghRows   
);  
```  
  
#### Parametri  
 Vedere [IRowset::GetNextRows](https://msdn.microsoft.com/en-us/library/ms709827.aspx) in *OLE DB Programmer's Reference*.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)   
 [IRowsetImpl::AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md)   
 [IRowsetImpl::ReleaseRows](../../data/oledb/irowsetimpl-releaserows.md)