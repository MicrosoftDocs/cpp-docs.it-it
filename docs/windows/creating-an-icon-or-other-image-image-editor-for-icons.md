---
description: "Altre informazioni su: procedura: creare un'icona o un'altra immagine"
title: "Procedura: creare un'icona o un'altra immagine"
ms.date: 02/15/2019
helpviewer_keywords:
- bitmaps [C++]
- images [C++], creating
- resources [C++], creating images
- bitmaps [C++], creating
- graphics [C++], creating
- Image editor [C++], creating images
- cursors [C++], creating
- image resources [C++], display devices
- icons [C++], creating
- cursors [C++], types
- icons [C++]
- Image editor [C++], icons and cursors
- cursors [C++]
- display devices [C++], creating icons for
- cursors [C++], hot spots
- icons [C++], types
- icons [C++], creating
- display devices [C++], creating image
- images [C++], creating for display devices
- icons [C++], inserting
- New <Device> Image Type dialog box [C++]
- Custom Image dialog box [C++]
- Open <Device> Image dialog box [C++]
- New Device Image command
- display devices [C++], adding images
- cursors [C++], adding
- icons, adding
- display devices [C++], copying images
- cursors [C++], copying
- icons, copying
- cursors [C++], deleting
- display devices [C++], deleting device image
- icons, erasing
- icons, deleting
- cursors [C++], undoing changes
- icons, undoing changes
- cursors [C++], screen regions
- inverse colors [C++], device images
- transparent regions, device images
- transparency, device images
- Image editor [C++], device images
- inverse regions, device images
- cursors [C++], transparent regions
- screen colors
- regions, transparent
- icons [C++], transparent regions
- display devices [C++], transparent and screen regions
- transparent regions in devices
- regions, inverse
- colors [C++], Image editor
- device projects [C++], transparent images
- icons [C++], screen regions
- 256-color palette
- cursors [C++], color
- colors [C++], icons
- colors [C++], cursors
- icons, color
- colors [C++], icons and cursors
- color palettes, 256-color
- palettes, 256-color
- cursors [C++], hot spots
- hot spots
- .gif files [C++], saving bitmaps as
- jpg files [C++], saving bitmaps as
- jpeg files [C++], saving bitmaps as
- .jpg files [C++], saving bitmaps as
- Image editor [C++], converting image formats
- gif files [C++], saving bitmaps as
- bitmaps [C++], converting formats
- .jpeg files [C++], saving bitmaps as
- graphics [C++], converting formats
- images [C++], converting formats
- images [C++], stand-alone editing
- Image editor [C++], converting image formats
- graphics [C++], converting formats
- images [C++], converting formats
ms.assetid: 66db3fb2-cfc1-48a2-9bdd-53f61eb7ee30
ms.openlocfilehash: fee71fdfa073365b0ba63b1a789e0928bb1557ba
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97327133"
---
# <a name="how-to-create-an-icon-or-other-image"></a>Procedura: creare un'icona o un'altra immagine

È possibile creare una nuova immagine, una bitmap, un'icona, un cursore o una barra degli strumenti e quindi utilizzare l' **editor di immagini** per personalizzarne l'aspetto. È anche possibile creare una nuova bitmap basata su un [modello di risorsa](./how-to-create-a-resource-script-file.md).

## <a name="icons-and-cursors-image-resources-for-display-devices"></a>Icone e cursori: risorse immagine per i dispositivi di visualizzazione

Icone e cursori sono risorse grafiche che possono contenere più immagini di diverse dimensioni e le combinazioni di colori per diversi tipi di dispositivi di visualizzazione. Un cursore presenta anche un'area sensibile, il percorso utilizzato da Windows per tenere traccia della posizione. Le icone e i cursori vengono creati e modificati usando l' **editor di immagini**, così come le bitmap e altre immagini.

Quando si crea una nuova icona o un nuovo cursore, l' **editor di immagini** crea innanzitutto un'immagine di un tipo standard. L'immagine viene inizialmente riempita con il colore della schermata (trasparente). Se l'immagine è un cursore, l'area sensibile è inizialmente l'angolo superiore sinistro con le coordinate `0,0` .

Per impostazione predefinita, l' **editor di immagini** supporta la creazione di immagini aggiuntive per i dispositivi illustrati nella tabella seguente. È possibile creare immagini per altri dispositivi digitando i parametri di larghezza, altezza e numero di colori nella finestra di dialogo dell' **immagine personalizzata** .

