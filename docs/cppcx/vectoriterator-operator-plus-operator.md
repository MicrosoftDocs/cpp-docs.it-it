---
title: "VectorIterator::operator+ (operatore) | Microsoft Docs"
ms.custom: ""
ms.date: "12/13/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator+"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator+ (operatore)"
ms.assetid: 5e907537-7d10-4766-a412-e7ea08b3456a
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator+ (operatore)
Restituisce un oggetto VectorIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'oggetto VectorIterator specificato.  
  
## Sintassi  
  
```  
  
VectorIterator operator+(  
   difference_type n) ;  
  
template <  
   typename T  
>  
inline VectorIterator<T> operator+(  
   ptrdiff_t n,  
   const VectorIterator<T>& i  
);  
  
```  
  
#### Parametri  
 `T`  
 Nella seconda sintassi, typename di VectorIterator.  
  
 `n`  
 Spostamento espresso come Integer.  
  
 `i`  
 Nella seconda sintassi, oggetto VectorIterator.  
  
## Valore restituito  
 Nella prima sintassi, oggetto VectorIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'oggetto VectorIterator corrente.  
  
 Nella seconda sintassi, oggetto VectorIterator che fa riferimento all'elemento distanziato dello spostamento specificato dall'inizio del parametro `i`.  
  
## Note  
 Esempio della prima sintassi  
  
## Requisiti  
 **Intestazione:** collection.h  
  
 **Spazio dei nomi:** Platform::Collections  
  
## Vedere anche  
 [\(NOTINBUILD\) Spazio dei nomi Platform](http://msdn.microsoft.com/it-it/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)