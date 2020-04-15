---
title: 'Procedura: Utilizzare uno strumento di disegno'
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
ms.openlocfilehash: b0041124c35414a0c1c998642b5321319602c872
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81359845"
---
# <a name="how-to-use-a-drawing-tool"></a>Procedura: Utilizzare uno strumento di disegno

**L'editor di immagini** dispone di strumenti di disegno e cancellazione a mano libera che funzionano tutti allo stesso modo. Selezionare lo strumento e, se necessario, [selezionare i colori di primo piano e di sfondo](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md) e le opzioni relative alle dimensioni e alla forma. Spostare quindi il puntatore sull'immagine e fare clic o trascinare per disegnare e cancellare.

## <a name="drawing-tools"></a>Strumenti di disegno

È possibile selezionare gli strumenti di disegno dalla barra degli strumenti **dell'editor di immagini** o dal menu **Immagine.** Quando selezionate lo strumento **Gomma,** **Pennello** o **Aerografo,** il selettore di opzioni visualizza le opzioni di tale strumento.

> [!TIP]
> Le descrizioni comandi vengono visualizzate quando si passa il cursore sui pulsanti della [barra degli strumenti dell'editor di immagini](../windows/toolbar-image-editor-for-icons.md). Questi suggerimenti ti aiuteranno a identificare i pulsanti specifici menzionati qui.

### <a name="to-select-and-use-a-drawing-tool-from-the-image-editor-toolbar"></a>Per selezionare e utilizzare uno strumento di disegno dalla barra degli strumenti dell'editor di immagini

1. Selezionare un pulsante sulla barra degli strumenti **dell'editor di immagini.**

   - Lo strumento **Gomma** disegna sull'immagine con il colore di sfondo corrente quando si preme il pulsante sinistro del mouse.

      > [!TIP]
      > Invece di usare lo strumento **Gomma,** potrebbe essere più comodo disegnare nel colore di sfondo con uno degli strumenti di disegno.

   - Lo strumento **Matita** disegna a mano libera con una larghezza costante di un pixel.

   - Lo strumento **Pennello** ha varie forme e dimensioni.

   - Lo strumento **Aerografo** distribuisce in modo casuale i pixel di colore intorno al centro del pennello.

1. Se necessario, selezionare i colori e un pennello:

   - Nella [tavolozza Colori](../windows/colors-window-image-editor-for-icons.md), selezionare il pulsante sinistro del mouse per selezionare un colore di primo piano o il pulsante destro del mouse per selezionare un colore di sfondo.

   - Nel [selettore Opzioni](../windows/toolbar-image-editor-for-icons.md), selezionare una forma che rappresenta il pennello che si desidera utilizzare.

1. Posizionare il puntatore del punto dell'immagine in cui si desidera iniziare a disegnare o disegnare. Il puntatore cambia forma in base allo strumento selezionato.

1. Premere il pulsante sinistro del mouse (per il colore di primo piano) o il pulsante destro del mouse (per il colore di sfondo) e tenerlo premuto mentre si disegna.

### <a name="to-select-and-use-a-drawing-tool-from-the-image-menu"></a>Per selezionare e utilizzare uno strumento di disegno dal menu Immagine

1. Vai al menu**Strumenti** **immagine** > .

1. Nel sottomenu a cascata, scegliere lo strumento che si desidera utilizzare.

## <a name="lines-or-closed-figures"></a>Linee o cifre chiuse

Gli strumenti **dell'editor di** immagini per disegnare linee e figure chiuse funzionano tutti nello stesso modo: si posiziona il punto di inserimento in un punto e si trascina su un altro. Per le linee, questi punti sono i punti finali. Per le figure chiuse, questi punti sono angoli opposti di un rettangolo che delimita la figura.

Le linee vengono disegnate in una larghezza determinata dalla selezione del pennello corrente e le figure incorniciate vengono disegnate in una larghezza determinata dalla selezione della larghezza corrente. Le linee e tutte le figure, sia incorniciate che riempite, vengono disegnate nel colore di primo piano corrente se si preme il pulsante sinistro del mouse o nel colore di sfondo corrente se si preme il pulsante destro del mouse.

### <a name="to-draw-a-line"></a>Per disegnare una linea

1. Utilizzare la [barra degli strumenti dell'editor di immagini](../windows/toolbar-image-editor-for-icons.md) o passare a**Strumenti** **immagine**> di menu e scegliere lo strumento **Linea.**

1. Se necessario, selezionare i colori e un pennello:

   - Nella [tavolozza Colori](../windows/colors-window-image-editor-for-icons.md), selezionare il pulsante sinistro del mouse per selezionare un colore di primo piano o il pulsante destro del mouse per selezionare un colore di sfondo.

   - Nel [selettore Opzioni](../windows/toolbar-image-editor-for-icons.md), selezionare una forma che rappresenta il pennello che si desidera utilizzare.

1. Posizionare il puntatore sul punto iniziale della linea.

1. Trascinare fino al punto finale della linea.

### <a name="to-draw-a-closed-figure"></a>Per disegnare una figura chiusa

1. Utilizzare la barra degli strumenti **dell'editor di immagini** o passare al menu **Strumenti immagine** > **Tools** e selezionare uno strumento **Disegno a figura chiusa.**

   Gli strumenti **di disegno a figura chiusa** creano figure come indicato sui rispettivi pulsanti.

1. Se necessario, selezionare i colori e lo spessore della linea.

1. Spostare il puntatore su un angolo dell'area rettangolare in cui si desidera disegnare la figura.

1. Trascinare il puntatore nell'angolo diagonalmente opposto.

## <a name="custom-brushes"></a>Pennelli personalizzati

Un pennello personalizzato è una parte rettangolare di un'immagine che si seleziona e si utilizza come uno dei pennelli già pronti **dell'editor**di immagini. Tutte le operazioni che è possibile eseguire su una selezione, è possibile eseguire anche su un pennello personalizzato.

### <a name="to-create-a-custom-brush-from-a-portion-of-an-image"></a>Per creare un pennello personalizzato da una parte di un'immagine

1. Selezionare la parte dell'immagine che si desidera utilizzare per un pennello.

1. Tenete premuto il tasto **Maiusc,** scegliete la selezione e trascinatela sull'immagine o andate al menu **Immagine** > **Usa selezione come pennello.**

   La selezione diventa un pennello personalizzato che distribuisce i colori della selezione sull'immagine. Le copie della selezione vengono lasciate lungo il tracciato di trascinamento. Più lentamente si trascina, più copie vengono eseguite.

   > [!NOTE]
   > Selezionando **Usa una selezione come pennello** senza prima selezionare una parte dell'immagine verrà utilizzata l'intera immagine come pennello. Il risultato dell'utilizzo di un pennello personalizzato dipenderà anche dal fatto che sia stato selezionato [uno sfondo Opaco o Trasparente.](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md)

I pixel in un pennello personalizzato che corrispondono al colore di sfondo corrente sono normalmente trasparenti: non disegnano sull'immagine esistente. È possibile modificare questo comportamento in modo che i pixel del colore di sfondo dipingano sull'immagine esistente.

È possibile utilizzare il pennello personalizzato come un timbro o uno stencil per creare diversi effetti speciali.

### <a name="to-draw-custom-brush-shapes-in-the-background-color"></a>Per disegnare forme pennello personalizzate nel colore di sfondo

1. Selezionare uno sfondo opaco o trasparente.

1. Impostare il colore di sfondo sul colore in cui si desidera disegnare.

1. Posizionare il pennello personalizzato nel punto in cui si desidera disegnare.

1. Selezionare il pulsante destro del mouse. Tutte le aree opache del pennello personalizzato vengono disegnate nel colore di sfondo.

### <a name="to-double-or-halve-the-custom-brush-size"></a>Per raddoppiare o dimezzare le dimensioni personalizzate del pennello

Premere il tasto**+** segno **più** ( ) per raddoppiare**-** le dimensioni del pennello o il tasto segno **meno** ( ) per dimezzarlo.

### <a name="to-cancel-the-custom-brush"></a>Per annullare il pennello personalizzato

Premere **ESC** o scegliere un altro strumento di disegno.

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Image Editor for Icons](../windows/image-editor-for-icons.md) (Editor di immagini per icone)<br/>
[Procedura: creare un'icona o un'altra immagineHow to: Create an Icon or Other Image](../windows/creating-an-icon-or-other-image-image-editor-for-icons.md)<br/>
[Procedura: modificare un'immagineHow to: Edit an Image](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md)<br/>
[Procedura: Utilizzare il coloreHow to: Work with Color](../windows/working-with-color-image-editor-for-icons.md)<br/>
[Tasti acceleratore](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
