---
title: "VectorViewIterator::operator!= (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::operator!="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::operator!= (operatore)"
ms.assetid: 00d55da7-9d85-495b-baaa-b5cdfa81aa7d
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::operator!= (operatore)
Indica se l'oggetto VectorViewIterator corrente è diverso dall'oggetto VectorViewIterator specificato.  
  
## Sintassi  
  
```  
bool operator!=(  
   const VectorViewIterator& other  
) const;  
```  
  
#### Parametri  
 `other`  
 Altro oggetto VectorViewIterator.  
  
## Valore restituito  
 `true` se l'oggetto VectorViewIterator corrente non è uguale a `other`; in caso contrario, `false`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md)