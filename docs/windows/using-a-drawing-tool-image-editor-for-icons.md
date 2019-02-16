---
title: Utilizzo di uno strumento di disegno
ms.date: 11/04/2016
f1_keywords:
- vc.editors.image.drawing
helpviewer_keywords:
- Image editor [C++], selecting drawing tools
- Image editor [C++], toolbar
- drawing tools
- Image editor [C++], drawing lines
- shapes, drawing
- colors [C++], brush
- brushes, colors
- brushes, creating custom
- images [C++], creating custom brushes
- graphics [C++], custom brushes
- custom brushes
ms.assetid: 1f8c6eef-7760-45a9-a5cb-9e15c6f91245
ms.openlocfilehash: 72224581e021a22b31ec5e6fa5940ff5a568a4e0
ms.sourcegitcommit: 470de1337035dd33682d935b4b6c6d8b1bdb0bbb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/15/2019
ms.locfileid: "56320549"
---
# <a name="using-a-drawing-tool"></a>Utilizzo di uno strumento di disegno

Il **immagine** mano di disegno e la cancellazione di tutti funzionano nello stesso modo gli strumenti dell'editor: si seleziona lo strumento e, se necessario, [selezionare i colori di primo piano e sfondo](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md) e le opzioni di dimensioni e la forma. Quindi spostare il puntatore all'immagine e fare clic o trascinare per disegnare e cancellare.

Quando si seleziona il **gomma** dello strumento, **pennello** strumento, o **aerografo** strumento, il selettore di opzioni consente di visualizzare le opzioni per tale strumento.

> [!TIP]
> Invece di usare la **gomma** strumento, può risultare più comodo disegnare il colore di sfondo con uno degli strumenti di disegno.

È possibile selezionare gli strumenti di disegno dal **Editor di immagini** sulla barra degli strumenti o il **immagine** menu.

## <a name="to-select-and-use-a-drawing-tool-from-the-image-editor-toolbar"></a>Selezionare e usare uno strumento di disegno nella barra degli strumenti Editor di immagini

1. Selezionare un pulsante sul **Editor di immagini** sulla barra degli strumenti.

   - Il **gomma** strumento Disegna l'immagine con il colore di sfondo corrente quando si preme il pulsante sinistro del mouse.

   - Il **a forma di matita** lo strumento consente di disegnare mano libera in una larghezza costante di un pixel.

   - Il **determinate opzione selettore di forma e dimensioni dello strumento pennello**.

   - Il **aerografo** strumento distribuisce in modo casuale i pixel dal colore intorno al centro del pennello.

        > [!TIP]
        >  Descrizioni comandi vengono visualizzati quando si passa il cursore sopra i pulsanti sul [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md). Questi suggerimenti per identificare i pulsanti specifici indicati di seguito.

1. Se necessario, selezionare i colori e un pennello:

   - Nel [tavolozza di colori](../windows/colors-window-image-editor-for-icons.md), selezionare il pulsante sinistro del mouse per selezionare un colore di primo piano o il pulsante destro del mouse per selezionare un colore di sfondo.

   - Nel [selettore di opzioni](../windows/toolbar-image-editor-for-icons.md), selezionare una forma che rappresenta il pennello da usare.

1. Fare clic sull'immagine in cui si desidera iniziare a progettare o il disegno. Assume una forma diversa in base allo strumento che è selezionato.

1. Premere il pulsante sinistro del mouse (per il colore di primo piano) o il pulsante destro del mouse (per il colore di sfondo) e tenerlo premuto quando si disegna.

### <a name="to-select-and-use-a-drawing-tool-from-the-image-menu"></a>Selezionare e usare uno strumento di disegno di menu immagine

1. Selezionare il **immagine** menu e selezionare il **Tools** comando.

1. Nel sottomenu scegliere lo strumento da usare.

## <a name="drawing-lines-or-closed-figures"></a>Disegno di linee o figure chiuse

L'editor di immagini di strumenti per tracciare linee e utilizzano figure chiuse tutte nello stesso modo: si posiziona il punto di inserimento in un punto e trascinare in un altro. Per le righe, questi aspetti sono gli endpoint. Per figure chiuse, questi aspetti sono gli angoli opposti del rettangolo di delimitazione nella figura.

Le righe vengono disegnate in un'ampiezza determinata dalla selezione corrente di pennello e figure profilate vengono disegnate in un'ampiezza determinata dalla selezione corrente di larghezza. Le righe e tutte le cifre, il frame sia compilato, vengono disegnate nel colore primo piano corrente se si preme il pulsante sinistro del mouse o il colore di sfondo corrente se si preme il pulsante destro del mouse.

