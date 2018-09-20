---
title: Direttive OpenMP | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
dev_langs:
- C++
ms.assetid: 0562c263-344c-466d-843e-de830d918940
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 983a71920e9e7ce390ab8c64e81886db0d459450
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46389448"
---
# <a name="openmp-directives"></a>Direttive OpenMP

Vengono forniti collegamenti alle direttive usati nell'API OpenMP.

Visual C++ supporta le seguenti direttive OpenMP:

|Direttiva|Descrizione|
|---------------|-----------------|
|[atomic](../../../parallel/openmp/reference/atomic.md)|Specifica che una posizione di memoria che verrà aggiornata in modo atomico.|
|[barrier](../../../parallel/openmp/reference/barrier.md)|Sincronizza tutti i thread in un team. tutti i thread Sospendi alla barriera, fino a quando tutti i thread di eseguano la barriera.|
|[critical](../../../parallel/openmp/reference/critical.md)|Specifica che i codice viene eseguito solo in un unico thread alla volta.|
|[flush](../../../parallel/openmp/reference/flush-openmp.md)|Specifica che tutti i thread hanno la stessa visualizzazione di memoria per tutti gli oggetti condivisi.|
|[for](../../../parallel/openmp/reference/for-openmp.md)|Fa sì che il lavoro svolto un ciclo all'interno di un'area parallela da dividere tra thread.|
|[master](../../../parallel/openmp/reference/master.md)|Specifica che solo il master threadshould eseguiti una sezione del programma.|
|[ordered](../../../parallel/openmp/reference/ordered-openmp-directives.md)|Specifica che il codice in un parallelo per ciclo deve essere eseguito, ad esempio un ciclo sequenziale.|
|[parallel](../../../parallel/openmp/reference/parallel.md)|Definisce un'area parallela, ovvero codice che verrà eseguito da più thread in parallelo.|
|[Sezioni](../../../parallel/openmp/reference/sections-openmp.md)|Identifica le sezioni di codice da dividere tra tutti i thread.|
|[single](../../../parallel/openmp/reference/single.md)|Consente di specificare che una sezione di codice deve essere eseguita su un thread singolo, non necessariamente del thread master.|
|[threadprivate](../../../parallel/openmp/reference/threadprivate.md)|Specifica che una variabile privata di un thread.|

## <a name="see-also"></a>Vedere anche

[OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)<br/>
[Clausole](../../../parallel/openmp/reference/openmp-clauses.md)