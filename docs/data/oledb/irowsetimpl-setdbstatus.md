---
title: "IRowsetImpl::SetDBStatus | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IRowsetImpl.SetDBStatus"
  - "IRowsetImpl::SetDBStatus"
  - "SetDBStatus"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "SetDBStatus (metodo)"
ms.assetid: b73f526a-4fc6-4adb-9611-c3cca2cddb23
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# IRowsetImpl::SetDBStatus
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Imposta flag di stato di `DBSTATUS` per il campo specificato.  
  
## Sintassi  
  
```  
  
      virtual HRESULT SetDBStatus(  
   DBSTATUS* statusFlags,  
   RowClass* currentRow,  
   ATLCOLUMNINFO* columnInfo   
);  
```  
  
#### Parametri  
 `statusFlags`  
 Flag di [DBSTATUS](https://msdn.microsoft.com/en-us/library/ms722617.aspx) da impostare per la colonna.  
  
 `currentRow`  
 La riga corrente.  
  
 *columnInfo*  
 Lo stato della colonna per il quale viene impostato.  
  
## Valore restituito  
 Un valore standard di `HRESULT`.  
  
## Note  
 Il provider l'override della funzione per fornire l'elaborazione speciale per **DBSTATUS\_S\_ISNULL** e **DBSTATUS\_S\_DEFAULT**.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)