---
title: "Istruzione do-while (C++) | Microsoft Docs"
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
  - "do-while_cpp"
  - "do-while"
  - "do"
  - "while_cpp"
  - "do_cpp"
  - "while"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "do (parola chiave) [C++]"
  - "do (parola chiave) [C++], do-while"
  - "do-while (parola chiave) [C++]"
  - "while (parola chiave) [C++], do-while"
ms.assetid: e01e6f7c-7da1-4591-87f9-c26ff848e7b0
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzione do-while (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue ripetutamente *statement* finché la condizione di chiusura specificata \(*expression*\) non restituisce zero.  
  
## Sintassi  
  
```  
  
      do  
   statement  
   while ( expression ) ;  
```  
  
## Note  
 Il test della condizione di chiusura viene eseguito dopo ogni esecuzione del ciclo; pertanto, un ciclo `do-while` viene eseguito una o più volte, a seconda del valore dell'espressione di chiusura.  L'istruzione `do-while` può terminare anche quando un'istruzione [break](../cpp/break-statement-cpp.md), [goto](../cpp/goto-statement-cpp.md) o [return](../cpp/return-statement-cpp.md) viene eseguita nel corpo dell'istruzione.  
  
 *expression* deve disporre di un tipo di puntatore o di un tipo aritmetico.  L'esecuzione procede nel modo seguente:  
  
1.  Viene eseguito il corpo dell'istruzione.  
  
2.  Viene quindi valutato *expression*.  Se *expression* è false, l'istruzione `do-while` termina e il controllo passa all'istruzione successiva nel programma.  Se *expression* è true \(diverso da zero\), il processo viene ripetuto a partire dal passaggio 1.  
  
## Esempio  
 Nell'esempio seguente viene mostrato l'utilizzo dell'istruzione `do-while`:  
  
```  
// do_while_statement.cpp  
#include <stdio.h>  
int main()  
{  
    int i = 0;  
    do  
    {  
        printf_s("\n%d",i++);  
    } while (i < 3);  
}  
```  
  
## Vedere anche  
 [Istruzioni di iterazione](../cpp/iteration-statements-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Istruzione while \(C\+\+\)](../cpp/while-statement-cpp.md)   
 [Istruzione for \(C\+\+\)](../cpp/for-statement-cpp.md)   
 [Istruzione for basata su intervallo \(C\+\+\)](../cpp/range-based-for-statement-cpp.md)