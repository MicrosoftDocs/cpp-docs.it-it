---
title: "Metodo AsyncBase::Close | Microsoft Docs"
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
  - "async/Microsoft::WRL::AsyncBase::Close"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Close (metodo)"
ms.assetid: a52b1124-754b-4393-b491-64aae0c22f1c
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo AsyncBase::Close
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Chiude l'operazione asincrona.  
  
## Sintassi  
  
```  
STDMETHOD(  
   Close  
)(void) override;  
```  
  
## Valore restituito  
 S\_OK se l'operazione si chiude o già chiusa; in caso contrario, E\_ILLEGAL\_STATE\_CHANGE.  
  
## Note  
 Chiudere \(\) è un'implementazione predefinita di IAsyncInfo::Close e non esegue effettivamente svolta.  Per chiudere effettivamente un'operazione asincrona, eseguire l'override del metodo virtuale pura di OnClose \(\).  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)