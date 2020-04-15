---
title: 'TN040: ridimensionamento sul posto e zoom MFC-OLE'
ms.date: 11/04/2016
helpviewer_keywords:
- resizing in-place
- TN040
- zooming and in-place activation
- in-place activation, zooming and resizing
ms.assetid: 4d7859bd-0b2e-4254-be62-2735cecf02c6
ms.openlocfilehash: 65f9ef04c9740e8e6f0a8e72d9d6c39008198755
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81372159"
---
# <a name="tn040-mfcole-in-place-resizing-and-zooming"></a>TN040: ridimensionamento sul posto e zoom MFC/OLE

> [!NOTE]
> La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

Questa nota illustra i problemi relativi alla modifica sul posto e come un server deve eseguire lo zoom corretto e il ridimensionamento sul posto. Con l'attivazione sul posto, il concetto di WYSIWYG viene fatto un ulteriore passo avanti in quanto i contenitori e i server cooperano tra loro e, in particolare, interpretano la specifica OLE più o meno allo stesso modo.

A causa della stretta interazione tra un contenitore e un server che supporta l'attivazione sul posto, l'utente finale deve mantenere una serie di aspettative:

- La visualizzazione della presentazione (il `COleServerItem::OnDraw` metafile disegnato nella sostituzione) dovrebbe essere esattamente uguale a quando viene disegnata per la modifica (ad eccezione del fatto che gli strumenti di modifica non sono visibili).

- Quando il contenitore ingrandisce, anche la finestra del server dovrebbe farlo!

- Sia il contenitore che il server devono visualizzare gli oggetti per la modifica utilizzando le stesse metriche. Ciò significa utilizzare una modalità di mappatura basata sul numero di pixel *logici* per pollice, non su pixel fisici per pollice, durante il rendering sul dispositivo di visualizzazione.

> [!NOTE]
> Poiché l'attivazione sul posto si applica solo agli elementi incorporati (non collegati), lo zoom si applica solo agli oggetti incorporati. Vedrai le API in `COleServerDoc` entrambi `COleServerItem` e che vengono usate per lo zoom. La ragione di questa dicotomia è che solo le funzioni valide sia per gli elementi collegati che per quelli incorporati sono `COleServerItem` `COleServerDoc` in (questo consente di avere un'implementazione comune) e le funzioni che sono valide solo per gli oggetti incorporati si trovano nella classe (dal punto di vista del server, è il **documento** che è incorporato).

La maggior parte dell'onere è posto sull'implementatore del server, in quanto il server deve essere a conoscenza del fattore di zoom del contenitore e modificare l'interfaccia di modifica in base alle esigenze. Ma come fa il server determinare il fattore di zoom che il contenitore sta utilizzando

## <a name="mfc-support-for-zooming"></a>Supporto MFC per lo zoom

Il fattore di zoom `COleServerDoc::GetZoomFactor`corrente può essere determinato chiamando . Se si chiama questo metodo quando il documento non è attivo sul posto, si tradurrà sempre in un fattore di zoom del 100% (o rapporto 1:1). Chiamarlo mentre sul posto attivo può restituire qualcosa di diverso da 100%.

Per un esempio di zoom corretto, vedere l'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md). Lo zoom in HIERSVR è complicato dal fatto che visualizza testo e il testo, in generale, non viene ridimensionato in modo lineare (suggerimenti, convenzioni tipografiche, larghezze di progettazione e altezze complicano la questione). Tuttavia, HIERSVR è un riferimento ragionevole per l'implementazione corretta dello zoom e lo è anche l'esercitazione MFC [SCRIBBLE](../overview/visual-cpp-samples.md) (passaggio 7).

`COleServerDoc::GetZoomFactor`determina il fattore di zoom in base a una serie di `COleServerItem` `COleServerDoc` metriche diverse disponibili dal contenitore o dall'implementazione delle classi e . In breve, il fattore di zoom corrente è determinato dalla seguente formula:

```
Position Rectangle (PR) / Container Extent (CE)
```

Il RECTANGLE POSITION è determinato dal contenitore. Viene restituito al server durante l'attivazione sul posto quando `COleClientItem::OnGetItemPosition` viene chiamato e `COleServerDoc::OnSetItemRects` viene aggiornato `COleClientItem::SetItemRects`quando il contenitore chiama il server (con una chiamata a ).

Il CONTAINER EXTENT è leggermente più complesso da calcolare. Se il contenitore ha `COleServerItem::OnSetExtent` chiamato `COleClientItem::SetExtent`(con una chiamata a ), l'estensione CONTAINER è questo valore convertito in pixel in base al numero di pixel per pollice logico. Se il contenitore non ha chiamato SetExtent (che in genere è `COleServerItem::OnGetExtent`il caso), l'estensione CONTAINER è la dimensione restituita da . Pertanto, se il contenitore non ha chiamato SetExtent, il framework presuppone che se lo avesse fatto il contenitore lo avrebbe chiamato con il 100% dell'estensione naturale (il valore restituito da `COleServerItem::GetExtent`). In altre parole, il framework presuppone che il contenitore visualizzi il 100% (non più, non meno) dell'elemento.

È importante notare `COleServerItem::OnSetExtent` che, sebbene e `COleServerItem::OnGetExtent` abbiano nomi simili, non modificano lo stesso attributo dell'elemento. `OnSetExtent`viene chiamato per infrendere il server di quanto dell'oggetto è visibile `OnGetExtent` nel contenitore (indipendentemente dal fattore di zoom) e viene chiamato dal contenitore per determinare le dimensioni ideali dell'oggetto.

Esaminando ognuna delle API coinvolte, è possibile ottenere un quadro più chiaro:By looking at each of the APIs involved, you can get a clearer:

