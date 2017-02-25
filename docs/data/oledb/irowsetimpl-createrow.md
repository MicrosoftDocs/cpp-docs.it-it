---
title: "IRowsetImpl::CreateRow | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IRowsetImpl.CreateRow"
  - "ATL.IRowsetImpl.CreateRow"
  - "ATL::IRowsetImpl::CreateRow"
  - "CreateRow"
  - "IRowsetImpl::CreateRow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreateRow (metodo)"
ms.assetid: b01c430c-9484-4fef-a6cf-a2e8d9d99130
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 8
---
# IRowsetImpl::CreateRow
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Un metodo di supporto chiamato da [GetNextRows](../../data/oledb/irowsetimpl-getnextrows.md) per allocare nuovo **HROW**.  
  
## Sintassi  
  
```  
  
      HRESULT CreateRow(  
   DBROWOFFSET lRowsOffset,  
   DBCOUNTITEM& cRowsObtained,  
   HROW* rgRows   
);  
```  
  
#### Parametri  
 *lRowsOffset*  
 Posizione del cursore della riga creata.  
  
 *cRowsObtained*  
 Un riferimento passato nuovamente all'utente che indica il numero di righe creato.  
  
 *rgRows*  
 Una matrice di **HROW**s restituita al chiamante con gli handle di riga appena creata.  
  
## Note  
 Se la riga esiste, questo metodo chiama [AddRefRows](../../data/oledb/irowsetimpl-addrefrows.md) e restituisce.  In caso contrario, alloca una nuova istanza della variabile del modello RowClass e aggiunta a [m\_rgRowHandles](../../data/oledb/irowsetimpl-m-rgrowhandles.md).  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe IRowsetImpl](../../data/oledb/irowsetimpl-class.md)