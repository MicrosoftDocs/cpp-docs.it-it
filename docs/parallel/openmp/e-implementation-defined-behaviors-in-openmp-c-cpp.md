---
title: E. Definito dall'implementazione di comportamenti in OpenMP C/C++ | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: b8d660ca-9bb3-4b6b-87af-45c67d43a731
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 3c0dd06d5b068c53708f40cb3f8287eac7406255
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50055281"
---
# <a name="e-implementation-defined-behaviors-in-openmp-cc"></a>E. Comportamenti definiti dall'implementazione in OpenMP C/C++

In questa appendice vengono riepilogati i comportamenti descritti come "definito dall'implementazione" in questa API.  Ogni comportamento viene fatto un riferimento incrociato alla relativa descrizione nella specifica principale.

## <a name="remarks"></a>Note

Un'implementazione è necessaria definire e documentare il proprio comportamento in questi casi, ma questo elenco potrebbe essere incompleto.

- **Numero di thread:** se un'area parallela viene rilevata durante la regolazione dinamica del numero di thread è disabilitata e il numero di thread richiesti per l'area parallela supera il numero che può fornire il sistema in fase di esecuzione, il comportamento di il programma viene definito dall'implementazione (vedere la pagina 9).

   In Visual C++, per un'area parallela non annidata, 64 thread (il valore massimo) verranno forniti.

- **Numero di processori:** il numero di processori fisici effettivamente che ospita i thread in qualsiasi momento è definito dall'implementazione (vedere la pagina di 10).

   In Visual C++, questo numero non è costante ed è controllato dal sistema operativo.

- **Creazione di team di thread:** il numero di thread in un team che eseguono un'area parallela nidificata viene definito dall'implementazione. ( vedere la pagina di 10).

   In Visual C++, ciò è determinato dal sistema operativo.

- **Schedule (Runtime):** la decisione relativa a pianificazione viene posticipata fino alla fase di esecuzione. Le dimensioni di blocco e tipo di pianificazione possono essere scelto in fase di esecuzione impostando la `OMP_SCHEDULE` variabile di ambiente. Se questa variabile di ambiente non è impostata, la pianificazione risulta viene definito dall'implementazione (vedere la pagina 13).

   In Visual C++, il tipo di pianificazione è `static` con nessuna dimensione del blocco.

- **La pianificazione predefinita:** In assenza della clausola schedule, la pianificazione predefinita è definito dall'implementazione (vedere la pagina 13).

   In Visual C++, è il tipo di pianificazione predefinita `static` con nessuna dimensione del blocco.

- **ATOMICA:** è definito dall'implementazione se un'implementazione sostituisce tutte `atomic` direttive con **critici** direttive che hanno lo stesso nome univoco (vedere la pagina 20).

   In Visual C++, se i dati modificati dal [atomico](../../parallel/openmp/reference/atomic.md) non in un allineamento naturale o se è 1 o 2 byte lungo tutte le operazioni atomiche che soddisfano tale proprietà userà una sezione critica. In caso contrario, le sezioni critiche verranno ignorate.

- **omp_get_num_threads:** se il numero di thread non è stato impostato in modo esplicito dall'utente, il valore predefinito è definito dall'implementazione (consultare la pagina 9, e [sezione 3.1.2](../../parallel/openmp/3-1-2-omp-get-num-threads-function.md) nella pagina 37).

   In Visual C++, il numero predefinito di thread è uguale al numero di processori.

- **omp_set_dynamic:** il valore predefinito per la regolazione dinamica thread è definito dall'implementazione (vedere [sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39).

   In Visual C++, il valore predefinito è `FALSE`.

- **omp_set_nested:** quando è abilitato il parallelismo annidato, il numero di thread usati per l'esecuzione di aree parallele annidate è definito dall'implementazione (vedere [sezione 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) nella pagina 40).

   In Visual C++, il numero di thread è determinato dal sistema operativo.

- `OMP_SCHEDULE` variabile di ambiente: il valore predefinito per questa variabile di ambiente viene definito dall'implementazione (vedere [sezione 4.1](../../parallel/openmp/4-1-omp-schedule.md) nella pagina 48).

   In Visual C++, il tipo di pianificazione è `static` con nessuna dimensione del blocco.

- `OMP_NUM_THREADS` variabile di ambiente: se viene specificato alcun valore per il `OMP_NUM_THREADS` variabile di ambiente o se il valore specificato non è un numero intero positivo, o se il valore è maggiore del numero massimo di thread può supportare il sistema, il numero di thread da usare definito dall'implementazione (vedere [4.2 sezione](../../parallel/openmp/4-2-omp-num-threads.md) nella pagina 48).

   In Visual C++, se il valore specificato è uguale a zero o inferiore, il numero di thread è uguale al numero di processori.  Se il valore è maggiore di 64, il numero di thread è 64.

- `OMP_DYNAMIC` variabile di ambiente: il valore predefinito è definito dall'implementazione (vedere [4.3 sezione](../../parallel/openmp/4-3-omp-dynamic.md) nella pagina 49).

   In Visual C++, il valore predefinito è `FALSE`.