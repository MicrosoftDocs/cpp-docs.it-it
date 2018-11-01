---
title: Prevenzione dei conflitti dell'Heap
ms.date: 11/04/2016
helpviewer_keywords:
- heap contention
ms.assetid: 797129d7-5f8c-4b0e-8974-bb93217e9ab5
ms.openlocfilehash: c28e5ba01cc2bb1e3cae19087a67cf97e6ac415f
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50536786"
---
# <a name="avoidance-of-heap-contention"></a>Prevenzione dei conflitti dell'Heap

I gestori di stringa predefinita forniti da MFC e ATL sono semplici wrapper per un heap globale. In questo heap globale è completamente thread-safe, vale a dire che più thread può allocare e liberare la memoria da quest'ultimo contemporaneamente senza danneggiare l'heap. Per offrire la sicurezza dei thread, deve serializzare l'accesso a se stesso heap. Questa operazione viene in genere eseguita con una sezione critica o simile meccanismo di blocco. Ogni volta che due thread tenta di accedere contemporaneamente l'heap, un thread è bloccato finché non viene completata la richiesta di altro. Per molte applicazioni, questa situazione si verifica raramente e l'impatto sulle prestazioni del meccanismo di blocco dell'heap è trascurabile. Tuttavia, per le applicazioni che accedono di frequente l'heap da più thread contesa di blocco dell'heap può provocare l'esecuzione più lenta rispetto a quello a thread singolo (anche su computer con più CPU) dell'applicazione.

Le applicazioni che usano [CStringT](../atl-mfc-shared/reference/cstringt-class.md) sono particolarmente soggetti a conflitti dell'heap perché le operazioni su `CStringT` oggetti richiedono spesso la riallocazione di buffer di stringa.

Per tentare di risolvere conflitti dell'heap tra i thread è che ogni thread di allocare le stringhe da un heap privato, thread-local. Purché le stringhe allocato con allocator un determinato thread vengono usati solo in tale thread, l'allocatore non deve essere thread-safe.

## <a name="example"></a>Esempio

L'esempio seguente illustra una procedura thread che alloca il proprio heap privato non thread-safe da usare per le stringhe in tale thread:

[!code-cpp[NVC_ATLMFC_Utilities#182](../atl-mfc-shared/codesnippet/cpp/avoidance-of-heap-contention_1.cpp)]

## <a name="comments"></a>Commenti

Più thread potrebbero essere in esecuzione usando la stessa procedura di thread, ma poiché ogni thread ha il proprio heap non verifica alcun conflitto tra thread. Inoltre, il fatto che ogni heap non è thread-safe che offre un notevole miglioramento delle prestazioni anche se solo una copia del thread è in esecuzione. Questo è il risultato dell'heap non tramite operazioni interlock costosa per la protezione da accesso simultaneo.

Per una procedura thread più complicata, potrebbe risultare utile archiviare un puntatore al gestore di stringa del thread in uno slot di archiviazione-local (TLS) thread. In questo modo di altre funzioni chiamate dalla routine del thread per accedere al gestore di stringa del thread.

## <a name="see-also"></a>Vedere anche

[Gestione della memoria con CStringT](../atl-mfc-shared/memory-management-with-cstringt.md)

