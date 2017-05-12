---
title: "to_vector (funzione) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Windows::Foundation::Collections::to_vector"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "to_vector (funzione)"
ms.assetid: 9cdd5123-7243-4def-a1d3-162e0bf6219e
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 3
---
# to_vector (funzione)
Restituisce `std::vector` il cui valore è lo stesso della raccolta sottostante il parametro IVectorView o IVector.  
  
## Sintassi  
  
```  
template <  
   typename T  
>  
inline ::std::vector<T> to_vector(  
   IVector<T>^ v  
);  
template <  
   typename T  
>  
inline ::std::vector<T> to_vector(  
   IVectorView<T>^ v  
);  
```  
  
#### Parametri  
 `T`  
 Parametro del tipo di modello.  
  
 `v`  
 Interfaccia IVectorView o IVector che fornisce accesso a un oggetto Vector o VectorView sottostante.  
  
## Valore restituito  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Windows::Foundation::Collections  
  
## Vedere anche  
 [Spazio dei nomi Windows::Foundation::Collections](../cppcx/windows-foundation-collections-namespace-c-cx.md)