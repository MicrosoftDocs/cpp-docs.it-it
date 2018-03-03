---
title: 2.7.2 attributi per la condivisione di dati clausole | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
ms.assetid: 47347d3c-18bd-441f-99cf-7737564c417f
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: c63ece0feea0426fffbafa600f578e342e85fc2c
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="272-data-sharing-attribute-clauses"></a>2.7.2 Clausole di attributi per la condivisione di dati
Diverse direttive accettano clausole che consentono all'utente di controllare gli attributi di condivisione delle variabili per la durata dell'area. Condivisione delle clausole di attributi si applicano solo a variabili dell'extent lessicale della direttiva in cui viene visualizzata la clausola. Non tutte le clausole seguenti sono consentite in tutte le direttive. L'elenco di clausole che sono validi in una direttiva particolare sono descritti con la direttiva.  
  
 Se una variabile è visibile quando un'operazione parallela o viene rilevato il costrutto di condivisione del lavoro e la variabile non è specificata in una clausola di attributo condivisione o **threadprivate** direttiva, quindi la variabile è condivisa. Le variabili statiche dichiarate all'interno di extent dinamica di un'area parallela vengono condivisi. Heap di memoria (ad esempio, usando **malloc ()** in C o C++ o **nuova** operatore in C++) è condivisa. (Il puntatore alla memoria, tuttavia, possa essere privati o condivisi.) Le variabili con durata di archiviazione automatica dichiarata all'interno di extent dinamica di un'area parallela sono private.  
  
 La maggior parte delle clausole di accettare un *elenco variabili* argomento, ovvero un elenco delimitato da virgole delle variabili che sono visibili. Se una variabile a cui fa riferimento una clausola di attributo la condivisione dei dati è un tipo derivato da un modello e non sono presenti altri riferimenti a tale variabile nel programma, il comportamento sarà indefinito.  
  
 Tutte le variabili che vengono visualizzati in clausole di direttiva devono essere visibile. Le clausole possono essere ripetute in base alle necessità, ma nessuna variabile può essere specificata in più clausole, ad eccezione del fatto che una variabile può essere specificata sia in un **firstprivate** e **lastprivate** clausola.  
  
 Le sezioni seguenti descrivono le clausole di attributi per la condivisione dei dati:  
  
-   **privato**, [sezione 2.7.2.1](../../parallel/openmp/2-7-2-1-private.md) nella pagina 25.  
  
-   **firstprivate**, [sezione 2.7.2.2](../../parallel/openmp/2-7-2-2-firstprivate.md) nella pagina 26.  
  
-   **lastprivate**, [sezione 2.7.2.3](../../parallel/openmp/2-7-2-3-lastprivate.md) nella pagina 27.  
  
-   **condiviso**, [sezione 2.7.2.4](../../parallel/openmp/2-7-2-4-shared.md) nella pagina 27.  
  
-   **predefinito**, [sezione 2.7.2.5](../../parallel/openmp/2-7-2-5-default.md) nella pagina 28.  
  
-   **riduzione**, [sezione 2.7.2.6](../../parallel/openmp/2-7-2-6-reduction.md) nella pagina 28.  
  
-   **copyin**, [sezione 2.7.2.7](../../parallel/openmp/2-7-2-7-copyin.md) nella pagina 31.  
  
-   **copyprivate**, [sezione 2.7.2.8](../../parallel/openmp/2-7-2-8-copyprivate.md) nella pagina 32.