---
title: "Costanti a virgola mobile C | Microsoft Docs"
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
  - "costanti, virgola mobile"
  - "double (tipo di dati), costanti a virgola mobile"
  - "costanti a virgola mobile"
  - "costanti a virgola mobile, informazioni su costanti a virgola mobile"
  - "numeri a virgola mobile, costanti a virgola mobile"
  - "tipi [C], costanti"
ms.assetid: e1bd9b44-d6ab-470c-93e5-07142c7a2062
caps.latest.revision: 12
caps.handback.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Costanti a virgola mobile C
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

"Una costante in virgola mobile" è un numero decimale che rappresenta un numero reale con segno.  La rappresentazione di un numero reale con segno include una parte intera, una parte frazionaria e un esponente.  Utilizzare le costanti a virgola mobile per rappresentare valori a virgola mobile non modificabili.  
  
## Sintassi  
 *costanti a virgola mobile*:  
 *costante\-frazionaria parte\-esponente*  opt *suffisso\-mobile* opt  
  
 *sequenza\-cifra parte\-esponente suffisso\-mobile*  opt  
  
 *costante\-frazionaria*:  
 *sequenza\-cifra*  opt **.** *sequenza\-cifra*  
  
 *sequenza\-cifra*  **.**.  
  
 *parte\-esponente*:  
 **e**  *segno*  opt *sequenza\-cifra*  
  
 **E**  *segno*  opt *sequenza\-cifra*  
  
 *segno* : uno di  
 **\+ –**  
  
 *sequenza\-cifra*:  
 *digit*  
  
 *cifra di sequenza\-cifra*  
  
 *suffisso\-mobile* : uno di  
 **f l F L**  
  
 È possibile omettere le cifre prima del punto decimale \(parte del valore intero\) o le cifre dopo il punto decimale \(la parte frazionaria\), ma non entrambe.  È possibile omettere il punto decimale solo se si include un esponente.  Nessuno spazio vuoto può separare le cifre o i caratteri della costante.  
  
 Negli esempi seguenti vengono illustrate alcune forme delle costanti a virgola mobile ed espressioni:  
  
```  
15.75  
1.575E1   /* = 15.75   */  
1575e-2   /* = 15.75   */  
-2.5e-3   /* = -0.0025 */  
25E-4     /* =  0.0025 */  
```  
  
 Le costanti a virgola mobile sono positive a meno che non siano precedute da un segno meno \(**–**\).  In questo caso, il segno di sottrazione viene considerato come operatore di negazione unario aritmetico.  Le costanti a virgola mobile con tipo **float**, **double**, o `long double`.  
  
 Una costante in virgola mobile senza **f**, **F**, **l**, o suffisso **L** è di tipo **double**.  Se la lettera **f** o **F** è il suffisso, la costante è di tipo **mobile**.  Se suffisato dalla lettera **l** o **L**, ha tipo `long double`.  Ad esempio:  
  
```  
100L  /* Has type long double  */  
100F  /* Has type float        */  
```  
  
 Si noti che il compilatore C Microsoft esegue il mapping **long double** al tipo **double**.  Vedere [Memorizzazione dei Tipi di Base](../c-language/storage-of-basic-types.md) per informazioni sui tipi **double**, **float** e **long**.  
  
 È possibile omettere la parte intera della costante in virgola mobile, come illustrato negli esempi seguenti.  Il numero .75 può essere rappresentato in diversi modi, inclusi i seguenti:  
  
```  
.0075e2  
0.075e1  
.075e1  
75e-2  
```  
  
## Vedere anche  
 [Costanti C](../c-language/c-constants.md)