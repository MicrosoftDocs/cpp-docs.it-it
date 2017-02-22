---
title: "Avviso del compilatore (livello 1) C4678 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C4678"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4678"
ms.assetid: 0c588f34-595d-4e5c-9470-8723fca2cc06
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 10
---
# Avviso del compilatore (livello 1) C4678
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

classe base 'base\_type' meno accessibile di 'derived\_type'  
  
 Un tipo pubblico deriva da un tipo privato. Se viene creata un'istanza del tipo pubblico in un assembly di riferimento, i membri del tipo di base privato non saranno accessibili.  
  
 C4678 è raggiungibile solo usando **\/clr:oldSyntax**. Quando si usa **\/clr**, la presenza di una classe base meno accessibile rispetto alla classe derivata rappresenta un errore.  
  
 L'esempio seguente genera l'errore C4678:  
  
```  
// C4678.cpp // compile with: /clr:oldSyntax /LD /W1 #using <mscorlib.dll> private __gc struct privateG { // try the following line instead // public __gc struct privateG { public: int i; }; public __gc struct V: public privateG {   // C4678 public: int j; };  
```