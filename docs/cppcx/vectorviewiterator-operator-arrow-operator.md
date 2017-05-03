---
title: "VectorViewIterator::operator-&gt; (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::operator->"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::operator-> (operatore)"
ms.assetid: cc02cfa2-dfcb-4fb7-b4a0-c290f91aa4a6
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::operator-&gt; (operatore)
Recupera l'indirizzo dell'elemento a cui viene fatto riferimento dall'oggetto VectorViewIterator corrente.  
  
## Sintassi  
  
```  
Detail::ArrowProxy<T> operator->() const;  
```  
  
## Valore restituito  
 Valore dell'elemento a cui fa riferimento l'oggetto VectorViewIterator corrente.  
  
 Il tipo di valore restituito è un tipo interno non specificato necessario per l'implementazione di questo operatore.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md)