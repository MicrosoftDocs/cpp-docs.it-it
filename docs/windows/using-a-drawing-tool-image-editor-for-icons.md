---
title: 'Procedura: Usare uno strumento di disegno'
ms.date: 02/15/2019
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
ms.openlocfilehash: 7b362749c9a5cb1c7ec77e5cac8625aa7eb260f0
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59037789"
---
# <a name="how-to-use-a-drawing-tool"></a>Procedura: Usare uno strumento di disegno

Il **Editor di immagini** dispone di disegno a mano libera e cancellazione degli strumenti che operano nello stesso modo. Si seleziona lo strumento e, se necessario, [selezione dei colori di primo piano e sfondo](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md) e le opzioni di dimensioni e la forma. Quindi spostare il puntatore all'immagine e fare clic o trascinare per disegnare e cancellare.

## <a name="drawing-tools"></a>Gli strumenti di disegno

È possibile selezionare gli strumenti di disegno dal **Editor di immagini** sulla barra degli strumenti o il **immagine** menu. Quando si seleziona il **gomma** dello strumento, **pennello** strumento, o **aerografo** strumento, il selettore di opzioni consente di visualizzare le opzioni per tale strumento.

> [!TIP]
>  Descrizioni comandi vengono visualizzati quando si passa il cursore sopra i pulsanti sul [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md). Questi suggerimenti per identificare i pulsanti specifici indicati di seguito.

### <a name="to-select-and-use-a-drawing-tool-from-the-image-editor-toolbar"></a>Selezionare e usare uno strumento di disegno nella barra degli strumenti Editor di immagini

1. Selezionare un pulsante sul **Editor di immagini** sulla barra degli strumenti.

   - Il **gomma** strumento Disegna l'immagine con il colore di sfondo corrente quando si preme il pulsante sinistro del mouse.

      > [!TIP]
      > Invece di usare la **gomma** strumento, può risultare più comodo disegnare il colore di sfondo con uno degli strumenti di disegno.

   - Il **a forma di matita** lo strumento consente di disegnare mano libera in una larghezza costante di un pixel.

   - Il **pennello** strumento presenta diverse forme e dimensioni.

   - Il **aerografo** strumento distribuisce in modo casuale i pixel dal colore intorno al centro del pennello.

1. Se necessario, selezionare i colori e un pennello:

   - Nel [tavolozza di colori](../windows/colors-window-image-editor-for-icons.md), selezionare il pulsante sinistro del mouse per selezionare un colore di primo piano o il pulsante destro del mouse per selezionare un colore di sfondo.

   - Nel [selettore di opzioni](../windows/toolbar-image-editor-for-icons.md), selezionare una forma che rappresenta il pennello da usare.

1. Fare clic sull'immagine in cui si desidera iniziare a progettare o il disegno. Assume una forma diversa in base allo strumento che è selezionato.

1. Premere il pulsante sinistro del mouse (per il colore di primo piano) o il pulsante destro del mouse (per il colore di sfondo) e tenerlo premuto quando si disegna.

### <a name="to-select-and-use-a-drawing-tool-from-the-image-menu"></a>Selezionare e usare uno strumento di disegno di menu immagine

1. Passare al menu di scelta **immagine** > **strumenti**.

1. Nel sottomenu scegliere lo strumento da usare.

## <a name="lines-or-closed-figures"></a>Linee o figure chiuse

Il **Editor di immagini** gli strumenti per tracciare linee e figure chiuse funzionano nello stesso modo: si posiziona il punto di inserimento in un punto e trascinare in un altro. Per le righe, questi aspetti sono gli endpoint. Per figure chiuse, questi aspetti sono gli angoli opposti del rettangolo di delimitazione nella figura.

Le righe vengono disegnate in un'ampiezza determinata dalla selezione corrente di pennello e figure profilate vengono disegnate in un'ampiezza determinata dalla selezione corrente di larghezza. Le righe e tutte le cifre, il frame sia compilato, vengono disegnate nel colore primo piano corrente se si preme il pulsante sinistro del mouse o il colore di sfondo corrente se si preme il pulsante destro del mouse.

### <a name="to-draw-a-line"></a>Per disegnare una linea

