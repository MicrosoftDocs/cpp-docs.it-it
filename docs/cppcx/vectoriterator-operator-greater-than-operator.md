---
title: "VectorIterator::operator&gt; (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator> (operatore)"
ms.assetid: a9a323a4-d28a-4080-a48c-ed4c8ef2eafb
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator&gt; (operatore)
Indica se l'oggetto VectorIterator corrente è maggiore dell'oggetto VectorIterator specificato.  
  
## Sintassi  
  
```cpp  
  
bool operator>(  
   const VectorIterator& other  
) const   
```  
  
#### Parametri  
 `other`  
 Altro oggetto VectorIterator.  
  
## Valore restituito  
 `true` se l'oggetto VectorIterator corrente è maggiore di `other`; in caso contrario, `false`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::VectorIterator](../cppcx/platform-collections-vectoriterator-class.md)