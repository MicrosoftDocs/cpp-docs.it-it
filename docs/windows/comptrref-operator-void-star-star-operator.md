---
title: "Operatore ComPtrRef::operator void** | Microsoft Docs"
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
  - "client/Microsoft::WRL::Details::ComPtrRef::operator void**"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator void** (operatore)"
ms.assetid: f020045c-9de4-4392-8783-73f0fc0761c6
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore ComPtrRef::operator void**
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
operator void**() const;  
```  
  
## Note  
 Elimina l'oggetto corrente di ComPtrRef, esegue il cast del puntatore all'interfaccia che è stata rappresentata dall'oggetto di ComPtrRef come puntatore a puntatore a `void`quindi restituisce il puntatore di cast.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Classe ComPtrRef](../windows/comptrref-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)