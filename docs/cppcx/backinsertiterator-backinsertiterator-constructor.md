---
title: "BackInsertIterator::BackInsertIterator (costruttore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::BackInsertIterator::BackInsertIterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BackInsertIterator::BackInsertIterator (costruttore)"
ms.assetid: ae6f0213-a7bb-43b8-9a5e-7a8dad7c76f8
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# BackInsertIterator::BackInsertIterator (costruttore)
Inizializza una nuova istanza della classe `BackInsertIterator`.  
  
## Sintassi  
  
```  
  
explicit BackInsertIterator(  
   Windows::Foundation::Collections::IVector<T>^ v  
);  
```  
  
#### Parametri  
 `v`  
 Oggetto IVector\<T\>.  
  
## Note  
 Un oggetto `BackInsertIterator` inserisce gli elementi dopo l'ultimo elemento dell'oggetto specificato dal parametro `v`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::BackInsertIterator](../cppcx/platform-collections-backinsertiterator-class.md)