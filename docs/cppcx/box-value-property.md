---
title: "Propriet&#224; Box::Value | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box::Value"
dev_langs: 
  - "C++"
ms.assetid: f456b105-6c14-4737-8c27-ad47d1eabd32
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Propriet&#224; Box::Value
Restituisce il valore incapsulato nell'oggetto `Box`.  
  
## Sintassi  
  
```cpp  
virtual property T Value{  
   T get();  
}  
```  
  
## Valore restituito  
 Restituisce il valore boxed con lo stesso tipo presente in origine prima di essere sottoposto a boxing.  
  
## Requisiti  
 **Intestazione:** vccorlib.h  
  
 **Spazio dei nomi:** Platform  
  
## Vedere anche  
 [Classe Platform::Box](../cppcx/platform-box-class.md)   
 [Conversione boxing](../cppcx/boxing-c-cx.md)