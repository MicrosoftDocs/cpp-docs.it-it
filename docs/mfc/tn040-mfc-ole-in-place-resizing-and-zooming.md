---
title: 'TN040: Il ridimensionamento di MFC-OLE sul posto e zoom'
ms.date: 11/04/2016
f1_keywords:
- vc.mfc.ole
helpviewer_keywords:
- resizing in-place
- TN040
- zooming and in-place activation
- in-place activation, zooming and resizing
ms.assetid: 4d7859bd-0b2e-4254-be62-2735cecf02c6
ms.openlocfilehash: c2cb25388184ac969bec7c01d8077a458c03a03a
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62305463"
---
# <a name="tn040-mfcole-in-place-resizing-and-zooming"></a>TN040: Il ridimensionamento di MFC/OLE sul posto e zoom

> [!NOTE]
>  La seguente nota tecnica non è stata aggiornata da quando è stata inclusa per la prima volta nella documentazione online. Di conseguenza, alcune procedure e argomenti potrebbero essere non aggiornati o errati. Per le informazioni più recenti, è consigliabile cercare l'argomento di interesse nell'indice della documentazione online.

In questa nota verrà illustrati i problemi relativi alla modifica sul posto e come un server debba eseguire lo zoom corretto e il ridimensionamento sul posto. Con l'attivazione sul posto, il concetto di tipo WYSIWYG viene eseguito un passaggio ulteriore che i contenitori e server cooperano tra loro e interpretare in particolare la specifica OLE praticamente allo stesso modo.

A causa della stretta interazione tra un contenitore e un server che supportano attivazione sul posto sono presenti un numero di operazioni eseguibile dall'utente finale che deve essere gestito:

- La visualizzazione di presentazione (metafile disegnato il `COleServerItem::OnDraw` eseguire l'override) deve esattamente lo stesso aspetto quando viene disegnato per la modifica (ad eccezione del fatto che gli strumenti di modifica non sono visibili).

- Quando il contenitore esegue lo zoom avanti, finestra di dialogo server dovrebbe fare altrettanto.

- Il contenitore e il server deve visualizzare gli oggetti per la modifica mediante le stesse metriche. Ciò significa utilizzando una modalità di mapping in base al numero di *logico* pixel per pollice, ovvero non fisica pixel per pollice, durante il rendering sulla periferica di visualizzazione.

> [!NOTE]
>  Poiché l'attivazione sul posto si applica solo agli elementi incorporati (non collegati), lo zoom si applica solo a oggetti incorporati. Verrà visualizzato in entrambe le API `COleServerDoc` e `COleServerItem` che vengono utilizzati per lo zoom. Il motivo di questa dicotomia è che solo le funzioni che sono valide per gli elementi incorporati sia collegati siano `COleServerItem` (in questo modo è possibile ottenere un'implementazione comune) e funzioni che sono valide solo per gli oggetti incorporati si trovano nel `COleServerDoc` classe (dalla prospettiva del server, è il **documento** incorporati).

La maggior parte delle attività subisce l'implementatore di server, in quanto il server deve essere a conoscenza del fattore di zoom del contenitore e modificare l'interfaccia di modifica come appropriato. Ma in che modo il server determina che il contenitore utilizza il fattore di zoom

## <a name="mfc-support-for-zooming"></a>Supporto MFC per lo zoom avanti

Il fattore di zoom corrente può essere determinato chiamando `COleServerDoc::GetZoomFactor`. La chiamata a questo quando il documento non è attivo sul posto causerà sempre un fattore di zoom 100% (o di rapporto 1:1). La chiamata, mentre sul posto attivo potrebbe restituire un valore diverso da 100%.

Per un esempio dello zoom in modo corretto, vedere l'esempio OLE MFC [HIERSVR](../overview/visual-cpp-samples.md). Lo zoom avanti HIERSVR sono ulteriormente complicato dal fatto che venga visualizzato il testo e testo, in generale, non è scalabile in modo lineare (hint, convenzioni tipografiche, progettazione larghezze e altezze tutti complicare la questione). Comunque, HIERSVR è un riferimento ragionevole per l'implementazione di zoom in modo corretto e pertanto è l'esercitazione di MFC [SCRIBBLE](../overview/visual-cpp-samples.md) (passaggio 7).

