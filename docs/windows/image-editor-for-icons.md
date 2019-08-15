---
title: Editor di immagini per leC++icone ()
ms.date: 02/15/2019
f1_keywords:
- vc.editors.cursor.F1
- vc.editors.icon.F1
- vc.editors.cursor
- vc.editors.bitmap.F1
- vc.editors.bitmap
- vc.editors.dialog.GridSettings
- vc.editors.gridsettings
- vc.editors.bitmap
- vc.editors.icon
- vc.editors.texttool
- vc.editors.bitmap
- vc.editors.icon
helpviewer_keywords:
- editors, images
- resource editors [C++], graphics
- Image editor [C++]
- resource editors [C++], Image editor
- Image menu
- Grid Settings dialog box [C++]
- Graphics toolbar
- Image editor [C++], toolbar
- Image editor [C++], Option selector
- Properties window
- Option selector, Image editor
- toolbars [C++], showing
- toolbars [C++], hiding
- text, adding to an image
- Text Tool dialog box [C++]
- Text Tool Font dialog box [C++]
- fonts, changing on an image
- text, on images
- graphics editor [C++]
- Image editor [C++], panes
- Image editor [C++], magnification
- grids, pixel
- pixel grid, Image editor
- Image editor [C++], pixel grid
- Image editor [C++], grid settings
- grid settings, Image editor
ms.assetid: 586d2b8b-0348-4883-a85d-1ff0ddbf14dd
ms.openlocfilehash: 0f8fe228b804538b6a0d0377f05d79c34e787587
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69514227"
---
# <a name="image-editor-for-icons-c"></a>Editor di immagini per leC++icone ()

Quando si seleziona un file di immagine, ad esempio ico, BMP o PNG, in **Esplora soluzioni**, l'immagine viene aperta nell'editor di **Immagini** nello stesso modo in cui i file di codice vengono aperti nell' **editor di codice**. Quando è attiva una scheda dell' **editor di immagini** , vengono visualizzate le barre degli strumenti con molti strumenti per la creazione e la modifica di immagini. Insieme a bitmap, icone e cursori, è possibile modificare le immagini in formato GIF o JPEG utilizzando i comandi del menu **immagine** e gli strumenti della barra degli strumenti dell' **editor di immagini** .

Le risorse grafiche sono le immagini definite per l'applicazione. È possibile creare oggetti FreeHand o disegni usando forme. È possibile selezionare parti di un'immagine per la modifica, il capovolgimento o il ridimensionamento oppure è possibile creare un pennello personalizzato da una parte selezionata di un'immagine e disegno con tale pennello. È possibile definire le proprietà delle immagini, salvare le immagini in formati diversi e convertire le immagini da un formato a un altro.

> [!NOTE]
> Usando l' **editor di immagini**, è possibile visualizzare le immagini a 32 bit, ma non modificarle.

È anche possibile usare l' **editor di immagini** e l' [editor binario](binary-editor.md) per lavorare con i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. Gli editor di risorse di Visual Studio non supportano la modifica delle risorse incorporate.

Oltre a creare nuove risorse grafiche, è possibile [importare immagini esistenti](../windows/how-to-copy-resources.md#import-and-export-resources) per la modifica e quindi aggiungerle al progetto. È anche possibile aprire e modificare immagini che non fanno parte di un progetto per la [modifica di immagini](../windows/editing-an-image-outside-of-a-project-image-editor-for-icons.md)autonome.

Per informazioni sull' **editor di immagini**, vedere come [creare un'icona o un'altra immagine](../windows/creating-an-icon-or-other-image-image-editor-for-icons.md), [modificare un'immagine](../windows/selecting-an-area-of-an-image-image-editor-for-icons.md), [usare uno strumento di disegno](../windows/using-a-drawing-tool-image-editor-for-icons.md), [lavorare con](../windows/working-with-color-image-editor-for-icons.md)i [tasti di scelta rapida](../windows/accelerator-keys-image-editor-for-icons.md)e colore.

> [!NOTE]
> Scarica gratuitamente la libreria di **Immagini di Visual Studio** che contiene numerose animazioni, bitmap e icone che è possibile usare nelle applicazioni. Per ulteriori informazioni su come scaricare la libreria, vedere la [libreria di immagini di Visual Studio](/visualstudio/designers/the-visual-studio-image-library).

## <a name="image-menu"></a>Menu Immagine

Il menu **immagine** , visualizzato solo quando l' **editor di immagini** è attivo, dispone di comandi per la modifica delle immagini, la gestione delle tavolozze dei colori e l'impostazione delle opzioni delle finestre dell'editor di **Immagini** . Inoltre, i comandi per l'utilizzo di immagini del dispositivo sono disponibili quando si utilizzano icone e cursori.

