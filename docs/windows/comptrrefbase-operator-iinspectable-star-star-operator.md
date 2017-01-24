---
title: "Operatore ComPtrRefBase::operator IInspectable** | Microsoft Docs"
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
  - "client/Microsoft::WRL::Details::ComPtrRefBase::operator IInspectable**"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator IInspectable** (operatore)"
ms.assetid: 06ac1051-606c-449b-a566-cac78ca53762
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore ComPtrRefBase::operator IInspectable**
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
operator IInspectable**() const;  
```  
  
## Note  
 Esegue il cast del membro dati corrente [ptr\_](../windows/comptrrefbase-ptr-data-member.md) a un puntatore dell'interfaccia di IInspectable.  
  
 Verrà generato un errore se il ComPtrRefBase corrente non deriva da IInspectable.  
  
 Il cast è disponibile solo se **\_\_WRL\_CLASSIC\_COM\_\_** è definito.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Classe ComPtrRefBase](../windows/comptrrefbase-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)