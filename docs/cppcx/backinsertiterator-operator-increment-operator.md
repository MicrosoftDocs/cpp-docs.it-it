---
title: "BackInsertIterator::operator++ (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::BackInsertIterator::operator++"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BackInsertIterator::operator++ (operatore)"
ms.assetid: 08324574-db2b-4d95-825e-a93a56f327da
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# BackInsertIterator::operator++ (operatore)
Restituisce un riferimento all'oggetto BackInsertIterator corrente. L'iteratore è invariato.  
  
## Sintassi  
  
```  
  
BackInsertIterator& operator++();  
  
BackInsertIterator operator++(  
   int  
);  
```  
  
## Valore restituito  
 Riferimento all'oggetto BackInsertIterator corrente.  
  
## Note  
 In base alla progettazione, l'esempio della prima sintassi determina dei pre\-incrementi dell'oggetto BackInsertIterator corrente e la seconda sintassi ne determina dei post\-incrementi. Il tipo `int` nella seconda sintassi indica un'operazione di post\-incremento, non un effettivo operando Integer.  
  
 Tuttavia, questo operatore in realtà non modifica l'oggetto BackInsertIterator. Restituisce invece un riferimento all'iteratore corrente invariato. Tale comportamento è uguale a quello di [operator\*](../cppcx/backinsertiterator-operator-dereference-operator.md).  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::BackInsertIterator](../cppcx/platform-collections-backinsertiterator-class.md)