|Colore|Larghezza (pixel)|Altezza (pixel)|
|-----------|----------------------|-----------------------|
|Monocromatico|16|16|
|Monocromatico|32|32|
|Monocromatico|48|48|
|Monocromatico|64|64|
|Monocromatico|96|96|
|16|16|16|
|16|32|32|
|16|64|64|
|16|48|48|
|16|96|96|
|256|16|16|
|256|32|32|
|256|48|48|
|256|64|64|
|256|96|96|

### <a name="create-a-device-image-icon-or-cursor"></a>Creare un'immagine del dispositivo (icona o cursore)

Quando si crea una nuova risorsa icona o cursore, l' **editor di immagini** crea prima un'immagine in uno stile specifico (32 × 32, 16 colori per le icone e 32 × 32, monocromatico per i cursori). È quindi possibile aggiungere immagini con dimensioni e stili diversi all'icona iniziale o al cursore e modificare ogni immagine aggiuntiva, se necessario, per i diversi dispositivi di visualizzazione. È anche possibile modificare un'immagine usando un'operazione di taglia e incolla da un tipo di immagine esistente o da una bitmap creata in un programma di grafica.

Quando si apre la risorsa icona o cursore nell' [editor di immagini](../windows/image-editor-for-icons.md), per impostazione predefinita viene aperta l'immagine che corrisponde maggiormente al dispositivo di visualizzazione corrente.

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere la pagina relativa alla [creazione di un nuovo file script di risorsa](../windows/how-to-create-a-resource-script-file.md).

La finestra di dialogo **nuovo &lt; tipo di &gt; immagine del dispositivo** consente di creare una nuova immagine del dispositivo di un tipo specificato. Per aprire la finestra di dialogo **nuova \<Device> immagine** , passare a **immagine** menu  >  **nuovo tipo di immagine**. Sono incluse le proprietà seguenti: **tipo di immagine di destinazione** e **personalizzato**.

La proprietà **tipo immagine di destinazione** elenca i tipi di immagine disponibili in cui è possibile selezionare il tipo di immagine che si desidera aprire:

:::row:::
   :::column span="":::
      16 x 16, 16 colori \
      32 x 32, 16 colori \
      48 x 48, 16 colori \
      64 x 64, 16 colori \
      96 x 96, 16 colori
   :::column-end:::
   :::column span="":::
      16 x 16, 256 colori \
      32 x 32, 256 colori \
      48 x 48, 256 colori \
      64 x 64, 256 colori \
      96 x 96, 256 colori
   :::column-end:::
   :::column span="":::
      16 x 16, monocromatico \
      32 x 32, monocromatico \
      48 x 48, monocromatico \
      64 x 64, monocromatico \
      96 x 96, monocromatico
   :::column-end:::
:::row-end:::

> [!NOTE]
> Le immagini esistenti non verranno visualizzate in questo elenco.

La proprietà **personalizzata** apre la finestra di dialogo **immagine personalizzata** nella quale è possibile creare una nuova immagine con una dimensione e un numero di colori personalizzati.

La finestra di dialogo **immagine personalizzata** consente di creare una nuova immagine con una dimensione e un numero di colori personalizzati. Sono incluse le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Larghezza**|Fornisce uno spazio per immettere la larghezza dell'immagine personalizzata in pixel (1-512, limite di 2048).|
|**Altezza**|Fornisce uno spazio per l'immissione dell'altezza dell'immagine personalizzata in pixel (1-512, limite di 2048).|
|**Colori**|Fornisce uno spazio per scegliere il numero di colori per l'immagine personalizzata: 2, 16 o 256.|

Usare la finestra di dialogo **Apri &lt; &gt; immagine dispositivo** per aprire le immagini del dispositivo in progetti C++. Elenca le immagini del dispositivo esistenti nella risorsa corrente (immagini che fanno parte della risorsa corrente). La seguente proprietà include:

|Proprietà|Descrizione|
|---|---|
|**Immagini correnti**|Elenca le immagini incluse nella risorsa. Selezionare il tipo di immagine che si vuole aprire.|

#### <a name="to-create-a-new-icon-or-cursor"></a>Per creare una nuova icona o un nuovo cursore

1. In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources)fare clic con il pulsante destro del mouse sul file *RC* , quindi scegliere **Inserisci risorsa**. Se nel file *RC* è già presente una risorsa immagine, ad esempio un cursore, è possibile fare clic con il pulsante destro del mouse sulla cartella del **cursore** e scegliere **Inserisci cursore**.

