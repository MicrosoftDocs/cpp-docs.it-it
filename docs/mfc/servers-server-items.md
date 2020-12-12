---
description: 'Ulteriori informazioni su: Server: elementi server'
title: 'Server: elementi server'
ms.date: 11/04/2016
helpviewer_keywords:
- server items, implementing
- servers [MFC], server items
- architecture [MFC], server-item
- server items
- OLE server applications [MFC], server items
ms.assetid: 28ba81a1-726a-4728-a52d-68bc7efd5a3c
ms.openlocfilehash: e3fceb3abe89ca6cda432d60441a47fc0d452cfc
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97217315"
---
# <a name="servers-server-items"></a>Server: elementi server

Quando un contenitore avvia un server in modo che l'utente possa modificare un elemento OLE incorporato o collegato, l'applicazione server crea un "elemento server". L'elemento server, ovvero un oggetto di una classe derivata da `COleServerItem`, fornisce un'interfaccia tra il documento server e l'applicazione contenitore.

La classe `COleServerItem` definisce diverse funzioni membro di cui è possibile eseguire l'override che vengono chiamate da OLE, in genere in risposta alle richieste del contenitore. Gli elementi server possono rappresentare una parte o l'intero documento server. Quando un elemento OLE è incorporato nel documento contenitore, l'elemento server rappresenta l'intero documento server. Quando l'elemento OLE è collegato, l'elemento server può rappresentare una parte del documento server o l'intero documento, a seconda che il collegamento sia verso una parte o l'intero documento.

Nell'esempio [HIERSVR](../overview/visual-cpp-samples.md) , ad esempio, la classe server-Item, `CServerItem` , dispone di un membro che è un puntatore a un oggetto della classe `CServerNode` . L' `CServerNode` oggetto è un nodo del documento dell'applicazione HIERSVR, che è un albero. Quando l' `CServerNode` oggetto è il nodo radice, l' `CServerItem` oggetto rappresenta l'intero documento. Quando l' `CServerNode` oggetto è un nodo figlio, l' `CServerItem` oggetto rappresenta una parte del documento. Per un esempio di questa interazione, vedere l'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md) .

## <a name="implementing-server-items"></a><a name="_core_implementing_server_items"></a> Implementazione di elementi server

Se si utilizza la creazione guidata applicazione per scrivere il codice "di avvio" dell'applicazione, per includere gli elementi server nel codice di avvio è sufficiente scegliere una delle opzioni server dalla pagina Opzioni OLE. Se si aggiungono elementi server a un'applicazione esistente, attenersi ai passaggi indicati di seguito:

#### <a name="to-implement-a-server-item"></a>Per implementare un elemento server

1. Derivare una classe da `COleServerItem`.

1. Nella classe derivata, eseguire l'override della funzione membro `OnDraw`.

   Il framework chiama `OnDraw` per eseguire il rendering dell'elemento OLE in un metafile. L'applicazione contenitore utilizza tale metafile per eseguire il rendering dell'elemento. La classe di visualizzazione dell'applicazione dispone inoltre di una funzione membro `OnDraw`, utilizzata per eseguire il rendering dell'elemento quando l'applicazione server è attiva.

1. Implementare un override di `OnGetEmbeddedItem` per la classe documento server. Per ulteriori informazioni, vedere l'articolo [Server: implementazione di documenti server](../mfc/servers-implementing-server-documents.md) e l'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md).

1. Implementare la funzione membro `OnGetExtent` della classe dell'elemento server. Il framework chiama questa funzione per recuperare la dimensione dell'elemento. L'implementazione predefinita non esegue alcuna operazione.

## <a name="a-tip-for-server-item-architecture"></a><a name="_core_a_tip_for_server.2d.item_architecture"></a> Un suggerimento per l'architettura Server-Item

Come indicato in [implementazione di elementi server](#_core_implementing_server_items), le applicazioni server devono essere in grado di eseguire il rendering degli elementi nella visualizzazione del server e in un metafile utilizzato dall'applicazione contenitore. Nell'architettura dell'applicazione libreria Microsoft Foundation Class, la funzione membro della classe di visualizzazione `OnDraw` esegue il rendering dell'elemento durante la modifica (vedere [CView:: ondisegnare](../mfc/reference/cview-class.md#ondraw) nei riferimenti alla *libreria di classi*). L'elemento del server `OnDraw` esegue il rendering dell'elemento in un metafile in tutti gli altri casi (vedere [COleServerItem:: ondisegnare](../mfc/reference/coleserveritem-class.md#ondraw)).

È possibile evitare la duplicazione del codice scrivendo funzioni di supporto nella classe del documento server e chiamandole dalle funzioni `OnDraw` nelle classi dell'elemento server e di visualizzazione. Il [HIERSVR](../overview/visual-cpp-samples.md) di esempio OLE MFC usa questa strategia: le funzioni `CServerView::OnDraw` e `CServerItem::OnDraw` entrambe chiamano `CServerDoc::DrawTree` per eseguire il rendering dell'elemento.

La visualizzazione e l'elemento hanno entrambi funzioni membro `OnDraw`, perché eseguono il disegno in circostanze diverse. La visualizzazione deve considerare fattori quali lo zoom, la dimensione e l'ambito di selezione, il ritaglio e gli elementi dell'interfaccia utente quali le barre di scorrimento. L'elemento server, invece, disegna sempre l'intero oggetto OLE.

Per altre informazioni, vedere [CView:: onpare](../mfc/reference/cview-class.md#ondraw), [COleServerItem](../mfc/reference/coleserveritem-class.md), [COleServerItem:: onpare](../mfc/reference/coleserveritem-class.md#ondraw)e [COleServerDoc:: OnGetEmbeddedItem](../mfc/reference/coleserverdoc-class.md#ongetembeddeditem) nei riferimenti alla *libreria di classi*.

## <a name="see-also"></a>Vedi anche

[Server](../mfc/servers.md)
