---
title: "Vector::First (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector::First"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector::First (metodo)"
ms.assetid: ca6b7b55-dd49-4346-bfa4-d8010b228d44
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Vector::First (metodo)
Restituisce un iteratore che fa riferimento al primo elemento nell'oggetto Vector.  
  
## Sintassi  
  
```  
  
virtual Windows::Foundation::Collections::IIterator <T>^   
   First();  
```  
  
## Valore restituito  
 Iteratore che fa riferimento al primo elemento in Vector.  
  
## Note  
 Un modo pratico per contenere l'iteratore restituito da First\(\) consiste nell'assegnare il valore restituito a una variabile dichiarata con la parola chiave di deduzione del tipo [auto](../Topic/auto%20\(C++\).md). Ad esempio `auto x = myVector->First();`. Questo iteratore conosce la lunghezza della raccolta.  
  
 Se ti servono un paio di iteratori da passare a una funzione STL, usa le funzioni Free [Windows::Foundation::Collections::begin](../cppcx/begin-function.md) e [Windows::Foundation::Collections::end](../cppcx/end-function.md)  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::Vector](../cppcx/platform-collections-vector-class.md)   
 [Raccolte](../cppcx/collections-c-cx.md)