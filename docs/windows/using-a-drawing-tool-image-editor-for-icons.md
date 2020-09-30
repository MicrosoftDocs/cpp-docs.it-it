---
title: 'Procedura: usare uno strumento di disegno'
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
ms.openlocfilehash: 46ba1f1057484f2b5b1e1286482d80fd96312caf
ms.sourcegitcommit: a1676bf6caae05ecd698f26ed80c08828722b237
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/29/2020
ms.locfileid: "91502936"
---
# <a name="how-to-use-a-drawing-tool"></a>Procedura: usare uno strumento di disegno

L' **editor di immagini** ha strumenti di disegno e cancellazione a mano libera che funzionano allo stesso modo. Selezionare lo strumento e, se necessario, [selezionare i colori di primo piano e di sfondo](./image-editor-for-icons.md) e le opzioni relative a dimensioni e forme. Si sposta quindi il puntatore sull'immagine e si fa clic o si trascina per creare e cancellare.

## <a name="drawing-tools"></a>Strumenti di disegno

È possibile selezionare strumenti di disegno dalla barra degli strumenti dell' **editor di immagini** o dal menu **immagine** . Quando si seleziona lo strumento di **gomma** , lo strumento **pennello** o lo strumento **aerografo** , il selettore di opzioni Visualizza le opzioni dello strumento.

