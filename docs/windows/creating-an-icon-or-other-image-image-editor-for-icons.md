---
title: "Procedura: Creare un'icona o un'altra immagine"
ms.date: 02/15/2019
f1_keywords:
- vc.editors.bitmap
- vc.editors.icon
- vc.editors.newimagetype
- vc.editors.customimage
- vc.editors.opendeviceimage
- vc.editors.image.editing
- vc.editors.image.editing
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
ms.openlocfilehash: 4191b1bd495a8908610b6e49c3dff676de2304dc
ms.sourcegitcommit: c1f646c8b72f330fa8cf5ddb0f8f261ba10d16f0
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2019
ms.locfileid: "58328493"
---
# <a name="how-to-create-an-icon-or-other-image"></a>Procedura: Creare un'icona o un'altra immagine

È possibile creare una nuova immagine, bitmap, icona, cursore o sulla barra degli strumenti e quindi usare il **Editor di immagini** per personalizzarne l'aspetto. È anche possibile creare una nuova bitmap in base a un [modello di resource](../windows/how-to-use-resource-templates.md).

## <a name="icons-and-cursors-image-resources-for-display-devices"></a>Icone e cursori: Risorse immagine per i dispositivi di visualizzazione

Icone e cursori sono risorse grafiche che possono contenere più immagini di diverse dimensioni e le combinazioni di colori per diversi tipi di dispositivi di visualizzazione. Un cursore ha anche un'area sensibile, viene utilizzato il percorso Windows per rilevare la posizione. Icone e cursori vengono creati e modificati utilizzando il **Editor di immagini**, come le bitmap e altre immagini.

Quando si crea una nuova icona o cursore, la **Editor di immagini** crea innanzitutto un'immagine di un tipo standard. L'immagine viene inizialmente riempita con il colore della schermata (trasparente). Se l'immagine è un cursore, l'area sensibile inizialmente è l'angolo superiore sinistro con coordinate `0,0`.

Per impostazione predefinita, il **Editor di immagini** supporta la creazione di immagini aggiuntive per i dispositivi illustrati nella tabella seguente. È possibile creare immagini per altri dispositivi specificando i parametri di larghezza, altezza e numero di colori nella **Custom Image** nella finestra di dialogo.

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

### <a name="create-a-device-image-icon-or-cursor"></a>Creare un'immagine per dispositivo (icona o cursore)

Quando si crea una nuova icona o una risorsa di cursore, la **Editor di immagini** crea innanzitutto un'immagine in uno stile specifico (32 × 32, 32 × 32, bianco e nero per i cursori e 16 colori per le icone). È quindi possibile aggiungere immagini di diverse dimensioni e stili per l'icona iniziale o un cursore e modificare ogni ulteriore immagine, in base alle esigenze, per i dispositivi di visualizzazione diverse. È anche possibile modificare un'immagine utilizzando un'operazione di taglia e Incolla da un tipo di immagine esistente o da una bitmap creata in un programma di grafica.

Quando si apre la risorsa icona o cursore nel [Editor di immagini](../windows/image-editor-for-icons.md), l'immagine che corrisponde maggiormente il dispositivo di visualizzazione corrente viene aperto per impostazione predefinita.

> [!NOTE]
> Se il progetto non contiene già un file RC, vedere [creando un nuovo File di Script di risorsa](../windows/how-to-create-a-resource-script-file.md).

Il **New &lt;dispositivo&gt; tipo di immagine** nella finestra di dialogo consente di creare una nuova immagine del dispositivo di un tipo specificato. Per aprire la **New \<dispositivo > immagine** della finestra di dialogo passare al menu **immagine** > **tipo nuova immagine**. Sono incluse le proprietà seguenti **tipo di immagine di destinazione** e **Custom**.

Il **tipo di immagine di destinazione** proprietà sono elencati i tipi di immagine disponibili in cui si seleziona l'immagine del tipo che si desidera aprire:

