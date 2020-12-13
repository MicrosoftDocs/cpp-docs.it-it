---
description: 'Altre informazioni su: procedura: usare il colore'
title: 'Procedura: utilizzare il colore'
ms.date: 02/15/2019
f1_keywords:
- vc.editors.image.color
- vc.editors.customcolorselector
- vc.editors.loadcolorpalette
- vc.editors.colorswindow
helpviewer_keywords:
- images [C++], background colors
- Image editor [C++], Colors Palette
- colors [C++], image
- Colors Palette, Image editor
- palettes, Image editor colors
- foreground colors [C++], Image editor
- colors [C++]
- Image editor [C++], colors
- colors [C++], Image editor
- colors [C++], image
- images [C++], colors
- Image editor [C++], colors
- Fill tool
- colors [C++], image
- images [C++], colors
- colors [C++], selection tools
- Image editor [C++], colors
- Select Color tool
- dithered color, Image editor
- Custom Color Selector dialog box [C++]
- Image editor [C++], Colors Palette
- colors [C++], image
- bitmaps [C++], colors
- images [C++], colors
- HSL values
- Colors Palette, Image editor
- RGB color values
- Adjust Colors command [C++]
- Image editor [C++], dithered color
- Image editor [C++], Colors Palette
- Colors Palette, Image editor
- colors [C++], inverting
- colors [C++]
- Color Indicator
- colors [C++], Colors window
- Colors window, hiding colors
- Show Colors Window command
- Colors window, displaying colors
- color palettes [C++]
- palettes
- palettes, Image editor
- colors [C++], Image editor
- Image editor [C++], palettes
- color palettes
- Load Palette Colors dialog box [C++]
- opaque backgrounds [C++]
- colors [C++], image
- Image editor [C++], transparent or opague backgrounds
- images [C++], transparency
- images [C++], opaque background
- colors [C++], image
- Image editor [C++], color inversion
- images [C++], colors
- colors [C++], inverting
ms.assetid: d34ff96f-241d-494f-abdd-13811ada8cd3
ms.openlocfilehash: 6c7d6ceaf2510d2360b32138735e8f61398da85a
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97135837"
---
# <a name="how-to-work-with-color"></a>Procedura: utilizzare il colore

L' **editor di immagini** contiene molte funzionalità che gestiscono e personalizzano i colori in modo specifico. È possibile impostare un colore di primo piano o di sfondo, riempire le aree delimitate con colore oppure selezionare un colore in un'immagine da utilizzare come colore di primo piano o di sfondo corrente. È possibile utilizzare strumenti sulla [barra degli](./image-editor-for-icons.md) strumenti dell'editor di immagini insieme alla tavolozza colori nella finestra **colori** per creare immagini.

Tutti i colori per le immagini monocromatiche e a 16 colori vengono visualizzati nella tavolozza **colori** della finestra **colori** . Insieme ai 16 colori standard, è possibile creare colori personalizzati. La modifica di uno dei colori della tavolozza modificherà immediatamente il colore corrispondente nell'immagine.

