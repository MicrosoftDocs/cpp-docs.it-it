---
title: "Procedura: Modificare un'immagine"
ms.date: 02/15/2019
f1_keywords:
- vc.editors.image.editing
- vc.editors.image.editing
helpviewer_keywords:
- Image editor [C++], image selection
- Image editor [C++], selecting images
- images [C++], selecting
- cursors [C++], selecting areas of
- Image editor [C++], editing images
- Clipboard [C++], pasting
- images [C++], editing
- images [C++], deleting selected parts
- images [C++], copying selected parts
- images [C++], moving selected parts
- images [C++], dragging and replicating selected parts
- images [C++], pasting into
- graphics [C++], editing
- Image editor [C++], flipping and rotating images
- images [C++], flipping
- images [C++], rotating
- Image editor [C++], resizing images
- graphics [C++], resizing
- images [C++], resizing
- resizing images
- size [C++], images
- images [C++], cropping
- images [C++], extending
- Image editor [C++], cropping or extending images
- Image editor [C++], shrinking and stretching images
- images [C++], stretching
- images [C++], shrinking
- bitmaps [C++], shrinking
- bitmaps [C++], stretching
- Image editor [C++], editing images
- images [C++], editing
- images [C++], properties
- Image editor [C++], Properties window
- Properties window, image editor
ms.assetid: 8b6ce4ad-eba1-4ece-86ba-cea92c3edff2
ms.openlocfilehash: 246dee3c7d0c1a5a4f495fddf709833acc2c885e
ms.sourcegitcommit: b4645761ce5acf8c2fc7a662334dd5a471ea976d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/07/2019
ms.locfileid: "57562991"
---
# <a name="how-to-edit-an-image"></a>Procedura: Modificare un'immagine

È possibile usare gli strumenti di selezione per definire un'area di un'immagine che si desidera tagliare, copiare, cancellare, Inverti, ridimensionare o spostare. Con il **rettangolo di selezione** strumento è possibile definire e selezionare un'area rettangolare dell'immagine. Con il **Selezione irregolare** strumento è possibile creare una struttura a mano libera dell'area di cui si desidera selezionare per le operazioni Taglia, copia o un'altra operazione.

> [!NOTE]
> Vedere la **rettangolo di selezione** e **Selezione irregolare** strumenti illustrati nel [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md) o visualizzare le descrizioni comandi associate a ogni pulsante il **Editor di immagini** sulla barra degli strumenti.

È anche possibile creare un pennello personalizzato da una selezione. Per altre informazioni, vedere [creazione di un pennello personalizzato](../windows/creating-a-custom-brush-image-editor-for-icons.md).

## <a name="how-to"></a>Procedure

Per modificare un'immagine, vedere come:

### <a name="to-select-an-image"></a>Per selezionare un'immagine

1. Usare la **Editor di immagini** sulla barra degli strumenti oppure passare al menu **immagine** > **strumenti** e scegliere lo strumento di selezione desiderata.

1. Sposta il punto di inserimento di un angolo dell'area dell'immagine che si desidera selezionare. Visualizzato quando il punto di inserimento è posizionato sopra l'immagine di un mirino.

1. Trascinare l'angolo opposto dell'area per selezionare il punto di inserimento. Un rettangolo mostra i pixel che verranno selezionati. Sono inclusi tutti i pixel all'interno del rettangolo, tra cui quelle contenute nel rettangolo della selezione.

1. Rilasciare il pulsante del mouse. Il bordo di selezione racchiude l'area selezionata.

#### <a name="to-select-an-entire-image"></a>Per selezionare un'intera immagine

Selezionare l'immagine di fuori della selezione corrente. Il bordo di selezione cambia lo stato attivo e comprende l'intera immagine ancora una volta.

### <a name="to-edit-parts-of-an-image"></a>Per modificare le parti di un'immagine

