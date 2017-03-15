---
title: "Avviso del compilatore (livello 4) C4932 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4932"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4932"
ms.assetid: 0b8d88cc-21f6-45cb-a9f5-1795b7db0dfa
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 4) C4932
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

\_\_identifier\(identifier\) e \_\_identifier\(identifier\) non sono distinguibili  
  
 Il compilatore non riesce a distinguere tra **\_finally** e `__finally` o `__try` e **\_try** come parametro passato a [\_\_identifier](../../windows/identifier-cpp-cli.md). Non provare a usarli entrambi come identificatori nello stesso programma, perché verrebbe generato l'errore [C2374](../../error-messages/compiler-errors-1/compiler-error-c2374.md).  
  
 L'esempio seguente genera l'errore C4932:  
  
```  
// C4932.cpp // compile with: /clr /W4 /WX int main() { int __identifier(_finally) = 245;   // C4932 int __identifier(__finally) = 25;   // C4932 }  
```