1. Usare la [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md) o passare al menu **immagine**> **strumenti** e scegliere il **riga** dello strumento.

1. Se necessario, selezionare i colori e un pennello:

   - Nel [tavolozza di colori](../windows/colors-window-image-editor-for-icons.md), selezionare il pulsante sinistro del mouse per selezionare un colore di primo piano o il pulsante destro del mouse per selezionare un colore di sfondo.

   - Nel [selettore di opzioni](../windows/toolbar-image-editor-for-icons.md), selezionare una forma che rappresenta il pennello da usare.

1. Posizionare il puntatore del mouse in punto iniziale della linea.

1. Trascinare all'endpoint della linea.

### <a name="to-draw-a-closed-figure"></a>Per disegnare una figura chiusa

1. Usare la **Editor di immagini** sulla barra degli strumenti oppure passare al menu **immagine** > **strumenti** e selezionare un **disegno di Figure chiuse** dello strumento.

   Il **Figure chiuse disegno** strumenti creano figure come indicato sui rispettivi pulsanti.

1. Se necessario, selezionare i colori e una larghezza di riga.

1. Spostare il puntatore a un angolo dell'area rettangolare in cui si desidera disegnare nella figura.

1. Trascinare il puntatore del mouse nell'angolo opposto.

## <a name="custom-brushes"></a>Pennelli personalizzati

Un pennello personalizzato è una porzione rettangolare di un'immagine che vengono prelevati e utilizzati come uno dei **Editor di immagini**di pennelli pronte all'uso. È possibile eseguire su una selezione di tutte le operazioni, è possibile eseguire su anche un pennello personalizzato.

### <a name="to-create-a-custom-brush-from-a-portion-of-an-image"></a>Per creare un pennello personalizzato da una parte di un'immagine

1. Selezionare la parte dell'immagine che si desidera utilizzare per un pennello.

1. Tenere premuto il **Shift** chiave verso il basso, scegliere la selezione e trascinarla sull'immagine o passare al menu **immagine** > **Usa selezione come pennello**.

   La selezione diventa un pennello personalizzato che distribuisce i colori nella selezione tra l'immagine. Le copie della selezione vengono lasciate lungo il percorso di trascinamento. Più lenta il trascinamento, vengono eseguite le altre copie.

   > [!NOTE]
   > Selezionare il **Usa selezione come pennello** senza avere prima di tutto la selezione di una parte dell'immagine verrà utilizzata l'intera immagine come pennello. Il risultato dell'uso di un pennello personalizzato dipenderà inoltre aver selezionato un' [sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).

I pixel in un pennello personalizzato che corrispondono al colore di sfondo corrente vengono in genere trasparenti: non consentire futuri rispetto all'immagine esistente. È possibile modificare questo comportamento in modo che i pixel dal colore di sfondo disegno l'immagine esistente.

È possibile utilizzare il pennello personalizzato, ad esempio un timestamp o di uno stencil per creare effetti speciali diversi.

### <a name="to-draw-custom-brush-shapes-in-the-background-color"></a>Per disegnare forme pennello personalizzato nel colore di sfondo

1. Selezionare uno sfondo opaco o trasparente.

1. Impostare il colore di sfondo sul colore in cui si desidera disegnare.

1. Posizionare il pennello personalizzato in cui si desidera disegnare.

1. Selezionare il pulsante destro del mouse. Tutte le aree opache del pennello personalizzato vengono disegnate nel colore di sfondo.

### <a name="to-double-or-halve-the-custom-brush-size"></a>Fare doppio o dimezzare le dimensioni del pennello personalizzato

Premere il **segno** (**+**) chiave raddoppiare le dimensioni del pennello, o il **segno** (**-**) chiave per dimezzare il .

### <a name="to-cancel-the-custom-brush"></a>Per annullare il pennello personalizzato

Premere **Esc** o scegliere un altro strumento di disegno.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Editor di immagini per le icone](../windows/image-editor-for-icons.md)<br/>
[Procedura: Creare un'icona o un'altra immagine](../windows/creating-an-icon-or-other-image-image-editor-for-icons.md)<br/>
[Procedura: Modificare un'immagine](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md)<br/>
[Procedura: Utilizzare i colori](../windows/working-with-color-image-editor-for-icons.md)<br/>
[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>