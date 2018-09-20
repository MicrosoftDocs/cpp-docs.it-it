---
title: F. Nuove funzionalità e i chiarimenti nella versione 2.0 | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 0d4beb66-f2d5-468c-8cd3-4b00dcbab061
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d15cbbf60609208a200bd73536d0ebdc8a714f7e
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46373503"
---
# <a name="f-new-features-and-clarifications-in-version-20"></a>F. Nuove funzionalità e i chiarimenti nella versione 2.0

In questa appendice sono riepilogate le principali modifiche apportate alla specifica OpenMP C/C++ nel passaggio dalla versione 1.0 alla versione 2.0. Gli elementi seguenti sono nuove funzionalità aggiunte alla specifica:

- Le virgole sono consentite nelle direttive OpenMP ([sezione 2.1](../../parallel/openmp/2-1-directive-format.md) nella pagina 7).

- Aggiunta del `num_threads` clausola. Questa clausola consente agli utenti di richiedere un numero specifico di thread per un costrutto parallelo ([sezione 2.3](../../parallel/openmp/2-3-parallel-construct.md) nella pagina 8).

- Il `threadprivate` direttiva è stata estesa per accettare le variabili statiche in ambito blocco ([sezione 2.7.1](../../parallel/openmp/2-7-1-threadprivate-directive.md) nella pagina 23).

- Le matrici a lunghezza variabile C99 sono tipi completi e pertanto può essere specificate in un punto qualsiasi tipi completi sono consentiti, ad esempio negli elenchi dei `private`, `firstprivate`, e `lastprivate` clausole ([sezione 2.7.2](../../parallel/openmp/2-7-2-data-sharing-attribute-clauses.md) a pagina 25).

- Una variabile privata in un'area parallela può essere contrassegnato come privata nuovamente in un'istruzione nidificata ([sezione 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) a pagina 25).

- Il `copyprivate` clausola è stata aggiunta. Fornisce un meccanismo per usare una variabile privata per la trasmissione di un valore da un membro di un team agli altri membri. Rappresenta un'alternativa all'uso di una variabile condivisa per il valore quando si fornisce questo tipo una variabile condivisa sarebbe difficile (ad esempio, in una ricorsione che richiedono una variabile diversa a ogni livello). Il `copyprivate` clausola può apparire solo il **singola** direttiva ([sezione 2.7.2.8](../../parallel/openmp/2-7-2-8-copyprivate.md) nella pagina 32).

- Aggiunta di routine di temporizzazione `omp_get_wtick` e `omp_get_wtime` simile alle routine MPI. Queste funzioni sono necessarie per l'esecuzione di clock wall ([sezione 3.3.1](../../parallel/openmp/3-3-1-omp-get-wtime-function.md) nella pagina 44 e [sezione 3.3.2](../../parallel/openmp/3-3-2-omp-get-wtick-function.md) nella pagina 45).

- È stata aggiunta un'appendice con un elenco di comportamenti definiti dall'implementazione in OpenMP C/C++. Un'implementazione è necessaria definire e documentare il proprio comportamento in questi casi ([appendice](../../parallel/openmp/e-implementation-defined-behaviors-in-openmp-c-cpp.md) nella pagina 97).

- Le modifiche seguenti hanno per chiarire o correggere le funzionalità della specifica OpenMP API precedente per C/C++:

   - È stato chiarito che il comportamento delle `omp_set_nested` e `omp_set_dynamic` quando `omp_in_parallel` restituisce diverso da zero è indefinito ([sezione 3.1.7](../../parallel/openmp/3-1-7-omp-set-dynamic-function.md) nella pagina 39, e [sezione 3.1.9](../../parallel/openmp/3-1-9-omp-set-nested-function.md) nella pagina 40).

   - È stato chiarito annidamento di direttive quando si usa parallelo nidificata ([sezione 2.9](../../parallel/openmp/2-9-directive-nesting.md) nella pagina 33).

   - Le funzioni di eliminazione blocco inizializzazione e di blocco possono essere chiamate in un'area parallela ([sezione 3.2.1](../../parallel/openmp/3-2-1-omp-init-lock-and-omp-init-nest-lock-functions.md) nella pagina 42 e [sezione 3.2.2](../../parallel/openmp/3-2-2-omp-destroy-lock-and-omp-destroy-nest-lock-functions.md) nella pagina 42).

   - Sono stati aggiunti nuovi esempi ([appendice A](../../parallel/openmp/a-examples.md) nella pagina 51).