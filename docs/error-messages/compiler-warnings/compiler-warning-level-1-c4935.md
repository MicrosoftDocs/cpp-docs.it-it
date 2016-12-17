---
title: "Avviso del compilatore (livello 1) C4935 | Microsoft Docs"
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
  - "C4935"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4935"
ms.assetid: a36c56d3-571a-44dd-bb0f-bcc6b020e134
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 1) C4935
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

identificatore di accesso assembly modificato da 'access'  
  
 È stata modificata la visibilità dell'assembly di un tipo. Il compilatore usa l'ultimo identificatore che rileva. Ad esempio, la visibilità dell'assembly di una dichiarazione con prototipo potrebbe essere diversa da quella della definizione di classe.  
  
 C4935 è raggiungibile solo usando **\/clr:oldSyntax**.  
  
 L'esempio seguente genera l'errore C4935:  
  
```  
// C4935.cpp // compile with: /clr:oldSyntax /W1 /c public __gc public class X {   // C4935 int i; };  
```