---
title: Tipi di documenti multipli, visualizzazioni e finestre cornice
ms.date: 11/19/2018
helpviewer_keywords:
- static splitter windows [MFC]
- multiple views [MFC]
- multiple document types [MFC]
- multiple views [MFC], frame windows
- document classes [MFC], multiple
- documents [MFC], multiple types of
- splitter windows [MFC], dynamic
- dynamic splitter windows [MFC]
- windows [MFC], dynamic splitter
- windows [MFC], static splitter
- multiple frame windows [MFC]
- splitter windows [MFC], static
ms.assetid: c6b9e4e0-7c9c-45f1-a804-aeac39c9a128
ms.openlocfilehash: 873903aadc1596fbc56f9a0b0b98dbc5a948113d
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84619963"
---
# <a name="multiple-document-types-views-and-frame-windows"></a>Tipi di documenti multipli, visualizzazioni e finestre cornice

La relazione standard tra un documento e le relative visualizzazione e finestra cornice è descritta in [Creazione di documenti/visualizzazioni](document-view-creation.md). Numerose applicazioni supportano un tipo di documento singolo, con più documenti aperti di quel tipo, con una singola visualizzazione del documento e una singola finestra cornice per ogni documento. In alcune applicazioni tuttavia potrebbe essere necessario modificare uno o più di questi valori predefiniti.

## <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Multiple document types](#_core_multiple_document_types)

