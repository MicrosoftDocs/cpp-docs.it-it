---
title: "&lt;valarray&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.<valarray>"
  - "valarray/std::<valarray>"
  - "std::<valarray>"
  - "<valarray>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "valarray (intestazione)"
ms.assetid: 30835415-21c1-4801-8f24-6bbef7dd8ecd
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 19
---
# &lt;valarray&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Definisce la classe modello valarray e numerose funzioni e classi modello.  
  
## Sintassi  
  
```  
  
#include <valarray>  
  
```  
  
## Note  
 A queste funzioni e classi modello sono consentiti livelli insoliti di libertà ai fini del miglioramento delle prestazioni.  In particolare, qualsiasi funzione che restituisce il tipo **valarray\<**T1**\>** può restituire un oggetto di un altro tipo T2.  In questo caso, qualsiasi funzione che accetta uno o più argomenti di tipo **valarray\<**T2**\>** deve includere overload che accettano combinazioni arbitrarie di questi argomenti, ognuno sostituito da un argomento di tipo T2.  
  
### Funzioni  
  
|||  
|-|-|  
|[abs](../Topic/abs%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al valore assoluto degli elementi dell'oggetto valarray di input.|  
|[acos](../Topic/acos%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali all'arcocoseno degli elementi dell'oggetto valarray di input.|  
|[asin](../Topic/asin%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali all'arcoseno degli elementi dell'oggetto valarray di input.|  
|[atan](../Topic/atan%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al valore di entità dell'arcotangente degli elementi dell'oggetto valarray di input.|  
|[atan2](../Topic/atan2%20\(%3Cvalarray%3E\).md)|Restituisce un oggetto valarray i cui elementi sono uguali all'arcotangente dei componenti cartesiani specificati da una combinazione di costanti ed elementi di oggetti valarray.|  
|[cos](../Topic/cos%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al coseno degli elementi dell'oggetto valarray di input.|  
|[cosh](../Topic/cosh%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al coseno iperbolico degli elementi dell'oggetto valarray di input.|  
|[exp](../Topic/exp%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al valore esponenziale naturale degli elementi dell'oggetto valarray di input.|  
|[log](../Topic/log%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al logaritmo naturale degli elementi dell'oggetto valarray di input.|  
|[log10](../Topic/log10%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al logaritmo in base 10 o comune degli elementi dell'oggetto valarray di input.|  
|[pow](../Topic/pow%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di oggetti valarray di input e costanti, restituendo un oggetto valarray i cui elementi sono uguali a una base specificata dagli elementi di un oggetto valarray di input o di una costante elevata a una potenza specificata dagli elementi di un oggetto valarray di input o di una costante.|  
|[sin](../Topic/sin%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al seno degli elementi dell'oggetto valarray di input.|  
|[sinh](../Topic/sinh%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali al seno iperbolico degli elementi dell'oggetto valarray di input.|  
|[sqrt](../Topic/sqrt%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali alla radice quadrata degli elementi dell'oggetto valarray di input.|  
|[swap](../Topic/swap%20\(%3Cvalarray%3E\).md)||  
|[tan](../Topic/tan%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali alla tangente degli elementi dell'oggetto valarray di input.|  
|[tanh](../Topic/tanh%20\(%3Cvalarray%3E\).md)|Opera sugli elementi di un oggetto valarray di input, restituendo un oggetto valarray i cui elementi sono uguali alla tangente iperbolica degli elementi dell'oggetto valarray di input.|  
  
### Operatori  
  
|||  
|-|-|  
|[operator\!\=](../Topic/operator!=%20\(%3Cvalarray%3E\).md)|Verifica se gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti sono diversi o se tutti gli elementi di un oggetto valarray sono diversi da un valore specificato del tipo di elemento dell'oggetto valarray.|  
|[operator%](../Topic/operator%25.md)|Ottiene il resto della divisione degli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti, della divisione di un oggetto valarray per un valore specificato del tipo di elemento dell'oggetto valarray oppure della divisione di un valore specificato per un oggetto valarray.|  
|[operator&](../Topic/operator&.md)|Ottiene l'operatore **AND** bit per bit tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento.|  
|[operator&&](../Topic/operator&&.md)|Ottiene l'operatore **AND** logico tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento dell'oggetto valarray.|  
|[operator\>](../Topic/operator%3E%20\(%3Cvalarray%3E\).md)|Verifica se gli elementi di un oggetto valarray sono maggiori degli elementi di un oggetto valarray di dimensioni equivalenti o se tutti gli elementi di un oggetto valarray sono maggiori o minori di un valore specificato del tipo di elemento dell'oggetto valarray.|  
|[operator\>\=](../Topic/operator%3E=%20\(%3Cvalarray%3E\).md)|Verifica se gli elementi di un oggetto valarray sono maggiori o uguali agli elementi di un oggetto valarray di dimensioni equivalenti o se tutti gli elementi di un oggetto valarray sono maggiori o uguali o minori o uguali a un valore specificato.|  
|[operator\>\>](../Topic/operator%3E%3E%20\(%3Cvalarray%3E\).md)|Sposta verso destra i bit per ogni elemento di un oggetto valarray di un numero specificato di posizioni o in base a una quantità di elementi specificata da un secondo oggetto valarray.|  
|[operator\<](../Topic/operator%3C%20\(%3Cvalarray%3E\).md)|Verifica se gli elementi di un oggetto valarray sono minori degli elementi di un oggetto valarray di dimensioni equivalenti o se tutti gli elementi di un oggetto valarray sono maggiori o minori di un valore specificato.|  
|[operator\<\=](../Topic/operator%3C=%20\(%3Cvalarray%3E\).md)|Verifica se gli elementi di un oggetto valarray sono minori o uguali agli elementi di un oggetto valarray di dimensioni equivalenti o se tutti gli elementi di un oggetto valarray sono maggiori o uguali o minori o uguali a un valore specificato.|  
|[operator\<\<](../Topic/operator%3C%3C%20\(%3Cvalarray%3E\).md)|Sposta verso sinistra i bit per ogni elemento di un oggetto valarray di un numero specificato di posizioni o in base a una quantità di elementi specificata da un secondo oggetto valarray.|  
|[operator\*](../Topic/operator*%20\(%3Cvalarray%3E\).md)|Ottiene il prodotto degli elementi tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento dell'oggetto valarray.|  
|[operatore \+](../Topic/operator+%20\(%3Cvalarray%3E\).md)|Ottiene la somma degli elementi tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento dell'oggetto valarray.|  
|[operator\-](../Topic/operator-%20\(%3Cvalarray%3E\)2.md)|Ottiene la differenza degli elementi tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento dell'oggetto valarray.|  
|[operator\/](../Topic/operator-%20\(%3Cvalarray%3E\)1.md)|Ottiene il quoziente degli elementi tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento dell'oggetto valarray.|  
|[operator\=\=](../Topic/operator==%20\(%3Cvalarray%3E\).md)|Verifica se gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti sono uguali o se tutti gli elementi di un oggetto valarray sono uguali a un valore specificato del tipo di elemento dell'oggetto valarray.|  
|[operator^](../Topic/operator%5E.md)|Ottiene l'operatore `OR` esclusivo bit per bit tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento.|  
|[operator&#124;](../Topic/operator%7C.md)|Ottiene l'operatore `OR` bit per bit tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento.|  
|[operator&#124;&#124;](../Topic/operator%7C%7C.md)|Ottiene l'operatore `OR` logico tra gli elementi corrispondenti di due oggetti valarray di dimensioni equivalenti o tra un oggetto valarray e un valore specificato del tipo di elemento dell'oggetto valarray.|  
  
### Classi  
  
|||  
|-|-|  
|[Classe gslice](../standard-library/gslice-class.md)|Classe di utilità per l'oggetto valarray usato per definire sezioni multidimensionali di un oggetto valarray.|  
|[Classe gslice\_array](../standard-library/gslice-array-class.md)|Classe modello ausiliaria interna che supporta oggetti sezione generale fornendo operazioni tra matrici di subset definite dalla sezione generale di un oggetto valarray.|  
|[Classe indirect\_array](../standard-library/indirect-array-class.md)|Classe modello ausiliaria interna che supporta oggetti che sono subset di oggetti valarray fornendo operazioni tra matrici di subset definite specificando un subset di indici di un oggetto valarray padre.|  
|[Classe mask\_array](../standard-library/mask-array-class.md)|Classe modello ausiliaria interna che supporta oggetti che sono subset di oggetti valarray padre, specificati con un'espressione booleana, fornendo operazioni tra le matrici di subset.|  
|[Classe slice](../standard-library/slice-class.md)|Classe di utilità per valarray usata per definire subset simili a vettori unidimensionali di un oggetto valarray.|  
|[Classe slice\_array](../standard-library/slice-array-class.md)|Classe modello ausiliaria interna che supporta oggetti sezione fornendo operazioni tra matrici di subset definite dalla sezione di un oggetto valarray.|  
|[Classe valarray](../standard-library/valarray-class.md)|La classe modello descrive un oggetto che controlla una sequenza di elementi di tipo **Type** archiviati come matrice e progettati per l'esecuzione di operazioni matematiche ad alta velocità, ottimizzate per le prestazioni di calcolo.|  
  
### Specializzazioni  
  
|||  
|-|-|  
|[Classe valarray\<bool\>](../standard-library/valarray-bool-class.md)|Versione specializzata della classe modello valarray\<**Type**\> per elementi di tipo `bool`.|  
  
## Vedere anche  
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)   
 [Sicurezza dei thread nella libreria standard C\+\+](../standard-library/thread-safety-in-the-cpp-standard-library.md)