1. Nella finestra di [dialogo Inserisci risorsa](./how-to-create-a-resource-script-file.md)selezionare **icona** o **cursore** e scegliere **nuovo**. Per le icone, questa azione crea una risorsa icona con un'icona 32 × 32, a 16 colori. Per i cursori viene creata un'immagine 32 × 32, monocromatico (a 2 colori).

   Se viene visualizzato un segno più ( **+** ) accanto al tipo di risorsa immagine nella finestra di dialogo **Inserisci risorsa** , significa che i modelli della barra degli strumenti sono disponibili. Selezionare il segno più per espandere l'elenco dei modelli, selezionare un modello e scegliere **nuovo**.

### <a name="to-add-an-image-for-a-different-display-device"></a>Per aggiungere un'immagine per un diverso dispositivo di visualizzazione

1. Passare a **immagine** menu  >  **nuovo dispositivo immagine** oppure fare clic con il pulsante destro del mouse nel riquadro **editor di immagini** e scegliere **nuova immagine dispositivo**.

1. Selezionare il tipo di immagine che si desidera aggiungere. È anche possibile selezionare **personalizzato** per creare un'icona le cui dimensioni non sono disponibili nell'elenco predefinito.

### <a name="to-copy-a-device-image"></a>Per copiare un'immagine del dispositivo

1. Vai a **immagine** del menu  >  **Apri immagine dispositivo** e scegli un'immagine dall'elenco immagini correnti. Ad esempio, scegliere la versione 32 × 32, a 16 colori di un'icona.

1. Copiare l'immagine icona attualmente visualizzata (**CTRL** + **C**).

1. Aprire un'immagine diversa dell'icona in un'altra finestra dell' **editor di immagini** . Ad esempio, aprire la versione 16 × 16 a 16 colori dell'icona.

1. Incollare l'immagine dell'icona (**CTRL** + **V**) da una finestra dell' **editor di immagini** all'altra. Se si incollano dimensioni maggiori in una dimensione inferiore, è possibile usare gli handle dell'icona per ridimensionare l'immagine.

### <a name="to-delete-a-device-image"></a>Per eliminare un'immagine del dispositivo

Quando l'immagine dell'icona viene visualizzata nell' **editor di immagini**, passare a menu **immagine**  >  **Elimina immagine dispositivo**. Quando si elimina l'ultima immagine icona nella risorsa, viene eliminata anche la risorsa.

> [!NOTE]
> Quando si preme il tasto **Canc** , le immagini e i colori disegnati su un'icona vengono eliminati, ma l'icona rimane ed è ora possibile riprogettarla. Se si preme **Canc** per errore, premere **CTRL** + **Z** per annullare l'azione.

### <a name="to-create-transparent-or-inverse-regions-in-device-images"></a>Per creare aree trasparenti o inverse nelle immagini del dispositivo

Nell' [editor di immagini](../windows/image-editor-for-icons.md)l'icona iniziale o l'immagine del cursore ha un attributo trasparente. Sebbene le immagini icona e cursore siano rettangolari, molti non vengono visualizzati, perché le parti dell'immagine sono trasparenti e l'immagine sottostante sullo schermo viene visualizzata attraverso l'icona o il cursore. Quando si trascina un'icona, le parti dell'immagine possono essere visualizzate in un colore invertito. Questo effetto viene creato impostando il colore dello schermo e il colore inverso nella [finestra colori](./image-editor-for-icons.md).

La schermata e i colori inversi applicati alle icone e ai cursori formano e colorano l'immagine derivata o assegnano aree inverse. I colori indicano le parti dell'immagine che dispongono di tali attributi. È possibile modificare i colori che rappresentano gli attributi relativi al colore dello schermo e al colore inverso nella modifica. Queste modifiche non influiscono sull'aspetto dell'icona o del cursore nell'applicazione.

> [!NOTE]
> Le finestre di dialogo e i comandi di menu visualizzati potrebbero essere diversi da quelli descritti nella **Guida** a seconda dell'edizione o delle impostazioni attive. Per modificare le impostazioni, passare a menu **strumenti**  >  **Importa/Esporta impostazioni**. Per altre informazioni, vedere [personalizzare l'IDE di Visual Studio](/visualstudio/ide/personalizing-the-visual-studio-ide).

#### <a name="to-create-transparent-or-inverse-regions"></a>Per creare aree trasparenti o inverse

1. Nella finestra **colori** scegliere la **schermata** del selettore o il colore **inverso**.

1. Applicare lo schermo o il colore inverso all'immagine usando uno strumento di disegno. Per ulteriori informazioni sugli strumenti di disegno, vedere [utilizzo di uno strumento di disegno](using-a-drawing-tool-image-editor-for-icons.md).