||||
|-|-|-|
|-16x16, 16 colori|-48 x 48, 16 colori|-96 x 96, 16 colori|
|-16x16, 256 colori|-48 x 48, 256 colori|-96 x 96, 256 colori|
|-16 x 16, monocromatico|-48 x 48, monocromatico|-96 x 96, monocromatico|
|-32 x 32, 16 colori|-64 x 64, 16 colori||
|-32 x 32, 256 colori|-64 x 64, 256 colori||
|-32 x 32, monocromatico|-64 x 64, monocromatico||

> [!NOTE]
> Le immagini esistenti non essere visualizzate in questo elenco.

Il **personalizzati** verrà visualizzata la proprietà di **immagine personalizzata** nella finestra di dialogo in cui è possibile creare una nuova immagine con dimensioni personalizzate e numero di colori.

Il **immagine personalizzata** nella finestra di dialogo consente di creare una nuova immagine con dimensioni personalizzate e numero di colori. Sono incluse le proprietà seguenti:

|Proprietà|Descrizione|
|---|---|
|**Width**|Fornisce uno spazio per immettere la larghezza dell'immagine personalizzata in pixel (1-512, limite di 2048).|
|**Height**|Fornisce uno spazio per l'utente di immettere l'altezza per l'immagine personalizzata in pixel (1-512, limite di 2048).|
|**Colori**|Fornisce uno spazio che consente di scegliere il numero di colori per l'immagine personalizzata: 2, 16 o 256.|

Usare la **apre &lt;dispositivo&gt; immagine** finestra di dialogo per aprire immagini per i dispositivi nei progetti C++. Elenca immagini per i dispositivi esistenti nella risorsa corrente (immagini che fanno parte della risorsa corrente). È la seguente proprietà inclusione:

|Proprietà|Descrizione|
|---|---|
|**Immagini correnti**|Elenca le immagini incluse nella risorsa. Selezionare il tipo di immagine che si desidera aprire.|

#### <a name="to-create-a-new-icon-or-cursor"></a>Per creare una nuova icona o cursore

