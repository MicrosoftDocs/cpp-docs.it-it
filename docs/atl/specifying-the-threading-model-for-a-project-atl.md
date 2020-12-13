---
description: 'Ulteriori informazioni su: specifica del modello di threading per un progetto (ATL)'
title: Specifica di un modello di threading per un progetto (ATL)
ms.date: 11/04/2016
helpviewer_keywords:
- _ATL_FREE_THREADED macro
- _ATL_APARTMENT_THREADED macro
- ATL, multithreading
- threading [ATL], models
- _ATL_SINGLE_THREADED macro
ms.assetid: 6b571078-521c-4f3e-9f08-482aa235a822
ms.openlocfilehash: 81bf8413a2118797ec0e0c177a06468b8e3c7ba0
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97138476"
---
# <a name="specifying-the-threading-model-for-a-project-atl"></a>Specifica di un modello di threading per un progetto (ATL)

Per specificare il modello di threading di un progetto ATL sono disponibili le macro seguenti:

|Macro|Linee guida per l'utilizzo di|
|-----------|--------------------------|
|_ATL_SINGLE_THREADED|Definire se tutti gli oggetti utilizzano il modello a thread singolo.|
|_ATL_APARTMENT_THREADED|Definire se uno o più oggetti utilizzano il threading dell'Apartment.|
|_ATL_FREE_THREADED|Definire se uno o più oggetti utilizzano un Threading libero o neutro. Il codice esistente può contenere riferimenti all' [_ATL_MULTI_THREADED](reference/compiler-options-macros.md#_atl_multi_threaded)macro equivalente.|

Se non si definisce nessuna di queste macro per il progetto, _ATL_FREE_THREADED sarà attiva.

Le macro influiscono sulle prestazioni in fase di esecuzione, come indicato di seguito:

- La specifica della macro che corrisponde agli oggetti nel progetto può migliorare le prestazioni in fase di esecuzione.

- Se si specifica un livello di macro superiore, ad esempio se si specifica _ATL_APARTMENT_THREADED quando tutti gli oggetti sono a thread singolo, le prestazioni in fase di esecuzione diminuiranno leggermente.

- Se si specifica un livello inferiore della macro, ad esempio se si specifica _ATL_SINGLE_THREADED quando uno o più oggetti utilizzano il threading di Apartment o il threading libero, l'applicazione potrebbe non riuscire in fase di esecuzione.

Per una descrizione dei modelli di threading disponibili per un oggetto ATL [, vedere Opzioni, creazione guidata oggetto semplice ATL](../atl/reference/options-atl-simple-object-wizard.md) .

## <a name="see-also"></a>Vedi anche

[Concetti](../atl/active-template-library-atl-concepts.md)
