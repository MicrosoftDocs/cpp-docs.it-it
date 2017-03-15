---
title: "Avviso del compilatore (livello 2) C4146 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4146"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4146"
ms.assetid: d6c31ab1-3120-40d5-8d80-32b5f7046e32
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 9
---
# Avviso del compilatore (livello 2) C4146
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

operatore "meno" unario utilizzato con tipo unsigned. Il risultato resta unsigned  
  
 I tipi unsigned possono contenere solo valori non negativi. In genere, quindi, non ha senso applicare l'operatore meno unario \(negazione\) a un tipo unsigned.  Sia l'operando che il risultato sono non negativi.  
  
 In pratica, questa situazione si verifica quando il programmatore cerca di esprimere il valore intero minimo, ossia \-2147483648.  Questo valore non può essere scritto come \-2147483648, poiché l'espressione viene elaborata in due fasi:  
  
1.  Viene valutato il numero 2147483648.  Poiché tale numero è maggiore del valore integer massimo di 2147483647, il tipo di 2147483648 non è [int](../../c-language/integer-types.md), ma `unsigned int`.  
  
2.  L'operatore meno unario viene applicato al valore, con un risultato unsigned corrispondente a 2147483648.  
  
 Il tipo unsigned del risultato può causare un comportamento imprevisto.  Se si utilizza il risultato in un confronto, è possibile che venga utilizzato un confronto unsigned, ad esempio quando l'altro operando è un `int`.  È chiaro quindi il motivo per cui il programma di esempio riportato di seguito stampa una sola riga.  
  
 La seconda riga prevista, `1 is greater than the most negative int`, non viene stampata perché `((unsigned int)1) > 2147483648`  è false.  
  
 Per evitare la visualizzazione dell'avviso C4146, utilizzare INT\_MIN da limits.h, il cui tipo è **signed int**.  
  
## Esempio  
 Il seguente codice di esempio genera l'errore C4146:  
  
```  
// C4146.cpp  
// compile with: /W2  
#include <stdio.h>  
  
void check(int i)   
{  
    if (i > -2147483648)   // C4146  
        printf_s("%d is greater than the most negative int\n", i);  
}  
  
int main()   
{  
    check(-100);  
    check(1);  
}  
```