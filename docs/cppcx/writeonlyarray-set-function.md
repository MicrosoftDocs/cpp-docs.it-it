---
title: "WriteOnlyArray::set (funzione) | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::WriteOnlyArray::set"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WriteOnlyArray::set (funzione)"
ms.assetid: 0359f922-f25e-47d1-b7df-87e7fd0f76e5
caps.latest.revision: 8
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# WriteOnlyArray::set (funzione)
Imposta il valore specificato in corrispondenza dell'indice specificato nella matrice.  
  
## Sintassi  
  
```cpp  
T& set(  
   unsigned int indexArg,  
   T valueArg);  
```  
  
#### Parametri  
 `indexArg`  
 Indice dell'elemento da impostare.  
  
 `valueArg`  
 Valore da impostare in corrispondenza di `indexArg`.  
  
## Valore restituito  
 Riferimento all'elemento appena impostato.  
  
## Requisiti  
 **Intestazione:** vccorlib.h  
  
 **Spazio dei nomi:** Platform  
  
## Vedere anche  
 [Platform::WriteOnlyArray \(classe\)](../cppcx/platform-writeonlyarray-class.md)   
 [Array e WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)