---
title: "IRowsetImpl::GetDBStatus | Microsoft Docs"
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
  - "GetDBStatus"
  - "IRowsetImpl.GetDBStatus"
  - "IRowsetImpl::GetDBStatus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetDBStatus (metodo)"
ms.assetid: e51d8ee2-fc0c-4909-861c-026c94fb0dfc
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetImpl::GetDBStatus
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Restituisce i contrassegni di stato di `DBSTATUS` per il campo specificato.  
  
## Sintassi  
  
```  
  
      virtual DBSTATUS GetDBStatus(  
   RowClass* currentRow,  
   ATLCOLUMNINFO* columnNames   
);  
```  
  
#### Parametri  
 \[in\] `currentRow`  
 La riga corrente.  
  
 \[in\] `columnNames`  
 Lo stato della colonna per il quale viene richiesta.  
  
## Valore restituito  
 Flag di [DBSTATUS](https://msdn.microsoft.com/en-us/library/ms722617.aspx) per la colonna.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)