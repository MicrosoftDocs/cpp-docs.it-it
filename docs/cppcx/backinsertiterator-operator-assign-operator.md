---
title: "BackInsertIterator::operator= (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::BackInsertIterator::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BackInsertIterator::operator= (operatore)"
ms.assetid: 509c9b4c-14fb-4318-bf65-b8926cc72f4f
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# BackInsertIterator::operator= (operatore)
Aggiunge l'oggetto specificato alla fine della raccolta sequenziale corrente.  
  
## Sintassi  
  
```  
  
BackInsertIterator& operator=(  
   const T& t  
);  
```  
  
#### Parametri  
 `t`  
 Oggetto da aggiungere alla raccolta corrente.  
  
## Valore restituito  
 Riferimento all'oggetto BackInsertIterator corrente.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::BackInsertIterator](../cppcx/platform-collections-backinsertiterator-class.md)