---
title: "Classe Platform::Box | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::Box"
dev_langs: 
  - "C++"
ms.assetid: b3d7ea37-e98a-4fbc-80b0-ad35e50250c6
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
caps.handback.revision: 7
---
# Classe Platform::Box
Consente un tipo valore, ad esempio `Windows::Foundation::DateTime` o un tipo scalare, ad esempio `int` da archiviare in un tipo `Platform::Object`. In genere non è necessario usare `Box` in modo esplicito perché la conversione boxing avviene in modo implicito quando si esegue il cast di un tipo valore `Object^`.  
  
## Sintassi  
  
```cpp  
ref class Box abstract;  
```  
  
## Note  
  
## Requisiti  
 **Intestazione:** vccorlib.h  
  
 **Spazio dei nomi:** Platform  
  
## Vedere anche  
 [Spazio dei nomi Platform](../cppcx/platform-namespace-c-cx.md)   
 [Conversione boxing](../cppcx/boxing-c-cx.md)