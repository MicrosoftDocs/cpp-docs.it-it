---
title: "Istruzioni continue (C++) | Microsoft Docs"
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
  - "continue"
  - "continue_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "continue (parola chiave) [C++]"
ms.assetid: 3c94ee57-f732-4c1d-8537-d0ce5382bfd4
caps.latest.revision: 12
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzioni continue (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Forza il trasferimento del controllo all'espressione di controllo del ciclo più piccolo [do](../cpp/do-while-statement-cpp.md), [for](../cpp/for-statement-cpp.md) o [while](../cpp/while-statement-cpp.md) di inclusione.  
  
## Sintassi  
  
```  
continue;  
```  
  
## Note  
 Alcune istruzioni restanti nell'iterazione corrente non vengono eseguite.  L'iterazione successiva del ciclo è determinata nel modo seguente:  
  
-   In un ciclo `while` o `do`, l'iterazione successiva inizia rivalutando l'espressione di controllo dell'istruzione `while` o `do`.  
  
-   In un ciclo `for` \(utilizzando la sintassi `for`\(`init-expr`; `cond-expr`; `loop-expr`\)\), la clausola `loop-expr` viene eseguita.  La clausola `cond-expr` viene rivalutata e, a seconda del risultato, il ciclo termina o si verifica un'altra iterazione.  
  
 Di seguito viene illustrato come l'istruzione `continue` può essere utilizzata per ignorare le sezioni di codice e avviare l'iterazione successiva di un ciclo.  
  
## Esempio  
  
```  
// continue_statement.cpp  
#include <stdio.h>  
int main()  
{  
    int i = 0;  
    do  
    {  
        i++;  
        printf_s("before the continue\n");  
        continue;  
        printf("after the continue, should never print\n");  
     } while (i < 3);  
  
     printf_s("after the do loop\n");  
}  
```  
  
  **prima di continuare**  
**prima di continuare**  
**prima di continuare**  
**dopo il ciclo do**   
## Vedere anche  
 [Istruzioni di spostamento](../cpp/jump-statements-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)