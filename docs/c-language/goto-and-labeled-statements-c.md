---
title: "Istruzioni goto e con etichetta (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "goto"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "goto (parola chiave) [C]"
  - "labeled (istruzione)"
  - "istruzioni, labeled"
ms.assetid: 3d0473dc-4b18-4fcc-9616-31a38499d7d7
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Istruzioni goto e con etichetta (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'istruzione `goto` trasferisce il controllo a un'etichetta.  L'etichetta specificata deve risiedere nella stessa funzione e può apparire solo prima di un'istruzione nella stessa funzione.  
  
## Sintassi  
 *statement*:  
 *labeled\-statement*  
  
 *jump\-statement*  
  
 *jump\-statement*:  
 **goto**  *identifier*  **;**  
  
 *labeled\-statement*:  
 *identifier*  **:**  *statement*  
  
 Un'etichetta dell'istruzione è significativa solo a un'istruzione `goto`; in qualsiasi altro contesto, un'istruzione contrassegnata viene eseguita indipendentemente dall'etichetta.  
  
 *jump\-statement* deve risiedere nella stessa funzione e può apparire prima solo di un'istruzione nella stessa funzione.  Il set di nomi *identifier* che seguono `goto` dispone del proprio spazio nomi in modo che i nomi non interferiscono con altri identificatori.  Le etichette non possono essere ridichiarate.  Vedere [Spazi dei nomi](../c-language/name-spaces.md) per ulteriori informazioni.  
  
 È buona norma programmare lo stile per utilizzare l'istruzione **break**, **continue** e `return` piuttosto che `goto` quando possibile.  Poiché l'istruzione **break** termina solo da un livello del ciclo, potrebbe essere necessario `goto` per uscire da un ciclo dall'interno di un ciclo eccessivamente annidato.  
  
 In questo esempio viene illustrata l'istruzione `goto`:  
  
```  
// goto.c  
#include <stdio.h>  
  
int main()  
{  
    int i, j;  
  
    for ( i = 0; i < 10; i++ )  
    {  
        printf_s( "Outer loop executing. i = %d\n", i );  
        for ( j = 0; j < 3; j++ )  
        {  
            printf_s( " Inner loop executing. j = %d\n", j );  
            if ( i == 5 )  
                goto stop;  
        }  
    }  
  
    /* This message does not print: */  
    printf_s( "Loop exited. i = %d\n", i );  
  
    stop: printf_s( "Jumped to stop. i = %d\n", i );  
}  
```  
  
 In questo esempio, un'istruzione `goto` trasferisce il controllo per puntare `stop` etichettate quando `i` è uguale a 5.  
  
## Vedere anche  
 [Istruzioni](../c-language/statements-c.md)