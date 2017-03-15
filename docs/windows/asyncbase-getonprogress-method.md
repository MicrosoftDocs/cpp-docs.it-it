---
title: "Metodo AsyncBase::GetOnProgress | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase::GetOnProgress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetOnProgress (metodo)"
ms.assetid: 286ddc9c-3e30-41a2-8e8b-e53d3fb0649d
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 3
---
# Metodo AsyncBase::GetOnProgress
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Copia l'indirizzo del gestore eventi dello stato di avanzamento corrente alla variabile specificata.  
  
## Sintassi  
  
```  
STDMETHOD(  
   GetOnProgress  
)(TProgress** progressHandler);  
```  
  
#### Parametri  
 `progressHandler`  
 La posizione in cui l'indirizzo del gestore eventi corrente di stato viene archiviato.  
  
## Valore restituito  
 S\_OK se ha avuto esito positivo; in caso contrario, E\_ILLEGAL\_METHOD\_CALL.  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)