|Comando|Descrizione|
|---|---|
|**Inverti colori**|Inverte i colori.|
|**Capovolgi orizzontalmente**|Consente di capovolgere orizzontalmente l'immagine o la selezione.|
|**Capovolgi verticalmente**|Consente di capovolgere verticalmente l'immagine o la selezione.|
|**Ruota di 90 gradi**|Consente di ruotare di 90 gradi l'immagine o la selezione.|
|**Mostra finestra colori**|Apre la finestra **colori** , in cui è possibile scegliere i colori da usare per l'immagine.|
|**Usa selezione come pennello**|Consente di creare un pennello personalizzato da una parte di un'immagine.<br/><br/>La selezione diventa un pennello personalizzato che distribuisce i colori nella selezione all'interno dell'immagine. Le copie della selezione rimangono lungo il percorso di trascinamento. Più lentamente si trascina, più copie vengono eseguite.|
|**Copia e struttura selezione**|Consente di creare e strutturare una copia della selezione corrente.<br/><br/>Se il colore di sfondo è contenuto nella selezione corrente, verrà escluso se è stata selezionata l'opzione trasparente.
|**Regolazione colori**|Apre il selettore di **colore personalizzato**, che consente di personalizzare i colori usati per l'immagine.|
|**Carica tavolozza**|Apre la finestra di dialogo **Carica tavolozza** , che consente di caricare i colori della tavolozza precedentemente salvati in un file. PAL.|
|**Salva tavolozza**|Salva i colori della tavolozza in un file con estensione PAL.|
|**Opaco**|Quando questa opzione è selezionata, rende opaca la selezione corrente.<br/><br/>Quando è deselezionata, rende trasparente la selezione corrente.|
|**Editor barra degli strumenti**|Apre la finestra di [dialogo nuova risorsa barra degli strumenti](../windows/new-toolbar-resource-dialog-box.md).|
|**Impostazioni griglia**|Apre la finestra di dialogo **Impostazioni griglia** in cui è possibile specificare griglie per l'immagine.|
|**Nuovo tipo di immagine**|Apre la finestra di [dialogo nuovo \<tipo di immagine > dispositivo](../windows/new-device-image-type-dialog-box-image-editor-for-icons.md).<br/><br/>Una singola risorsa icona può contenere diverse immagini di dimensioni diverse e Windows può usare le dimensioni dell'icona appropriate a seconda di come verrà visualizzato. Un nuovo tipo di dispositivo non modifica le dimensioni dell'icona, bensì crea una nuova immagine all'interno dell'icona. Si applica solo a icone e cursori.|
|**Tipo di immagine icona/cursore corrente**|Apre un sottomenu che elenca le prime nove immagini del cursore o dell'icona disponibili. L'ultimo comando del sottomenu **più**, apre la finestra di [dialogo \<Apri immagine > dispositivo](../windows/open-device-image-dialog-box-image-editor-for-icons.md).|
|**Elimina tipo di immagine**|Elimina l'immagine del dispositivo selezionata.|
|**Strumenti**|Avvia un sottomenu che contiene tutti gli strumenti disponibili dalla barra degli strumenti dell' **editor di immagini** .|

La finestra di dialogo **Impostazioni griglia** consente di specificare le impostazioni della griglia per l'immagine e di visualizzare le linee della griglia sull'immagine modificata. Le linee sono utili per modificare l'immagine, ma non vengono salvate come parte dell'immagine stessa.

|Proprietà|Descrizione|
|---|---|
|**Griglia in pixel**|Quando questa opzione è selezionata, viene visualizzata una griglia intorno a ogni pixel nell' **editor di immagini**.<br/><br/>La griglia viene visualizzata solo con le risoluzioni 4 × e successive.|
|**Griglia affiancata**|Quando questa opzione è selezionata, viene visualizzata una griglia intorno a blocchi di pixel nell' **editor di immagini**, specificata dai valori di spaziatura della griglia.|
|**Width**|Specifica la larghezza di ogni blocco di sezioni.<br/><br/>Questa proprietà è utile quando si disegnano bitmap contenenti più immagini disposte a intervalli regolari.|
|**Height**|Specifica l'altezza di ogni blocco di sezioni.<br/><br/>Questa proprietà è utile quando si disegnano bitmap contenenti più immagini disposte a intervalli regolari.|

## <a name="toolbar"></a>ToolBar

La barra degli strumenti dell' **editor di immagini** contiene gli strumenti per disegnare, disegnare, immettere testo, cancellare e modificare le visualizzazioni. Contiene anche un selettore di opzioni con cui è possibile selezionare le opzioni per l'uso di ogni strumento. Ad esempio, è possibile scegliere tra diverse larghezze del pennello, fattori di ingrandimento e stili di linea.

