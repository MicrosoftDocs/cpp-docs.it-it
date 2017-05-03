---
title: "VectorViewIterator::operator-- (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::operator--"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::operator-- (operatore)"
ms.assetid: edf3ba42-1fa4-4795-9a37-1f7dfb23ad19
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::operator-- (operatore)
Decrementa l'oggetto VectorViewIterator corrente.  
  
## Sintassi  
  
```  
VectorViewIterator& operator--();  
VectorViewIterator operator--(  
   int  
);  
```  
  
## Valore restituito  
 La prima sintassi decrementa e quindi restituisce l'oggetto VectorViewIterator corrente. La seconda sintassi restituisce una copia dell'oggetto VectorViewIterator corrente, quindi decrementa l'oggetto VectorViewIterator corrente.  
  
## Note  
 La prima sintassi di VectorViewIterator esegue un decremento preliminare dell'oggetto VectorViewIterator corrente.  
  
 La seconda sintassi esegue un decremento posteriore dell'oggetto VectorViewIterator corrente. Il tipo `int` nella seconda sintassi indica un'operazione di decremento posteriore, non un effettivo operando Integer.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md)