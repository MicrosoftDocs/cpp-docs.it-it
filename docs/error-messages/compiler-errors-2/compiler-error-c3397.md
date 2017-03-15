---
title: "Errore del compilatore C3397 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3397"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3397"
ms.assetid: a8536e87-79c4-4ed7-bd96-42704d06391f
caps.latest.revision: 5
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 5
---
# Errore del compilatore C3397
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Inizializzazione aggregata non consentita in argomenti predefiniti  
  
 Una matrice è stata dichiarata in modo non corretto.  Per altre informazioni, vedere [Arrays](../../windows/arrays-cpp-component-extensions.md).  
  
## Esempio  
 L'esempio seguente genera l'errore C3397.  
  
```  
// C3397.cpp // compile with: /clr // /clr /c void Func(array<int> ^p = gcnew array<int> { 1, 2, 3 });   // C3397 void Func2(array<int> ^p = gcnew array<int> (3));   // OK int main() { array<int> ^p = gcnew array<int> { 1, 2, 3};   // OK }  
```