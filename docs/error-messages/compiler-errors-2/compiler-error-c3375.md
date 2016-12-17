---
title: "Errore del compilatore C3375 | Microsoft Docs"
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
  - "C3375"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3375"
ms.assetid: f1df78c6-e6ca-48f3-8b29-4e1710002bf3
caps.latest.revision: 5
caps.handback.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3375
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'function': funzione di delegato ambigua  
  
 La creazione di un'istanza di un delegato potrebbe essere avvenuta in una funzione membro statica o come delegato non associato in una funzione di istanza, pertanto il compilatore ha generato questo errore.  
  
 Per altre informazioni, vedere [delegato](../../windows/delegate-cpp-component-extensions.md).  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C3375.  
  
```  
// C3375.cpp // compile with: /clr ref struct R { static void f(R^) {} void f() {} }; delegate void Del(R^); int main() { Del ^ a = gcnew Del(&R::f);   // C3375 }  
```