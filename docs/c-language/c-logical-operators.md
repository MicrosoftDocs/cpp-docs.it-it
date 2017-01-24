---
title: "Operatori logici C | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "&& (operatore)"
  - "|| (operatore)"
  - "AND (operatore logico)"
  - "operatori logici, C"
  - "operatori logici, punti di sequenza di espressione"
  - "OR (operatore logico)"
  - "operatori [C], logici"
  - "valutazione di corto circuito"
ms.assetid: c0a4e766-ad56-4300-bf76-b28dc0e19b43
caps.latest.revision: 8
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Operatori logici C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Gli operatori logici eseguono le operazioni d AND\-logico \(**&&**\) e OR\-logico \( `||` \).  
  
 **Sintassi**  
  
 *espressione AND\-logico*:  
 *espressione OR\-inclusivo*  
  
 *espressione AND\-logico*  **&&**  *espressione OR\-logico*  
  
 *Espressione OR\-logico*:  
 *Espressione AND\-logico*  
  
 *espressione OR\-logico*  **&#124;&#124;**  *espressione AND\-logico*  
  
 Gli operatori logici non eseguono conversioni aritmetiche normali.  Invece, valutano ogni operando in termini della sua equivalenza con 0.  Il risultato di un'operazione logica è 0 o 1.  Il tipo del risultato è `int`.  
  
 Gli operatori logici di C sono descritti di seguito:  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|**&&**|L'operatore AND\-logico produce il valore 1 se entrambi gli operandi hanno valori diversi da zero.  Se uno degli operandi è uguale a 0, il risultato è 0.  Se il primo operando di un'operazione di AND\-logico è uguale a 0, il secondo operando non viene valutato.|  
|`&#124;&#124;`|L'operatore OR\-logico esegue un'operazione OR\-inclusiva sui propri operandi.  Il risultato è 0 se entrambi gli operandi hanno valore 0.  Se uno degli operandi è un valore diverso da zero, il risultato è 1.  Se il primo operando di un'operazione di OR\-logico ha un valore diverso da zero, il secondo operando non viene valutato.|  
  
 Gli operandi di espressioni AND\-logico e OR\-logico sono valutati da sinistra a destra.  Se il valore del primo operando è sufficiente per determinare il risultato dell'operazione, il secondo operando non viene valutato.  Questa operazione viene denominata "valutazione short circuit". Esiste un punto di sequenza dopo il primo operando.  Per ulteriori informazioni, vedere [Sequence Points](../c-language/c-sequence-points.md).  
  
## Esempi  
 Nell'esempio seguente vengono illustrati gli operatori logici:  
  
```  
int w, x, y, z;  
  
if ( x < y && y < z )  
    printf( "x is less than z\n" );  
```  
  
 In questo esempio, viene chiamata la funzione `printf` per visualizzare un messaggio se `x` è minore di `y` e `y` è minore di `z`.  Se `x` è maggiore di `y`, il secondo operando \(`y < z`\) non viene valutato e non viene stampato.  Si noti che questo potrebbe causare problemi nei casi in cui il secondo operando ha effetti collaterali basati su qualche altro motivo.  
  
```  
printf( "%d" , (x == w || x == y || x == z) );  
```  
  
 In questo esempio, se `x` corrisponde a `w`, `y`, o a `z`, il secondo argomento alla funzione `printf` restituisce true e viene stampato il valore 1.  In caso contrario, restituisce false e viene stampato il valore 0.  Appena una delle condizioni restituisce true, la valutazione viene interrotta.  
  
## Vedere anche  
 [Operatore AND logico: &&](../cpp/logical-and-operator-amp-amp.md)   
 [Operatore OR logico: &#124;&#124;](../cpp/logical-or-operator-pipe-pipe.md)