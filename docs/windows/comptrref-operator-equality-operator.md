---
title: "Operatore ComPtrRef::operator== | Microsoft Docs"
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
  - "client/Microsoft::WRL::Details::ComPtrRef::operator=="
dev_langs: 
  - "C++"
ms.assetid: 95fcf781-b473-4317-88cd-e938778d3c3e
caps.latest.revision: 5
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore ComPtrRef::operator==
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Supporta l'infrastruttura WRL e non può essere utilizzata direttamente dal proprio codice.  
  
## Sintassi  
  
```cpp  
  
bool operator==(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   const Details::ComPtrRef<ComPtr<U>>& b  
);  
  
bool operator==(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   decltype(__nullptr)  
);  
  
bool operator==(  
   decltype(__nullptr),  
   const Details::ComPtrRef<ComPtr<T>>& a  
);  
  
bool operator==(  
   const Details::ComPtrRef<ComPtr<T>>& a,  
   void* b  
);  
  
bool operator==(  
   void* b,  
   const Details::ComPtrRef<ComPtr<T>>& a  
);  
```  
  
#### Parametri  
 `a`  
 Riferimento a un oggetto ComPtrRef.  
  
 `b`  
 Un riferimento ad un altro oggetto ComPtrRef, o ad un puntatore di tipo anonimo \(`void*`\).  
  
## Valore restituito  
 Il primo operatore diventa `true` se l'oggetto `a` è uguale a `b`; in caso contrario, `false`.  
  
 Il secondo e il terzo operatore restituiscono `true` se l'oggetto `a` è uguale a `nullptr`; in caso contrario, `false`.  
  
 I il quarto e quinti operatore restituiscono `true` se l'oggetto `a` è uguale a `b`; in caso contrario, `false`.  
  
## Note  
 Indica se due oggetti ComPtrRef sono uguali.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## Vedere anche  
 [Spazio dei nomi Microsoft::WRL::Details](../windows/microsoft-wrl-details-namespace.md)   
 [Classe ComPtrRef](../windows/comptrref-class.md)