1. In [visualizzazione di risorse](how-to-create-a-resource-script-file.md#create-resources), fare doppio clic sui *RC* del file, quindi scegliere **Inserisci risorsa**. Se si dispone già di una risorsa immagine esistente *RC* file, ad esempio un cursore, è possibile fare doppio clic il **cursore** cartella e selezionare **cursore inserire**.

1. Nel [finestra di dialogo Inserisci risorsa](../windows/add-resource-dialog-box.md), selezionare **icona** oppure **cursore** e scegliere **New**. Per le icone, questa azione crea una risorsa icona con un 32 × 32, un'icona a 16 colori. Per i cursori, a 32 × 32, viene creata l'immagine monocromatica (2-colore).

   Se un segno più (**+**) visualizzato accanto al tipo di risorsa immagine nel **Inserisci risorsa** finestra di dialogo, significa che i modelli della barra degli strumenti sono disponibili. Selezionare il segno più per espandere l'elenco dei modelli, selezionare un modello e scegliere **New**.

### <a name="to-add-an-image-for-a-different-display-device"></a>Per aggiungere un'immagine per un diverso dispositivo di visualizzazione

1. Passare al menu di scelta **immagine** > **nuova immagine per dispositivo**, o fare doppio clic nella **Editor di immagini** riquadro e scegliere **nuova immagine per dispositivo**.

1. Selezionare il tipo di immagine da aggiungere. È anche possibile selezionare **Custom** per creare un'icona con dimensioni non sono disponibile nell'elenco predefinito.

### <a name="to-copy-a-device-image"></a>Per copiare un'immagine per dispositivo

1. Passare al menu di scelta **immagine** > **Apri immagine dispositivo** e scegliere un'immagine dall'elenco di immagini corrente. Ad esempio, scegliere i 32 × 32, versione 16 colori di un'icona.

1. Copiare l'immagine dell'icona visualizzata (**Ctrl**+**C**).

1. Aprire una diversa immagine dell'icona in un altro **Editor di immagini** finestra. Ad esempio, aprire il 16 × 16 a 16 colori versione dell'icona.

1. Incollare l'immagine dell'icona (**Ctrl**+**V**) da uno **Editor di immagini** finestra a altra. Se si incolla dimensioni maggiori in dimensioni inferiori, è possibile utilizzare gli handle icona per ridimensionare l'immagine.

### <a name="to-delete-a-device-image"></a>Per eliminare un'immagine per dispositivo

Mentre l'immagine dell'icona viene visualizzata nel **Editor di immagini**, passare al menu **immagine** > **Elimina immagine dispositivo**. Quando si elimina l'ultima immagine dell'icona nella risorsa, viene eliminata anche la risorsa.

> [!NOTE]
> Quando si preme il **CANC** chiave, le immagini e i colori disegnate su un'icona vengono eliminati, ma l'icona resta ed è ora possibile riprogettare lo. Se si preme **CANC** per errore, premere **Ctrl**+**Z** per annullare l'azione.

### <a name="to-create-transparent-or-inverse-regions-in-device-images"></a>Per creare aree trasparenti o di inversione nelle immagini per i dispositivi

Nel [Editor di immagini](../windows/image-editor-for-icons.md), l'immagine icona o cursore iniziale ha un attributo trasparente. Anche se le immagini di icone e cursori sono rettangolari, molti non sono presenti, perché le parti dell'immagine sono transparent e Mostra l'immagine nella schermata sottostante tramite l'icona o cursore. Quando si trascina un'icona, le parti dell'immagine possono essere in un colore invertito. Per creare questo effetto, impostare il colore dello schermo e inverso nel [finestra colori](../windows/colors-window-image-editor-for-icons.md).

I colori dello schermo e inversa si applicano alle icone e cursori su forma e colore dell'immagine derivata o assegnare aree geografiche inverse. I colori indicano le parti dell'immagine che dispongono di tali attributi. È possibile modificare i colori che rappresentano gli attributi di colore e inversione di colore nella modifica. Queste modifiche non influiscono sull'aspetto dell'icona o cursore all'interno dell'applicazione.

> [!NOTE]
> Le finestre di dialogo e i comandi di menu visualizzati potrebbero essere diversi da quelli descritti nella **Guida** a seconda delle impostazioni attive o dell'edizione del programma. Per modificare le impostazioni, passare al menu di scelta **degli strumenti** > **Importa / Esporta impostazioni**. Per altre informazioni, vedere [Personalizzare l'IDE di Visual Studio](/visualstudio/ide/personalizing-the-visual-studio-ide).

#### <a name="to-create-transparent-or-inverse-regions"></a>Per creare aree trasparenti o di inversione

1. Nel **colori** finestra, scegliere il selettore **colore** o **inversione di colore**.

1. Applicare la schermata o colore inverso all'immagine utilizzando uno strumento di disegno. Per altre informazioni sugli strumenti di disegno, vedere [usando uno strumento di disegno](using-a-drawing-tool-image-editor-for-icons.md).

#### <a name="to-change-the-screen-or-inverse-color"></a>Per modificare il colore dello schermo o di inversione

1. Selezionare il **: colore della schermata** selettore o il **inversione di colore** selettore.

1. Scegliere un colore nel **colori** tavolozza il **colori** finestra.

   Colore complementare viene assegnato automaticamente per il selettore di altri.

   > [!TIP]
   > Se si fa doppio clic il **colore** o **inversione di colore** selettore, i [nella finestra di dialogo Regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md) viene visualizzata.

### <a name="use-the-256-color-palette"></a>Utilizzare la tavolozza da 256 colori

Usando il **Editor di immagini**, icone e cursori possono essere con dimensioni large (64 x 64) con una tavolozza da 256 colori per scegliere da. Dopo aver creato la risorsa, viene selezionato uno stile di immagine del dispositivo.

#### <a name="to-create-a-256-color-icon-or-cursor"></a>Per creare un cursore o l'icona a 256 colori

