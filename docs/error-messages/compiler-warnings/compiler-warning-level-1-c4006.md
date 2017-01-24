---
title: "Avviso del compilatore (livello 1) C4006 | Microsoft Docs"
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
  - "C4006"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4006"
ms.assetid: f1a59819-0fd2-4361-8e3a-99e4b514b8e1
caps.latest.revision: 6
caps.handback.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4006
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

previsto un identificatore dopo \#undef  
  
 La direttiva `#undef` non ha specificato un identificatore di cui annullare la definizione. La direttiva è stata ignorata. Per risolvere l'avviso, verificare di aver specificato un identificatore. L'esempio seguente genera l'errore C4006:  
  
```  
// C4006.cpp // compile with: /W1 #undef   // C4006 // try.. // #undef TEST int main() { }  
```