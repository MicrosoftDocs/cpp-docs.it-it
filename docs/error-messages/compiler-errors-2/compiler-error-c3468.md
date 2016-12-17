---
title: "Errore del compilatore C3468 | Microsoft Docs"
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
  - "C3468"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3468"
ms.assetid: cfd320db-2f6e-4e0d-ba02-e79ece87e1e0
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3468
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'type': i tipi possono essere inoltrati solo a un assembly:  
  
 '`file`' non è un assembly  
  
 È possibile inoltrare solo i tipi in un assembly.  
  
 Per altre informazioni, vedere [Type Forwarding \(C\+\+\/CLI\)](../../windows/type-forwarding-cpp-cli.md).  
  
## Esempio  
 L'esempio seguente crea un modulo.  
  
```  
// C3468.cpp // compile with: /LN /clr public ref class R {};  
```  
  
## Esempio  
 L'esempio seguente genera l'errore C3468.  
  
```  
// C3468_b.cpp // compile with: /clr /c #using "C3468.netmodule" [ assembly:TypeForwardedTo(R::typeid) ];   // C3468  
```