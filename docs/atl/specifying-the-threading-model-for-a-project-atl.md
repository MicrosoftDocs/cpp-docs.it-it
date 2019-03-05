---
title: Specifica di un modello di threading per un progetto (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- _ATL_FREE_THREADED macro
- _ATL_APARTMENT_THREADED macro
- ATL, multithreading
- threading [ATL], models
- _ATL_SINGLE_THREADED macro
ms.assetid: 6b571078-521c-4f3e-9f08-482aa235a822
ms.openlocfilehash: 69c1c80bba0b09ce69e0b9b9b27296ef2508e60b
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57326062"
---
# <a name="specifying-the-threading-model-for-a-project-atl"></a>Specifica di un modello di threading per un progetto (ATL)

Le macro seguenti sono disponibili per specificare il modello di threading di un progetto ATL:

|Macro|Linee guida per l'utilizzo|
|-----------|--------------------------|
|_ATL_SINGLE_THREADED|Specificare se tutti gli oggetti utilizzano il modello di threading singolo.|
|_ATL_APARTMENT_THREADED|Definire se uno o più degli oggetti di usare il threading apartment.|
|_ATL_FREE_THREADED|Definire se uno o più degli oggetti di usare il threading libero o neutrale. Il codice esistente può contenere riferimenti alla macro equivalente [ATL_MULTI_THREADED](reference/compiler-options-macros.md#_atl_multi_threaded).|

Se non si definisce uno qualsiasi di queste macro per il progetto, _ATL_FREE_THREADED saranno in vigore.

Le macro influiscono sulle prestazioni di runtime come indicato di seguito:

- Specificare la macro che corrisponde agli oggetti nel progetto, è possibile migliorare le prestazioni in fase di esecuzione.

- Specifica un livello superiore di una macro, ad esempio se si specifica ATL_APARTMENT_THREADED quando tutti gli oggetti sono a thread singolo, verrà leggermente influire negativamente sulle prestazioni in fase di esecuzione.

- Specifica un livello inferiore di una macro, ad esempio, se si specifica ATL_SINGLE_THREADED quando uno o più degli oggetti di usare il threading apartment o modello di threading free, può causare l'errore in fase di esecuzione dell'applicazione.

Visualizzare [Creazione guidata oggetto semplice ATL, opzioni](../atl/reference/options-atl-simple-object-wizard.md) per una descrizione del threading modelli disponibili per un oggetto ATL.

## <a name="see-also"></a>Vedere anche

[Concetti](../atl/active-template-library-atl-concepts.md)
