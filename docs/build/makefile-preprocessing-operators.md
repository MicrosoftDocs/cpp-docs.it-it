---
title: "Operatori di pre-elaborazione di makefile | Microsoft Docs"
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
helpviewer_keywords: 
  - "DEFINED (operatore)"
  - "EXIST (operatore)"
  - "makefile, operatori di pre-elaborazione"
  - "NMAKE (programma), operatori"
  - "operatori [C++], pre-elaborazione di makefile"
  - "operatori di pre-elaborazione di makefile NMAKE"
ms.assetid: a46e4d39-afdb-43c1-ac3b-025d33e6ebdb
caps.latest.revision: 12
caps.handback.revision: 12
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Operatori di pre-elaborazione di makefile
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nelle espressioni della pre\-elaborazione di makefile è possibile usare operatori che agiscono sui valori delle costanti, sui codici di uscita dei comandi, su stringhe, macro e percorsi del file system.  Per valutare l'espressione, il preprocessore prima di tutto espande le macro ed esegue i comandi e quindi esegue le operazioni.  Le operazioni vengono valutate per raggruppamento tra parentesi esplicito e quindi per la precedenza degli operatori.  Il risultato è un valore costante.  
  
 L'operatore `DEFINED` è un operatore logico che agisce su un nome di macro.  L'espressione `DEFINED(`*nomemacro*`)` è true se *nomemacro* è definito, anche se non ha un valore assegnato.  `DEFINED` in combinazione con `!IF` o `!ELSE IF` equivale a `!IFDEF` o `!ELSE IFDEF`.  A differenza di queste direttive, tuttavia, `DEFINED` può essere usato in espressioni complesse.  
  
 L'operatore `EXIST` è un operatore logico che agisce su un percorso di file system.  `EXIST(`*percorso*`)` è true se *percorso* esiste.  Il risultato ottenuto da `EXIST` può essere usato nelle espressioni binarie.  Se contiene spazi, il *percorso* deve essere racchiuso tra virgolette doppie.  
  
 Per confrontare due stringhe, usare l'operatore di uguaglianza \(`==`\) o l'operatore di disuguaglianza \(`!=`\).  Racchiudere le stringhe tra virgolette doppie.  
  
 Nelle costanti Integer è possibile usare gli operatori unari per la negazione numerica \(`–`\), il complemento di uno \(`~`\) e la negazione logica \(`!`\).  
  
 Le espressioni possono usare gli operatori seguenti.  Gli operatori con uguale precedenza vengono raggruppati e i gruppi vengono elencati in ordine di precedenza decrescente.  Gli operatori unari si associano all'operando a destra.  Gli operatori binari con uguale precedenza uguale si associano agli operandi da sinistra a destra.  
  
|Operatore|Descrizione|  
|---------------|-----------------|  
|`DEFINED(` *nomemacro* `)`|Produce un valore logico per lo stato di definizione corrente di *nomemacro*.|  
|`EXIST(` *percorso* `)`|Produce un valore logico per l'esistenza di un file in *percorso*.|  
|||  
|`!`|NOT logico unario.|  
|`~`|Complemento di uno unario.|  
|`-`|Negazione unaria.|  
|||  
|`*`|Moltiplicazione.|  
|`/`|Divisione.|  
|`%`|Modulo \(resto\).|  
|||  
|`+`|Addizione.|  
|`-`|Sottrazione.|  
|||  
|`<<`|Spostamento a sinistra bit per bit.|  
|`>>`|Spostamento a destra bit per bit.|  
|||  
|`<=`|Minore o uguale a.|  
|`>=`|Maggiore o uguale a.|  
|`<`|Minore di.|  
|`>`|Maggiore di.|  
|||  
|`==`|Uguaglianza.|  
|`!=`|Disuguaglianza.|  
|||  
|`&`|AND bit per bit.|  
|`^`|XOR bit per bi.|  
|`&#124;`|OR bit per bit.|  
|||  
|`&&`|AND logico.|  
|||  
|`&#124;&#124;`|OR logico.|  
  
> [!NOTE]
>  L'operatore XOR bit per bit \(`^`\) equivale al carattere di escape e quando viene usato in un'espressione deve essere preceduto da un carattere di escape \(`^^`\).  
  
## Vedere anche  
 [Espressioni nella pre\-elaborazione di makefile](../build/expressions-in-makefile-preprocessing.md)