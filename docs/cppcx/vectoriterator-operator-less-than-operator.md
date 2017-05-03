---
title: "VectorIterator::operator&lt; (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator<"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator< (operatore)"
ms.assetid: 1d7dabdd-70da-4c39-b76e-e22e743751a0
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator&lt; (operatore)
Indica se l'oggetto VectorIterator corrente è minore dell'oggetto VectorIterator specificato.  
  
## Sintassi  
  
```cpp  
  
bool operator<(  
   const VectorIterator& other  
) const   
```  
  
#### Parametri  
 `other`  
 Altro oggetto VectorIterator.  
  
## Valore restituito  
 `true` se l'oggetto VectorIterator corrente è minore di `other`; in caso contrario, `false`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::VectorIterator](../cppcx/platform-collections-vectoriterator-class.md)