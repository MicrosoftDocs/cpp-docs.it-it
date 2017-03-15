---
title: "Metodo AsyncBase::GetOnComplete | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase::GetOnComplete"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetOnComplete (metodo)"
ms.assetid: f06ae02d-9a88-41d2-b749-bdc1a7ff8748
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo AsyncBase::GetOnComplete
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Copia l'indirizzo del gestore eventi dello stato di completamento corrente alla variabile specificata.  
  
## Sintassi  
  
```  
STDMETHOD(  
   GetOnComplete  
)(TComplete** completeHandler);  
```  
  
#### Parametri  
 `completeHandler`  
 La posizione in cui l'indirizzo del gestore eventi corrente di stato viene archiviato.  
  
## Valore restituito  
 S\_OK se ha avuto esito positivo; in caso contrario, E\_ILLEGAL\_METHOD\_CALL.  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)