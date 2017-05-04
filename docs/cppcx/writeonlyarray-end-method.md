---
title: "WriteOnlyArray::end (metodo) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::WriteOnlyArray::end"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WriteOnlyArray::end (metodo)"
ms.assetid: 045045fe-f210-400b-b688-7abb95fc702a
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# WriteOnlyArray::end (metodo)
Restituisce un puntatore oltre l'ultimo elemento della matrice.  
  
## Sintassi  
  
```cpp  
T* end() const;  
```  
  
## Valore restituito  
 Iteratore di un puntatore oltre l'ultimo elemento della matrice.  
  
## Note  
 Questo iteratore può essere usato con algoritmi STL per eseguire operazioni quali `std::sort` sugli elementi della matrice.  
  
## Requisiti  
 **Intestazione:** vccorlib.h  
  
 **Spazio dei nomi:** Platform  
  
## Vedere anche  
 [Platform::WriteOnlyArray \(classe\)](../cppcx/platform-writeonlyarray-class.md)   
 [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)