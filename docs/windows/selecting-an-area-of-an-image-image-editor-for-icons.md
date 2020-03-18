---
title: "Procedura: modificare un'immagine"
ms.date: 02/15/2019
f1_keywords:
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
ms.openlocfilehash: 6d973ad444f719b905af5a33e47ef28f4895111f
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79447299"
---
# <a name="how-to-edit-an-image"></a>Procedura: modificare un'immagine

È possibile utilizzare gli strumenti di selezione per definire un'area di un'immagine che si desidera tagliare, copiare, cancellare, ridimensionare, invertire o spostare. Con lo strumento **selezione rettangolo** è possibile definire e selezionare un'area rettangolare dell'immagine. Con lo strumento di **selezione irregolare** è possibile disegnare un contorno a mano libera dell'area che si desidera selezionare per le operazioni Taglia, copia o altro.

> [!NOTE]
> Vedere gli strumenti **selezione rettangolo** e **selezione irregolare** illustrati nella [barra degli](../windows/toolbar-image-editor-for-icons.md) strumenti dell'editor di immagini oppure visualizzare le descrizioni comandi associate a ogni pulsante sulla barra degli strumenti dell' **editor di immagini** .

È anche possibile creare un pennello personalizzato da una selezione. Per ulteriori informazioni, vedere [creazione di un pennello personalizzato](../windows/creating-a-custom-brush-image-editor-for-icons.md).

## <a name="how-to"></a>Procedure

Per modificare un'immagine, vedere come:

### <a name="to-select-an-image"></a>Per selezionare un'immagine

1. Utilizzare la barra degli strumenti **editor di immagini** o passare a **immagine** menu > **strumenti** e scegliere lo strumento di selezione desiderato.

1. Spostare il punto di inserimento in un angolo dell'area dell'immagine che si desidera selezionare. Quando il punto di inserimento è posizionato sull'immagine, vengono visualizzati i peli incrociati.

1. Trascinare il punto di inserimento nell'angolo opposto dell'area che si desidera selezionare. Un rettangolo indica quali pixel verranno selezionati. Tutti i pixel all'interno del rettangolo, inclusi quelli sotto il rettangolo, sono inclusi nella selezione.

1. Rilasciare il pulsante del mouse. Il bordo di selezione racchiude l'area selezionata.

#### <a name="to-select-an-entire-image"></a>Per selezionare un'intera immagine

Consente di selezionare l'immagine al di fuori della selezione corrente. Il bordo di selezione cambia lo stato attivo e racchiude di nuovo l'intera immagine.

### <a name="to-edit-parts-of-an-image"></a>Per modificare parti di un'immagine

È possibile eseguire operazioni di modifica standard, ovvero tagliare, copiare, cancellare e trasferire, su una [selezione](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md), se la selezione è l'intera immagine o solo una parte di essa. Poiché l' **editor di immagini** usa gli **Appunti di Windows**, è possibile trasferire immagini tra l'editor di **Immagini** e altre applicazioni per Windows.

Inoltre, è possibile ridimensionare la selezione, se include l'intera immagine o solo una parte.

#### <a name="to-cut-the-current-selection-and-move-it-to-the-clipboard"></a>Per tagliare la selezione corrente e spostarla negli Appunti

Vai a menu **Edit** > **Cut**.

#### <a name="to-copy-the-selection"></a>Per copiare la selezione

1. Posizionare il puntatore all'interno del bordo di selezione o in qualsiasi punto, ad eccezione dei quadratini di ridimensionamento.

1. Tenere premuto il tasto **CTRL** mentre si trascina la selezione in una nuova posizione. L'area della selezione originale è invariata.

1. Per copiare la selezione nell'immagine nella posizione corrente, selezionare all'esterno del cursore di selezione.

#### <a name="to-paste-the-clipboard-contents-into-an-image"></a>Per incollare il contenuto degli Appunti in un'immagine

1. Vai a menu **modifica** > **Incolla**.

   Il contenuto degli Appunti, racchiuso dal bordo di selezione, viene visualizzato nell'angolo superiore sinistro del riquadro.

1. Posizionare il puntatore all'interno del bordo di selezione e trascinare l'immagine nella posizione desiderata nell'immagine.

1. Per ancorare l'immagine nella nuova posizione, selezionare all'esterno del bordo di selezione.

#### <a name="to-delete-the-current-selection-without-moving-it-to-the-clipboard"></a>Per eliminare la selezione corrente senza trasferirla negli Appunti

Vai a menu **modifica** > **Elimina**.

   L'area originale della selezione viene riempita con il colore di sfondo corrente.

> [!NOTE]
> È possibile accedere ai comandi **taglia**, **copia**, **Incolla**ed **Elimina** facendo clic con il pulsante destro del mouse nella finestra **visualizzazione risorse** .

#### <a name="to-move-the-selection"></a>Per spostare la selezione

