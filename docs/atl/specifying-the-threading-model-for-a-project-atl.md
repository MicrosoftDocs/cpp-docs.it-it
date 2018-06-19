---
title: Specifica il modello di Threading per un progetto (ATL) | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- _ATL_FREE_THREADED macro
- _ATL_APARTMENT_THREADED macro
- ATL, multithreading
- threading [ATL], models
- _ATL_SINGLE_THREADED macro
ms.assetid: 6b571078-521c-4f3e-9f08-482aa235a822
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 6f807aa82a62fb703430ace5bc6be516e08ca9dc
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32359636"
---
# <a name="specifying-the-threading-model-for-a-project-atl"></a>Specifica di un modello di threading per un progetto (ATL)
Le macro seguenti sono disponibili per specificare il modello di threading di un progetto ATL:  
  
|Macro|Linee guida per l'utilizzo|  
|-----------|--------------------------|  
|ATL_SINGLE_THREADED|Specificare se tutti gli oggetti utilizzano il modello di threading singolo.|  
|ATL_APARTMENT_THREADED|Definire se uno o più degli oggetti usano il threading apartment.|  
|ATL_FREE_THREADED|Definire se uno o più degli oggetti di utilizzo di threading free o neutral. Il codice esistente può contenere riferimenti alla macro equivalente [ATL_MULTI_THREADED](reference/compiler-options-macros.md#_atl_multi_threaded).|  
  
 Se non si definisce uno qualsiasi di queste macro per il progetto, ATL_FREE_THREADED sarà più attivo.  
  
 Le macro delle prestazioni in fase di esecuzione come indicato di seguito:  
  
-   Specifica la macro che corrisponde agli oggetti nel progetto, è possibile migliorare le prestazioni in fase di esecuzione.  
  
-   Specifica un livello superiore di una macro, ad esempio, se si specifica ATL_APARTMENT_THREADED quando tutti gli oggetti sono a thread singolo, leggermente influirà negativamente sulle prestazioni di runtime.  
  
-   Specifica un livello inferiore di una macro, ad esempio, se si specifica ATL_SINGLE_THREADED quando uno o più degli oggetti di usare il threading apartment o free, può causare l'errore in fase di esecuzione dell'applicazione.  
  
 Vedere [opzioni, creazione guidata oggetto semplice ATL](../atl/reference/options-atl-simple-object-wizard.md) per una descrizione del threading modelli disponibili per un oggetto ATL.  
  
## <a name="see-also"></a>Vedere anche  
 [Concetti](../atl/active-template-library-atl-concepts.md)

