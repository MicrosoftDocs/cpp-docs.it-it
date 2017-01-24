---
title: "Istruzione while (C++) | Microsoft Docs"
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
  - "while_cpp"
  - "while"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "while (parola chiave) [C++]"
  - "while (parola chiave) [C++], sintassi"
ms.assetid: 358dbe76-5e5e-4af5-b575-c2293c636899
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzione while (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Esegue ripetutamente *istruzione* finché l'*espressione* non risulta essere zero.  
  
## Sintassi  
  
```  
  
      while ( expression )  
   statement  
```  
  
## Note  
 Il test dell'*espressione* avviene prima di ogni esecuzione del ciclo, quindi un ciclo `while` viene eseguito zero o più volte.  L'*espressione* deve essere di tipo integrale, di tipo puntatore o di un tipo di classe con una conversione non ambigua ad un intero o ad un tipo puntatore.  
  
 Un ciclo `while` può terminare anche quando un'istruzione [break](../cpp/break-statement-cpp.md), [goto](../cpp/goto-statement-cpp.md) o [return](../cpp/return-statement-cpp.md) viene eseguita nel corpo dell'istruzione.  Utilizzare [continue](../cpp/continue-statement-cpp.md) per terminare l'iterazione corrente senza uscire dal ciclo `while`.  **continue** passa il controllo alla prossima iterazione del ciclo `while`.  
  
 Il codice seguente utilizza un ciclo `while` per ritagliare i simboli underscore alla fine di una stringa:  
  
```  
// while_statement.cpp  
  
#include <string.h>  
#include <stdio.h>  
char *trim( char *szSource )  
{  
    char *pszEOS = 0;  
  
    //  Set pointer to character before terminating NULL  
    pszEOS = szSource + strlen( szSource ) - 1;  
  
    //  iterate backwards until non '_' is found   
    while( (pszEOS >= szSource) && (*pszEOS == '_') )  
        *pszEOS-- = '\0';  
  
    return szSource;  
}  
int main()  
{  
    char szbuf[] = "12345_____";  
  
    printf_s("\nBefore trim: %s", szbuf);  
    printf_s("\nAfter trim: %s\n", trim(szbuf));  
}  
```  
  
 Lo stato di chiusura viene valutato all'inizio del ciclo.  In assenza di simboli finali underscore, il ciclo non viene mai eseguito.  
  
## Vedere anche  
 [Istruzioni di iterazione](../cpp/iteration-statements-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Istruzione do\-while \(C\+\+\)](../cpp/do-while-statement-cpp.md)   
 [Istruzione for \(C\+\+\)](../cpp/for-statement-cpp.md)   
 [Istruzione for basata su intervallo \(C\+\+\)](../cpp/range-based-for-statement-cpp.md)