## <a name="coleserveritemongetextent"></a>COleServerItem::OnGetExtent (informazioni in base alla proprietà del computer)

Questa funzione deve restituire la "dimensione naturale" in unità HIMETRIC dell'articolo. Il modo migliore per pensare alla "dimensione naturale" è definirlo come la dimensione che potrebbe apparire quando viene stampato. La dimensione restituita qui è costante per un particolare contenuto dell'elemento (molto simile al metafile, che è costante per un particolare elemento). Questa dimensione non cambia quando lo zoom viene applicato all'elemento. In genere non cambia quando il contenitore concede `OnSetExtent`all'elemento più o meno spazio chiamando . Un esempio di modifica potrebbe essere quello di un semplice editor di testo senza funzionalità di "margine" che ha eseguito il wrapping del testo in base all'ultimo extent inviato dal contenitore. Se un server viene modificato, il server deve probabilmente impostare il bit di OLEMISC_RECOMPOSEONRESIZE nel Registro di sistema (vedere la documentazione di OLE SDK per ulteriori informazioni su questa opzione).

## <a name="coleserveritemonsetextent"></a>COleServerItem::OnSetExtent (Informazioni in base alle informazioni in questo insieme dei prodotti)

Questa funzione viene chiamata quando il contenitore mostra "più o meno" dell'oggetto. La maggior parte dei contenitori non lo chiamerà affatto. L'implementazione predefinita archivia l'ultimo valore ricevuto dal `COleServerDoc::GetZoomFactor` contenitore in 'm_sizeExtent', che viene utilizzato quando si calcola il valore CONTAINER EXTENT descritto in precedenza.

## <a name="coleserverdoconsetitemrects"></a>COleServerDoc::OnSetItemRects

Questa funzione viene chiamata solo quando il documento è attivo sul posto. Viene chiamato quando il contenitore aggiorna la posizione dell'elemento o il ritaglio applicato all'elemento. Il POSITION RECTANGLE, come illustrato in precedenza, fornisce il numeratore per il calcolo del fattore di zoom. Un server può richiedere la modifica `COleServerDoc::RequestPositionChange`della posizione dell'elemento chiamando . Il contenitore può rispondere o meno `OnSetItemRects` a questa `COleServerItem::SetItemRects`richiesta chiamando (con una chiamata a ).

## <a name="coleserverdocondraw"></a>COleServerDoc::OnDraw

È importante rendersi conto che il `COleServerItem::OnDraw` metafile creato eseguendo l'override di produce esattamente lo stesso metafile, indipendentemente dal fattore di zoom corrente. Il contenitore ridimensionerà il metafile in base alle esigenze. Si tratta di un'importante `OnDraw` distinzione tra la `OnDraw`visualizzazione e l'elemento server. La visualizzazione gestisce lo zoom, l'elemento crea solo un metafile *zoomabile* e lascia il contenitore per eseguire lo zoom appropriato.

Il modo migliore per assicurarsi che il server si `COleServerDoc::GetZoomFactor` comporti correttamente consiste nell'utilizzare l'implementazione di se il documento è attivo sul posto.

## <a name="mfc-support-for-in-place-resizing"></a>Supporto MFC per il ridimensionamento sul posto

MFC implementa completamente l'interfaccia di ridimensionamento sul posto come descritto nella specifica OLE 2. L'interfaccia utente è `COleResizeBar` supportata dalla classe, da un messaggio `COleIPFrameWnd`personalizzato WM_SIZECHILD e dalla gestione speciale del messaggio in .

È possibile implementare una gestione diversa di questo messaggio rispetto a quella fornita dal framework. Come descritto in precedenza, il framework lascia i risultati del ridimensionamento sul posto fino al contenitore, ovvero il server risponde alla modifica del fattore di zoom. Se il contenitore reagisce impostando sia CONTAINER EXTENT che `COleClientItem::OnChangeItemPosition` POSITION RECTANGLE durante l'elaborazione del relativo (chiamato come risultato di una chiamata a `COleServerDoc::RequestPositionChange`), il ridimensionamento sul posto comporterà la visualizzazione di "più o meno" dell'elemento nella finestra di modifica. Se il contenitore reagisce semplicemente impostando il `COleClientItem::OnChangeItemPosition`POSITION RECTANGLE durante l'elaborazione di , il fattore di zoom cambierà e l'elemento verrà visualizzato come "ingrandito o rimpicciolita".

Un server può controllare (in una certa misura) ciò che accade durante questa negoziazione. Un foglio di calcolo, ad esempio, potrebbe scegliere di visualizzare più o meno celle quando l'utente ridimensiona la finestra durante la modifica dell'elemento sul posto. Un elaboratore di testi potrebbe scegliere di modificare i "margini di pagina" in modo che siano gli stessi della finestra e rieseguire il wrapping del testo nel nuovo margine. I server implementano questa operazione modificando l'estensione naturale (la dimensione restituita da `COleServerItem::OnGetExtent`) al termine del ridimensionamento. In questo modo, sia il POSITION RECTANGLE che il CONTAINER EXTENT cambieranno della stessa quantità, producendo lo stesso fattore di zoom, ma un'area di visualizzazione più grande o più piccola. Inoltre, più o meno del documento sarà visibile nel `OnDraw`metafile generato da . In questo caso, il documento stesso cambia quando l'utente ridimensiona l'elemento, anziché solo l'area di visualizzazione.

È possibile implementare il ridimensionamento personalizzato e `COleResizeBar` comunque sfruttare l'interfaccia utente fornita eseguendo l'override del messaggio di WM_SIZECHILD nella `COleIPFrameWnd` classe. Per ulteriori informazioni sulle specifiche di WM_SIZECHILD, vedere la [Nota tecnica 24](../mfc/tn024-mfc-defined-messages-and-resources.md).

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