Tutti gli strumenti disponibili sulla barra degli strumenti dell' **editor di immagini** sono disponibili anche dagli**strumenti**per le **Immagini** > dei menu. Per utilizzare la barra degli strumenti dell' **editor di immagini** e il selettore di **Opzioni** , selezionare lo strumento o l'opzione desiderata.

![Barra degli strumenti Editor di immagini](../mfc/media/vcimageeditortoolbar.gif "vcImageEditorToolbar")<br/>
Barra degli strumenti **editor di immagini**

> [!TIP]
> Le descrizioni comandi vengono visualizzate quando si posiziona il cursore del mouse su un pulsante della barra degli strumenti. Questi suggerimenti consentono di identificare la funzione di ciascun pulsante.

Poiché molti degli strumenti di disegno sono disponibili sulla [tastiera](../windows/accelerator-keys-image-editor-for-icons.md), è talvolta utile nascondere la barra degli strumenti dell' **editor di immagini** .

- Per visualizzare o nascondere la barra degli strumenti **editor di immagini** , passare a menu **visualizzazione** > **barre degli strumenti** e scegliere **editor di immagini**.

> [!NOTE]
> Gli elementi di questa barra degli strumenti non saranno disponibili quando un file di immagine dal progetto o dalla soluzione corrente non è aperto nell' **editor di immagini**.

### <a name="option-selector"></a>selettore di opzioni

Con il selettore di **Opzioni** è possibile specificare la larghezza di una linea, un tratto di pennello e altro ancora. L'icona del pulsante di selezione delle **Opzioni** cambia a seconda dello strumento selezionato.

