---
title: "Errore del compilatore C3469 | Microsoft Docs"
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
  - "C3469"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3469"
ms.assetid: e23b0e5c-c704-4e67-a868-bf02c2055d85
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3469
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': impossibile inoltrare una classe generica  
  
 Non è possibile usare l'inoltro dei tipi in una classe generica.  
  
 Per altre informazioni, vedere [Type Forwarding \(C\+\+\/CLI\)](../../windows/type-forwarding-cpp-cli.md).  
  
## Esempio  
 L'esempio seguente crea un componente.  
  
```  
// C3469.cpp // compile with: /clr /LD generic<typename T> public ref class GR {}; public ref class GR2 {};  
```  
  
## Esempio  
 L'esempio seguente genera l'errore C3466.  
  
```  
// C3469_b.cpp // compile with: /clr /c #using "C3469.dll" [assembly:TypeForwardedTo(GR::typeid)];   // C3469 [assembly:TypeForwardedTo(GR2::typeid)];   // OK  
```