#### <a name="to-change-the-screen-or-inverse-color"></a>Per modificare la schermata o il colore inverso

1. Selezionare il selettore dei **colori dello schermo** o il selettore **di colore inverso** .

1. Scegliere un colore dalla tavolozza **colori** nella finestra **colori** .

   Il colore complementare viene assegnato automaticamente per l'altro selettore.

   > [!TIP]
   > Se si fa doppio clic sullo **schermo** o sul selettore del colore **inverso** , viene visualizzata la finestra di [dialogo Selezione colori personalizzata](./image-editor-for-icons.md) .

### <a name="use-the-256-color-palette"></a>Usare la tavolozza colori 256

Usando l' **editor di immagini**, le icone e i cursori possono essere di grandi dimensioni (64 × 64) con una tavolozza dei colori 256 tra cui scegliere. Dopo aver creato la risorsa, viene selezionato uno stile di immagine del dispositivo.

#### <a name="to-create-a-256-color-icon-or-cursor"></a>Per creare un'icona o un cursore a 256 colori

1. In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources)fare clic con il pulsante destro del mouse sul file *RC* , quindi scegliere **Inserisci risorsa**. Se nel file *RC* è già presente una risorsa immagine, ad esempio un cursore, è possibile fare clic con il pulsante destro del mouse sulla cartella del **cursore** e scegliere **Inserisci cursore**.

1. Nella finestra di [dialogo Inserisci risorsa](./how-to-create-a-resource-script-file.md)selezionare **icona** o **cursore** e scegliere **nuovo**.

1. Passare a **immagine** menu  >  **nuovo dispositivo immagine** e selezionare lo stile di immagine a 256 colori desiderato.

#### <a name="to-choose-a-color-from-the-256-color-palette-for-large-icons"></a>Per scegliere un colore dalla tavolozza dei colori 256 per le icone grandi

Per creare una selezione dalla tavolozza colori 256, è necessario selezionare i colori dalla tavolozza **colori** nella [finestra colori](./image-editor-for-icons.md).

1. Selezionare l'icona o il cursore grande oppure creare una nuova icona o cursore di grandi dimensioni.

1. Scegliere un colore dai colori 256 visualizzati nella tavolozza **colori** della finestra **colori** .

   Il colore selezionato diventerà il colore corrente nella tavolozza **colori** della finestra **colori** .

   > [!NOTE]
   > La tavolozza iniziale utilizzata per le immagini a 256 colori corrisponde alla tavolozza restituita dall' `CreateHalftonePalette` API Windows. Tutte le icone destinate alla shell di Windows devono usare questa tavolozza per evitare lo sfarfallio durante la realizzazione della tavolozza.

### <a name="to-set-a-cursors-hot-spot"></a>Per impostare l'area sensibile di un cursore

L'area sensibile di un cursore è il punto in cui Windows si riferisce al rilevamento della posizione del cursore. Per impostazione predefinita, l'area sensibile è impostata sull'angolo superiore sinistro del cursore con le coordinate `0,0` . La proprietà **hotspot** nella [finestra Proprietà](/visualstudio/ide/reference/properties-window) Mostra le coordinate di area sensibile.

1. Nella [barra degli strumenti dell'editor di immagini](./image-editor-for-icons.md)scegliere lo strumento **Imposta HotSpot** .

1. Selezionare il pixel che si desidera assegnare come area sensibile del cursore.

   La proprietà **hotspot** nella finestra **Proprietà** Visualizza le nuove coordinate.

### <a name="to-create-and-save-a-bitmap-as-a-gif-or-jpeg"></a>Per creare e salvare una bitmap come. gif o. jpeg

Quando si crea una bitmap, l'immagine viene creata in formato bitmap (BMP). È tuttavia possibile salvare l'immagine come GIF o JPEG o in altri formati grafici.

> [!NOTE]
> Questo processo non si applica alle icone e ai cursori.

1. Scegliere Apri dal menu **file**  >  , quindi selezionare **file**.

1. Nella finestra di **dialogo nuovo file** scegliere la cartella **Visual C++** , quindi selezionare **file bitmap (. bmp)** nella casella **modelli** e selezionare **Apri**.

   La bitmap viene aperta nell' **editor di immagini**.

1. Apportare modifiche alla nuova bitmap in base alle esigenze.

1. Con la bitmap ancora aperta nell' **editor di immagini**, andare al menu **file**  >  **Salva *nomefile*. bmp come**.

1. Nella finestra di dialogo **Salva file con** nome digitare il nome che si desidera assegnare al file e l'estensione che denota il formato di file desiderato nella casella **nome file** . Ad esempio, *myfile.gif*.

   > [!NOTE]
   > È necessario creare o aprire la bitmap all'esterno del progetto per salvarla in un altro formato di file. Se viene creato o aperto nel progetto, il comando **Salva con nome** non sarà disponibile. Per altre informazioni, vedere [visualizzazione di risorse in un file script di risorsa all'esterno di un progetto (standalone)](./how-to-create-a-resource-script-file.md).

