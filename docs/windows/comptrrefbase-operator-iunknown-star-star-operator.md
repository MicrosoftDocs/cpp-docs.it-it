---
title: "Operatore ComPtrRefBase::operator IUnknown** | Microsoft Docs"
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
  - "client/Microsoft::WRL::Details::ComPtrRefBase::operator IUnknown**"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator IUnknown** (operatore)"
ms.assetid: c2950abf-a7aa-480a-ba41-615703e7f931
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore ComPtrRefBase::operator IUnknown**
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
operator IUnknown**() const;  
```  
  
## Note  
 Esegue il cast del membro dati corrente [ptr\_](../windows/comptrrefbase-ptr-data-member.md) a un puntatore dell'interfaccia di IUnknown.  
  
 Verrà generato un errore se il ComPtrRefBase corrente non deriva da IUnknown.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Classe ComPtrRefBase](../windows/comptrrefbase-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)