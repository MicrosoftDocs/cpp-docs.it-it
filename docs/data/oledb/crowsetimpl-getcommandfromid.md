---
title: "CRowsetImpl::GetCommandFromID | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRowsetImpl::GetCommandFromID"
  - "GetCommandFromID"
  - "CRowsetImpl.GetCommandFromID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetCommandFromID (metodo)"
ms.assetid: 9f39cb07-1c40-486f-ba5b-cb4a65fab8a7
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CRowsetImpl::GetCommandFromID
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Verifica se una o entrambi i parametri contengono valori stringa e in caso affermativo, copie valori stringa ai membri dati [m\_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m\_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md).  
  
## Sintassi  
  
```  
  
      HRESULT CRowsetBaseImpl::GetCommandFromID(  
   DBID* pTableID,  
   DBID* pIndexID   
);  
```  
  
#### Parametri  
 `pTableID`  
 \[in\] puntatore A **DBID** che rappresenta l'id della Tabella  
  
 `pIndexID`  
 \[in\] puntatore A **DBID** che rappresenta l'indice ID.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Questo metodo viene chiamato da un upcast statico da `CRowsetImpl` per popolare i membri dati [m\_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m\_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md).  Per impostazione predefinita, questo metodo verifica per vedere se o entrambi i parametri contengono valori stringa.  Se contengono valori stringa, copie di questo metodo valori stringa ai membri dati.  Inserendo un metodo con la firma del `CRowsetImpl`\- classe derivata, il metodo verrà chiamato al posto dell'implementazione di base.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe CRowsetImpl](../../data/oledb/crowsetimpl-class.md)   
 [CRowsetImpl::SetCommandText](../../data/oledb/crowsetimpl-setcommandtext.md)