Quando si utilizzano immagini di cursore e icone a colori 256, viene utilizzata la proprietà **Colors** nel [finestra Proprietà](/visualstudio/ide/reference/properties-window) . Per ulteriori informazioni, vedere [creazione di un'icona o di un cursore a 256 colori](./creating-an-icon-or-other-image-image-editor-for-icons.md).

È anche possibile creare immagini con colori reali. Tuttavia, gli esempi di colore true non vengono visualizzati nella tavolozza completa della finestra **colori** ; vengono visualizzate solo nell'area indicatore di colore di primo piano o di sfondo. I colori veri vengono creati utilizzando la finestra di dialogo del **selettore colori personalizzato** .

È possibile salvare le tavolozze dei colori personalizzate su disco e ricaricarle in base alle esigenze. La tavolozza dei colori usata più di recente viene salvata nel registro di sistema e viene caricata automaticamente al successivo avvio di Visual Studio.

La finestra **colori** è costituita da due parti:

- **Tavolozza colori**, ovvero una matrice di campioni di colore che rappresentano i colori che è possibile usare. È possibile selezionare gli esempi per scegliere i colori di primo piano e di sfondo quando si usano gli strumenti di grafica.

- **Indicatore di colore**, che mostra i colori di primo piano e di sfondo e i selettori per lo schermo e il colore inverso.

   ![Colors window](../windows/media/vccolorswindow.gif "vcColorsWindow")<br/>
   Finestra **colori**

> [!NOTE]
> Il **colore dello schermo** e gli strumenti di **colore inverso** sono disponibili solo per le icone e i cursori.

È possibile utilizzare la finestra **colori** con la [barra degli strumenti dell'editor di immagini](./image-editor-for-icons.md).

- Per visualizzare la finestra **colori** , fare clic con il pulsante destro del mouse su un riquadro dell' **editor di immagini** e scegliere **Mostra colori finestra** o vai a menu [immagine](./image-editor-for-icons.md)  >  **Mostra colori**.

- Per nascondere la finestra **colori** , Rimuovi la finestra. questa azione consente di nascondere automaticamente la finestra quando non è in uso, oppure di selezionare il pulsante **Chiudi** .

La tavolozza **colori** Visualizza inizialmente 16 colori standard. Con i colori visualizzati, è anche possibile creare colori personalizzati. È quindi possibile salvare e caricare una Tavolozza colori personalizzata.

La finestra di dialogo **selezione colori personalizzata** consente di personalizzare i colori utilizzati per l'immagine con le proprietà seguenti:

|Proprietà|Descrizione|
|--------------------------|--------------------------|
|**Visualizzazione colore sfumatura**|Modifica i valori di un colore selezionato.<br/><br/>Posizionare il mirino sul colore che si vuole modificare e spostare il dispositivo di scorrimento verso l'alto o verso il basso per modificare la luminosità o i valori RGB del colore.|
|**Barra luminosità**|Imposta la luminosità per il colore selezionato nella casella di **visualizzazione colore sfumatura** .<br/><br/>Selezionare e trascinare la freccia bianca verso l'alto della barra per ottenere una maggiore luminosità o un valore inferiore. Nella casella **colore** viene visualizzato il colore selezionato e l'effetto della luminosità impostata.|
|**Colore**|Elenca la tonalità (valore della rotellina dei colori) del colore che si sta definendo. I valori sono compresi tra 0 e 240, dove 0 è rosso, 60 è giallo, 120 è verde, 180 è cyan, 200 è magenta e 240 è blu.|
|**Hue**|Elenca la tonalità (valore della rotellina dei colori) del colore che si sta definendo. I valori sono compresi tra 0 e 240, dove 0 è rosso, 60 è giallo, 120 è verde, 180 è cyan, 200 è magenta e 240 è blu.|
|**Sat**|Specifica il valore di saturazione del colore che si sta definendo. Saturazione è la quantità di colore in una tonalità specificata. I valori sono compresi tra 0 e 240.|
|**Lum**|Elenca la luminosità (luminosità) del colore che si sta definendo. I valori sono compresi tra 0 e 240.|
|**Red**|Specifica il valore rosso del colore che si sta definendo. I valori sono compresi tra 0 e 255.|
|**Green**|Specifica il valore verde del colore che si sta definendo. I valori sono compresi tra 0 e 255.|
|**Blue**|Specifica il valore blu del colore che si sta definendo. I valori sono compresi tra 0 e 255.|

È possibile salvare e caricare una tavolozza dei **colori** che contiene colori personalizzati. Per impostazione predefinita, la tavolozza **colori** usata più di recente viene caricata automaticamente all'avvio di Visual Studio.

> [!TIP]
> Poiché l' **editor di immagini** non è in grado di ripristinare la tavolozza **colori** predefinita, è necessario salvare la tavolozza **colori** predefiniti con un nome, ad esempio *standard. PAL* o *default. PAL* , in modo da poter ripristinare facilmente le impostazioni predefinite.

Utilizzare la finestra di dialogo **Carica tavolozza** per caricare le tavolozze dei colori speciali da utilizzare nel progetto C++ con le proprietà seguenti:

|Proprietà|Descrizione|
|-----------------|-----------------|
|**Look in**|Specifica il percorso in cui si desidera individuare un file o una cartella.<br/><br/>Selezionare la freccia per scegliere un'altra posizione oppure selezionare l'icona della cartella sulla barra degli strumenti per spostare i livelli.|
|**Nome file**|Fornisce uno spazio per la digitazione del nome del file che si desidera aprire.<br/><br/>Per trovare rapidamente un file aperto in precedenza, selezionare il nome del file nell'elenco a discesa, se disponibile.<br/><br/>Se si sta cercando un file, è possibile usare asterischi (*) come caratteri jolly. È ad esempio possibile digitare \* . \* per visualizzare un elenco di tutti i file. È anche possibile digitare il percorso completo di un file, ad esempio *C:\My Documents\MyColorPalette.PAL* o *\\ \NetworkServer\MyFolder\MyColorPalette.PAL*.|
|**Tipo file**|Elenca i tipi di file da visualizzare.<br/><br/>Tavolozza (*. PAL) è il tipo di file predefinito per le tavolozze dei colori.|

## <a name="how-to"></a>Procedure

### <a name="to-select-foreground-or-background-colors"></a>Per selezionare i colori di primo piano o di sfondo

Ad eccezione della **gomma**, gli strumenti sulla barra degli strumenti dell' **editor di immagini** vengono disegnato con il colore di primo piano o di sfondo corrente quando si preme rispettivamente il pulsante sinistro o destro del mouse.

- Per selezionare un colore di primo piano, con il pulsante sinistro del mouse, selezionare il colore desiderato nella tavolozza **colori** .

- Per selezionare un colore di sfondo, con il pulsante destro del mouse, selezionare il colore desiderato nella tavolozza **colori** .

### <a name="to-fill-a-bounded-area-of-an-image-with-a-color"></a>Per riempire un'area delimitata di un'immagine con un colore

L' **editor di immagini** fornisce lo strumento di **riempimento** per riempire qualsiasi area dell'immagine racchiusa con il colore di disegno corrente o il colore di sfondo corrente.

### <a name="to-use-the-fill-tool"></a>Per utilizzare lo strumento riempimento

1. Utilizzare la barra degli strumenti dell' **editor di immagini** o passare a   >  **strumenti** immagine menu e selezionare lo strumento **riempimento** .

1. Se necessario, scegliere disegno colori. Nella [tavolozza colori](./image-editor-for-icons.md)selezionare il pulsante sinistro del mouse per selezionare un colore di primo piano o il pulsante destro del mouse per selezionare un colore di sfondo.

1. Spostare lo strumento **riempimento** nell'area che si desidera riempire.

1. Selezionare il pulsante sinistro o destro del mouse per riempire rispettivamente il colore di primo piano o il colore di sfondo.

### <a name="to-pick-up-a-color-from-an-image-to-use-elsewhere"></a>Per selezionare un colore da un'immagine da usare altrove

Lo strumento **Seleziona colore**, o pickup colore, rende qualsiasi colore sull'immagine il colore di primo piano o il colore di sfondo corrente, a seconda che venga premuto il pulsante sinistro o destro del mouse. Per annullare lo strumento **Seleziona colore** , scegliere un altro strumento.

1. Utilizzare la barra degli strumenti dell' **editor di immagini** o passare a   >  **strumenti** immagine menu e selezionare lo strumento **Seleziona colore** .

1. Selezionare il colore che si desidera prelevare dall'immagine.

   > [!NOTE]
   > Dopo aver selezionato un colore, l' **editor di immagini** riattiva lo strumento usato più di recente.

1. Viene disegnato usando il pulsante sinistro del mouse per il colore di primo piano o il pulsante destro del mouse per il colore di sfondo.

### <a name="to-choose-the-background"></a>Per scegliere lo sfondo

Quando si sposta o si copia una selezione da un'immagine, i pixel della selezione che corrispondono al colore di sfondo corrente sono, per impostazione predefinita, trasparenti e non nascondono i pixel nella posizione di destinazione.

È possibile passare da uno sfondo trasparente (impostazione predefinita) a uno sfondo opaco e viceversa. Quando si usa uno strumento di selezione, le opzioni **sfondo trasparente** e **sfondo opaco** vengono visualizzate nel **selettore di opzioni nella** barra degli strumenti dell' **editor di immagini** .

![Opzioni dello sfondo &#45; opaco o trasparente](../windows/media/vcimageeditoropaqtranspback.gif "Opzioni dello sfondo &#45; opaco o trasparente")<br/>
**Opzioni trasparenti e opache** sulla **barra degli strumenti dell'editor di immagini**

#### <a name="to-switch-between-a-transparent-and-opaque-background"></a>Per passare dallo sfondo trasparente a quello opaco

Nella barra degli strumenti dell' **editor di immagini** selezionare il selettore di **Opzioni** , quindi scegliere lo sfondo appropriato:

- **Sfondo opaco (O)**: l'immagine esistente è nascosta da tutte le parti della selezione.

- **Sfondo trasparente (T)**: l'immagine esistente viene visualizzata attraverso parti della selezione che corrispondono al colore di sfondo corrente.

> [!TIP]
> Per un tasto di scelta rapida, scegliere o deselezionare **opaco** per il menu **immagine** .

È possibile modificare il colore di sfondo mentre una selezione è già in vigore per modificare le parti dell'immagine trasparenti.

### <a name="to-invert-the-colors-in-a-selection"></a>Per invertire i colori in una selezione

L' **editor di immagini** offre un modo pratico per invertire i colori nella parte selezionata dell'immagine, in modo da poter indicare la modalità di visualizzazione di un'immagine con colori invertiti.

Per invertire i colori nella selezione corrente, passare a **immagine** menu  >  **Inverti colori**.

### <a name="to-customize-or-change-colors-on-the-colors-palette"></a>Per personalizzare o modificare i colori nella tavolozza colori

1. Vai a menu **immagine**  >  **Regola colori**.

1. Nella finestra di dialogo **selettore colori personalizzato** definire il colore digitando i valori RGB o HSL nelle caselle di testo appropriate o scegliere un colore nella casella di **visualizzazione colore sfumatura** .

1. Impostare la luminosità spostando il dispositivo di scorrimento sulla barra **luminosità** .

1. Molti colori personalizzati sono retinati. Se si desidera che il colore a tinta unita sia più vicino al colore con rethereing, fare doppio clic sulla casella **colore** .

   Se in un secondo momento si decide di volere il colore retinato, spostare il dispositivo di scorrimento sulla barra **luminosità** oppure spostare di nuovo i mirini nella casella di **visualizzazione colore sfumatura** per ripristinare la dithering.

1. Selezionare **OK** per aggiungere il nuovo colore.

### <a name="to-save-a-custom-colors-palette"></a>Per salvare una tavolozza di colori personalizzati

1. Passare a menu **immagine**  >  **Salva tavolozza**.

1. Passare alla directory in cui si intende salvare la tavolozza e digitare un nome per la tavolozza.

1. Selezionare **Salva**.

### <a name="to-load-a-custom-colors-palette"></a>Per caricare una tavolozza di colori personalizzati

1. Passare a menu **Image**  >  **Load palette**.

1. Nella finestra di dialogo **Carica tavolozza** , passare alla directory corretta e selezionare la tavolozza che si desidera caricare. Le tavolozze dei **colori** vengono salvate con l'estensione di file PAL.

## <a name="requirements"></a>Requisiti

Nessuno

## <a name="see-also"></a>Vedi anche

[Editor di immagini per le icone](../windows/image-editor-for-icons.md)<br/>
[Procedura: creare un'icona o un'altra immagine](../windows/creating-an-icon-or-other-image-image-editor-for-icons.md)<br/>
[Procedura: modificare un'immagine](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md)<br/>
[Procedura: usare uno strumento di disegno](../windows/using-a-drawing-tool-image-editor-for-icons.md)<br/>
[Tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)<br/>
