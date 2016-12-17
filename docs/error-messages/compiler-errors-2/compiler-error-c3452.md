---
title: "Errore del compilatore C3452 | Microsoft Docs"
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
  - "C3452"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3452"
ms.assetid: e5293dcf-cb70-4133-ae2a-0bb496950ba0
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3452
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

membro argomento di elenco non costante  
  
 È stato passato un argomento a un attributo che prevedeva una costante, un valore valutato in fase di compilazione.  
  
## Esempio  
 L'esempio seguente genera l'errore C3452.  
  
```  
// C3452.cpp // compile with: /c int i; [module( name="mod", type=dll, custom={i} ) ];   // C3452 // try the following line instead // [module( name="mod", type=dll, custom={"a"} ) ];  
```