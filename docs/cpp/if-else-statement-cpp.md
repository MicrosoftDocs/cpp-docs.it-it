---
title: "Istruzione if-else (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "else_cpp"
  - "else"
  - "if_cpp"
  - "if"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "else (parola chiave) [C++]"
  - "if (parola chiave) [C++]"
  - "if (parola chiave) [C++], if-else"
ms.assetid: f8c45cde-6bce-42ae-81db-426b3dbd4caa
caps.latest.revision: 13
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzione if-else (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Controlla la creazione di un ramo condizionale.  
  
## Sintassi  
  
```  
  
      if ( expression )  
   statement1  
[else  
   statement2]  
```  
  
## Note  
 Se il valore di *un'espressione* è diverso da zero, viene eseguito *statement1*.  Se il facoltativo **else** è presente, viene eseguito *statement2* se il valore *di un'espressione* è zero.  L'*espressione* deve essere di tipo aritmetico o di tipo puntatore, o deve essere di un tipo di classe che definisce una conversione non ambigua verso un tipo aritmetico o puntatore. \(Per ulteriori informazioni sulle conversioni, vedere [Conversioni standard](../cpp/standard-conversions.md).\)  
  
 In entrambi i formati dell'istruzione **if**, l'*espressione*, che può avere qualsiasi valore eccetto una struttura, viene valutata, inclusi tutti gli effetti collaterali.  Il controllo passa dall'istruzione **if** alla successiva istruzione del programma a meno che una delle *istruzioni*contenga un [break](../cpp/break-statement-cpp.md), [continue](../cpp/continue-statement-cpp.md), o un [goto](../cpp/goto-statement-cpp.md).  
  
 La clausola **else** di un'istruzione `if...else` viene associata all'istruzione **if** precedente più vicina nello stesso scope che non ha una corrispondente istruzione **else**.  
  
 Perché l'esempio sia non ambiguo sull'accoppiamento `if...else`, rimuovere il commento dalle parentesi graffe.  
  
## Esempio  
  
```  
// if_else_statement.cpp  
#include <stdio.h>  
  
int main()   
{  
   int x = 0;  
   if (x == 0)  
   {  
      printf_s("x is 0!\n");  
   }  
   else  
   {  
      printf_s("x is not 0!\n"); // this statement will not be executed  
   }  
  
   x = 1;  
   if (x == 0)  
   {  
      printf_s("x is 0!\n"); // this statement will not be executed  
   }  
   else  
   {  
      printf_s("x is not 0!\n");  
   }  
  
   return 0;  
}  
```  
  
  **x è 0\!**  
**x non è 0\!**   
## Vedere anche  
 [Istruzioni di selezione](../cpp/selection-statements-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Istruzione switch \(C\+\+\)](../cpp/switch-statement-cpp.md)