### <a name="to-draw-a-line"></a>Per disegnare una linea

1. Nel [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md) (o dal **immagine** dal menu **strumenti** comando), scegliere il **riga** dello strumento.

1. Se necessario, selezionare i colori e un pennello:

   - Nel [tavolozza di colori](../windows/colors-window-image-editor-for-icons.md), selezionare il pulsante sinistro del mouse per selezionare un colore di primo piano o il pulsante destro del mouse per selezionare un colore di sfondo.

   - Nel [selettore di opzioni](../windows/toolbar-image-editor-for-icons.md), selezionare una forma che rappresenta il pennello da usare.

1. Posizionare il puntatore del mouse in punto iniziale della linea.

1. Trascinare all'endpoint della linea.

### <a name="to-draw-a-closed-figure"></a>Per disegnare una figura chiusa

1. Nel **Editor di immagini** sulla barra degli strumenti (o dal **immagine** dal menu **strumenti** comando), selezionare un **disegno di Figure chiuse** dello strumento.

   Il **Figure chiuse disegno** strumenti creano figure come indicato sui rispettivi pulsanti.

1. Se necessario, selezionare i colori e una larghezza di riga.

1. Spostare il puntatore a un angolo dell'area rettangolare in cui si desidera disegnare nella figura.

1. Trascinare il puntatore del mouse nell'angolo opposto.

## <a name="create-a-custom-brush"></a>Creare un pennello personalizzato

Un pennello personalizzato è una porzione rettangolare di un'immagine che vengono prelevati e utilizzati come uno dei **immagine** pennelli pronte all'uso dell'editor. È possibile eseguire su una selezione di tutte le operazioni, è possibile eseguire su anche un pennello personalizzato.

### <a name="to-create-a-custom-brush-from-a-portion-of-an-image"></a>Per creare un pennello personalizzato da una parte di un'immagine

1. [Selezionare la parte dell'immagine](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md) che si desidera utilizzare per un pennello.

1. Che contiene il **MAIUSC** chiave verso il basso, scegliere la selezione e trascinarla sull'immagine.

   \- oppure -

1. Dal **immagine** menu, scegliere **Usa selezione come pennello**.

   La selezione diventa un pennello personalizzato che distribuisce i colori nella selezione tra l'immagine. Le copie della selezione vengono lasciate lungo il percorso di trascinamento. Più lenta il trascinamento, vengono eseguite le altre copie.

   > [!NOTE]
   > Selezionare il **Usa selezione come pennello** senza avere prima di tutto la selezione di una parte dell'immagine verrà utilizzata l'intera immagine come pennello. Il risultato dell'uso di un pennello personalizzato dipenderà inoltre aver selezionato un' [sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).

I pixel in un pennello personalizzato che corrispondono al colore di sfondo corrente vengono in genere trasparenti: non consentire futuri rispetto all'immagine esistente. È possibile modificare questo comportamento in modo che i pixel dal colore di sfondo disegno l'immagine esistente.

È possibile utilizzare il pennello personalizzato, ad esempio un timestamp o di uno stencil per creare effetti speciali diversi.

### <a name="to-draw-custom-brush-shapes-in-the-background-color"></a>Per disegnare forme pennello personalizzato nel colore di sfondo

1. [Selezionare uno sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).

1. [Impostare il colore di sfondo](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md) il colore in cui si desidera disegnare.

1. Posizionare il pennello personalizzato in cui si desidera disegnare.

1. Selezionare il pulsante destro del mouse. Tutte le aree opache del pennello personalizzato vengono disegnate nel colore di sfondo.

### <a name="to-double-or-halve-the-custom-brush-size"></a>Fare doppio o dimezzare le dimensioni del pennello personalizzato

Premere il **segno** (**+**) chiave raddoppiare le dimensioni del pennello, o il **segno** (**-**) chiave per dimezzare il .

### <a name="to-cancel-the-custom-brush"></a>Per annullare il pennello personalizzato

Premere **Esc** o scegliere un altro strumento di disegno.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
[Modifica delle risorse grafiche](../windows/editing-graphical-resources-image-editor-for-icons.md)<br/>
[Editor di immagini per le icone](../windows/image-editor-for-icons.md)<br/>
[Utilizzo dei colori](../windows/working-with-color-image-editor-for-icons.md)