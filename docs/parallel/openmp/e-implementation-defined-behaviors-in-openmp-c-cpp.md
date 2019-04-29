---
title: E. Comportamenti definiti dall'implementazione in OpenMP C/C++
ms.date: 01/22/2019
ms.assetid: b8d660ca-9bb3-4b6b-87af-45c67d43a731
ms.openlocfilehash: 3d8e9493cad1fce02e5d482cd5e612afb44bb37b
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62362757"
---
# <a name="e-implementation-defined-behaviors-in-openmp-cc"></a>E. Comportamenti definiti dall'implementazione in OpenMP C/C++

In questa appendice vengono riepilogati i comportamenti descritti come "definito dall'implementazione" in questa API.  Ogni comportamento viene fatto un riferimento incrociato alla relativa descrizione nella specifica principale.

## <a name="remarks"></a>Note

Un'implementazione è necessaria definire e documentare il proprio comportamento in questi casi, ma questo elenco potrebbe essere incompleto.

- **Numero di thread:** Se un'area parallela viene rilevata durante la regolazione dinamica del numero di thread è disabilitata e il numero di thread richiesti per l'area parallelo è maggiore del numero che può fornire il sistema in fase di esecuzione, il comportamento del programma è definito dall'implementazione (vedere la pagina 9).

   In Visual C++, per un'area parallela non annidata, 64 thread (il valore massimo) verranno forniti.

- **Numero di processori:** Il numero di processori fisici effettivamente che ospita i thread in qualsiasi momento è definito dall'implementazione (vedere la pagina di 10).

   In Visual C++, questo numero non è costante ed è controllato dal sistema operativo.

- **Creazione di team di thread:** Il numero di thread in un team che eseguono un'area parallela nidificata viene definito dall'implementazione (vedere la pagina di 10).

   In Visual C++, questo numero è determinato dal sistema operativo.

- **schedule(runtime):** La decisione sulla pianificazione viene posticipata fino alla fase di esecuzione. Le dimensioni di blocco e tipo di pianificazione possono essere scelto in fase di esecuzione impostando la `OMP_SCHEDULE` variabile di ambiente. Se non viene impostata questa variabile di ambiente, la pianificazione risulta viene definito dall'implementazione (vedere la pagina 13).

   In Visual C++, il tipo di pianificazione è `static` con nessuna dimensione del blocco.

- **Valore predefinito di pianificazione:** In assenza della clausola schedule, la pianificazione predefinita è definito dall'implementazione (vedere la pagina 13).

   In Visual C++, è il tipo di pianificazione predefinita `static` con nessuna dimensione del blocco.

- **ATOMIC:** È definito dall'implementazione se un'implementazione sostituisce tutte `atomic` direttive con `critical` direttive che hanno lo stesso nome univoco (vedere la pagina 20).

   In Visual C++, se i dati modificati dal [atomico](reference/openmp-directives.md#atomic) non su un allineamento naturale o se uno o due byte prolungata, tutte le operazioni atomiche che soddisfano tale proprietà userà una sezione critica. In caso contrario, non verranno utilizzate le sezioni critiche.

- **[omp_get_num_threads](3-run-time-library-functions.md#312-omp_get_num_threads-function):** Se il numero di thread non è stato impostato in modo esplicito dall'utente, il valore predefinito è definito dall'implementazione (vedere la pagina 9).

   In Visual C++, il numero predefinito di thread è uguale al numero di processori.

- **[omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function):** Il valore predefinito per la regolazione dinamica thread è definito dall'implementazione.

   In Visual C++, il valore predefinito è `FALSE`.

- **[omp_set_nested](3-run-time-library-functions.md#319-omp_set_nested-function):** Quando è abilitato il parallelismo annidato, il numero di thread usati per l'esecuzione di aree parallele annidate è definito dall'implementazione.

   In Visual C++, il numero di thread è determinato dal sistema operativo.

- [OMP_SCHEDULE](4-environment-variables.md#41-omp_schedule) variabile di ambiente: Il valore predefinito per questa variabile di ambiente è definito dall'implementazione.

   In Visual C++, il tipo di pianificazione è `static` con nessuna dimensione del blocco.

- [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads) variabile di ambiente: Se viene specificato alcun valore per il `OMP_NUM_THREADS` variabile di ambiente o se il valore specificato non è un numero intero positivo o se il valore è maggiore del numero massimo di thread può supportare il sistema, il numero di thread da usare è definito dall'implementazione.

   In Visual C++, se il valore specificato è uguale a zero o inferiore, il numero di thread è uguale al numero di processori.  Se il valore è maggiore di 64, il numero di thread è 64.

- [OMP_DYNAMIC](4-environment-variables.md#43-omp_dynamic) variabile di ambiente: Il valore predefinito è definito dall'implementazione.

   In Visual C++, il valore predefinito è `FALSE`.