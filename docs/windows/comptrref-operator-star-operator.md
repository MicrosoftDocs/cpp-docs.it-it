---
title: "Operatore ComPtrRef::operator* | Microsoft Docs"
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
  - "client/Microsoft::WRL::Details::ComPtrRef::operator*"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator* (operatore)"
ms.assetid: 0287ca7a-4ce1-47f7-bab6-714fca3e04bb
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore ComPtrRef::operator*
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
InterfaceType* operator *();  
```  
  
## Valore restituito  
 Puntatore a un'interfaccia rappresentata dall'oggetto corrente ComPtrRef.  
  
## Note  
 Recupera un puntatore a un'interfaccia rappresentata dall'oggetto corrente ComPtrRef.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Classe ComPtrRef](../windows/comptrref-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)