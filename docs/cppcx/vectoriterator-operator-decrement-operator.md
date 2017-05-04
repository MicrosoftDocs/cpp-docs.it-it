---
title: "VectorIterator::operator-- (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator--"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator-- (operatore)"
ms.assetid: 650a3037-2984-4110-9d7c-cd3756e5f4b9
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator-- (operatore)
Decrementa l'oggetto VectorIterator corrente.  
  
## Sintassi  
  
```  
  
VectorIterator& operator--();  
VectorIterator operator--(  
   int  
);  
```  
  
## Valore restituito  
 La prima sintassi decrementa e quindi restituisce l'oggetto VectorIterator corrente. La seconda sintassi restituisce una copia dell'oggetto VectorIterator corrente, quindi decrementa l'oggetto VectorIterator corrente.  
  
## Note  
 La prima sintassi di VectorIterator esegue un decremento preliminare dell'oggetto VectorIterator corrente.  
  
 La seconda sintassi esegue un decremento posteriore dell'oggetto VectorIterator corrente. Il tipo `int` nella seconda sintassi indica un'operazione di decremento posteriore, non un effettivo operando Integer.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::VectorIterator](../cppcx/platform-collections-vectoriterator-class.md)