---
title: "Istruzione if (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "else"
  - "if"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "else (clausole)"
  - "else (parola chiave) [C]"
  - "if (parola chiave) [C]"
  - "if (parola chiave) [C], sintassi istruzione if"
  - "istruzioni annidate"
ms.assetid: d7fc16a0-fdbc-4f39-b596-76e1ca4ad4a5
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Istruzione if (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'istruzione **if** controlla l'esecuzione del branching condizionale.  Il corpo di un'istruzione **if** viene eseguito se il valore dell'espressione è diverso da zero.  La sintassi per l'istruzione **if** dispone di due form.  
  
## Sintassi  
 *selection\-statement*:  
 **if \(**  *expression*  **\)**  *statement*  
  
 **if \(**  *expression*  **\)**  *statement*  **else**  *statement*  
  
 In entrambi i form dell'istruzione **if**, vengono valutate le espressioni, che possono avere qualsiasi valore salvo una struttura, inclusi tutti gli effetti collaterali.  
  
 Nel primo form della sintassi, se *expression* è true \(diversa da zero\), viene eseguito *statement*.  Se *expression* è false, *statement* viene ignorato.  Nel secondo form di sintassi, che utilizza **else**, il secondo elemento *statement* viene eseguito se *expression* è false.  Con entrambi i form, il controllo passa quindi dall'istruzione **if** all'istruzione successiva nel programma a meno che una delle istruzioni contenga **break**, **continue** o `goto`.  
  
 Di seguito sono illustrati esempi dell'istruzione **if**:  
  
```  
if ( i > 0 )  
    y = x / i;  
else   
{  
    x = i;  
    y = f( x );  
}  
```  
  
 In questo esempio, l'istruzione `y = x/i;` viene eseguita se `i` è maggiore di 0.  Se `i` è minore o uguale a 0, `i` viene assegnato a `x` e `f( x )` viene assegnato a `y`.  Si noti che l'istruzione che costituisce la clausola **if** termina con un punto e virgola.  
  
 Quando si annidano istruzioni **if** e clausole **else**, utilizzare parentesi graffe per raggruppare le istruzioni e le clausole nelle istruzioni composte che illustrano la propria intenzione.  Se non sono presenti parentesi graffe, il compilatore risolve le ambiguità associando ogni **else** con **if** più vicino che non dispone di **else**.  
  
```  
if ( i > 0 )           /* Without braces */  
    if ( j > i )  
        x = j;  
    else  
        x = i;  
```  
  
 In questo esempio la clausola **else** viene associata all'istruzione interna **if**.  Se `i` è minore o uguale a 0, nessun valore viene assegnato a `x`.  
  
```  
if ( i > 0 )   
{                      /* With braces */  
    if ( j > i )  
        x = j;  
}  
else  
    x = i;  
```  
  
 In questo esempio le parentesi graffe relative all'istruzione interna **if** rendono la clausola **else** parte dell'istruzione esterna **if**.  Se `i` è minore o uguale a 0, `i` viene assegnato a `x`.  
  
## Vedere anche  
 [Istruzione if\-else \(C\+\+\)](../cpp/if-else-statement-cpp.md)