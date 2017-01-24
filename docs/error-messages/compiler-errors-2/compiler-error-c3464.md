---
title: "Errore del compilatore C3464 | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3464"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3464"
ms.assetid: 0ede05dc-4486-4921-8e8c-78ab5a2e09c5
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3464
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Non è possibile inoltrare un tipo annidato con 'type'  
  
 L'inoltro dei tipi non funziona nei tipi annidati.  
  
 Per altre informazioni, vedere [Type Forwarding \(C\+\+\/CLI\)](../../windows/type-forwarding-cpp-cli.md).  
  
## Esempio  
 L'esempio seguente crea un componente.  
  
```  
// C3464.cpp // compile with: /LD /clr public ref class R { public: ref class N {}; };  
```  
  
## Esempio  
 L'esempio seguente genera l'errore C3464.  
  
```  
// C3464_b.cpp // compile with: /clr /c #using "C3464.dll" [assembly:TypeForwardedTo(R::N::typeid)];   // C3464 [assembly:TypeForwardedTo(R::typeid)];   // OK  
```