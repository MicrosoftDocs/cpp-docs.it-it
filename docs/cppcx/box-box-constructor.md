---
title: "Costruttore Box::Box | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box::Box"
dev_langs: 
  - "C++"
ms.assetid: 3c4777f0-801c-4b24-9426-6d658dfaecf8
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Costruttore Box::Box
Crea un oggetto `Box` che può incapsulare un valore del tipo specificato.  
  
## Sintassi  
  
```cpp  
Box(T valueArg);  
```  
  
#### Parametri  
 `valueArg`  
 Il tipo di valore boxed, ad esempio, `int`, `bool`, `float64`, `DateTime`.  
  
## Requisiti  
 **Intestazione:** vccorlib.h  
  
 **Spazio dei nomi:** Platform  
  
## Vedere anche  
 [Classe Platform::Box](../cppcx/platform-box-class.md)   
 [Conversione boxing](../cppcx/boxing-c-cx.md)