---
title: "VectorViewIterator::operator&gt; (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::operator>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::operator> (operatore)"
ms.assetid: c689b677-e3c6-4f6e-8e3a-54d5f2a6123d
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::operator&gt; (operatore)
Indica se l'oggetto VectorViewIterator corrente è maggiore dell'oggetto VectorViewIterator specificato.  
  
## Sintassi  
  
```  
  
bool operator>(  
   const VectorViewIterator& other  
) const;  
```  
  
#### Parametri  
 `other`  
 Altro oggetto VectorViewIterator.  
  
## Valore restituito  
 `true` se l'oggetto VectorViewIterator corrente è maggiore di `other`; in caso contrario, `false`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md)