---
title: "Metodo AsyncBase::Start | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "async/Microsoft::WRL::AsyncBase::Start"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Start (metodo)"
ms.assetid: 67405c9d-0d1a-4c1e-8ea4-6ba01c1f90d9
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo AsyncBase::Start
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Icomincia l'operazione asincrona.  
  
## Sintassi  
  
```  
STDMETHOD(  
   Start  
)(void);  
```  
  
## Valore restituito  
 S\_OK se l'operazione si avvia o è già avviata; in caso contrario, E\_ILLEGAL\_STATE\_CHANGE.  
  
## Note  
 Avvia\(\) è un'implementazione predefinita di IAsyncInfo::Start e non esegue lavoro.  Per avviare effettivamente un'operazione asincrona, eseguire l'override del metodo virtuale pura di OnAvvia\(\).  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)