- [Più visualizzazioni](#_core_multiple_views)

- [Multiple frame windows](#_core_multiple_frame_windows)

- [Finestre con separatore](#_core_splitter_windows)

## <a name="multiple-document-types"></a><a name="_core_multiple_document_types"></a>Tipi di documenti multipli

Creazione guidata applicazione MFC crea automaticamente una classe documento singola. In alcuni casi, tuttavia, può essere necessario il supporto per più tipi di documento. Ad esempio, l'applicazione potrebbe richiedere l'uso di fogli di lavoro e grafici. Ogni tipo di documento è rappresentato dalla rispettiva classe documento e probabilmente anche dalla propria classe visualizzazione. Quando l'utente sceglie il comando File Nuovo, il framework visualizza una finestra di dialogo che elenca i tipi di documento supportati. Viene quindi creato un documento del tipo scelto dall'utente. Ogni tipo di documento è gestito dal proprio oggetto modello di documento.

Per creare altre classi documento, vedere [Aggiunta di una classe](../ide/adding-a-class-visual-cpp.md). Scegliere [CDocument](reference/cdocument-class.md) come tipo di classe di derivazione e inserire le informazioni richieste sul documento. A questo punto implementare i dati della nuova classe.

Per far sì che il framework riconosca la nuova classe documento, è necessario aggiungere una seconda chiamata a [AddDocTemplate](reference/cwinapp-class.md#adddoctemplate) nell'override [InitInstance](reference/cwinapp-class.md#initinstance) della classe di applicazione. Per altre informazioni, vedere [Modelli di documento](document-templates-and-the-document-view-creation-process.md).

## <a name="multiple-views"></a><a name="_core_multiple_views"></a>Visualizzazioni multiple

Molti documenti richiedono esclusivamente una visualizzazione singola, ma è possibile supportare più di una visualizzazione di un documento singolo. Per agevolare l'implementazione di visualizzazioni multiple, l'oggetto documento mantiene l'elenco delle visualizzazioni, offre funzioni membro per l'aggiunta e la rimozione delle visualizzazioni e fornisce la funzione membro [UpdateAllViews](reference/cdocument-class.md#updateallviews) per far sì che le visualizzazioni multiple sappiano quando vengono modificati i dati del documento.

MFC supporta le tre interfacce utente più comuni che richiedono visualizzazioni multiple nello stesso documento. Questi modelli sono:

- Visualizzazione di oggetti della stessa classe, ciascuno in una distinta finestra cornice di documento MDI.

   È consigliabile supportare la creazione di una seconda finestra cornice in un documento. Scegliendo il comando Nuova finestra, l'utente può aprire una seconda cornice con una visualizzazione dello stesso documento e quindi usare le due cornici per visualizzare contemporaneamente diverse parti del documento. Il framework supporta il comando Nuova finestra del menu Finestra per le applicazioni MDI duplicando la finestra cornice iniziale e la visualizzazione associata al documento.

- Visualizzazione di oggetti della stessa classe nella stessa finestra cornice di documento.

   Le finestre con separatore suddividono lo spazio di visualizzazione di una finestra del documento singolo in visualizzazioni multiple separate del documento. Il framework crea oggetti di visualizzazione multipla dalla stessa classe di visualizzazione. Per altre informazioni, vedere [Finestre con separatore.](#_core_splitter_windows)

- Visualizzazione di oggetti di classi diverse in una finestra cornice singola.

   In questo modello, variante della finestra con separatore, più visualizzazioni condividono una finestra cornice singola. Le visualizzazioni sono costituite da diverse classi e ciascuna offre una diversa modalità di visualizzare lo stesso documento. Ad esempio, in una visualizzazione il documento creato mediante un elaboratore di testo è visualizzato in modalità normale, mentre nell'altra è in modalità struttura. Un controllo Splitter consente di modificare le dimensioni relative delle visualizzazioni.

La figura seguente, suddivisa nelle parti a, b e c, illustra i tre modelli di interfaccia utente nell'ordine presentato in precedenza.

![Interfacce utente per la visualizzazione di più&#45;](../mfc/media/vc37a71.gif "Interfacce utente per la visualizzazione di più&#45;") <br/>
Interfacce utente a più visualizzazioni

Il framework fornisce questi modelli implementando il comando Nuova finestra e fornendo la classe [CSplitterWnd](reference/csplitterwnd-class.md), come illustrato in [Finestre con separatore](#_core_splitter_windows). Usando queste informazioni come punto di partenza, è possibile implementare altri modelli. Per programmi di esempio che illustrano diverse configurazioni di visualizzazioni, finestre cornice e con separatori, vedere [Esempi di MFC](../overview/visual-cpp-samples.md#mfc-samples).

Per altre informazioni su `UpdateAllViews`, vedere la classe [CView](reference/cview-class.md) in *Riferimento MFC* ed [Esempio Scribble](../overview/visual-cpp-samples.md).

## <a name="multiple-frame-windows"></a><a name="_core_multiple_frame_windows"></a>Più finestre cornice

Il comando Nuova finestra del menu Finestra per le applicazioni MDI consente di creare una seconda finestra cornice nello stesso documento. Per altre informazioni, vedere il primo modello nella figura Interfacce utente con più visualizzazioni.

## <a name="splitter-windows"></a><a name="_core_splitter_windows"></a>Finestre con separatore

In una finestra con separatore, la finestra è, o può essere, suddivisa in due o più riquadri scorrevoli. Il controllo Splitter, o casella di divisione controllo posizionato nella cornice della finestra accanto alle barre di scorrimento consente di modificare le dimensioni dei riquadri. Ogni riquadro contiene una visualizzazione dello stesso documento. Nei separatori dinamici le visualizzazioni appartengono alla stessa classe, come illustrato nella parte b della figura Interfacce utente con più visualizzazioni. Nei separatori statici le visualizzazioni possono appartenere a classi diverse. La classe [CSplitterWnd](reference/csplitterwnd-class.md)supporta finestre con separatore di entrambi i tipi.

Le finestre con separatore dinamico con visualizzazioni della stessa classe consentono di suddividere una finestra in più riquadri e quindi di scorrere i diversi riquadri per visualizzare diverse porzioni del documento. È anche possibile rimuovere la divisione e di conseguenza le visualizzazioni aggiuntive. Ne sono un esempio le finestre con separatore aggiunte all' [esempio Scribble](../overview/visual-cpp-samples.md) . Questo argomento descrive le tecniche di creazione di finestre con separatore dinamico. La parte b della figura Interfacce utente con più visualizzazioni illustra una finestra con separatore dinamico.

Le finestre con separatore statico, con visualizzazioni di classi diverse, si aprono con la finestra divisa in più riquadri, ciascuno con uno scopo diverso. Ad esempio, nell'editor di bitmap di Visual C++, la finestra dell'immagine mostra due riquadri affiancati. Quello di sinistra visualizza un'immagine a dimensione naturale della bitmap. Il riquadro di destra visualizza un'immagine ingrandita della stessa bitmap. I riquadri sono separati dalla barra di divisione che l'utente può trascinare per modificare le dimensioni dei riquadri. La parte c della figura Interfacce utente con più visualizzazioni illustra una finestra con separatore statico.

Per altre informazioni, vedere la classe [CSplitterWnd](reference/csplitterwnd-class.md) in *Riferimento MFC* e [Esempi di MFC](../overview/visual-cpp-samples.md#mfc-samples).

## <a name="see-also"></a>Vedere anche

[Architettura documento/visualizzazione](document-view-architecture.md)
