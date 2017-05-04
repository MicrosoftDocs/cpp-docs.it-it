---
title: "VectorIterator::operator&lt;= (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator<="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator<= (operatore)"
ms.assetid: 57d3c269-77a5-4731-a3b4-dcda2758da19
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator&lt;= (operatore)
Indica se l'oggetto VectorIterator corrente è minore o uguale all'oggetto VectorIterator specificato.  
  
## Sintassi  
  
```cpp  
  
bool operator<=(  
   const VectorIterator& other  
) const   
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
 [Classe Platform::Collections::VectorIterator](../cppcx/platform-collections-vectoriterator-class.md)