---
title: "Box::operator Box&lt;volatile T&gt;^ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box::operator Box<volatile T>^"
dev_langs: 
  - "C++"
ms.assetid: 90fffbf6-3429-46d0-bfaf-d99b7f48de6f
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Box::operator Box&lt;volatile T&gt;^ Operator
Abilita le conversioni boxing dal tipo `volatile` o `T` della classe di valori `enum``T` in `Box<T>`.  
  
## Sintassi  
  
```cpp  
operator Box<volatile T>^(volatile T valueType);  
```  
  
#### Parametri  
 `T`  
 Qualsiasi tipo enum, classe di valori o struct di valori. Include tipi integrati nello [spazio dei nomi predefinito](../cppcx/default-namespace.md).  
  
## Valore restituito  
 Istanza di `Platform::Box<T>``^` che rappresenta il valore originale sottoposto a conversione boxing in una classe di riferimento.  
  
## Requisiti  
 **Intestazione:** vccorlib.h  
  
 **Spazio dei nomi:** Platform  
  
## Vedere anche  
 [Classe Platform::Box](../cppcx/platform-box-class.md)   
 [Interfaccia Platform::IBox](../cppcx/platform-ibox-interface.md)   
 [Conversione boxing](../cppcx/boxing-c-cx.md)