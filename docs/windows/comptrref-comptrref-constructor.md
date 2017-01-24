---
title: "Costruttore ComPtrRef::ComPtrRef | Microsoft Docs"
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
  - "client/Microsoft::WRL::Details::ComPtrRef::ComPtrRef"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ComPtrRef, costruttore"
ms.assetid: ce2d2533-fef6-4b2d-b088-6f3db01df5a5
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costruttore ComPtrRef::ComPtrRef
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```  
ComPtrRef(  
   _In_opt_ T* ptr  
);  
```  
  
#### Parametri  
 `ptr`  
 Il valore sottostante di un altro oggetto di ComPtrRef.  
  
## Note  
 Inizializza una nuova istanza della classe di ComPtrRef da un puntatore specificato a un altro oggetto di ComPtrRef.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Classe ComPtrRef](../windows/comptrref-class.md)   
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)