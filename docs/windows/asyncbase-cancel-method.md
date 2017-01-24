---
title: "Metodo AsyncBase::Cancel | Microsoft Docs"
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
  - "async/Microsoft::WRL::AsyncBase::Cancel"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Cancel (metodo)"
ms.assetid: 8bfebc63-3848-4629-bc89-aa538ed7e7ad
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo AsyncBase::Cancel
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Annulla un'operazione asincrona.  
  
## Sintassi  
  
```  
STDMETHOD(  
   Cancel  
)(void);  
```  
  
## Valore restituito  
 Per impostazione predefinita, restituisce sempre S\_OK.  
  
## Note  
 Annulla\(\) è un'implementazione predefinita di IAsyncInfo::Annulla e non esegue effettivamente nessun lavoro.  Per annullare effettivamente un'operazione asincrona, eseguire l'override del metodo virtuale pura di OnCancel\(\).  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)