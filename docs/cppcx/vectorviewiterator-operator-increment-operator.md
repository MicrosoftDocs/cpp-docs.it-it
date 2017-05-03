---
title: "VectorViewIterator::operator++ (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::operator++"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::operator++ (operatore)"
ms.assetid: 5391e6e2-a7ee-4dab-8cee-b2237894246f
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::operator++ (operatore)
Incrementa l'oggetto VectorViewIterator corrente.  
  
## Sintassi  
  
```  
  
VectorViewIterator& operator++();  
VectorViewIterator operator++(  
   int  
);  
```  
  
## Valore restituito  
 Con la prima sintassi viene applicato l'incremento e successivamente viene restituito l'oggetto VectorViewIterator corrente. Con la seconda sintassi viene restituita una copia dell'oggetto VectorViewIterator corrente, quindi viene applicato l'incremento all'oggetto VectorViewIterator corrente.  
  
## Note  
 Con la prima sintassi di VectorViewIterator viene applicato all'oggetto VectorViewIterator corrente un pre\-incremento.  
  
 Con la seconda sintassi viene applicato all'oggetto VectorViewIterator corrente un post\-incremento. Il tipo `int` nella seconda sintassi indica un'operazione di post\-incremento, non un effettivo operando Integer.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md)