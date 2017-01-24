---
title: "Operatore WeakRef::operator&amp; | Microsoft Docs"
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
  - "client/Microsoft::WRL::WeakRef::operator&"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "operator& (operatore)"
ms.assetid: 900afb73-3801-4d08-9b41-2e6a62011ccd
caps.latest.revision: 3
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatore WeakRef::operator&amp;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Restituisce un oggetto ComPtrRef che rappresenta l'oggetto corrente di WeakRef.  
  
## Sintassi  
  
```cpp  
Details::ComPtrRef<WeakRef> operator&() throw()  
```  
  
## Valore restituito  
 Un oggetto ComPtrRef che rappresenta l'oggetto corrente di WeakRef.  
  
## Note  
 Si tratta di un operatore di supporto interno che non deve essere utilizzato nel codice.  
  
## Requisiti  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## Vedere anche  
 [Classe WeakRef](../windows/weakref-class.md)