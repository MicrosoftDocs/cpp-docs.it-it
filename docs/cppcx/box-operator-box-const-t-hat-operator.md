---
title: "Box::operator Box&lt;const T&gt;^ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box::operator Box<const T>^"
dev_langs: 
  - "C++"
ms.assetid: c43a2e8f-7e9d-4587-960f-1bab48923f82
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Box::operator Box&lt;const T&gt;^ Operator
Consente conversioni boxing da una classe di valori `const``T` o da una classe `enum``T` a `Box<T>`.  
  
## Sintassi  
  
```cpp  
operator Box<const T>^(const T valueType);  
```  
  
#### Parametri  
 `T`  
 Qualsiasi classe di valore, struct di valore o tipo enum. Include tipi integrati nello [spazio dei nomi predefinito](../cppcx/default-namespace.md).  
  
## Valore restituito  
 Istanza di `Platform::Box<T>``^` che rappresenta il valore originale sottoposto a conversione boxing in una classe di riferimento.  
  
## Requisiti  
 **Intestazione:** vccorlib.h  
  
 **Spazio dei nomi:** Platform  
  
## Vedere anche  
 [Classe Platform::Box](../cppcx/platform-box-class.md)   
 [Interfaccia Platform::IBox](../cppcx/platform-ibox-interface.md)