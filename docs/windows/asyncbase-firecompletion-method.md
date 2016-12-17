---
title: "Metodo AsyncBase::FireCompletion | Microsoft Docs"
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
  - "async/Microsoft::WRL::AsyncBase::FireCompletion"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FireCompletion (metodo)"
ms.assetid: b5e29d6d-52e7-4148-a7f3-a313b1359819
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Metodo AsyncBase::FireCompletion
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Richiama il gestore eventi di completamento, o reimposta il delegato interno di stato.  
  
## Sintassi  
  
```  
void FireCompletion(  
   void  
) override;  
  
virtual void FireCompletion();  
```  
  
## Note  
 La prima versione di FireCompletion \(\) reimposta la variabile interna del delegato di stato.  La seconda versione richiamato il gestore eventi di completamento se l'operazione asincrona viene completata.  
  
## Requisiti  
 **Header:** async.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe AsyncBase](../windows/asyncbase-class.md)