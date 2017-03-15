---
title: "Errore del compilatore C3462 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3462"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3462"
ms.assetid: 56b75f35-9fad-42d9-a969-eeca5d709bec
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Errore del compilatore C3462
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': è possibile inoltrare solo un tipo importato  
  
 L'attributo TypeForwardedTo deve essere applicato a un tipo nei metadati a cui si fa riferimento.  
  
 Per altre informazioni, vedere [Type Forwarding \(C\+\+\/CLI\)](../../windows/type-forwarding-cpp-cli.md).  
  
## Esempio  
 L'esempio seguente crea un componente.  
  
```  
// C3462.cpp // compile with: /clr /LD public ref class R {};  
```  
  
## Esempio  
 L'esempio seguente genera l'errore C3462.  
  
```  
// C3462b.cpp // compile with: /clr /c #using "C3462.dll" ref class N {}; [assembly:TypeForwardedTo(N::typeid)];   // C3462 [assembly:TypeForwardedTo(R::typeid)];  
```