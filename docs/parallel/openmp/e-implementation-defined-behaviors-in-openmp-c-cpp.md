---
description: "Ulteriori informazioni su: E. comportamenti definiti dall'implementazione in OpenMP C/C++"
title: E. Comportamenti definiti dall'implementazione in OpenMP C/C++
ms.date: 01/22/2019
ms.assetid: b8d660ca-9bb3-4b6b-87af-45c67d43a731
ms.openlocfilehash: e8ebc8a336578a888ff8a7152552d4381a9d5add
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97342478"
---
# <a name="e-implementation-defined-behaviors-in-openmp-cc"></a>E. Comportamenti definiti dall'implementazione in OpenMP C/C++

Questa appendice riepiloga i comportamenti descritti come "definito dall'implementazione" in questa API.  Ogni comportamento viene riportato a un riferimento incrociato alla relativa descrizione nella specifica principale.

## <a name="remarks"></a>Commenti

Per definire e documentare il proprio comportamento in questi casi, è necessaria un'implementazione, ma questo elenco potrebbe essere incompleto.

- **Numero di thread:** Se viene rilevata un'area parallela mentre la regolazione dinamica del numero di thread è disabilitata e il numero di thread richiesti per l'area parallela è superiore al numero che il sistema di runtime può fornire, il comportamento del programma viene definito dall'implementazione (vedere la pagina 9).

   In Visual C++, per un'area parallela non nidificata, verranno specificati 64 thread (il massimo).

- **Numero di processori:** Il numero di processori fisici che ospitano effettivamente i thread in un determinato momento è definito dall'implementazione (vedere la pagina 10).

   In Visual C++, questo numero non è costante ed è controllato dal sistema operativo.

- **Creazione di team di thread:** Il numero di thread in un team che esegue un'area parallela nidificata è definito dall'implementazione (vedere la pagina 10).

   In Visual C++, questo numero è determinato dal sistema operativo.

- **pianificazione (Runtime):** La decisione sulla pianificazione viene posticipata fino alla fase di esecuzione. È possibile scegliere il tipo di pianificazione e le dimensioni del blocco in fase di esecuzione impostando la `OMP_SCHEDULE` variabile di ambiente. Se questa variabile di ambiente non è impostata, la pianificazione risultante è definita dall'implementazione (vedere la pagina 13).

   In Visual C++, il tipo di pianificazione è senza `static` dimensioni del blocco.

- **Pianificazione predefinita:** In assenza della clausola Schedule, la pianificazione predefinita è definita dall'implementazione (vedere la pagina 13).

   In Visual C++, il tipo di pianificazione predefinito è `static` senza dimensioni del blocco.

- **Atomic:** È definito dall'implementazione se un'implementazione sostituisce tutte le `atomic` direttive con `critical` direttive con lo stesso nome univoco (vedere la pagina 20).

   In Visual C++, se i dati modificati da [Atomic](reference/openmp-directives.md#atomic) non sono in un allineamento naturale o se sono lunghi uno o due byte, tutte le operazioni atomiche che soddisfano tale proprietà utilizzeranno una sezione critica. In caso contrario, non verranno utilizzate sezioni critiche.

- **[omp_get_num_threads](3-run-time-library-functions.md#312-omp_get_num_threads-function):** Se il numero di thread non è stato impostato in modo esplicito dall'utente, il valore predefinito è definito dall'implementazione (vedere la pagina 9).

   In Visual C++, il numero predefinito di thread è uguale al numero di processori.

- **[omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function):** L'impostazione predefinita per la regolazione dinamica dei thread è definita dall'implementazione.

   In Visual C++, il valore predefinito è `FALSE` .

- **[omp_set_nested](3-run-time-library-functions.md#319-omp_set_nested-function):** Quando è abilitato il parallelismo annidato, il numero di thread utilizzati per eseguire le aree parallele nidificate è definito dall'implementazione.

   In Visual C++, il numero di thread è determinato dal sistema operativo.

- [OMP_SCHEDULE](4-environment-variables.md#41-omp_schedule) variabile di ambiente: il valore predefinito per questa variabile di ambiente è definito dall'implementazione.

   In Visual C++, il tipo di pianificazione è senza `static` dimensioni del blocco.

- [OMP_NUM_THREADS](4-environment-variables.md#42-omp_num_threads) variabile di ambiente: se per la variabile di ambiente non viene specificato alcun valore `OMP_NUM_THREADS` o se il valore specificato non è un numero intero positivo o se il valore è maggiore del numero massimo di thread che il sistema è in grado di supportare, il numero di thread da usare è definito dall'implementazione.

   In Visual C++, se il valore specificato è minore o uguale a zero, il numero di thread è uguale al numero di processori.  Se il valore è maggiore di 64, il numero di thread è 64.

- [OMP_DYNAMIC](4-environment-variables.md#43-omp_dynamic) variabile di ambiente: il valore predefinito è definito dall'implementazione.

   In Visual C++, il valore predefinito è `FALSE` .
