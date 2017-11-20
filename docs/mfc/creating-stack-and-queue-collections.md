---
title: Creazione di raccolte di Stack e coda | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
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
caps.latest.revision: "10"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.openlocfilehash: 9d2f21d64aaafb133aa756c4ada472bf6cde9c23
ms.sourcegitcommit: ebec1d449f2bd98aa851667c2bfeb7e27ce657b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2017
---
# <a name="creating-stack-and-queue-collections"></a>Creazione di raccolta Stack e Code
In questo articolo viene illustrato come creare altre strutture di dati, ad esempio [stack](#_core_stacks) e [code](#_core_queues), elenco classi MFC. Negli esempi vengono utilizzate le classi derivate da `CList`, ma è possibile utilizzare `CList` direttamente a meno che non è necessario aggiungere la funzionalità.  
  
##  <a name="_core_stacks"></a>Stack  
 Poiché la raccolta dell'elenco standard ha un'intestazione e da una coda, è facile creare una raccolta derivata che simula il comportamento di un oggetto stack last-in-first-out. Uno stack è simile a una pila di cassetti in un self-service:. Se cassetti vengono aggiunti allo stack, escono all'inizio dello stack. L'ultimo vassoio aggiunto è il primo da rimuovere. Le funzioni membro di raccolta elenco `AddHead` e `RemoveHead` può essere utilizzato per aggiungere e rimuovere elementi dalla head dell'elenco; in questo modo, l'ultimo aggiunto elemento è il primo da rimuovere.  
  
#### <a name="to-create-a-stack-collection"></a>Per creare una raccolta di stack  
  
1.  Derivare una nuova classe di elenco da una delle classi MFC elenco esistenti e aggiungere altre funzioni membro per supportare la funzionalità operazioni dello stack.  
  
     Nell'esempio seguente viene illustrato come aggiungere le funzioni membro per inserire gli elementi nello stack, visualizzazione in corrispondenza dell'elemento superiore dello stack e visualizzare il primo elemento dallo stack:  
  
     [!code-cpp[NVC_MFCCollections#20](../mfc/codesnippet/cpp/creating-stack-and-queue-collections_1.h)]  
  
 Si noti che questo approccio espone sottostante `CObList` classe. L'utente può chiamare qualsiasi `CObList` funzione membro, se è utile per lo stack o non.  
  
##  <a name="_core_queues"></a>Code  
 Poiché la raccolta dell'elenco standard ha un'intestazione e da una coda, è facile creare una raccolta derivata che simula il comportamento di una coda first-in-first-out. Una coda è una linea di persone in un self-service:. Il primo utente nella riga è la prima di essere servite. I nuovi arrivati, passano alla fine della riga di attesa a loro volta. Le funzioni membro di raccolta elenco `AddTail` e `RemoveHead` può essere utilizzato per aggiungere e rimuovere elementi dalla testa o dalla coda dell'elenco; in questo modo, l'ultimo aggiunto elemento è sempre l'ultimo da rimuovere.  
  
#### <a name="to-create-a-queue-collection"></a>Per creare un insieme di code  
  
1.  Derivare una nuova classe di elenco da una delle classi di elenco predefinite fornite con la libreria Microsoft Foundation Class e aggiungere altre funzioni membro per supportare la semantica di operazioni di coda.  
  
     Nell'esempio seguente viene illustrato come è possibile aggiungere le funzioni membro per aggiungere un elemento alla fine della coda e ottenere l'elemento dalla parte anteriore della coda.  
  
     [!code-cpp[NVC_MFCCollections#21](../mfc/codesnippet/cpp/creating-stack-and-queue-collections_2.h)]  
  
## <a name="see-also"></a>Vedere anche  
 [Raccolte](../mfc/collections.md)

