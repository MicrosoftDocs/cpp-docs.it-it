---
title: 'Server: elementi server'
ms.date: 11/04/2016
helpviewer_keywords:
- server items, implementing
- servers [MFC], server items
- architecture [MFC], server-item
- server items
- OLE server applications [MFC], server items
ms.assetid: 28ba81a1-726a-4728-a52d-68bc7efd5a3c
ms.openlocfilehash: 8ae24104a30a0b44e92b889006907911124310f7
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81355105"
---
# <a name="servers-server-items"></a>Server: elementi server

Quando un contenitore avvia un server in modo che l'utente possa modificare un elemento OLE incorporato o collegato, l'applicazione server crea un "elemento server". L'elemento server, ovvero un oggetto di una classe derivata da `COleServerItem`, fornisce un'interfaccia tra il documento server e l'applicazione contenitore.

La classe `COleServerItem` definisce diverse funzioni membro di cui è possibile eseguire l'override che vengono chiamate da OLE, in genere in risposta alle richieste del contenitore. Gli elementi server possono rappresentare una parte o l'intero documento server. Quando un elemento OLE è incorporato nel documento contenitore, l'elemento server rappresenta l'intero documento server. Quando l'elemento OLE è collegato, l'elemento server può rappresentare una parte del documento server o l'intero documento, a seconda che il collegamento sia verso una parte o l'intero documento.

Nell'esempio [HIERSVR,](../overview/visual-cpp-samples.md) ad esempio, la `CServerItem`classe dell'elemento server , , dispone `CServerNode`di un membro che è un puntatore a un oggetto della classe . L'oggetto `CServerNode` è un nodo nel documento dell'applicazione HIERSVR, che è un albero. Quando `CServerNode` l'oggetto è il `CServerItem` nodo radice, l'oggetto rappresenta l'intero documento. Quando `CServerNode` l'oggetto è un `CServerItem` nodo figlio, l'oggetto rappresenta una parte del documento. Vedere l'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md) per un esempio di questa interazione.

## <a name="implementing-server-items"></a><a name="_core_implementing_server_items"></a>Implementazione di elementi serverImplementing Server Items

Se si utilizza la creazione guidata applicazione per scrivere il codice "di avvio" dell'applicazione, per includere gli elementi server nel codice di avvio è sufficiente scegliere una delle opzioni server dalla pagina Opzioni OLE. Se si aggiungono elementi server a un'applicazione esistente, attenersi ai passaggi indicati di seguito:

#### <a name="to-implement-a-server-item"></a>Per implementare un elemento server

1. Derivare una classe da `COleServerItem`.

1. Nella classe derivata, eseguire l'override della funzione membro `OnDraw`.

   Il framework chiama `OnDraw` per eseguire il rendering dell'elemento OLE in un metafile. L'applicazione contenitore utilizza tale metafile per eseguire il rendering dell'elemento. La classe di visualizzazione dell'applicazione dispone inoltre di una funzione membro `OnDraw`, utilizzata per eseguire il rendering dell'elemento quando l'applicazione server è attiva.

1. Implementare un override di `OnGetEmbeddedItem` per la classe documento server. Per ulteriori informazioni, vedere l'articolo [Server: implementazione di documenti server](../mfc/servers-implementing-server-documents.md) e l'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md).

1. Implementare la funzione membro `OnGetExtent` della classe dell'elemento server. Il framework chiama questa funzione per recuperare la dimensione dell'elemento. L'implementazione predefinita non esegue alcuna operazione.

## <a name="a-tip-for-server-item-architecture"></a><a name="_core_a_tip_for_server.2d.item_architecture"></a>Un suggerimento per l'architettura degli elementi server

Come indicato in [Implementazione](#_core_implementing_server_items)di elementi server , le applicazioni server devono essere in grado di eseguire il rendering degli elementi sia nella visualizzazione del server che in un metafile utilizzato dall'applicazione contenitore. Nell'architettura dell'applicazione della libreria Microsoft Foundation `OnDraw` Class, la funzione membro della classe di visualizzazione esegue il rendering dell'elemento durante la modifica (vedere [CView::OnDraw](../mfc/reference/cview-class.md#ondraw) in *Class Library Reference*). Il rendering dell'elemento `OnDraw` server viene eseguito in un metafile in tutti gli altri casi (vedere [COleServerItem::OnDraw](../mfc/reference/coleserveritem-class.md#ondraw)).

È possibile evitare la duplicazione del codice scrivendo funzioni di supporto nella classe del documento server e chiamandole dalle funzioni `OnDraw` nelle classi dell'elemento server e di visualizzazione. L'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md) utilizza `CServerView::OnDraw` `CServerItem::OnDraw` questa `CServerDoc::DrawTree` strategia: le funzioni ed entrambe chiamano per eseguire il rendering dell'elemento.

La visualizzazione e l'elemento hanno entrambi funzioni membro `OnDraw`, perché eseguono il disegno in circostanze diverse. La visualizzazione deve considerare fattori quali lo zoom, la dimensione e l'ambito di selezione, il ritaglio e gli elementi dell'interfaccia utente quali le barre di scorrimento. L'elemento server, invece, disegna sempre l'intero oggetto OLE.

Per ulteriori informazioni, vedere [CView::OnDraw](../mfc/reference/cview-class.md#ondraw), [COleServerItem](../mfc/reference/coleserveritem-class.md), [COleServerItem::OnDraw](../mfc/reference/coleserveritem-class.md#ondraw)e [COleServerDoc::OnGetEmbeddedItem](../mfc/reference/coleserverdoc-class.md#ongetembeddeditem) in *Class Library Reference*.

## <a name="see-also"></a>Vedere anche

[Server](../mfc/servers.md)
