---
title: "VectorViewIterator::operator&lt;= (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::operator<="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::operator<= (operatore)"
ms.assetid: 523bf6ca-fb45-498b-8e94-fa8a093dd4ad
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::operator&lt;= (operatore)
Indica se l'oggetto VectorIterator corrente è minore o uguale all'oggetto VectorIterator specificato.  
  
## Sintassi  
  
```  
  
bool operator<=(  
   const VectorViewIterator& other  
) const;  
```  
  
#### Parametri  
 `other`  
 Altro oggetto VectorIterator.  
  
## Valore restituito  
 `true` se l'oggetto VectorIterator corrente è minore o uguale a `other`; in caso contrario, `false`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md)