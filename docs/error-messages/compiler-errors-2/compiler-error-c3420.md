---
title: "Errore del compilatore C3420 | Microsoft Docs"
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
  - "C3420"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3420"
ms.assetid: 99b53c77-f36b-4574-9199-b53111becccb
caps.latest.revision: 3
caps.handback.revision: 3
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3420
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'finalizer': un finalizzatore non può essere virtuale  
  
 Un finalizzatore può essere chiamato solo in modo non virtuale dal tipo di inclusione. Dichiarare virtuale un finalizzatore rappresenta quindi un errore.  
  
 Per altre informazioni, vedere [Distruttori e finalizzatori in Visual C\+\+](../../misc/destructors-and-finalizers-in-visual-cpp.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3420.  
  
```  
// C3420.cpp // compile with: /clr /c ref class R { virtual !R() {}   // C3420 };  
```