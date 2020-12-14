---
description: 'Altre informazioni su: TN040: MFC/OLE In-Place ridimensionamento e zoom'
title: 'TN040: MFC-OLE In-Place ridimensionamento e zoom'
ms.date: 11/04/2016
helpviewer_keywords:
- resizing in-place
- TN040
- zooming and in-place activation
- in-place activation, zooming and resizing
ms.assetid: 4d7859bd-0b2e-4254-be62-2735cecf02c6
ms.openlocfilehash: e21b70dc10ee467f94386880255287218a3b6e99
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97215391"
---
# <a name="tn040-mfcole-in-place-resizing-and-zooming"></a>TN040: ridimensionamento sul posto e zoom MFC/OLE

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota verranno illustrati i problemi relativi alla modifica sul posto e il modo in cui un server deve eseguire lo zoom corretto e il ridimensionamento sul posto. Con l'attivazione sul posto, il concetto WYSIWYG viene sottoposto a un ulteriore passaggio in quanto i contenitori e i server cooperano tra loro e, in particolare, interpretano la specifica OLE nello stesso modo.

A causa della chiusura dell'interazione tra un contenitore e un server che supporta l'attivazione sul posto, è necessario mantenere un certo numero di aspettative dall'utente finale:

- La visualizzazione della presentazione (il metafile disegnato nella `COleServerItem::OnDraw` sostituzione) dovrebbe essere esattamente identica a quando viene disegnata per la modifica (ad eccezione del fatto che gli strumenti di modifica non sono visibili).

- Quando si esegue lo zoom del contenitore, anche la finestra del server.

- Sia il contenitore che il server devono visualizzare gli oggetti per la modifica usando le stesse metriche. Ciò significa usare una modalità di mapping basata sul numero di pixel *logici* per pollice, non su pixel fisici per pollice, durante il rendering sul dispositivo di visualizzazione.

> [!NOTE]
> Poiché l'attivazione sul posto si applica solo agli elementi incorporati (non collegati), lo zoom si applica solo agli oggetti incorporati. Verranno visualizzate le API in `COleServerDoc` e `COleServerItem` utilizzate per lo zoom. Il motivo di questa dicotomia è che solo le funzioni valide per gli elementi collegati e incorporati sono in `COleServerItem` (in questo modo è possibile disporre di un'implementazione comune) e le funzioni che sono valide solo per gli oggetti incorporati si trovano nella `COleServerDoc` classe (dal punto di vista del server, è il **documento** incorporato).

La maggior parte degli oneri si trova nell'implementatore del server, in quanto il server deve essere in grado di riconoscere il fattore di zoom del contenitore e di modificare l'interfaccia di modifica in base alle esigenze. Ma in che modo il server determina il fattore di zoom usato dal contenitore

## <a name="mfc-support-for-zooming"></a>Supporto MFC per lo zoom

Il fattore di zoom corrente può essere determinato chiamando `COleServerDoc::GetZoomFactor` . Quando il documento non è attivo sul posto, il risultato sarà sempre un fattore di zoom 100% (o un rapporto 1:1). La chiamata mentre il posto attivo può restituire un valore diverso dal 100%.

Per un esempio di zoom corretta, vedere l'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md). Lo zoom in HIERSVR è complicato dal fatto che Visualizza il testo e il testo, in generale, non viene ridimensionato in modo lineare (hint, convenzioni tipografiche, larghezze di progettazione e altezze complicano tutti la questione). Tuttavia, HIERSVR è un riferimento ragionevole per l'implementazione corretta dello zoom, quindi è lo [Scribble](../overview/visual-cpp-samples.md) dell'esercitazione MFC (passaggio 7).

`COleServerDoc::GetZoomFactor` determina il fattore di zoom basato su una serie di metriche diverse disponibili dal contenitore o dall'implementazione delle `COleServerItem` `COleServerDoc` classi e. In breve, il fattore di zoom corrente è determinato dalla formula seguente:

```
Position Rectangle (PR) / Container Extent (CE)
```

Il rettangolo di posizione è determinato dal contenitore. Viene restituito al server durante l'attivazione sul posto quando `COleClientItem::OnGetItemPosition` viene chiamato e viene aggiornato quando il contenitore chiama il server `COleServerDoc::OnSetItemRects` con una chiamata a `COleClientItem::SetItemRects` .

L'EXTENT del contenitore è leggermente più complesso da calcolare. Se il contenitore ha chiamato `COleServerItem::OnSetExtent` (con una chiamata a `COleClientItem::SetExtent` ), l'extent del contenitore è questo valore convertito in pixel in base al numero di pixel per pollice logico. Se il contenitore non ha chiamato l'extent (che corrisponde in genere al caso), l'EXTENT del contenitore corrisponde alla dimensione restituita da `COleServerItem::OnGetExtent` . Quindi, se il contenitore non ha chiamato l'extent, il Framework presuppone che se il contenitore lo avesse chiamato con il 100% dell'extent naturale (il valore restituito da `COleServerItem::GetExtent` ). Detto un altro modo, il Framework presuppone che il contenitore visualizzi il 100% (non più, nessun minore) dell'elemento.

È importante notare che, anche se `COleServerItem::OnSetExtent` e `COleServerItem::OnGetExtent` hanno nomi simili, non modificano lo stesso attributo dell'elemento. `OnSetExtent` viene chiamato per consentire al server di conoscere la quantità dell'oggetto visibile nel contenitore (indipendentemente dal fattore di zoom) e `OnGetExtent` viene chiamato dal contenitore per determinare le dimensioni ideali dell'oggetto.

Esaminando tutte le API necessarie, è possibile ottenere un'immagine più chiara:

## <a name="coleserveritemongetextent"></a>COleServerItem:: OnGetExtent

Questa funzione deve restituire le "dimensioni naturali" nelle unità HIMETRIC dell'elemento. Il modo migliore per considerare la "dimensione naturale" consiste nel definirlo come le dimensioni che potrebbero essere visualizzate durante la stampa. Le dimensioni restituite qui sono costanti per un particolare contenuto dell'elemento, come il metafile, che è costante per un particolare elemento. Questa dimensione non cambia quando viene applicato lo zoom all'elemento. In genere non viene modificato quando il contenitore restituisce più o meno spazio quando si chiama `OnSetExtent` . Un esempio di una modifica può essere quello di un semplice editor di testo senza funzionalità "Margin" che ha eseguito il wrappeding del testo in base all'ultimo extent inviato dal contenitore. Se viene modificato un server, il server deve probabilmente impostare il bit OLEMISC_RECOMPOSEONRESIZE nel registro di sistema. per altre informazioni su questa opzione, vedere la documentazione di OLE SDK.

## <a name="coleserveritemonsetextent"></a>COleServerItem:: OnSetExtent

Questa funzione viene chiamata quando il contenitore Visualizza "più o meno" dell'oggetto. La maggior parte dei contenitori non lo chiamerà affatto. L'implementazione predefinita archivia l'ultimo valore ricevuto dal contenitore in ' m_sizeExtent ', che viene usato in `COleServerDoc::GetZoomFactor` durante il calcolo del valore dell'extent del contenitore descritto in precedenza.

## <a name="coleserverdoconsetitemrects"></a>COleServerDoc:: OnSetItemRects

Questa funzione viene chiamata solo quando il documento è attivo sul posto. Viene chiamato quando il contenitore aggiorna la posizione dell'elemento o il ritaglio applicato all'elemento. Il rettangolo di posizione, come illustrato in precedenza, fornisce il numeratore per il calcolo del fattore di zoom. Un server può richiedere la modifica della posizione dell'elemento chiamando `COleServerDoc::RequestPositionChange` . Il contenitore può rispondere a questa richiesta chiamando `OnSetItemRects` (con una chiamata a `COleServerItem::SetItemRects` ).

## <a name="coleserverdocondraw"></a>COleServerDoc:: onpare

È importante tenere presente che il metafile creato eseguendo l'override di `COleServerItem::OnDraw` produce esattamente lo stesso metafile, indipendentemente dal fattore di zoom corrente. Il contenitore ridimensiona il metafile nel modo appropriato. Si tratta di una differenza importante tra la visualizzazione `OnDraw` e l'elemento del server `OnDraw` . La vista gestisce lo zoom, l'elemento crea semplicemente un metafile *Zoomable* e lo lascia al contenitore per eseguire lo zoom appropriato.

Il modo migliore per garantire che il server si comporta correttamente consiste nell'usare l'implementazione di `COleServerDoc::GetZoomFactor` se il documento è attivo sul posto.

## <a name="mfc-support-for-in-place-resizing"></a>Supporto MFC per il ridimensionamento di In-Place

MFC implementa completamente l'interfaccia di ridimensionamento sul posto, come descritto nella specifica OLE 2. L'interfaccia utente è supportata dalla `COleResizeBar` classe, un messaggio personalizzato WM_SIZECHILD e una gestione speciale di questo messaggio in `COleIPFrameWnd` .

Potrebbe essere necessario implementare una gestione diversa di questo messaggio rispetto a quanto fornito dal Framework. Come descritto in precedenza, il Framework lascia i risultati del ridimensionamento sul posto fino al contenitore, il server risponde alla modifica nel fattore di zoom. Se il contenitore reagisce impostando l'EXTENT del contenitore e il rettangolo di posizione durante l'elaborazione del relativo `COleClientItem::OnChangeItemPosition` (chiamato in seguito a una chiamata a `COleServerDoc::RequestPositionChange` ), il ridimensionamento sul posto comporterà la visualizzazione di "più o meno" dell'elemento nella finestra di modifica. Se il contenitore reagisce semplicemente impostando il rettangolo di posizione durante l'elaborazione di `COleClientItem::OnChangeItemPosition` , il fattore di zoom cambierà e l'elemento verrà visualizzato "zoom avanti o indietro".

Un server può controllare (a un certo livello) cosa accade durante la negoziazione. Un foglio di calcolo, ad esempio, può scegliere di mostrare più o meno celle quando l'utente ridimensiona la finestra durante la modifica dell'elemento sul posto. Un elaboratore di testo può scegliere di modificare i margini di pagina in modo che corrispondano alla finestra ed esegue il ritorno a capo del testo al nuovo margine. I server implementano questo oggetto modificando l'extent naturale (la dimensione restituita da `COleServerItem::OnGetExtent` ) quando viene eseguito il ridimensionamento. In questo modo, sia il rettangolo di posizione che l'EXTENT del contenitore cambiano in base alla stessa quantità, ottenendo lo stesso fattore di zoom, ma un'area di visualizzazione più grande o più piccola. Inoltre, più o meno del documento sarà visibile nel metafile generato da `OnDraw` . In questo caso, il documento viene modificato quando l'utente ridimensiona l'elemento, anziché solo l'area di visualizzazione.

È possibile implementare il ridimensionamento personalizzato e sfruttare ancora l'interfaccia utente fornita da `COleResizeBar` eseguendo l'override del messaggio WM_SIZECHILD nella `COleIPFrameWnd` classe. Per ulteriori informazioni sulle specifiche di WM_SIZECHILD, vedere la [Nota tecnica 24](../mfc/tn024-mfc-defined-messages-and-resources.md).

## <a name="see-also"></a>Vedi anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