![Selettore forme disegno&#45;sulla barra degli strumenti dell'editor di immagini](../mfc/media/vcimageeditortoolbaroptionselector.gif "vcImageEditorToolbarOptionSelector")<br/>
Selettore di **Opzioni** nella barra degli strumenti **editor di immagini**

### <a name="text-tool"></a>Strumento testo

Utilizzare la finestra di dialogo **strumento testo** per aggiungere testo a una risorsa di cursore, bitmap o icona.

Per accedere a questa finestra di dialogo, aprire l' **editor di immagini** e passare a menu **Image** > **Tools**, quindi selezionare il comando **strumento testo** .

> [!TIP]
> È possibile fare clic con il pulsante destro del mouse sulla finestra di dialogo **strumento testo** per accedere a un menu di scelta rapida predefinito contenente un elenco di comandi standard di Windows.

Aprire la finestra di dialogo **carattere strumento testo** per modificare il tipo di carattere, lo stile o la dimensione del tipo di carattere del cursore. Le modifiche vengono applicate al testo visualizzato nell'area di **testo** .

Per accedere a questa finestra di dialogo, selezionare il pulsante **carattere** nella finestra di dialogo **strumento testo** . Le proprietà disponibili sono:

|Proprietà|Descrizione|
|---|---|
|**Tipo di carattere**|Elenca i tipi di carattere disponibili.|
|**Stile carattere**|Elenca gli stili disponibili per il tipo di carattere specificato.|
|**Dimensione**|Elenca le dimensioni dei punti disponibili per il tipo di carattere specificato.|
|**Esempio**|Mostra un esempio di come verrà visualizzato il testo con le impostazioni del tipo di carattere specificate.|
|**Script**|Elenca gli script di lingua disponibili per il tipo di carattere specificato.<br/><br/>Quando si seleziona uno script di lingua diverso, il set di caratteri per tale lingua diventa disponibile per la creazione di documenti multilingue.|

#### <a name="to-change-the-font-of-text-on-an-image"></a>Per modificare il tipo di carattere del testo in un'immagine

Di seguito è riportato un esempio di come aggiungere testo a un'icona in un'applicazione Windows e modificare il tipo di carattere del testo.

1. Creare un' C++ applicazione Windows Forms. Per informazioni dettagliate, vedere [Procedura: Creare Windows Forms applicazioni](/previous-versions/visualstudio/visual-studio-2008/s69bf10x(v%3dvs.90)). Per impostazione predefinita, al progetto viene aggiunto un file *app. ico* .

1. In **Esplora soluzioni**fare doppio clic sul file *app. ico*. Si aprirà l' **editor di immagini** .

1. Passare a**strumenti** **immagine** > menu e selezionare **strumento testo**.

1. Nella finestra di dialogo **strumento testo** Digitare *C++* l'area di testo vuota. Questo testo verrà visualizzato in una casella ridimensionabile posizionata nell'angolo superiore sinistro di *app. ico* nell' **editor di immagini**.

1. Nell' **editor di immagini**trascinare la casella ridimensionabile al centro di *app. ico* per migliorare la leggibilità del testo.

1. Nella finestra di dialogo **strumento testo** selezionare il pulsante **carattere** .

1. Nella finestra di dialogo **carattere strumento testo** :

   - Selezionare **Times New Roman** nell'elenco dei tipi di carattere disponibili elencati nella casella di riepilogo **tipo di carattere** .

   - Selezionare **grassetto** dall'elenco degli stili di carattere disponibili elencati nella casella di riepilogo **stile carattere** .

   - Selezionare **10** dall'elenco delle dimensioni dei punti disponibili elencate nella casella di riepilogo **dimensioni** .

   - Scegliere **OK**. La finestra di dialogo **carattere strumento testo** verrà chiusa e le nuove impostazioni del carattere verranno applicate al testo.

1. Scegliere **Chiudi** nella finestra di dialogo **strumento testo** . La casella ridimensionabile intorno al testo scomparirà dall' **editor di immagini**.

Nell'area di testo viene visualizzato il testo visualizzato come parte della risorsa. Inizialmente quest'area è vuota.

> [!NOTE]
> Se è impostato lo **sfondo trasparente** , solo il testo verrà inserito nell'immagine. Se è impostato lo **sfondo opaco** , un rettangolo di delimitazione, riempito con il colore di sfondo, sarà posizionato dietro il testo.

## <a name="window-panes"></a>Riquadri della finestra

La finestra dell' **editor di immagini** Mostra due visualizzazioni di un'immagine, con una barra di divisione che separa i due riquadri. che è possibile trascinare da un lato all'altro per modificare le dimensioni relative dei riquadri. Nel riquadro attivo viene visualizzato un bordo di selezione.

Una visualizzazione è la dimensione effettiva e l'altra viene ingrandita da un fattore di ingrandimento predefinito pari a 6. Le visualizzazioni in questi due riquadri vengono aggiornate automaticamente e tutte le modifiche apportate in un riquadro vengono visualizzate immediatamente nell'altra. I due riquadri semplificano l'utilizzo di una vista ingrandita dell'immagine, in cui è possibile distinguere singoli pixel e, allo stesso tempo, osservare l'effetto del lavoro sulla visualizzazione delle dimensioni effettive dell'immagine.

Il riquadro sinistro usa la quantità di spazio necessaria (fino alla metà della finestra **immagine** ) per visualizzare la visualizzazione di ingrandimento 1:1 predefinita dell'immagine. Il riquadro di destra visualizza un'immagine ingrandita di ingrandimento 6:1 predefinita. È possibile modificare l'ingrandimento in ogni riquadro utilizzando lo strumento di ingrandimento sulla barra degli strumenti dell' **editor di immagini** o utilizzando i tasti di scelta rapida.

È possibile ingrandire il riquadro inferiore della finestra dell' **editor di immagini** e utilizzare i due riquadri per visualizzare aree diverse di un'immagine di grandi dimensioni. Selezionare all'interno del riquadro per sceglierlo.

È possibile modificare le dimensioni relative dei riquadri posizionando il puntatore sulla barra di divisione e spostando la barra di divisione a destra o a sinistra. La barra di divisione può essere spostata da un lato all'altro se si desidera lavorare su un solo riquadro.

Se il riquadro **editor di immagini** è ingrandito di un fattore pari a 4 o superiore, è possibile visualizzare una griglia in pixel che delimita i singoli pixel nell'immagine.

### <a name="to-change-the-magnification-factor"></a>Per modificare il fattore di ingrandimento

Per impostazione predefinita, l' **editor di immagini** Visualizza la visualizzazione nel riquadro a sinistra in dimensioni effettive e la visualizzazione nel riquadro di destra alle dimensioni effettive 6 volte. Il fattore di ingrandimento (visualizzato nella barra di stato nella parte inferiore dell'area di lavoro) è il rapporto tra le dimensioni effettive dell'immagine e quelle visualizzate. Il fattore predefinito è 6 e l'intervallo è compreso tra 1 e 10.

1. Selezionare il riquadro **editor di immagini** di cui si desidera modificare il fattore di ingrandimento.

1. Sulla barra degli strumenti dell' **editor di immagini** selezionare la freccia a destra dello strumento di ingrandimento e selezionare il fattore di ingrandimento dal sottomenu: **1x**, **2x**, **6x**o **8x**.

   > [!NOTE]
   > Per selezionare un fattore di ingrandimento diverso da quelli elencati nello strumento di ingrandimento, usare i tasti di scelta rapida.

### <a name="to-display-or-hide-the-pixel-grid"></a>Per visualizzare o nascondere la griglia in pixel

Per tutti i riquadri dell' **editor di immagini** con un fattore di ingrandimento maggiore o uguale a 4, è possibile visualizzare una griglia che delimita i singoli pixel nell'immagine.

1. Passare a menu **Immagini** > **griglia impostazioni**.

1. Selezionare la casella di controllo **griglia in pixel** per visualizzare la griglia oppure deselezionare la casella per nascondere la griglia.

## <a name="requirements"></a>Requisiti

Nessuna

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[Icone](/windows/win32/menurc/icons)