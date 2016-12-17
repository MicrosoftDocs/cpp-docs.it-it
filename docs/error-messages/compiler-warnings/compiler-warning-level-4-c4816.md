---
title: "Avviso del compilatore (livello 4) C4816 | Microsoft Docs"
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
  - "C4816"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4816"
ms.assetid: 60f730ae-d942-4db9-ab97-41d4a874d8da
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Avviso del compilatore (livello 4) C4816
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

'param': il parametro contiene una matrice con dimensione zero che verrà troncata, a meno che l'oggetto non venga passato per riferimento  
  
 Un parametro a un oggetto con una matrice di dimensioni zero non è stato passato per riferimento. La matrice non verrà copiata quando l'oggetto viene passato.  
  
## Esempio  
 L'esempio seguente genera l'errore C4816:  
  
```  
// C4816.cpp // compile with: /W4 #include <stdio.h> extern "C" int printf_s(const char *, ...); #pragma warning(disable : 4200) struct S1 { int i; char cArr[]; }; void TestErr(S1 s1)   // C4816 param with zero-array // not passed by reference { printf_s("%d %c %c\n", s1.i, s1.cArr[0], s1.cArr[1]); } void TestOk(S1 &s1) { printf_s("%d %c %c\n", s1.i, s1.cArr[0], s1.cArr[1]); } int main() { S1 myS_1 = { 6, 'a', 'b', 'c' }; TestErr(myS_1); TestOk(myS_1); }  
```