`COleServerDoc::GetZoomFactor` Determina il fattore di zoom in una serie di diverse metriche disponibili dal contenitore o da un'implementazione di base di `COleServerItem` e `COleServerDoc` classi. In breve, il fattore di zoom corrente è determinato dalla formula seguente:

```
Position Rectangle (PR) / Container Extent (CE)
```

Il rettangolo di posizione è determinato dal contenitore. Viene restituito al server durante l'attivazione sul posto quando `COleClientItem::OnGetItemPosition` viene chiamato e viene aggiornato quando il contenitore chiama il server `COleServerDoc::OnSetItemRects` (con una chiamata a `COleClientItem::SetItemRects`).

L'ambito contenitore è leggermente più difficile da calcolare. Se il contenitore è chiamato `COleServerItem::OnSetExtent` (con una chiamata a `COleClientItem::SetExtent`), quindi l'ambito contenitore è questo valore convertito di pixel in base al numero di pixel per pollice logico. Se il contenitore non è chiamato SetExtent (che è in genere il caso), quindi l'ambito contenitore è della dimensione restituita da `COleServerItem::OnGetExtent`. Pertanto, se il contenitore non è chiamato SetExtent, il framework si presuppone che nel caso in contenitore sarebbe hanno chiamato del 100% dell'estensione naturale (il valore restituito da `COleServerItem::GetExtent`). In altre parole, il framework presuppone che il contenitore verrà visualizzati 100% (senza altre no, nessun) dell'elemento.

È importante notare che sebbene `COleServerItem::OnSetExtent` e `COleServerItem::OnGetExtent` con nomi simili, non modificano lo stesso attributo dell'elemento. `OnSetExtent` viene chiamato per indicare il server di quantità dell'oggetto è visibile nel contenitore (indipendentemente dal fatto il fattore di zoom) e `OnGetExtent` viene chiamato da contenitore per determinare la dimensione ideale dell'oggetto.

Esaminando ognuna delle API coinvolte, è possibile ottenere un quadro più chiaro:

## <a name="coleserveritemongetextent"></a>COleServerItem::OnGetExtent

Questa funzione deve restituire la dimensione"standard" in unità HIMETRIC dell'elemento. Il modo migliore per pensare a "dimensioni naturali" è definirla come la dimensione che potrebbe essere stampato. Le dimensioni restituite in questo campo sono costante per il contenuto di un particolare elemento (molto simile ad metafile, in cui è costante per un particolare elemento). Questa dimensione non viene modificata quando lo zoom avanti viene applicato all'elemento. In genere non viene modificato quando il contenitore assegna all'elemento più o meno spazio chiamando `OnSetExtent`. Un esempio di una modifica potrebbe essere quello di un semplice editor di testo con alcuna funzionalità di "margin" che è stato eseguito il wrapping di testo in base all'ultimo extent inviati dal contenitore. Se un server di modifica, il server deve impostare probabilmente il OLEMISC_RECOMPOSEONRESIZE bit nel Registro di sistema (vedere la documentazione di OLE SDK per altre informazioni su questa opzione).

## <a name="coleserveritemonsetextent"></a>COleServerItem::OnSetExtent

Questa funzione viene chiamata quando il contenitore Mostra "più o meno" dell'oggetto. La maggior parte dei contenitori non lo chiamerà affatto. L'implementazione predefinita archivia l'ultimo valore ricevuto dal contenitore nel 'm_sizeExtent', che viene usato in `COleServerDoc::GetZoomFactor` durante il calcolo del valore di ambito contenitore descritto in precedenza.

## <a name="coleserverdoconsetitemrects"></a>COleServerDoc::OnSetItemRects

