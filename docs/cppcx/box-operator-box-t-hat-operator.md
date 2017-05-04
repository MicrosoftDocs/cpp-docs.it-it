---
title: "Box::operator Box&lt;T&gt;^ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box::operator Box<T>^"
dev_langs: 
  - "C++"
ms.assetid: c2c89385-c334-4b09-8f87-d46ea4809232
caps.latest.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Box::operator Box&lt;T&gt;^ Operator
Consente conversioni boxing da una classe di valori `T` a `Box<T>`.  
  
## Sintassi  
  
```cpp  
operator Box<const T>^(const T valueType);  
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