È possibile eseguire le operazioni di modifica standard, ovvero Taglia, copia, la cancellazione e lo spostamento, su un [selezione](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md), se la selezione è l'intera immagine o solo una parte di esso. Poiché il **Editor di immagini** Usa le **negli Appunti di Windows**, è possibile trasferire immagini tra il **Editor di immagini** e altre applicazioni per Windows.

Inoltre, è possibile ridimensionare la selezione, se include solo una parte o l'intera immagine.

#### <a name="to-cut-the-current-selection-and-move-it-to-the-clipboard"></a>Taglia la selezione corrente e spostarlo negli Appunti

Passare al menu di scelta **Edit** > **Taglia**.

#### <a name="to-copy-the-selection"></a>Per copiare la selezione

1. Posizionare il puntatore all'interno del bordo di selezione oppure ovunque ti trovi su di esso, ad eccezione di quadratini di ridimensionamento.

1. Tenere premuto il **Ctrl** quando si trascina la selezione in un nuovo percorso della chiave. L'area della selezione originale rimane invariato.

1. Per copiare la selezione nell'immagine nella posizione corrente, selezionare all'esterno del cursore di selezione.

#### <a name="to-paste-the-clipboard-contents-into-an-image"></a>Incollare il contenuto degli Appunti in un'immagine

1. Passare al menu di scelta **Edit** > **Incolla**.

   Il contenuto degli Appunti, racchiuso tra il bordo di selezione, vengono visualizzati nell'angolo superiore sinistro del riquadro.

1. Posizionare il puntatore del mouse all'interno del bordo di selezione e trascinare l'immagine nella posizione desiderata nell'immagine.

1. Per ancorare l'immagine nella nuova posizione, selezionare all'esterno del bordo di selezione.

#### <a name="to-delete-the-current-selection-without-moving-it-to-the-clipboard"></a>Per eliminare la selezione corrente senza spostarlo negli Appunti

Passare al menu di scelta **Edit** > **eliminare**.

   L'area originale della selezione viene riempita con il colore di sfondo corrente.

> [!NOTE]
> È possibile accedere il **tagliare**, **copia**, **Incolla**, e **Elimina** comandi facendo clic di **visualizzazione risorse** finestra.

#### <a name="to-move-the-selection"></a>Per spostare la selezione

1. Posizionare il puntatore all'interno del bordo di selezione oppure ovunque ti trovi su di esso, ad eccezione di quadratini di ridimensionamento.

1. Trascinare la selezione nella nuova posizione.

1. Per ancorare la selezione dell'immagine nel nuovo percorso, selezionare all'esterno del bordo di selezione.

Per altre informazioni sul disegno con una selezione, vedere [creazione di un pennello personalizzato](../windows/creating-a-custom-brush-image-editor-for-icons.md).

### <a name="to-flip-an-image"></a>Per impostare un'immagine

È possibile capovolgere o ruotare un'immagine per creare un'immagine speculare dell'originale, è possibile capovolgere l'immagine o ruotare di 90 gradi l'immagine a destra in una fase.

- Capovolgere orizzontalmente l'immagine (immagine speculare), andare al menu di scelta **immagine** > **Capovolgi orizzontalmente**.

- Capovolgere verticalmente l'immagine (è possibile capovolgere), andare al menu di scelta **immagine** > **Capovolgi verticalmente**.

- Per ruotare l'immagine di 90 gradi, andare al menu **immagine** > **ruota di 90 gradi**.

   > [!NOTE]
   > È anche possibile usare la [tasti di scelta rapida (collegamento)](../windows/accelerator-keys-image-editor-for-icons.md) per tali comandi o accedere ai comandi dal menu di scelta rapida (select all'esterno dell'immagine durante nel **Editor di immagini**).

### <a name="to-resize-an-image"></a>Per ridimensionare un'immagine

Il comportamento dei **Editor di immagini** mentre ridimensionamento di un'immagine dipende dal fatto che è stata [selezionati](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md) l'intera immagine o solo una parte di esso.

