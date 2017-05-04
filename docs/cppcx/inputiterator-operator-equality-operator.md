---
title: "InputIterator::operator== (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::InputIterator::operator=="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InputIterator::operator== (operatore)"
ms.assetid: 84f1b69a-77b9-467c-ad1a-2fe8a7c3009e
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# InputIterator::operator== (operatore)
Indica se l'oggetto InputIterator corrente è uguale all'oggetto InputIterator specificato.  
  
## Sintassi  
  
```  
bool operator==(  
   const InputIterator& other  
) const;  
```  
  
#### Parametri  
 `other`  
 Altro InputIterator.  
  
## Valore restituito  
 `true` se l'oggetto InputIterator corrente è uguale a `other`; in caso contrario, `false`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::InputIterator](../cppcx/platform-collections-inputiterator-class.md)