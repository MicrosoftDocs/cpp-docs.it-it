---
title: Creazione di raccolta Stack e Code
ms.date: 11/04/2016
helpviewer_keywords:
- MFC collection classes [MFC], stack collections
- collections, stack
- stack
- collection classes [MFC], creating
- queue collections
- MFC collection classes [MFC], queue collections
- stack collections
- collections, queue
ms.assetid: 3c7bc198-35f0-4fc3-aaed-6005a0f22638
ms.openlocfilehash: 5db90422f78fc6ca3bc2a182f9569c33db56cad1
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84623213"
---
# <a name="creating-stack-and-queue-collections"></a>Creazione di raccolta Stack e Code

Questo articolo illustra come creare altre strutture di dati, ad esempio [stack](#_core_stacks) e [Code](#_core_queues), da classi di elenco MFC. Negli esempi vengono utilizzate classi derivate da `CList` , ma è possibile utilizzare direttamente, a meno che non `CList` sia necessario aggiungere funzionalità.

## <a name="stacks"></a><a name="_core_stacks"></a>Pile

Poiché la raccolta di elenchi standard include sia un Head che una coda, è facile creare una raccolta di elenchi derivata che simula il comportamento di uno stack Last-in-First-out. Uno stack è simile a uno stack di vassoi in una caffetteria. Man mano che si aggiungono vassoi allo stack, vengono inseriti in cima allo stack. L'ultimo cassetto aggiunto è il primo da rimuovere. Le funzioni membro della raccolta di elenchi `AddHead` e `RemoveHead` possono essere usate per aggiungere e rimuovere elementi in modo specifico dall'inizio dell'elenco; pertanto, l'elemento aggiunto più di recente è il primo da rimuovere.

#### <a name="to-create-a-stack-collection"></a>Per creare una raccolta di stack

1. Derivare una nuova classe List da una delle classi di elenco MFC esistenti e aggiungere altre funzioni membro per supportare la funzionalità delle operazioni dello stack.

   Nell'esempio seguente viene illustrato come aggiungere funzioni membro per inserire elementi nello stack, visualizzare l'elemento superiore dello stack e estrarre l'elemento superiore dallo stack:

   [!code-cpp[NVC_MFCCollections#20](codesnippet/cpp/creating-stack-and-queue-collections_1.h)]

Si noti che questo approccio espone la `CObList` classe sottostante. L'utente può chiamare qualsiasi `CObList` funzione membro, indipendentemente dal fatto che abbia senso per uno stack.

## <a name="queues"></a>Code di <a name="_core_queues"></a>

Poiché la raccolta di elenchi standard dispone sia di un Head che di una coda, è anche facile creare una raccolta di elenchi derivata che simula il comportamento di una coda First-in-First-out. Una coda è simile a una linea di persone in una caffetteria. Il primo utente in linea è il primo a essere servito. Man mano che arrivano più persone, passano alla fine della riga per attendere il loro turno. Le funzioni membro della raccolta di elenchi `AddTail` e `RemoveHead` possono essere usate per aggiungere e rimuovere elementi in modo specifico dall'inizio o dalla parte finale dell'elenco; pertanto, l'elemento aggiunto più di recente è sempre l'ultimo da rimuovere.

#### <a name="to-create-a-queue-collection"></a>Per creare una raccolta di code

1. Derivare una nuova classe List da una delle classi di elenco predefinite fornite con il libreria Microsoft Foundation Class e aggiungere altre funzioni membro per supportare la semantica delle operazioni della coda.

   Nell'esempio seguente viene illustrato come è possibile aggiungere funzioni membro per aggiungere un elemento alla fine della coda e ottenere l'elemento dall'inizio della coda.

   [!code-cpp[NVC_MFCCollections#21](codesnippet/cpp/creating-stack-and-queue-collections_2.h)]

## <a name="see-also"></a>Vedere anche

[raccolte](collections.md)
