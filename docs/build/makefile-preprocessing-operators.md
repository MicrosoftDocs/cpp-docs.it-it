---
title: Operatori di pre-elaborazione di makefile | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
helpviewer_keywords:
- operators [C++], makefile preprocessing
- EXIST operator
- preprocessing NMAKE makefile operators
- NMAKE program, operators
- DEFINED operator
- makefiles, preprocessing operators
ms.assetid: a46e4d39-afdb-43c1-ac3b-025d33e6ebdb
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 59007bdabc81b5fe49aa4b5265dc0fc73ef4f0b3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="makefile-preprocessing-operators"></a>Operatori di pre-elaborazione di makefile
Nelle espressioni della pre-elaborazione di makefile è possibile usare operatori che agiscono sui valori delle costanti, sui codici di uscita dei comandi, su stringhe, macro e percorsi del file system. Per valutare l'espressione, il preprocessore prima di tutto espande le macro ed esegue i comandi e quindi esegue le operazioni. Le operazioni vengono valutate per raggruppamento tra parentesi esplicito e quindi per la precedenza degli operatori. Il risultato è un valore costante.  
  
 L'operatore `DEFINED` è un operatore logico che agisce su un nome di macro. L'espressione `DEFINED(` *nomemacro* `)` è true se *nomemacro* è definito, anche se non ha un valore assegnato. `DEFINED` in combinazione con `!IF` o `!ELSE IF` equivale a `!IFDEF` o `!ELSE IFDEF`. A differenza di queste direttive, tuttavia, `DEFINED` può essere usato in espressioni complesse.  
  
 L'operatore `EXIST` è un operatore logico che agisce su un percorso di file system. `EXIST(`*percorso* `)` è true se *percorso* esiste. Il risultato ottenuto da `EXIST` può essere usato nelle espressioni binarie. Se *percorso* contiene spazi, racchiuderlo tra virgolette doppie.  
  
 Per confrontare due stringhe, usare l'operatore di uguaglianza (`==`) o l'operatore di disuguaglianza (`!=`). Racchiudere le stringhe tra virgolette doppie.  
  
 Nelle costanti Integer è possibile usare gli operatori unari per la negazione numerica (`-`), il complemento di uno (`~`) e la negazione logica (`!`).  
  
 Le espressioni possono usare gli operatori seguenti. Gli operatori con uguale precedenza vengono raggruppati e i gruppi vengono elencati in ordine di precedenza decrescente. Gli operatori unari si associano all'operando a destra. Gli operatori binari con uguale precedenza uguale si associano agli operandi da sinistra a destra.  
  
|Operatore|Descrizione|  
|--------------|-----------------|  
|`DEFINED(`*nomemacro*`)`|Produce un valore logico per lo stato corrente di definizione di *nomemacro*.|  
|`EXIST(`*percorso*`)`|Produce un valore logico per l'esistenza del file di *percorso*.|  
|||  
|`!`|NOT logico unario.|  
|`~`|Complemento di uno unario.|  
|`-`|Negazione unaria.|  
|||  
|`*`|Moltiplicazione.|  
|`/`|Divisione.|  
|`%`|Modulo (resto).|  
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
>  L'operatore XOR bit per bit (`^`) equivale al carattere di escape e quando viene usato in un'espressione deve essere preceduto da un carattere di escape (`^^`).  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni nella pre-elaborazione di makefile](../build/expressions-in-makefile-preprocessing.md)