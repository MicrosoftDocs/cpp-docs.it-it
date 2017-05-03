---
title: "VectorViewIterator::operator+ (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::operator+"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::operator+ (operatore)"
ms.assetid: 8206de2f-61b3-49cd-9715-d57695d880b3
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::operator+ (operatore)
Restituisce un oggetto VectorViewIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'oggetto VectorViewIterator specificato.  
  
## Sintassi  
  
```  
  
VectorViewIterator operator+(  
   difference_type n  
) const;  
  
template <  
   typename T  
>   
inline VectorViewIterator<T> operator+  
   (ptrdiff_t n,   
   const VectorViewIterator<T>& i  
);  
  
```  
  
#### Parametri  
 `T`  
 Nella seconda sintassi, typename di VectorViewIterator.  
  
 `n`  
 Spostamento espresso come Integer.  
  
 `i`  
 Nella seconda sintassi, oggetto VectorViewIterator.  
  
## Valore restituito  
 Nella prima sintassi, oggetto VectorViewIterator che fa riferimento all'elemento con lo spostamento specificato rispetto all'oggetto VectorViewIterator corrente.  
  
 Nella seconda sintassi, oggetto VectorViewIterator che fa riferimento all'elemento con lo spostamento specificato rispetto all'inizio del parametro `i`.  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [Classe Platform::Collections::VectorViewIterator](../cppcx/platform-collections-vectorviewiterator-class.md)