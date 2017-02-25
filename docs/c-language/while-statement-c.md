---
title: "Istruzione while (C) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "while"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "while (parola chiave) [C]"
  - "while (parola chiave) [C], sintassi"
ms.assetid: d0c970b8-12a9-4827-afb2-a051111834b7
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Istruzione while (C)
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'istruzione `while` consente di ripetere un'istruzione fino a quando un'espressione specificata non restituisce false.  
  
## Sintassi  
 *iteration\-statement*:  
 **while \(**  *expression*  **\)**  *statement*  
  
 *expression* deve disporre di un tipo di puntatore o di un tipo aritmetico.  L'esecuzione procede nel modo seguente:  
  
1.  *expression* viene valutato.  
  
2.  Se *expression* inizialmente è false, il corpo dell'istruzione `while` non viene mai eseguito e il controllo passa dall'istruzione `while` alla istruzione successiva del programma.  
  
     Se *expression* è true \(diverso da zero\), il corpo dell'istruzione viene eseguito e il processo viene ripetuto iniziando dal passaggio 1.  
  
 L'istruzione `while` può terminare anche quando un'istruzione **break**, `goto` o `return` viene eseguita nel corpo dell'istruzione.  Utilizzare l'istruzione **continue** per terminare un'iterazione senza uscire dal ciclo `while`.  L'istruzione **continue** passa il controllo all'iterazione successiva dell'istruzione `while`.  
  
 Di seguito, un esempio dell'istruzione `while`:  
  
```  
while ( i >= 0 )   
{  
    string1[i] = string2[i];  
    i--;  
}  
```  
  
 In questo esempio i caratteri vengono copiati da `string2` in `string1`.  Se `i` è maggiore o uguale a 0, `string2[i]` viene assegnato a `string1[i]` e `i` viene decrementato.  Quando `i` raggiunge o è al di sotto dello 0, l'esecuzione dell'istruzione `while` termina.  
  
## Vedere anche  
 [Istruzione while \(C\+\+\)](../cpp/while-statement-cpp.md)