---
title: "Avviso del compilatore (livello 4) C4670 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4670"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4670"
ms.assetid: e172b134-b1fb-4dfe-8e9d-209ea08b73c7
caps.latest.revision: 6
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 6
---
# Avviso del compilatore (livello 4) C4670
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'identifier': classe base inaccessibile  
  
 La classe base specificata di un oggetto che viene generato in un blocco **try** non è accessibile. Non è possibile creare un'istanza dell'oggetto se questo viene generato. Verificare che la classe base venga ereditata con l'identificatore di accesso corretto.  
  
 L'esempio seguente genera l'errore C4670:  
  
```  
// C4670.cpp // compile with: /EHsc /W4 class A { }; class B : /* public */ A { } b;   // inherits A with private access by default int main() { try { throw b;   // C4670 } catch( B ) { } }  
```