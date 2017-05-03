---
title: "InputIterator::operator++ (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::InputIterator::operator++"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InputIterator::operator++ (operatore)"
ms.assetid: 50781585-7a12-4f02-bff8-68fe0adf0693
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# InputIterator::operator++ (operatore)
Incrementa l'oggetto InputIterator corrente.  
  
## Sintassi  
  
```  
  
InputIterator& operator++();  
  
InputIterator operator++(  
   int  
);  
```  
  
## Valore restituito  
 Con la prima sintassi viene applicato l'incremento e successivamente viene restituito l'oggetto InputIterator corrente. Con la seconda sintassi viene restituita una copia dell'oggetto InputIterator corrente, quindi viene applicato l'incremento all'oggetto.  
  
## Note  
 Con la prima sintassi di InputIteator viene applicato all'oggetto InputIterator corrente un pre\-incremento.  
  
 Con la seconda sintassi viene applicato all'oggetto InputIterator corrente un post\-incremento. Il tipo `int` nella seconda sintassi indica un'operazione di post\-incremento, non un effettivo operando Integer.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::InputIterator](../cppcx/platform-collections-inputiterator-class.md)