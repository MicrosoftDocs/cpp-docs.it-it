---
title: Prevenzione dei conflitti nell'Heap | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- heap contention
ms.assetid: 797129d7-5f8c-4b0e-8974-bb93217e9ab5
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: f17f73efc8fba19bb129e3b118f8a4357444aad0
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="avoidance-of-heap-contention"></a>Prevenzione dei conflitti nell'Heap
I gestori di stringa predefinita forniti da MFC e ATL sono semplici wrapper su un heap globale. Questo heap globale è completamente thread-safe, vale a dire che più thread può allocare e liberare memoria da esso contemporaneamente senza danneggiare l'heap. Per facilitare la protezione dei thread, l'heap deve serializzare l'accesso a se stessa. Questa operazione viene in genere eseguita con una sezione critica o un meccanismo di blocco simile. Ogni volta che due thread tentano di accedere all'heap simultaneamente, un thread viene bloccato fino al termine di richiesta del thread. Per molte applicazioni, questa situazione si verifica raramente e l'impatto sulle prestazioni del meccanismo di blocco dell'heap è irrilevante. Tuttavia, per le applicazioni che si accedono di frequente l'heap da più thread contesa di blocco dell'heap può provocare l'esecuzione più lenta rispetto a quello a thread singolo (anche in computer con più CPU) dell'applicazione.  
  
 Le applicazioni che utilizzano [CStringT](../atl-mfc-shared/reference/cstringt-class.md) sono particolarmente sensibili a una contesa di heap perché le operazioni su `CStringT` oggetti richiedono spesso riassegnazione del buffer di stringa.  
  
 Un modo per risolvere i conflitti nell'heap tra thread è allocare stringhe da un heap privato e locale di thread per ogni thread. Purché le stringhe allocate con allocatore di un determinato thread vengono usati solo in tale thread, l'allocatore non deve essere thread-safe.  
  
## <a name="example"></a>Esempio  
 Nell'esempio seguente viene illustrata una procedura thread che consente di allocare il proprio heap privato non thread-safe da usare per le stringhe su tale thread:  
  
 [!code-cpp[NVC_ATLMFC_Utilities#182](../atl-mfc-shared/codesnippet/cpp/avoidance-of-heap-contention_1.cpp)]  
  
## <a name="comments"></a>Commenti  
 Più thread potrebbero essere in esecuzione utilizzando la stessa procedura di thread, ma poiché ogni thread ha il proprio heap non vi è alcun conflitto tra thread. Inoltre, il fatto che ogni heap non è thread-safe fornisce un sensibile miglioramento delle prestazioni anche se solo una copia del thread è in esecuzione. Questo è il risultato dell'heap non utilizza le operazioni interlocked costose per proteggere l'accesso simultaneo.  
  
 Per una procedura thread più complessa, potrebbe risultare utile archiviare un puntatore al gestore di stringhe del thread in uno slot di thread (TLS) di archiviazione locale. In questo modo di altre funzioni chiamate dalla routine del thread di accedere a gestione di stringa del thread.  
  
## <a name="see-also"></a>Vedere anche  
 [Gestione della memoria con CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)

