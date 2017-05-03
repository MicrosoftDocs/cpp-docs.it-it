---
title: "VectorIterator::operator-&gt; (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator->"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator-> (operatore)"
ms.assetid: d6caed5c-4899-45f8-95a2-687eafeeb8e1
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator-&gt; (operatore)
Recupera l'indirizzo dell'elemento a cui viene fatto riferimento dall'oggetto VectorIterator corrente.  
  
## Sintassi  
  
```  
Detail::ArrowProxy<T> operator->() const;  
```  
  
## Valore restituito  
 Valore dell'elemento a cui fa riferimento l'oggetto VectorIterator corrente.  
  
 Il tipo di valore restituito è un tipo interno non specificato necessario per l'implementazione di questo operatore.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::VectorIterator](../cppcx/platform-collections-vectoriterator-class.md)