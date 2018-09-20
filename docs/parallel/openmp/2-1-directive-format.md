---
title: 2.1 formato direttive | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 918b6445-d35e-4176-9565-b045be941b4d
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 1b2f2d2f5742dbc4faa1d8386e935c9d4ccc8049
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46424651"
---
# <a name="21-directive-format"></a>2.1 Formato direttive

La sintassi di una direttiva OpenMP è formalmente specificata per il controllo grammaticale nel [appendice C](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md)e informale come indicato di seguito:

```
#pragma omp directive-name  [clause[ [,] clause]...] new-line
```

Ogni direttiva inizia con **omp #pragma**, per ridurre il rischio di conflitti con altre direttive pragma (estensioni del fornitore o non OpenMP e OpenMP) con gli stessi nomi. Il resto della direttiva segue le convenzioni degli standard C e C++ per le direttive del compilatore. In particolare, lo spazio vuoto può essere utilizzato prima e dopo il **#**, e talvolta gli spazi vuoti devono essere usati per separare le parole in una direttiva. Pre-elaborazione token seguendo la **omp #pragma** sono soggette a sostituzione della macro.

Le direttive sono tra maiuscole e minuscole. L'ordine in cui le clausole vengono visualizzati nelle direttive non è significativo. Le clausole in istruzioni possono essere ripetute in base alle esigenze, soggetto alle restrizioni elencate nella descrizione di ogni clausola. Se *elenco di variabili* viene visualizzato in una clausola, è necessario specificare solo le variabili. Un solo *nome-direttiva* può essere specificato per ogni direttiva.  Ad esempio, non è consentita la direttiva seguente:

```
/* ERROR - multiple directive names not allowed */
#pragma omp parallel barrier
```

Una direttiva OpenMP verrà applicata al massimo una successiva istruzione, che deve essere un blocco strutturato.