Questa funzione viene chiamata solo quando il documento è attivo sul posto. Viene chiamato quando il contenitore Aggiorna la posizione dell'elemento o il ridimensionamento applicato all'elemento. Il rettangolo di posizione, come illustrato in precedenza, fornisce il numeratore per il calcolo di fattore di zoom. Un server può richiedere che la posizione degli elementi deve essere modificata chiamando `COleServerDoc::RequestPositionChange`. Il contenitore può o potrebbe non rispondere a questa richiesta chiamando `OnSetItemRects` (con una chiamata a `COleServerItem::SetItemRects`).

## <a name="coleserverdocondraw"></a>COleServerDoc::OnDraw

È importante tenere presente che il metafile creata eseguendo l'override di `COleServerItem::OnDraw` produce esattamente lo stesso metafile, indipendentemente dal fattore di zoom corrente. Il contenitore verrà ridimensionato metafile come appropriato. Si tratta di un'importante differenza tra la vista `OnDraw` e dell'elemento server `OnDraw`. Gli handle di vista lo zoom avanti, l'elemento appena creato un *Ingrandibile* metafile e lascia che il contenitore per eseguire lo zoom appropriato.

Il modo migliore per garantire che il server funziona correttamente è usare l'implementazione di `COleServerDoc::GetZoomFactor` se il documento è attivo sul posto.

## <a name="mfc-support-for-in-place-resizing"></a>Supporto MFC per il ridimensionamento sul posto

MFC implementa completamente l'interfaccia di ridimensionamento sul posto, come descritto nella specifica OLE 2. L'interfaccia utente è supportato per il `COleResizeBar` classe, un messaggio personalizzato WM_SIZECHILD e una gestione speciale di questo messaggio nel `COleIPFrameWnd`.

È possibile implementare una gestione differente di questo messaggio rispetto a quello fornito dal framework. Come descritto in precedenza, il framework lascia i risultati di ridimensionamento sul posto fino al contenitore, ovvero il server risponde alla modifica del fattore di zoom. Se il contenitore reagisce impostando entrambi gli EXTENT contenitore e il rettangolo di posizione durante l'elaborazione del relativo `COleClientItem::OnChangeItemPosition` (chiamato in seguito a una chiamata a `COleServerDoc::RequestPositionChange`) quindi il ridimensionamento sul posto comporterà la modifica, che mostra "più o meno" dell'elemento finestra. Se il contenitore reagisce semplicemente impostando il rettangolo di posizione durante l'elaborazione di `COleClientItem::OnChangeItemPosition`, verrà modificato il fattore di zoom e l'elemento verrà visualizzato "ingrandito o ridotto in".

Un server può controllare (per un certo livello) ciò che accade durante la negoziazione. Un foglio di calcolo, ad esempio possono scegliere di visualizzare le celle più o meno quando l'utente ridimensiona la finestra durante la modifica dell'elemento sul posto. Un programma di elaborazione testi potrebbe scegliere di modificare i margini della pagina"" in modo che siano la stessa finestra ed eseguire nuovamente il wrapping del testo al margine di nuovo. Server di implementano questo modificando l'estensione naturale (della dimensione restituita da `COleServerItem::OnGetExtent`) dopo il ridimensionamento è completato. In questo modo il rettangolo di posizione sia l'ambito contenitore per modificare la stessa quantità, determinando il fattore di zoom stesso, ma una più grande o più piccola area di visualizzazione. Inoltre, più o meno del documento saranno visibili nel metafile generato da `OnDraw`. In questo caso, il documento stesso in fase di modifica quando l'utente ridimensiona l'elemento, anziché solo l'area di visualizzazione.

È possibile implementare il ridimensionamento personalizzata e sfruttare l'interfaccia utente fornita da `COleResizeBar` eseguendo l'override di messaggio WM_SIZECHILD nel `COleIPFrameWnd` classe. Per altre informazioni sulle specifiche di WM_SIZECHILD, vedere [Nota tecnica 24](../mfc/tn024-mfc-defined-messages-and-resources.md).

## <a name="see-also"></a>Vedere anche

[Note tecniche per numero](../mfc/technical-notes-by-number.md)<br/>
[Note tecniche per categoria](../mfc/technical-notes-by-category.md)
