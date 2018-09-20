---
title: Clausole OpenMP | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-parallel
ms.topic: reference
dev_langs:
- C++
ms.assetid: 806e7d8f-b204-4e4c-a12c-273ab540a7ca
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: afd0a8f66f9b0d027671629998597955b3aa69e9
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46378334"
---
# <a name="openmp-clauses"></a>Clausole OpenMP

Fornisce collegamenti alle clausole utilizzate nell'API OpenMP.

Visual C++ supporta le clausole OpenMP seguente:

|Clausola|Descrizione|
|------------|-----------------|
|[copyin](../../../parallel/openmp/reference/copyin.md)|Consente ai thread di accedere a valore del thread master, per un [threadprivate](../../../parallel/openmp/reference/threadprivate.md) variabile.|
|[copyprivate](../../../parallel/openmp/reference/copyprivate.md)|Specifica che una o più variabili devono essere condivise tra tutti i thread.|
|[default](../../../parallel/openmp/reference/default-openmp.md)|Specifica il comportamento delle variabili senza ambite in un'area parallela.|
|[firstprivate](../../../parallel/openmp/reference/firstprivate.md)|Specifica che ogni thread deve avere una propria istanza di una variabile, e che è necessario inizializzare la variabile con il valore della variabile, perché è presente prima del costrutto parallelo.|
|[if](../../../parallel/openmp/reference/if-openmp.md)|Specifica se un ciclo deve essere eseguito in parallelo o in serie.|
|[lastprivate](../../../parallel/openmp/reference/lastprivate.md)|Specifica che la versione del contesto di inclusione della variabile è impostata uguale a quella privata di qualsiasi thread esegue l'iterazione finale (costrutto di ciclo for) o l'ultima sezione (#pragma sezioni).|
|[nowait](../../../parallel/openmp/reference/nowait.md)|Esegue l'override la barriera implicita una direttiva.|
|[num_threads](../../../parallel/openmp/reference/num-threads.md)|Imposta il numero di thread in un gruppo di thread.|
|[ordered](../../../parallel/openmp/reference/ordered-openmp-clauses.md)|Obbligatorio in un'operazione parallela [per](../../../parallel/openmp/reference/for-openmp.md) istruzione se un' [ordinati](../../../parallel/openmp/reference/ordered-openmp-directives.md) direttiva deve essere utilizzato nel ciclo.|
|[private](../../../parallel/openmp/reference/private-openmp.md)|Specifica che ogni thread deve avere una propria istanza di una variabile.|
|[reduction](../../../parallel/openmp/reference/reduction.md)|Specifica che una o più variabili private per ogni thread sono l'oggetto di un'operazione di riduzione alla fine di tale area.|
|[schedule](../../../parallel/openmp/reference/schedule.md)|Viene applicata il [per](../../../parallel/openmp/reference/for-openmp.md) direttiva.|
|[shared](../../../parallel/openmp/reference/shared-openmp.md)|Specifica che una o più variabili devono essere condivise tra tutti i thread.|

## <a name="see-also"></a>Vedere anche

[OpenMP](../../../parallel/openmp/openmp-in-visual-cpp.md)<br/>
[Direttive](../../../parallel/openmp/reference/openmp-directives.md)