1. Posizionare il puntatore all'interno del bordo di selezione o in qualsiasi punto, ad eccezione dei quadratini di ridimensionamento.

1. Trascinare la selezione nella nuova posizione.

1. Per ancorare la selezione nell'immagine nella nuova posizione, selezionare all'esterno del bordo di selezione.

Per ulteriori informazioni sul disegno con una selezione, vedere [creazione di un pennello personalizzato](../windows/creating-a-custom-brush-image-editor-for-icons.md).

### <a name="to-flip-an-image"></a>Per capovolgere un'immagine

È possibile capovolgere o ruotare un'immagine per creare un'immagine speculare dell'originale, capovolgere l'immagine oppure ruotare l'immagine a destra di 90 gradi alla volta.

- Per capovolgere orizzontalmente l'immagine (immagine speculare), passare all' **immagine** del menu > **capovolgere orizzontalmente**.

- Per capovolgere l'immagine verticalmente (capovolgere), passare all' **immagine** del menu > **capovolgere verticalmente**.

- Per ruotare l'immagine di 90 gradi, passare all' **immagine** del menu > **ruotare 90 gradi**.

   > [!NOTE]
   > È anche possibile usare i [tasti](../windows/accelerator-keys-image-editor-for-icons.md) di scelta rapida per questi comandi oppure accedere ai comandi dal menu di scelta rapida (selezionare all'esterno dell'immagine nell' **editor di immagini**).

### <a name="to-resize-an-image"></a>Per ridimensionare un'immagine

Il comportamento dell' **editor di immagini** durante il ridimensionamento di un'immagine dipende dal fatto che sia [stata selezionata](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md) l'intera immagine o solo una parte di essa.

Quando la selezione include solo una parte dell'immagine, l' **editor di immagini** compatta la selezione eliminando righe o colonne di pixel e riempiendo le aree sgomberate con il colore di sfondo corrente. Può inoltre estendere la selezione duplicando righe o colonne di pixel.

Quando la selezione include l'intera immagine, l' **editor di immagini** compatta ed estende l'immagine oppure le raccoglie ed estende.

Sono disponibili due meccanismi per ridimensionare un'immagine, ovvero i quadratini di ridimensionamento e il [finestra Proprietà](/visualstudio/ide/reference/properties-window). Trascinare i quadratini di ridimensionamento per modificare le dimensioni di tutta o parte di un'immagine. Gli handle di ridimensionamento che è possibile trascinare sono solidi. Non è possibile trascinare gli handle vuoti. Utilizzare la finestra **Proprietà** per ridimensionare solo l'intera immagine, non una parte selezionata.

![Ridimensionamento di handle in una bitmap](../mfc/media/vcimageeditorsizinghandles.gif "vcImageEditorSizingHandles")<br/>
Quadratini di ridimensionamento

> [!NOTE]
> Se è stata selezionata l'opzione **griglia affiancata** nella finestra di [dialogo Impostazioni griglia](../windows/grid-settings-dialog-box-image-editor-for-icons.md), il ridimensionamento viene agganciato alla successiva riga della griglia affiancata. Se è selezionata solo l'opzione **griglia pixel** (impostazione predefinita), il ridimensionamento viene bloccato sul successivo pixel disponibile.

#### <a name="to-resize-an-entire-image-using-the-properties-window"></a>Per ridimensionare un'intera immagine utilizzando la finestra Proprietà

1. Aprire l'immagine di cui si desidera modificare le proprietà.

1. Nelle caselle **larghezza** e **altezza** del [finestra Proprietà](/visualstudio/ide/reference/properties-window)digitare le dimensioni desiderate.

   Se si aumentano le dimensioni dell'immagine, l' **editor di immagini** estende l'immagine a destra, verso il basso o a entrambi e riempie la nuova regione con il colore di sfondo corrente. L'immagine non è allungata.

   Se si abbreviano le dimensioni dell'immagine, l' **editor di immagini** Ritaglia l'immagine sul bordo destro o inferiore o entrambi.

   > [!NOTE]
   > È possibile utilizzare le proprietà **Width** e **Height** per ridimensionare solo l'intera immagine, non per ridimensionare una selezione parziale.

#### <a name="to-crop-or-extend-an-entire-image"></a>Per ritagliare o estendere un'intera immagine

1. Selezionare l'intera immagine.

   Se una parte dell'immagine è attualmente selezionata e si vuole selezionare l'intera immagine, selezionare un punto qualsiasi nell'immagine al di fuori del bordo di selezione corrente.

1. Trascinare un quadratino di ridimensionamento fino a quando l'immagine non è la dimensione corretta.

In genere, l' **editor di immagini** seleziona o ingrandisce un'immagine quando lo si ridimensiona spostando un quadratino di ridimensionamento. Se si tiene premuto il tasto **MAIUSC** mentre si sposta un quadratino di ridimensionamento, l' **editor di immagini** compatta o estende l'immagine.

#### <a name="to-shrink-or-stretch-an-entire-image"></a>Per compattare o estendere un'intera immagine

1. Selezionare l'intera immagine.

   Se è attualmente selezionata una parte dell'immagine e si vuole selezionare l'intera immagine, selezionare un punto qualsiasi nell'immagine al di fuori del bordo di selezione corrente.

1. Tenere premuto il tasto **MAIUSC** e trascinare un quadratino di ridimensionamento fino a quando l'immagine non è la dimensione corretta.

#### <a name="to-shrink-or-stretch-part-of-an-image"></a>Per compattare o allungare parte di un'immagine

1. Selezionare la parte dell'immagine che si desidera ridimensionare. Per ulteriori informazioni, vedere [selezione di un'area dell'immagine](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md).

1. Trascinare uno dei quadratini di ridimensionamento finché la selezione non è la dimensione corretta.

### <a name="to-edit-an-image-outside-of-a-project"></a>Per modificare un'immagine all'esterno di un progetto

È possibile aprire e modificare le immagini nell'ambiente di sviluppo analogamente a qualsiasi applicazione grafica, ad esempio aprendo una bitmap per la modifica autonoma. Le immagini utilizzate non devono far parte di un progetto di Visual Studio.

1. Vai a **file** di menu > **Apri**.

1. Nella casella **file di tipo** selezionare **tutti i file**.

1. Individuare e aprire l'immagine che si desidera modificare.

### <a name="to-change-image-properties"></a>Per modificare le proprietà dell'immagine

È possibile impostare o modificare le proprietà di un'immagine usando il [finestra Proprietà](/visualstudio/ide/reference/properties-window).

1. Aprire l'immagine nell' **editor di immagini**.

1. Nella finestra **Proprietà** modificare una o tutte le proprietà per l'immagine.

   |Proprietà|Descrizione|
   |--------------|-----------------|
   |**Colori**|Specifica la combinazione di colori per l'immagine. Selezionare **monocromatico**, **16**o **256**o **true color**.<br/><br/>Se l'immagine è già stata disegnata con una tavolozza a 16 colori, la selezione di **monocromie** causa le sostituzioni di nero e bianco per i colori nell'immagine. Il contrasto non viene sempre mantenuto: ad esempio, le aree adiacenti di rosso e verde sono entrambe convertite in nero.|
   |**Filename**|Specifica il nome del file di immagine.<br/><br/>Per impostazione predefinita, Visual Studio assegna un nome file di base creato rimuovendo i primi quattro caratteri ("IDB_") dall'identificatore di risorsa predefinito (IDB_BITMAP1) e aggiungendo l'estensione appropriata. Il nome del file per l'immagine in questo esempio è *bitmap1. bmp*. È possibile rinominarlo *MYBITMAP1. bmp*.|
   |**Height**|Imposta l'altezza dell'immagine in pixel. Il valore predefinito è 48.<br/><br/>L'immagine viene ritagliata o viene aggiunto uno spazio vuoto sotto l'immagine esistente.|
   |**ID**|Imposta l'identificatore della risorsa.<br/><br/>Per un'immagine, Microsoft Visual Studio, per impostazione predefinita, assegna il successivo identificatore disponibile in una serie: IDB_BITMAP1, IDB_BITMAP2 e così via. Per le icone e i cursori vengono utilizzati nomi simili.|
   |**Tavolozza**|Modifica le proprietà del colore.<br/><br/>Fare doppio clic per selezionare un colore e visualizzare la finestra di [dialogo del selettore colori personalizzato](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md). Definire il colore digitando i valori RGB o HSL nelle caselle di testo appropriate.|
   |**SaveCompressed**|Indica se l'immagine è in un formato compresso. Questa proprietà è di sola lettura.<br/><br/>Visual Studio non consente di salvare le immagini in un formato compresso. Pertanto, per le immagini create in Visual Studio, questa proprietà sarà **false**. Se si apre un'immagine compressa (creata in un altro programma) in Visual Studio, questa proprietà sarà **true**. Se si salva un'immagine compressa con Visual Studio, questa verrà decompressa e questa proprietà tornerà a **false**.|
   |**Width**|Imposta la larghezza dell'immagine in pixel. Il valore predefinito per le bitmap è 48.<br/><br/>L'immagine viene ritagliata o viene aggiunto uno spazio vuoto a destra dell'immagine esistente.|

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Editor di immagini per le icone](../windows/image-editor-for-icons.md)<br/>
[Procedura: creare un'icona o un'altra immagine](../windows/creating-an-icon-or-other-image-image-editor-for-icons.md)<br/>
[Procedura: usare uno strumento di disegno](../windows/using-a-drawing-tool-image-editor-for-icons.md)<br/>
[Procedura: utilizzare il colore](../windows/working-with-color-image-editor-for-icons.md)<br/>
[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>