> [!TIP]
> Le descrizioni comandi vengono visualizzate quando si passa il cursore sui pulsanti della [barra degli strumenti dell'editor di immagini](./image-editor-for-icons.md). Questi suggerimenti consentono di identificare i pulsanti specifici indicati qui.

### <a name="to-select-and-use-a-drawing-tool-from-the-image-editor-toolbar"></a>Per selezionare e usare uno strumento di disegno dalla barra degli strumenti dell'editor di immagini

1. Selezionare un pulsante sulla barra degli strumenti dell' **editor di immagini** .

   - Lo strumento di **cancellazione** disegna sull'immagine con il colore di sfondo corrente quando si preme il pulsante sinistro del mouse.

      > [!TIP]
      > Invece di usare lo strumento di **gomma** , può risultare più pratico disegnare il colore di sfondo con uno degli strumenti di disegno.

   - Lo strumento **matita** disegna FreeHand in una larghezza costante di un pixel.

   - Lo strumento **pennello** presenta diverse forme e dimensioni.

   - Lo strumento **aerografo** distribuisce in modo casuale i pixel dei colori intorno al centro del pennello.

1. Se necessario, selezionare colori e un pennello:

   - Nella [tavolozza colori](./image-editor-for-icons.md)selezionare il pulsante sinistro del mouse per selezionare un colore di primo piano o il pulsante destro del mouse per selezionare un colore di sfondo.

   - Nel [selettore di opzioni](./image-editor-for-icons.md)selezionare una forma che rappresenta il pennello che si desidera utilizzare.

1. Puntare al punto dell'immagine in cui si desidera iniziare a disegnare o disegnare. Il puntatore assume la forma in base allo strumento selezionato.

1. Premere il pulsante sinistro del mouse (per il colore di primo piano) o il pulsante destro del mouse (per il colore di sfondo) e tenerlo premuto durante il progetto.

### <a name="to-select-and-use-a-drawing-tool-from-the-image-menu"></a>Per selezionare e usare uno strumento di disegno dal menu immagine

1. Passare a menu **Image**  >  **Tools**.

1. Nel sottomenu a cascata scegliere lo strumento che si desidera utilizzare.

## <a name="lines-or-closed-figures"></a>Righe o figure chiuse

Gli strumenti dell' **editor di immagini** per disegnare linee e cifre chiuse funzionano nello stesso modo: posizionare il punto di inserimento in un punto e trascinarlo in un altro. Per le righe, questi punti sono gli endpoint. Per le figure chiuse, questi punti sono angoli opposti di un rettangolo che delimita la figura.

Le linee vengono disegnate in una larghezza determinata dalla selezione corrente del pennello e le figure incorniciate vengono disegnate in una larghezza determinata dalla selezione della larghezza corrente. Le linee e tutte le figure, incorniciate e riempite, vengono disegnate nel colore di primo piano corrente se si preme il pulsante sinistro del mouse o nel colore di sfondo corrente se si preme il pulsante destro del mouse.

### <a name="to-draw-a-line"></a>Per creare una linea

1. Utilizzare la [barra degli](./image-editor-for-icons.md) strumenti dell'editor di immagini o passare a **Image** >  **strumenti** immagine menu e scegliere lo strumento **linea** .

1. Se necessario, selezionare colori e un pennello:

   - Nella [tavolozza colori](./image-editor-for-icons.md)selezionare il pulsante sinistro del mouse per selezionare un colore di primo piano o il pulsante destro del mouse per selezionare un colore di sfondo.

   - Nel [selettore di opzioni](./image-editor-for-icons.md)selezionare una forma che rappresenta il pennello che si desidera utilizzare.

1. Posizionare il puntatore sul punto iniziale della riga.

1. Trascinare sull'endpoint della riga.

### <a name="to-draw-a-closed-figure"></a>Per creare una figura chiusa

1. Utilizzare la barra degli strumenti dell' **editor di immagini** o passare a **Image**  >  **strumenti** immagine menu e selezionare uno strumento di **disegno di figure chiuse** .

   Gli strumenti di disegno delle figure **chiuse** creano figure come indicato sui rispettivi pulsanti.

1. Se necessario, selezionare colori e una lunghezza riga.

1. Spostare il puntatore in un angolo dell'area rettangolare in cui si desidera creare la figura.

1. Trascinare il puntatore sull'angolo diagonalmente opposto.

## <a name="custom-brushes"></a>Pennelli personalizzati

Un pennello personalizzato è una parte rettangolare di un'immagine che viene prelevata e usata come uno dei pennelli pronti per l' **editor di immagini**. Tutte le operazioni che è possibile eseguire su una selezione possono essere eseguite anche su un pennello personalizzato.

### <a name="to-create-a-custom-brush-from-a-portion-of-an-image"></a>Per creare un pennello personalizzato da una parte di un'immagine

1. Selezionare la parte dell'immagine che si desidera utilizzare per un pennello.

1. Tenere premuto il tasto **MAIUSC** , scegliere nella selezione e trascinarlo nell'immagine oppure passare a menu **immagine**  >  **Usa selezione come pennello**.

   La selezione diventa un pennello personalizzato che distribuisce i colori nella selezione all'interno dell'immagine. Le copie della selezione rimangono lungo il percorso di trascinamento. Più lentamente si trascina, più copie vengono eseguite.

   > [!NOTE]
   > Se si seleziona l' **opzione Usa una selezione come pennello** senza prima selezionare una parte dell'immagine, l'intera immagine viene usata come pennello. Il risultato dell'utilizzo di un pennello personalizzato dipende anche dal fatto che sia stato selezionato uno [sfondo opaco o trasparente](./image-editor-for-icons.md).

I pixel in un pennello personalizzato che corrispondono al colore di sfondo corrente sono normalmente trasparenti: non vengono disegnati sull'immagine esistente. È possibile modificare questo comportamento in modo che i pixel del colore di sfondo siano disegnati sull'immagine esistente.

È possibile utilizzare il pennello personalizzato come un timbro o uno stencil per creare effetti speciali diversi.

### <a name="to-draw-custom-brush-shapes-in-the-background-color"></a>Per creare forme pennello personalizzate con il colore di sfondo

1. Selezionare uno sfondo opaco o trasparente.

1. Impostare il colore di sfondo sul colore in cui si desidera creare.

1. Posizionare il pennello personalizzato che si desidera creare.

1. Selezionare il pulsante destro del mouse. Tutte le aree opache del pennello personalizzato vengono disegnate in base al colore di sfondo.

### <a name="to-double-or-halve-the-custom-brush-size"></a>Per raddoppiare o dimezzare le dimensioni del pennello personalizzato

Premere il tasto **segno più** ( **+** ) per raddoppiare le dimensioni del pennello oppure il tasto **segno meno** ( **-** ) per dimezzarlo.

### <a name="to-cancel-the-custom-brush"></a>Per annullare il pennello personalizzato

Premere **ESC** o scegliere un altro strumento di disegno.

## <a name="requirements"></a>Requisiti

Nessuno

## <a name="see-also"></a>Vedere anche

[Editor di immagini per le icone](../windows/image-editor-for-icons.md)<br/>
[Procedura: creare un'icona o un'altra immagine](../windows/creating-an-icon-or-other-image-image-editor-for-icons.md)<br/>
[Procedura: modificare un'immagine](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md)<br/>
[Procedura: utilizzare il colore](../windows/working-with-color-image-editor-for-icons.md)<br/>
[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