1. In [visualizzazione di risorse](how-to-create-a-resource-script-file.md#create-resources), fare doppio clic sui *RC* del file, quindi scegliere **Inserisci risorsa**. Se si dispone già di una risorsa immagine esistente *RC* file, ad esempio un cursore, è possibile fare doppio clic il **cursore** cartella e selezionare **cursore inserire**.

1. Nel [finestra di dialogo Inserisci risorsa](../windows/add-resource-dialog-box.md), selezionare **icona** oppure **cursore** e scegliere **New**.

1. Passare al menu di scelta **immagine** > **nuova immagine per dispositivo** e selezionare lo stile di immagine a 256 colori desiderato.

#### <a name="to-choose-a-color-from-the-256-color-palette-for-large-icons"></a>Per scegliere un colore della tavolozza da 256 colori per le icone grandi

Per disegnare una selezione dalla tavolozza da 256 colori, è necessario selezionare i colori dal **colori** tavolozza le [finestra colori](../windows/colors-window-image-editor-for-icons.md).

1. Selezionare l'icona di grandi dimensioni o cursore, o creare una nuova icona di grandi dimensioni o un cursore.

1. Scegliere un colore da 256 colori visualizzati nella **colori** tavolozza il **colori** finestra.

   Colore selezionato diventerà il colore corrente nella **colori** tavolozza il **colori** finestra.

   > [!NOTE]
   > La tavolozza iniziale usata per le immagini di 256 colori corrisponde a quella restituita dalla `CreateHalftonePalette` API Windows. Tutte le icone progettate per la shell di Windows devono usare questo riquadro per evitare lo sfarfallio durante la realizzazione della tavolozza.

### <a name="to-set-a-cursors-hot-spot"></a>Per impostare l'area sensibile del cursore

L'area sensibile di un cursore è il punto al quale fa riferimento Windows per rilevare la posizione del cursore. Per impostazione predefinita, è impostato l'area sensibile nell'angolo superiore sinistro del cursore con coordinate `0,0`. Il **Hotspot** proprietà il [finestra proprietà](/visualstudio/ide/reference/properties-window) Mostra le coordinate di area sensibile.

1. Nel [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md), scegliere il **Imposta area sensibile** dello strumento.

1. Selezionare il pixel da assegnare come area sensibile del cursore.

   Il **Hotspot** proprietà il **proprietà** finestra vengono visualizzate le nuove coordinate.

### <a name="to-create-and-save-a-bitmap-as-a-gif-or-jpeg"></a>Per creare e salvare un'immagine bitmap come file GIF o JPEG

Quando si crea una bitmap, viene creata l'immagine in formato bitmap (bmp). È possibile, tuttavia, salvare l'immagine come un file GIF o JPEG o in altri formati di immagini.

> [!NOTE]
> Questo processo non è valida per le icone e cursori.

1. Passare al menu di scelta **File** > **Open**, quindi selezionare **File**.

1. Nel **finestra di dialogo Nuovo File**, scegliere il **Visual C++** cartella, quindi selezionare **File Bitmap (bmp)** nel **modelli** casella e seleziona  **Apri**.

   La bitmap viene aperto nel **Editor di immagini**.

1. Apportare le modifiche alla nuova bitmap in base alle esigenze.

1. Con la bitmap ancora aperta nel **Editor di immagini**, passare al menu **File** > **Salva *filename*bmp come**.

1. Nel **Salva File con nome** finestra di dialogo, digitare il nome da assegnare al file e l'estensione che indica il formato di file desiderato nel **nome File** casella. Ad esempio, *MioFile. gif*.

   > [!NOTE]
   > È necessario creare o aprire la mappa di bit all'esterno del progetto per salvarlo come un altro formato di file. Se si crea o aprirlo all'interno del progetto, il **Salva con nome** comando non sarà disponibile. Per altre informazioni, vedere [visualizzazione di risorse in un File di Script di risorsa all'esterno di un progetto (autonomo)](../windows/how-to-open-a-resource-script-file-outside-of-a-project-standalone.md).

1. Selezionare **Salva**.

### <a name="to-convert-an-image-from-one-format-to-another"></a>Per convertire un'immagine da un formato a altro

È possibile aprire immagini GIF o JPEG nella **Editor di immagini** e salvarle come bitmap. Inoltre, è possibile aprire un file bitmap e salvarlo come un file GIF o JPEG. Le immagini utilizzate non devono escludersi a parte di un progetto per la modifica nell'ambiente di sviluppo (vedere [modifica delle immagini autonome](../windows/editing-an-image-outside-of-a-project-image-editor-for-icons.md)).

1. Aprire l'immagine nel **Editor di immagini**.

1. Passare al menu di scelta **File** > **salvare *filename* come**.

1. Nel **Salva File con nome** nella finestra di dialogo il **nome File** , digitare il nome del file e l'estensione che indica il formato desiderato.

1. Selezionare **Salva**.

### <a name="to-add-a-new-image-resource-to-an-unmanaged-c-project"></a>Per aggiungere una nuova risorsa di immagine a un progetto C++ non gestito

1. In [visualizzazione di risorse](how-to-create-a-resource-script-file.md#create-resources), fare doppio clic sui *RC* del file, quindi scegliere **Inserisci risorsa**. Se hai già una risorsa immagine esistente *RC* file, ad esempio un cursore, è possibile semplicemente fare doppio clic il **cursore** cartella e selezionare **inserire cursore**.

1. Nel [finestra di dialogo Inserisci risorsa](../windows/add-resource-dialog-box.md), selezionare il tipo di risorsa immagine si vuole creare (**Bitmap**, ad esempio) quindi scegliere **New**.

   Se un segno più (**+**) visualizzato accanto al tipo di risorsa immagine nel **Inserisci risorsa** finestra di dialogo, significa che i modelli della barra degli strumenti sono disponibili. Selezionare il segno più per espandere l'elenco dei modelli, selezionare un modello e scegliere **New**.

### <a name="to-add-a-new-image-resource-to-a-project-in-a-net-programming-language"></a>Per aggiungere una nuova risorsa di immagine a un progetto in un linguaggio di programmazione .NET

1. Nelle **Esplora soluzioni**, fare clic sulla cartella di progetto (ad esempio *WindowsApplication1*).

1. Nel menu di scelta rapida, selezionare **Add**, quindi scegliere **Aggiungi nuovo elemento**.

1. Nel **categorie** riquadro, espandere il **elementi del progetto locale** cartella, quindi scegliere **risorse**.

1. Nel **modelli** riquadro, scegliere il tipo di risorsa da aggiungere al progetto.

   La risorsa viene aggiunta al progetto in **Esplora soluzioni** e la risorsa viene aperta nel [Editor di immagini](../windows/image-editor-for-icons.md). È ora possibile usare gli strumenti disponibili nel **Editor di immagini** per modificare l'immagine. Per altre informazioni sull'aggiunta di immagini a un progetto gestito, vedere [caricamento di un'immagine in fase di progettazione](/dotnet/framework/winforms/controls/how-to-load-a-picture-using-the-designer-windows-forms).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Editor di immagini per le icone](../windows/image-editor-for-icons.md)<br/>
[Procedura: Modificare un'immagine](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md)<br/>
[Procedura: Usare uno strumento di disegno](../windows/using-a-drawing-tool-image-editor-for-icons.md)<br/>
[Procedura: Usare i colori](../windows/working-with-color-image-editor-for-icons.md)<br/>
[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
<!--
[Converting Bitmaps to Toolbars](../windows/converting-bitmaps-to-toolbars.md)<br/>
[Creating New Toolbars](../windows/creating-new-toolbars.md)<br/>
[Icons](/windows/desktop/menurc/icons)<br/>
[Cursors](/windows/desktop/menurc/cursors)<br/>-->