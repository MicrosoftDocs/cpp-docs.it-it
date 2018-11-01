---
title: Mappe messaggi derivate
ms.date: 11/04/2016
helpviewer_keywords:
- message handling [MFC], derived message handlers
- messages, routing
- message maps [MFC], derived
- derived message maps
ms.assetid: 21829556-6e64-40c3-8279-fed85d99de77
ms.openlocfilehash: 1413290bc04af37a6d3204150dff5244e1dcb5c5
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50662527"
---
# <a name="derived-message-maps"></a>Mappe messaggi derivate

Durante la gestione dei messaggi, controllare la mappa messaggi di una classe non è la fine della storia della mappa messaggi. Cosa accade se classe `CMyView` (derivata da `CView`) non dispone di alcuna voce corrispondente per un messaggio

Tenere presente che `CView`, la classe base di `CMyView`, è derivata a sua volta da `CWnd`. In questo modo `CMyView` *viene* una `CView` e *viene* un `CWnd`. Ognuna di queste classi dispone di una propria mappa messaggi. Nella figura seguente "Gerarchia di una visualizzazione" viene illustrata la relazione gerarchica delle classi, ma occorre tenere presente che un oggetto `CMyView` è un singolo oggetto che ha le caratteristiche di tutte e tre le classi.

![Gerarchia di una vista](../mfc/media/vc38621.gif "vc38621") gerarchia di una visualizzazione

Se pertanto non è possibile trovare la corrispondenza di un messaggio nella mappa messaggi della classe `CMyView`, il framework cerca anche nella mappa messaggi della relativa classe base immediata. La macro `BEGIN_MESSAGE_MAP` all'inizio della mappa messaggi specifica due nomi di classe come argomenti:

[!code-cpp[NVC_MFCMessageHandling#2](../mfc/codesnippet/cpp/derived-message-maps_1.cpp)]

Il primo argomento indica il nome della classe alla quale la mappa messaggi appartiene. Il secondo argomento fornisce una connessione alla classe base immediata, in questo caso `CView`, pertanto il framework può cercare anche nella propria mappa messaggi.

I gestori messaggi forniti in una classe base sono quindi ereditati dalla classe derivata. È molto simile alle normali funzioni membro virtuali, senza la necessità di rendere virtuali tutte le funzioni membro del gestore.

Se nessun gestore viene trovato in una qualsiasi delle mappe messaggi della classe base, viene eseguita l'elaborazione predefinita. Se il messaggio è un comando, viene inviato dal framework alla destinazione di comando successiva. Se si tratta di un messaggio standard di Windows, il messaggio viene passato alla routine della finestra predefinita appropriata.

Per velocizzare la corrispondenza mappa-messaggio, il framework memorizza nella cache le corrispondenze recenti basandosi sulla probabilità che riceverà di nuovo lo stesso messaggio. Un vantaggio di questo comportamento è l'efficienza con cui il framework elabora i messaggi non gestiti. Le mappe messaggi sono anche più efficienti nello spazio delle implementazioni che utilizzano funzioni virtuali.

## <a name="see-also"></a>Vedere anche

[Come vengono cercate le mappe messaggi nel framework](../mfc/how-the-framework-searches-message-maps.md)

