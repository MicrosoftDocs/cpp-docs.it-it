---
title: "CRowsetImpl::ValidateCommandID | Microsoft Docs"
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
  - "CRowsetImpl.ValidateCommandID"
  - "CRowsetImpl::ValidateCommandID"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ValidateCommandID (metodo)"
ms.assetid: cdde6088-41bc-4b8f-a32b-f36f7d9b5ec0
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowsetImpl::ValidateCommandID
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

I verifica se una o entrambe il **DBID**s contiene valori stringa e in caso affermativo, quindi copiati ai relativi membri dati [m\_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m\_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md).  
  
## Sintassi  
  
```  
  
      HRESULT CRowsetBaseImpl::ValidateCommandID(  
   DBID* pTableID,  
   DBID* pIndexID   
);  
```  
  
#### Parametri  
 `pTableID`  
 \[in\] puntatore A **DBID** che rappresenta l'id della tabella  
  
 `pIndexID`  
 \[in\] puntatore A **DBID** che rappresenta l'indice ID.  
  
## Valore restituito  
 `HRESULT`standard.  
  
## Note  
 Questo metodo viene chiamato da un upcast statico da `CRowsetImpl` per popolare i relativi membri dati [m\_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md) e [m\_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md).  Per impostazione predefinita, i controlli di questo metodo verifica se una o entrambe il **DBID**s contiene valori stringa e in caso affermativo, quindi copiati ai relativi membri dati.  Inserendo un metodo con la firma del `CRowsetImpl`\- classe derivata, il metodo verrà chiamato al posto dell'implementazione di base.  
  
## Requisiti  
 **Intestazione:** atldb.h  
  
## Vedere anche  
 [Classe CRowsetImpl](../../data/oledb/crowsetimpl-class.md)   
 [CRowsetImpl::SetCommandText](../../data/oledb/crowsetimpl-setcommandtext.md)