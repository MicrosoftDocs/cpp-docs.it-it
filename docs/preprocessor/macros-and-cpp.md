---
title: Macro e C++ | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- macros, C++
- macros
ms.assetid: 83a344c1-73c9-4ace-8b93-cccfb62c6133
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 746b04113e4cb49716e0c1fa6dee69a250bded42
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="macros-and-c"></a>Macro e C++
C++ offre nuove funzionalità, alcune delle quali soppiantano quelle offerte dal preprocessore ANSI C. Queste nuove funzionalità migliorano l'indipendenza dai tipi e la prevedibilità del linguaggio:  
  
-   In C++, gli oggetti dichiarati come **const** può essere utilizzato nelle espressioni costanti. Ciò consente ai programmi di dichiarare le costanti contenenti informazioni sui tipi e i valori e le enumerazioni che possono essere visualizzate simbolicamente con il debugger. L'utilizzo della direttiva `#define` del preprocessore per definire le costanti non è altrettanto preciso. Nessun tipo di archiviazione allocato per un **const** dell'oggetto a meno che non viene trovata un'espressione che accetta l'indirizzo del programma.  
  
-   La funzionalità della funzione inline C++ soppianta le macro di tipo funzione. I vantaggi dell'utilizzo delle funzioni inline rispetto alle macro sono:  
  
    -   Indipendenza dai tipi. Le funzioni inline sono soggette allo stesso controllo dei tipi delle funzioni normali. Le macro non sono indipendenti dai tipi.  
  
    -   Gestione corretta degli argomenti con effetti collaterali. Le funzioni inline valutano le espressioni fornite come argomenti prima di inserire il corpo della funzione. Pertanto, non c'è nessuna possibilità che un'espressione con effetti collaterali sia non sicura.  
  
 Per ulteriori informazioni sulle funzioni inline, vedere [inline, inline, \__forceinline](../cpp/inline-functions-cpp.md).  
  
 Per la compatibilità con le versioni precedenti, tutte le funzionalità del preprocessore presenti in ANSI C e nelle specifiche C++ precedenti vengono mantenute per Microsoft C++.  
  
## <a name="see-also"></a>Vedere anche  
 [Macro predefinite](../preprocessor/predefined-macros.md)   
 [Macro (C/C++)](../preprocessor/macros-c-cpp.md)