1. Selezionare **Salva**.

### <a name="to-convert-an-image-from-one-format-to-another"></a>Per convertire un'immagine da un formato a un altro

È possibile aprire immagini GIF o JPEG nell' **editor di immagini** e salvarle come bitmap. Inoltre, è possibile aprire un file bitmap e salvarlo come GIF o JPEG. Le immagini utilizzate non devono far parte di un progetto per la modifica nell'ambiente di sviluppo (vedere [modifica di immagini](./selecting-an-area-of-an-image-image-editor-for-icons.md)autonome).

1. Aprire l'immagine nell' **editor di immagini**.

1. Andare al menu **file**  >  **Salva *nomefile con nome***.

1. Nella casella **nome file** della finestra di dialogo **Salva file** con nome digitare il nome del file e l'estensione che denota il formato desiderato.

1. Selezionare **Salva**.

### <a name="to-add-a-new-image-resource-to-an-unmanaged-c-project"></a>Per aggiungere una nuova risorsa immagine a un progetto C++ non gestito

1. In [visualizzazione risorse](how-to-create-a-resource-script-file.md#create-resources)fare clic con il pulsante destro del mouse sul file *RC* , quindi scegliere **Inserisci risorsa**. Se nel file *RC* è già presente una risorsa immagine esistente, ad esempio un cursore, è sufficiente fare clic con il pulsante destro del mouse sulla cartella del **cursore** e scegliere **Inserisci cursore**.

1. Nella finestra di [dialogo Inserisci risorsa](./how-to-create-a-resource-script-file.md)selezionare il tipo di risorsa immagine che si vuole creare, ad esempio **bitmap**, quindi scegliere **nuovo**.

   Se viene visualizzato un segno più ( **+** ) accanto al tipo di risorsa immagine nella finestra di dialogo **Inserisci risorsa** , significa che i modelli della barra degli strumenti sono disponibili. Selezionare il segno più per espandere l'elenco dei modelli, selezionare un modello e scegliere **nuovo**.

### <a name="to-add-a-new-image-resource-to-a-project-in-a-net-programming-language"></a>Per aggiungere una nuova risorsa immagine a un progetto in un linguaggio di programmazione .NET

1. In **Esplora soluzioni** fare clic con il pulsante destro del mouse sulla cartella del progetto (ad esempio, *WindowsApplication1*).

1. Scegliere **Aggiungi** dal menu di scelta rapida, quindi **Aggiungi nuovo elemento**.

1. Nel riquadro **categorie** , espandere la cartella **elementi del progetto locale** , quindi scegliere **risorse**.

1. Nel riquadro **modelli** scegliere il tipo di risorsa che si vuole aggiungere al progetto.

   La risorsa viene aggiunta al progetto in **Esplora soluzioni** e la risorsa viene aperta nell' [editor di immagini](../windows/image-editor-for-icons.md). È ora possibile usare tutti gli strumenti disponibili nell' **editor di immagini** per modificare l'immagine. Per ulteriori informazioni sull'aggiunta di immagini a un progetto gestito, vedere [caricamento di un'immagine in fase di progettazione](/dotnet/framework/winforms/controls/how-to-load-a-picture-using-the-designer-windows-forms).

## <a name="requirements"></a>Requisiti

Nessuno

## <a name="see-also"></a>Vedi anche

[Editor di immagini per le icone](../windows/image-editor-for-icons.md)<br/>
[Procedura: modificare un'immagine](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md)<br/>
[Procedura: usare uno strumento di disegno](../windows/using-a-drawing-tool-image-editor-for-icons.md)<br/>
[Procedura: utilizzare il colore](../windows/working-with-color-image-editor-for-icons.md)<br/>
[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
<!--
[Converting Bitmaps to Toolbars](./toolbar-editor.md)<br/>
[Creating New Toolbars](./toolbar-editor.md)<br/>
[Icons](/windows/win32/menurc/icons)<br/>
[Cursors](/windows/win32/menurc/cursors)<br/>-->
