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
ms.openlocfilehash: 5b3427f7bb2e46435ddf2768bcbb816f9d7e5c1a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81371599"
---
# <a name="creating-stack-and-queue-collections"></a>Creazione di raccolta Stack e Code

In questo articolo viene illustrato come creare altre strutture di dati, ad esempio [stack](#_core_stacks) e [code](#_core_queues), dalle classi elenco MFC. Negli esempi vengono `CList`utilizzate classi derivate da , ma è possibile utilizzarle `CList` direttamente a meno che non sia necessario aggiungere funzionalità.

## <a name="stacks"></a><a name="_core_stacks"></a>Pile

Poiché la raccolta di elenchi standard ha sia un'intestazione che una coda, è facile creare una raccolta di elenchi derivata che simula il comportamento di uno stack last-in-first-out. Una pila è come una pila di vassoi in una caffetteria. Come vassoi vengono aggiunti alla pila, vanno in cima alla pila. L'ultimo vassoio aggiunto è il primo ad essere rimosso. Le funzioni `AddHead` membro `RemoveHead` della raccolta list e possono essere utilizzate per aggiungere e rimuovere elementi in modo specifico dall'intestazione dell'elenco; pertanto, l'elemento aggiunto più di recente è il primo da rimuovere.

#### <a name="to-create-a-stack-collection"></a>Per creare una raccolta di stackTo create a stack collection

1. Derivare una nuova classe elenco da una delle classi elenco MFC esistenti e aggiungere altre funzioni membro per supportare la funzionalità delle operazioni dello stack.

   L'esempio seguente mostra come aggiungere funzioni membro per inserire elementi nello stack, visualizzare l'elemento superiore dello stack ed eseguire il pop dell'elemento superiore dallo stack:

   [!code-cpp[NVC_MFCCollections#20](../mfc/codesnippet/cpp/creating-stack-and-queue-collections_1.h)]

Si noti che questo `CObList` approccio espone la classe sottostante. L'utente può `CObList` chiamare qualsiasi funzione membro, se ha senso per uno stack o meno.

## <a name="queues"></a>Code di <a name="_core_queues"></a>

Poiché la raccolta di elenchi standard ha sia un'intestazione che una coda, è anche facile creare una raccolta di elenchi derivata che simula il comportamento di una coda first-in-first-out. Una coda è come una fila di persone in una caffetteria. La prima persona in fila è la prima ad essere servita. Come sempre più persone vengono, vanno alla fine della linea di aspettare il loro turno. Le funzioni `AddTail` membro `RemoveHead` della raccolta list e possono essere utilizzate per aggiungere e rimuovere elementi in modo specifico dall'intestazione o dalla coda dell'elenco; pertanto, l'elemento aggiunto più di recente è sempre l'ultimo da rimuovere.

#### <a name="to-create-a-queue-collection"></a>Per creare una raccolta di codeTo create a queue collection

1. Derivare una nuova classe elenco da una delle classi di elenco predefinite fornite con la libreria Microsoft Foundation Class e aggiungere altre funzioni membro per supportare la semantica delle operazioni di coda.

   Nell'esempio seguente viene illustrato come aggiungere funzioni membro per aggiungere un elemento alla fine della coda e ottenere l'elemento dalla parte anteriore della coda.

   [!code-cpp[NVC_MFCCollections#21](../mfc/codesnippet/cpp/creating-stack-and-queue-collections_2.h)]

## <a name="see-also"></a>Vedere anche

[Raccolte](../mfc/collections.md)
