---
title: "Operatore Box::operator T | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box::operator T"
dev_langs: 
  - "C++"
ms.assetid: 7445ef5b-563c-4ff0-829d-f22aa558b5ec
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Operatore Box::operator T
Consente le conversioni boxing da una classe di valori `T` o da una classe `enum``T` in `Box<T>`.  
  
## Sintassi  
  
```cpp  
operator Box<T>^(T valueType);  
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