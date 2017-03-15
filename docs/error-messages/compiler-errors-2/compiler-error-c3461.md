---
title: "Errore del compilatore C3461 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3461"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3461"
ms.assetid: bd66833a-545d-445a-bdfe-dee771a450a4
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3461
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': è possibile inoltrare solo un tipo gestito  
  
 L'inoltro dei tipi può essere usato solo nei tipi CLR.  Per altre informazioni, vedere [Classes and Structs](../../windows/classes-and-structs-cpp-component-extensions.md).  
  
 Per altre informazioni, vedere [Type Forwarding \(C\+\+\/CLI\)](../../windows/type-forwarding-cpp-cli.md).  
  
## Esempio  
 L'esempio seguente crea un componente.  
  
```  
// C3461.cpp // compile with: /clr /LD public ref class R {};  
```  
  
## Esempio  
 L'esempio seguente genera l'errore C3461.  
  
```  
// C3461b.cpp // compile with: /clr /c #using "C3461.dll" class N {}; [assembly:TypeForwardedTo(N::typeid)];   // C3461 [assembly:TypeForwardedTo(R::typeid)];   // OK  
```