Quando la selezione include solo una parte dell'immagine, il **Editor di immagini** riduce la selezione per l'eliminazione di righe o colonne di pixel e riempire le aree vuote con il colore di sfondo corrente. Inoltre possibile estendere la selezione duplicando le righe o colonne di pixel.

Quando la selezione include l'intera immagine, il **Editor di immagini** sia compatta ed estende l'immagine, o Ritaglia e lo estende.

Sono disponibili due meccanismi per ridimensionare un'immagine: i quadratini di ridimensionamento e il [finestra proprietà](/visualstudio/ide/reference/properties-window). Trascinare i quadratini di ridimensionamento per modificare le dimensioni di tutti o parte di un'immagine. Quadratini di ridimensionamento che è possibile trascinare sono pieni. Non è possibile trascinare gli handle che sono vuoti. Usare la **proprietà** finestra da ridimensionare l'intera immagine, non una parte selezionata.

![Quadratini di ridimensionamento su una bitmap](../mfc/media/vcimageeditorsizinghandles.gif "vcImageEditorSizingHandles")<br/>
Quadratini di ridimensionamento

> [!NOTE]
> Se si dispone di **Affianca griglia** opzione selezionata nel [nella finestra di dialogo Impostazioni griglia](../windows/grid-settings-dialog-box-image-editor-for-icons.md), il ridimensionamento verrà bloccato alla riga successiva della griglia affiancata. Se solo il **griglia in Pixel** opzione è selezionata (impostazione predefinita), il ridimensionamento verrà bloccato sul pixel successivo disponibile.

#### <a name="to-resize-an-entire-image-using-the-properties-window"></a>Per ridimensionare un'immagine intera utilizzando la finestra proprietà

1. Aprire l'immagine di cui si desidera modificare le proprietà.

1. Nel **larghezza** e **altezza** finestre nel [finestra proprietà](/visualstudio/ide/reference/properties-window), digitare le dimensioni desiderate.

   Se si sta aumentando le dimensioni dell'immagine, il **Editor di immagini** estende l'immagine a destra, verso il basso, o entrambi e riempie la nuova area con il colore di sfondo corrente. L'immagine non venga adattato.

   Se si riduce la dimensione dell'immagine, il **Editor di immagini** Ritaglia l'immagine al bordo destro o inferiore o a entrambi.

   > [!NOTE]
   > È possibile usare la **larghezza** e **altezza** le proprietà per ridimensionare l'intera immagine, non per una selezione parziale.

#### <a name="to-crop-or-extend-an-entire-image"></a>Per ritagliare o estendere un'intera immagine

1. Selezionare l'intera immagine.

   Parte dell'immagine è selezionato, se si desidera selezionare l'intera immagine, selezionare un punto qualsiasi nell'immagine all'esterno del bordo di selezione corrente.

1. Trascinare un quadratino di ridimensionamento fino a quando l'immagine è quella a destra.

In genere, il **Editor di immagini** ingrandire un'immagine quando viene ridimensionata spostando un quadratino di ridimensionamento o Ritaglia. Se si tiene premuto il **Shift** chiave quando si sposta un quadratino di ridimensionamento, il **Editor di immagini** compatta o estende l'immagine.

#### <a name="to-shrink-or-stretch-an-entire-image"></a>Per ridurre o ingrandire un'intera immagine

1. Selezionare l'intera immagine.

   Se una parte dell'immagine è selezionata e si vuole selezionare l'intera immagine, selezionare un punto qualsiasi nell'immagine all'esterno del bordo di selezione corrente.

1. Tenere premuto il **MAIUSC** della chiave e trascinare un quadratino di ridimensionamento fino a quando l'immagine è quella a destra.

#### <a name="to-shrink-or-stretch-part-of-an-image"></a>Per ridurre o ingrandire una parte dell'immagine

1. Selezionare la parte dell'immagine che si intende ridimensionare. Per altre informazioni, vedere [selezione di un'Area dell'immagine](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md).

1. Trascinare uno dei quadratini di ridimensionamento fino a quando la selezione è la dimensione giusta.

