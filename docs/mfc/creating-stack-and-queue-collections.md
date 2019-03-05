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
ms.openlocfilehash: ed0ad9b98a69e56df4e66b25bc6ca08cdaaad413
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57301467"
---
# <a name="creating-stack-and-queue-collections"></a>Creazione di raccolta Stack e Code

Questo articolo illustra come creare altre strutture di dati, ad esempio [stack](#_core_stacks) e [code](#_core_queues), elencare le classi da MFC. Gli esempi usano le classi derivate da `CList`, ma è possibile usare `CList` direttamente a meno che non è necessario aggiungere la funzionalità.

##  <a name="_core_stacks"></a> Stack

Poiché la raccolta list standard dispone di un elemento head e da una coda, è facile creare una raccolta derivata che simula il comportamento di uno stack last-in-first-out. Uno stack è simile a uno stack di alloggiamenti in un self-service:. Man mano che cassetti vengono aggiunti allo stack, escono all'inizio dello stack. La barra delle applicazioni ultimo aggiunto è il primo da rimuovere. Le funzioni membro di raccolta elenco `AddHead` e `RemoveHead` può essere utilizzato per aggiungere e rimuovere elementi in modo specifico dall'inizio dell'elenco; in questo modo, l'ultimo aggiunto elemento è il primo da rimuovere.

#### <a name="to-create-a-stack-collection"></a>Per creare una raccolta di stack

1. Derivare una nuova classe di elenco da una delle classi MFC elenco esistenti e aggiungere altre funzioni membro per supportare la funzionalità di operazioni di stack.

   Nell'esempio seguente viene illustrato come aggiungere le funzioni membro per inserire elementi nello stack, consultare l'elemento superiore dello stack e visualizzare l'elemento superiore dello stack:

   [!code-cpp[NVC_MFCCollections#20](../mfc/codesnippet/cpp/creating-stack-and-queue-collections_1.h)]

Si noti che questo approccio espone sottostante `CObList` classe. L'utente può chiamare qualsiasi `CObList` funzione membro, se è opportuno per uno stack o No.

##  <a name="_core_queues"></a> Code

Poiché la raccolta list standard dispone di un elemento head e da una coda, è anche facile creare una raccolta derivata che simula il comportamento di una coda first-in-first-out. Una coda è simile a una linea di persone in un self-service:. La prima persona in linea è la prima di essere servite. I nuovi arrivati, passano alla fine della riga a loro volta di attesa. Le funzioni membro di raccolta elenco `AddTail` e `RemoveHead` può essere utilizzato per aggiungere e rimuovere elementi in modo specifico dal head o della parte finale dell'elenco; in questo modo, l'ultimo aggiunto elemento sia sempre l'ultimo da rimuovere.

#### <a name="to-create-a-queue-collection"></a>Per creare una raccolta di coda

1. Derivare una nuova classe di elenco da una delle classi elenco predefinito fornite con la libreria Microsoft Foundation Class e aggiungere altre funzioni membro per supportare la semantica delle operazioni di Accodamento.

   Nell'esempio seguente viene illustrato come è possibile aggiungere le funzioni membro per aggiungere un elemento alla fine della coda e ottenere l'elemento dalla parte anteriore della coda.

   [!code-cpp[NVC_MFCCollections#21](../mfc/codesnippet/cpp/creating-stack-and-queue-collections_2.h)]

## <a name="see-also"></a>Vedere anche

[Raccolte](../mfc/collections.md)
