---
title: "Errore del compilatore C3492 | Microsoft Docs"
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
  - "C3492"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3492"
ms.assetid: b1dc6342-9133-4b1f-a9c3-e8c65d20d121
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Errore del compilatore C3492
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'var': impossibile acquisire un membro di un'unione anonima  
  
 Non è possibile acquisire un membro di un'unione senza nome.  
  
### Per correggere l'errore  
  
-   Assegnare un nome all'unione e passare la struttura di unione completa all'elenco di acquisizione dell'espressione lambda.  
  
## Esempio  
 L'esempio seguente genera l'errore C3492 perché acquisisce un membro di un'unione anonima:  
  
```  
// C3492a.cpp int main() { union { char ch; int x; }; ch = 'y'; [&x](char ch) { x = ch; }(ch); // C3492 }  
```  
  
## Esempio  
 L'esempio seguente risolve l'errore C3492, assegnando un nome all'unione e passando la struttura di unione completa all'elenco di acquisizione dell'espressione lambda:  
  
```  
// C3492b.cpp int main() { union { char ch; int x; } u; u.ch = 'y'; [&u](char ch) { u.x = ch; }(u.ch); }  
```  
  
## Vedere anche  
 [Espressioni lambda](../../cpp/lambda-expressions-in-cpp.md)