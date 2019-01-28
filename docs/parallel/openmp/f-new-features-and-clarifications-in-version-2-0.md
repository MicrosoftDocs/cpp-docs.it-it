---
title: F. Nuove funzionalità e i chiarimenti nella versione 2.0
ms.date: 01/22/2019
ms.assetid: 0d4beb66-f2d5-468c-8cd3-4b00dcbab061
ms.openlocfilehash: 2e186bbc82f4f43e831dd05cdded2a9e946d1dd2
ms.sourcegitcommit: 382e247c0f1b4cb7c2dab837b8b6fdff24bff47a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/28/2019
ms.locfileid: "55087210"
---
# <a name="f-new-features-and-clarifications-in-version-20"></a>F. Nuove funzionalità e i chiarimenti nella versione 2.0

In questa appendice sono riepilogate le principali modifiche apportate alla specifica OpenMP C/C++ nel passaggio dalla versione 1.0 alla versione 2.0. Gli elementi seguenti sono nuove funzionalità aggiunte alla specifica:

- Le virgole sono consentite nelle OpenMP [direttive](2-directives.md#21-directive-format).

- Aggiunta del `num_threads` clausola. Questa clausola consente agli utenti di richiedere un numero specifico di thread per un [costrutto parallelo](2-directives.md#23-parallel-construct).

- Il [threadprivate](2-directives.md#271-threadprivate-directive) direttiva è stata estesa per accettare le variabili statico dall'ambito del blocco.

- Le matrici a lunghezza variabile C99 sono tipi completi e può essere specificate in un punto qualsiasi tipi completi sono consentiti, ad esempio gli elenchi dei `private`, `firstprivate`, e `lastprivate` clausole (vedere [sezione 2.7.2](2-directives.md#272-data-sharing-attribute-clauses)).

- Una variabile privata in un'area parallela può essere contrassegnata [privato](2-directives.md#2721-private) nuovamente in un'istruzione nidificata.

- Il `copyprivate` clausola è stata aggiunta. Fornisce un meccanismo per usare una variabile privata per la trasmissione di un valore da un membro di un team agli altri membri. Rappresenta un'alternativa all'uso di una variabile condivisa per il valore quando si fornisce questo tipo una variabile condivisa sarebbe difficile (ad esempio, in una ricorsione che richiedono una variabile diversa a ogni livello). Il [copyprivate](2-directives.md#2728-copyprivate) clausola può apparire solo il `single` direttiva.

- Aggiunta di routine di temporizzazione [omp_get_wtick](3-run-time-library-functions.md#332-omp_get_wtick-function) e [omp_get_wtime](3-run-time-library-functions.md#331-omp_get_wtime-function) simile alle routine MPI. Queste funzioni sono necessarie a parete di clock.

- Un'appendice con un elenco delle [comportamenti definiti dall'implementazione](e-implementation-defined-behaviors-in-openmp-c-cpp.md) in OpenMP C/C++ è stato aggiunto. Un'implementazione è necessaria definire e documentare il proprio comportamento in questi casi.

- Le modifiche seguenti hanno per chiarire o correggere le funzionalità della specifica OpenMP API precedente per C/C++:

  - È stato chiarito che il comportamento delle [omp_set_nested](3-run-time-library-functions.md#319-omp_set_nested-function) e [omp_set_dynamic](3-run-time-library-functions.md#317-omp_set_dynamic-function) quando `omp_in_parallel` restituisce diverso da zero non è definito.

  - È stato chiarito [annidamento di direttive](2-directives.md#29-directive-nesting) quando si usa nidificata parallela.

  - Il [bloccare inizializzazione](3-run-time-library-functions.md#321-omp_init_lock-and-omp_init_nest_lock-functions) e [bloccare distruzione](3-run-time-library-functions.md#322-omp_destroy_lock-and-omp_destroy_nest_lock-functions) funzioni possono essere chiamate in un'area parallela.

  - Nuovi esempi sono stati aggiunti al [appendice A](a-examples.md).