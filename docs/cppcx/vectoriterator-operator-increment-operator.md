---
title: "VectorIterator::operator++ (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator++"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator++ (operatore)"
ms.assetid: c46b18ff-45be-436a-8f31-b3a5ecc19b77
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator++ (operatore)
Incrementa l'oggetto VectorIterator corrente.  
  
## Sintassi  
  
```  
  
VectorIterator& operator++();  
VectorIterator operator++(  
   int  
);  
```  
  
## Valore restituito  
 Con la prima sintassi viene applicato l'incremento e successivamente viene restituito l'oggetto VectorIterator corrente. Con la seconda sintassi viene restituita una copia dell'oggetto VectorIterator corrente, quindi viene applicato l'incremento all'oggetto VectorIterator corrente.  
  
## Note  
 Con la prima sintassi viene applicato all'oggetto VectorIterator corrente un pre\-incremento.  
  
 Con la seconda sintassi viene applicato all'oggetto VectorIterator corrente un post\-incremento. Il tipo `int` nella seconda sintassi indica un'operazione di post\-incremento, non un effettivo operando Integer.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::VectorIterator](../cppcx/platform-collections-vectoriterator-class.md)