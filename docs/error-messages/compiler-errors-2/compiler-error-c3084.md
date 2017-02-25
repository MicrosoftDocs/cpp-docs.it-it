---
title: "Errore del compilatore C3084 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3084"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3084"
ms.assetid: 0362cb70-e24e-476f-a24d-8f5bb97c3afd
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 12
---
# Errore del compilatore C3084
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': un finalizzatore\/un distruttore non può essere 'keyword'  
  
 Un finalizzatore o distruttore è stato dichiarato in modo non corretto.  
  
 Ad esempio, un distruttore non deve essere contrassegnato come sealed.  Il distruttore sarà inaccessibile ai tipi derivati.  Per altre informazioni, vedere [Override espliciti](../../windows/explicit-overrides-cpp-component-extensions.md) e [Distruttori e finalizzatori in Visual C\+\+](../../misc/destructors-and-finalizers-in-visual-cpp.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3084.  
  
```  
// C3084.cpp // compile with: /clr /c ref struct R { protected: !R() sealed;   // C3084 !R() abstract;   // C3084 !R(); };  
```