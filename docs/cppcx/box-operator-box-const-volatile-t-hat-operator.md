---
title: "Box::operator Box&lt;const volatile T&gt;^ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box::operator Box<const volatile T>^"
dev_langs: 
  - "C++"
ms.assetid: 3c91cf0f-1e90-4daf-8468-a7d8aedb6784
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Box::operator Box&lt;const volatile T&gt;^ Operator
Abilita le conversioni boxing dal tipo `const volatile` o `T` della classe di valori `enum``T` in `Box<T>`.  
  
## Sintassi  
  
```cpp  
operator Box<const volatile T>^(const volatile T valueType);  
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