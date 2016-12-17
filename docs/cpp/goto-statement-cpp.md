---
title: "Istruzione goto (C++) | Microsoft Docs"
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
  - "goto_cpp"
  - "goto"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "goto (parola chiave) [C++]"
ms.assetid: 724c5deb-2de1-42d8-8ef1-23589d9bf5ed
caps.latest.revision: 13
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Istruzione goto (C++)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'istruzione `goto` trasferisce incondizionatamente il controllo all'istruzione contrassegnata dall'identificatore specificato.  
  
## Sintassi  
  
```  
goto identifier;  
```  
  
## Note  
 L'istruzione con etichetta designata da `identifier` deve essere nella funzione corrente.  Tutti i nomi di `identifier` sono membri di uno spazio dei nomi interno e quindi non interferiscono con altri identificatori.  
  
 Un'etichetta di istruzione è significativa solo per un'istruzione `goto` In caso contrario, le etichette di istruzione vengono ignorate.  Le etichette non possono essere ridichiarate.  
  
 Per uno stile di programmazione ottimale è consigliabile usare le istruzioni `break`, `continue` e `return` invece dell'istruzione `goto`, quando possibile.  Tuttavia, poiché l'istruzione `break` consente di uscire solo da un livello di un ciclo, potrebbe essere necessario usare un'istruzione `goto` per uscire da un ciclo eccessivamente annidato.  
  
 Per altre informazioni sulle etichette e sull'istruzione `goto`, vedere [Istruzioni con etichetta](../cpp/labeled-statements.md) e [Utilizzo di etichette con l'istruzione goto](http://msdn.microsoft.com/it-it/6cd7c31a-9822-4241-8566-f79f51be48fe).  
  
## Esempio  
 In questo esempio un'istruzione `goto` trasferisce il controllo al punto con etichetta `stop` quando `i` è uguale a 3.  
  
```  
// goto_statement.cpp  
#include <stdio.h>  
int main()  
{  
    int i, j;  
  
    for ( i = 0; i < 10; i++ )  
    {  
        printf_s( "Outer loop executing. i = %d\n", i );  
        for ( j = 0; j < 2; j++ )  
        {  
            printf_s( " Inner loop executing. j = %d\n", j );  
            if ( i == 3 )  
                goto stop;  
        }  
    }  
  
    // This message does not print:   
    printf_s( "Loop exited. i = %d\n", i );  
  
    stop:   
    printf_s( "Jumped to stop. i = %d\n", i );  
}  
```  
  
  **Outer loop executing.  i \= 0**  
 **Inner loop executing.  j \= 0**  
 **Inner loop executing.  j \= 1**  
**Outer loop executing.  i \= 1**  
 **Inner loop executing.  j \= 0**  
 **Inner loop executing.  j \= 1**  
**Outer loop executing.  i \= 2**  
 **Inner loop executing.  j \= 0**  
 **Inner loop executing.  j \= 1**  
**Outer loop executing.  i \= 3**  
 **Inner loop executing.  j \= 0**  
**Jumped to stop.  i \= 3**    
## Vedere anche  
 [Istruzioni di spostamento](../cpp/jump-statements-cpp.md)   
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)