### <a name="to-edit-an-image-outside-of-a-project"></a>Per modificare un'immagine all'esterno di un progetto

È possibile aprire e modificare le immagini nell'ambiente di sviluppo, esattamente come farebbe in qualsiasi applicazione di grafica, ad esempio apertura di una bitmap per modifica autonoma. Le immagini che si lavora con non devono essere parte di un progetto di Visual Studio.

1. Passare al menu di scelta **File** > **Open**.

1. Nel **file di tipo** , quindi selezionare **tutti i file**.

1. Individuare e aprire l'immagine che si desidera modificare.

### <a name="to-change-image-properties"></a>Per modificare le proprietà dell'immagine

È possibile impostare o modificare le proprietà di un'immagine utilizzando il [finestra proprietà](/visualstudio/ide/reference/properties-window).

1. Aprire l'immagine nel **Editor di immagini**.

1. Nel **proprietà** finestra modificare qualsiasi o tutte le proprietà per l'immagine.

   |Proprietà|Descrizione|
   |--------------|-----------------|
   |**Colori**|Specifica la combinazione di colori per l'immagine. Selezionare **monocromatico**, **16**, o **256**, oppure **True colore**.<br/><br/>Se è già stata disegnata l'immagine con una tavolozza dei colori-16, selezionando **monocromatico** fa sì che le sostituzioni di bianco e nero per i colori nell'immagine. Contrasto elevato non viene mantenuto sempre: ad esempio, le aree adiacenti del rosso e verde sono entrambi convertite in nero.|
   |**Nome file**|Specifica il nome del file di immagine.<br/><br/>Per impostazione predefinita, Visual Studio assegna un nome file base creato rimuovendo i primi quattro caratteri IDB ("_") dall'identificatore di risorsa predefinita (IDB_BITMAP1) e aggiungendo l'estensione corretta. Il nome file per l'immagine in questo esempio sarebbe *BITMAP1*. È possibile rinominarlo *MIABITMAP1*.|
   |**Height**|Imposta l'altezza dell'immagine (in pixel). Il valore predefinito è 48.<br/><br/>L'immagine viene ritagliata o viene aggiunto uno spazio vuoto sotto l'immagine esistente.|
   |**ID**|Imposta l'identificatore della risorsa.<br/><br/>Per un'immagine, Microsoft Visual Studio, per impostazione predefinita, viene assegnato l'identificatore successivo disponibile in una serie: IDB_BITMAP1 IDB_BITMAP2 e così via. Per le icone e cursori vengono utilizzati nomi simili.|
   |**Tavolozza**|Le modifiche dei colori delle proprietà.<br/><br/>Fare doppio clic per selezionare un colore e visualizzare il [finestra di dialogo Regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md). Definire il colore digitando i valori RGB o HSL nelle caselle di testo appropriato.|
   |**SaveCompressed**|Indica se l'immagine è in un formato compresso. Questa proprietà è di sola lettura.<br/><br/>Visual Studio non consente di salvare le immagini in un formato compresso, in modo che per tutte le immagini create in Visual Studio, questa proprietà sarà **False**. Se si apre un'immagine compressa (creata in un altro programma) in Visual Studio, questa proprietà sarà **True**. Se si salva un'immagine compressa con Visual Studio, saranno non compresso e questa proprietà torneranno ai valori **False**.|
   |**Width**|Imposta la larghezza dell'immagine (in pixel). Il valore predefinito per le bitmap è pari a 48.<br/><br/>L'immagine viene ritagliata o uno spazio vuoto viene aggiunta a destra dell'immagine esistente.|

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Editor di immagini per le icone](../windows/image-editor-for-icons.md)<br/>
[Procedura: Creare un'icona o un'altra immagine](../windows/creating-an-icon-or-other-image-image-editor-for-icons.md)<br/>
[Procedura: Usare uno strumento di disegno](../windows/using-a-drawing-tool-image-editor-for-icons.md)<br/>
[Procedura: Usare i colori](../windows/working-with-color-image-editor-for-icons.md)<br/>
[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>