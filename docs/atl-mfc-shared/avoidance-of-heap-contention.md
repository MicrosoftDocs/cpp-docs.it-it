---
description: 'Altre informazioni su: evitare la contesa di heap'
title: Prevenzione della contesa di heap
ms.date: 11/04/2016
helpviewer_keywords:
- heap contention
ms.assetid: 797129d7-5f8c-4b0e-8974-bb93217e9ab5
ms.openlocfilehash: c58849bee46dd0d870d1067f17581429339fbc0e
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97142571"
---
# <a name="avoidance-of-heap-contention"></a>Prevenzione della contesa di heap

I gestori di stringhe predefiniti forniti da MFC e ATL sono wrapper semplici su un heap globale. Questo heap globale è completamente thread-safe, vale a dire che più thread possono allocare e liberare memoria da tale heap contemporaneamente senza danneggiare l'heap. Per fornire thread safety, l'heap deve serializzare l'accesso a se stesso. Questa operazione viene in genere eseguita con una sezione critica o un meccanismo di blocco simile. Ogni volta che due thread tentano di accedere all'heap contemporaneamente, un thread viene bloccato fino a quando non viene completata la richiesta dell'altro thread. Per molte applicazioni, questa situazione si verifica raramente e l'effetto sulle prestazioni del meccanismo di blocco dell'heap è trascurabile. Tuttavia, per le applicazioni che accedono spesso all'heap da più conflitti di thread per il blocco dell'heap può causare un rallentamento dell'esecuzione dell'applicazione rispetto a quella a thread singolo (anche su computer con più CPU).

Le applicazioni che utilizzano [CStringT](../atl-mfc-shared/reference/cstringt-class.md) sono particolarmente vulnerabili alla contesa di heap, perché le operazioni sugli `CStringT` oggetti richiedono spesso la riallocazione del buffer di stringa.

Un modo per attenuare la contesa dell'heap tra i thread prevede che ogni thread allochi le stringhe da un heap privato locale di thread. Fino a quando le stringhe allocate con l'allocatore di un determinato thread vengono usate solo in quel thread, l'allocatore non deve essere thread-safe.

## <a name="example"></a>Esempio

Nell'esempio seguente viene illustrata una routine thread che alloca il proprio heap non thread-safe privato da usare per le stringhe su tale thread:

[!code-cpp[NVC_ATLMFC_Utilities#182](../atl-mfc-shared/codesnippet/cpp/avoidance-of-heap-contention_1.cpp)]

## <a name="comments"></a>Commenti

È possibile eseguire più thread utilizzando questa stessa procedura di thread, ma poiché ogni thread presenta un proprio heap, non esiste alcuna contesa tra i thread. Inoltre, il fatto che ogni heap non sia thread-safe garantisce un aumento misurabile delle prestazioni anche se è in esecuzione una sola copia del thread. Questo è il risultato dell'heap che non usa operazioni Interlocked costose per la protezione dall'accesso simultaneo.

Per una procedura di thread più complessa, può essere utile archiviare un puntatore al gestore di stringhe del thread in uno slot di archiviazione locale di thread (TLS). Ciò consente ad altre funzioni chiamate dalla procedura del thread di accedere al gestore di stringhe del thread.

## <a name="see-also"></a>Vedi anche

[Gestione della memoria con CStringt](../atl-mfc-shared/memory-management-with-cstringt.md)
