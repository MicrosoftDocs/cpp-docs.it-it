---
title: Editor di immagini per le icone
ms.date: 10/17/2018
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
ms.openlocfilehash: 48b363b7b9021042fe6242be70c74f0daeade0c2
ms.sourcegitcommit: 470de1337035dd33682d935b4b6c6d8b1bdb0bbb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/15/2019
ms.locfileid: "56320705"
---
# <a name="image-editor-for-icons"></a>Editor di immagini per le icone

Quando fa clic su un file di immagine (ad esempio con estensione ico, bmp, PNG) in Esplora soluzioni, l'immagine viene aperto nell'Editor di immagini nello stesso modo che i file di codice aperti nell'Editor del codice. Quando è attiva una scheda dell'Editor di immagini, vengono visualizzate le barre degli strumenti con molti strumenti per la creazione e modifica di immagini. Insieme a bitmap, icone e cursori, è possibile modificare immagini in formato GIF o JPEG utilizzando i comandi di **immagine** menu e gli strumenti nel **Editor di immagini** sulla barra degli strumenti.

Le risorse grafiche sono le immagini definite per l'applicazione. È possibile disegno a mano libera o disegnare utilizzando forme. È possibile selezionare parti di un'immagine per la modifica, l'inversione o ridimensionamento, oppure è possibile creare un pennello personalizzato da una parte selezionata di un'immagine e disegno con pennello. È possibile definire le proprietà dell'immagine, salvare immagini in formati diversi e convertire immagini in un formato a altro.

Oltre a creare nuove risorse grafiche, è possibile [importare immagini esistenti](../windows/how-to-import-and-export-resources.md) per la modifica e quindi aggiungerli al progetto. È anche possibile aprire e modificare le immagini che non fanno parte di un progetto per [modifica delle immagini autonome](../windows/editing-an-image-outside-of-a-project-image-editor-for-icons.md).

> [!NOTE]
> Usando il **Editor di immagini**, è possibile visualizzare immagini a 32 bit, ma non modificarli.

L'Editor immagini consente di effettuare le seguenti operazioni:

- [Utilizzare i colori](../windows/working-with-color-image-editor-for-icons.md)

- [Utilizzare icone e cursori: Risorse immagine per i dispositivi di visualizzazione](../windows/icons-and-cursors-image-resources-for-display-devices-image-editor-for-icons.md)

- [Utilizzare tasti di scelta rapida per i comandi dell'Editor immagini](../windows/accelerator-keys-image-editor-for-icons.md)

Il **Editor di immagini** finestra Mostra due visualizzazioni della stessa immagine, con una barra che separa i due riquadri di divisione. che è possibile trascinare da un lato all'altro per modificare le dimensioni relative dei riquadri. Nel riquadro attivo viene visualizzato un bordo di selezione.

Il **Editor di immagini** finestra può essere adattata alle proprie esigenze e preferenze. È possibile [modificare il fattore di ingrandimento](../windows/changing-the-magnification-factor-image-editor-for-icons.md) e [abilitare o disabilitare la visualizzazione della griglia in pixel](../windows/displaying-or-hiding-the-pixel-grid-image-editor-for-icons.md).

> [!NOTE]
> Usando il **Editor di immagini**, è possibile visualizzare immagini a 32 bit, ma non modificarli.

## <a name="image-menu"></a>Menu Immagine

Il **immagine** menu, che viene visualizzata solo quando il **immagine** editor è attiva, sono disponibili comandi per la modifica delle immagini, la gestione di tavolozze dei colori e l'impostazione **Editor di immagini** finestra Opzioni. Inoltre, i comandi per l'uso di immagini per i dispositivi sono disponibili quando si lavora con le icone e cursori.

|Comando|Descrizione|
|---|---|
|**Inverti colori**|Inverte i colori. Per altre informazioni, vedere [inversione dei colori in una selezione](../windows/inverting-the-colors-in-a-selection-image-editor-for-icons.md).|
|**Capovolgi orizzontalmente**|Consente di capovolgere orizzontalmente l'immagine o la selezione. Per altre informazioni, vedere [capovolgimento di un'immagine](../windows/flipping-an-image-image-editor-for-icons.md).|
|**Capovolgi verticalmente**|Consente di capovolgere verticalmente l'immagine o la selezione. Per altre informazioni, vedere [capovolgimento di un'immagine](../windows/flipping-an-image-image-editor-for-icons.md).|
|**Ruota di 90 gradi**|Consente di ruotare di 90 gradi l'immagine o la selezione. Per altre informazioni, vedere [capovolgimento di un'immagine](../windows/flipping-an-image-image-editor-for-icons.md).|
|**Mostra finestra colori**|Apre la [finestra colori](../windows/colors-window-image-editor-for-icons.md), in cui è possibile scegliere i colori da utilizzare per l'immagine. Per altre informazioni, vedere [utilizzo dei colori](../windows/working-with-color-image-editor-for-icons.md).|
|**Usa selezione come pennello**|Consente di creare un pennello personalizzato da una parte di un'immagine. La selezione diventa un pennello personalizzato che distribuisce i colori nella selezione tra l'immagine. Le copie della selezione vengono lasciate lungo il percorso di trascinamento. Più lenta il trascinamento, vengono eseguite le altre copie. Per altre informazioni, vedere [creazione di un pennello personalizzato](../windows/creating-a-custom-brush-image-editor-for-icons.md).|
|**Copia e struttura selezione**|Consente di creare e strutturare una copia della selezione corrente. Il colore di sfondo è contenuto nella selezione corrente, verrà escluso se hai [trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md) selezionato.
|**Regola colori**|Apre la [regola colori](../windows/custom-color-selector-dialog-box-image-editor-for-icons.md), che consente di personalizzare i colori utilizzati per l'immagine. Per altre informazioni, vedere [personalizzazione o modifica dei colori](../windows/customizing-or-changing-colors-image-editor-for-icons.md).|
|**Carica tavolozza**|Apre la [finestra di dialogo Carica tavolozza](../windows/load-palette-colors-dialog-box-image-editor-for-icons.md), che consente di caricare i colori della tavolozza salvati in precedenza in un file PAL.|
|**Salva tavolozza**|Salva i colori della tavolozza in un file PAL.|
|**Opaco**|Quando selezionato, effettua la selezione corrente opaca. Se deselezionata, rende trasparente la selezione corrente. Per altre informazioni, vedere [scelta di uno sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).|
|**Editor barra degli strumenti**|Apre la [finestra di dialogo Nuova risorsa barra degli strumenti](../windows/new-toolbar-resource-dialog-box.md).|
|**Impostazioni griglia**|Apre la **Impostazioni griglia** finestra di dialogo in cui è possibile specificare grids per l'immagine.|
|**Tipo nuova immagine**|Apre la [New \<dispositivo > finestra di dialogo Tipo immagine](../windows/new-device-image-type-dialog-box-image-editor-for-icons.md). Una singola risorsa icona può contenere numerose immagini di dimensioni diverse e windows possa usare le dimensioni dell'icona appropriata a seconda del modo in cui sta per essere visualizzato. Un nuovo tipo di dispositivo non modifica le dimensioni dell'icona, ma crea una nuova immagine all'interno dell'icona. Si applica solo alle icone e cursori.|
|**Tipo di immagine icona o cursore corrente**|Apre un sottomenu contenente il primo disponibili immagini icona o cursore (le nove prima). L'ultimo comando dal sottomenu, **più...** , consente di aprire la [Open \<dispositivo > finestra di dialogo immagine](../windows/open-device-image-dialog-box-image-editor-for-icons.md).|
|**Elimina tipo di immagine**|Elimina l'immagine del dispositivo selezionato.|
|**Strumenti**|Consente di visualizzare un sottomenu contenente tutti gli strumenti disponibili i [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md).|

Il **Impostazioni griglia** nella finestra di dialogo consente di specificare le impostazioni della griglia per l'immagine e visualizza le linee della griglia sull'immagine modificata. Le righe sono utili per la modifica dell'immagine, ma non vengono salvate come parte dell'immagine stessa.

|Proprietà|Descrizione|
|---|---|
|**Griglia in pixel**|Se selezionata, viene visualizzata una griglia attorno a ogni pixel nell'editor di immagini. La griglia viene visualizzata solo in 4 × e risoluzioni più alte.|
|**Griglia affiancata**|Se selezionata, viene visualizzata una griglia attorno a blocchi di pixel nell'editor di immagini, specificato dai valori di spaziatura della griglia.|
|**Width**|Specifica la larghezza di ogni blocco di riquadro. Questa proprietà è utile quando si disegnano le bitmap che contiene più immagini disposti a intervalli regolari.|
|**Height**|Specifica l'altezza di ogni blocco di riquadro. Questa proprietà è utile quando si disegnano le bitmap che contiene più immagini disposti a intervalli regolari.|

## <a name="toolbar"></a>ToolBar

Il **Editor di immagini** sulla barra degli strumenti contiene gli strumenti di disegno, disegno, immettendo il testo, la cancellazione e la modifica delle visualizzazioni. Contiene inoltre un selettore di opzioni con cui è possibile selezionare le opzioni per l'utilizzo di ogni strumento. Ad esempio, è possibile scegliere da vari larghezze di pennello, fattori di ingrandimento e gli stili di riga.

> [!NOTE]
> Tutti gli strumenti disponibili nel **Editor di immagini** sono anche disponibili dalla barra degli strumenti il **immagine** menu (sotto la **strumenti** comando).

![Barra degli strumenti Editor di immagini](../mfc/media/vcimageeditortoolbar.gif "vcImageEditorToolbar") barra degli strumenti Editor di immagini

Usare la **Editor di immagini** sulla barra degli strumenti e **opzione** selettore, selezionare lo strumento o di opzione che si desidera.

> [!TIP]
> Descrizioni comandi vengono visualizzati quando si passa il cursore su un pulsante della barra degli strumenti. Questi suggerimenti consentono di identificare la funzione di ogni pulsante.

Con il **opzione** selettori è possibile specificare la larghezza di una riga, tratto e altro ancora. L'icona al **opzione** pulsante del selettore varia a seconda di quale strumento è stata selezionata.

![Disegno di&#45;selettore di forma nella barra degli strumenti Editor di immagini](../mfc/media/vcimageeditortoolbaroptionselector.gif "vcImageEditorToolbarOptionSelector") selettore di opzioni nella barra degli strumenti Editor di immagini

### <a name="use-the-text-tool-dialog-box"></a>Utilizzare la finestra di dialogo strumento testo

Usare la **strumento testo** finestra di dialogo per aggiungere testo a una risorsa di cursori, bitmap o icona.

Per accedere a questa finestra di dialogo, aprire il [Editor di immagini](../windows/window-panes-image-editor-for-icons.md). Selezionare **degli strumenti** dalle **immagine** menu e quindi selezionare il **strumento testo** comando.

#### <a name="font-button"></a>Pulsante tipo di carattere

Apre la **carattere strumento testo** della finestra di dialogo in cui è possibile modificare il tipo di carattere, stile o dimensione del carattere del cursore. Le modifiche vengono applicate al testo visualizzato nei **testo** area.

Per accedere a questa finestra di dialogo, selezionare la **Font** pulsante il **strumento testo** nella finestra di dialogo. Le proprietà disponibili sono:

|Proprietà|Descrizione|
|---|---|
|**Tipo di carattere**|Elenca i tipi di carattere disponibili.|
|**Stile carattere**|Elenca gli stili disponibili per il tipo di carattere specificato.|
|**Dimensione**|Elenca le dimensioni disponibili per il tipo di carattere specificato.|
|**Esempio**|Visualizzare un esempio del modo in cui testo verrà visualizzato con le impostazioni del carattere specificata.|
|**Script**|Elenca gli script del linguaggio disponibili per il tipo di carattere specificato. Quando si seleziona uno script in lingue diverse, il set di caratteri per quella lingua diventa disponibile per la creazione di documenti multilingue.|

Per modificare il tipo di carattere del testo in un'immagine:

La procedura seguente è un esempio di come aggiungere testo a un'icona in un'applicazione Windows e modificare il tipo di carattere del testo.

1. Creare un'applicazione di moduli di Windows C++. Per informazioni dettagliate, vedere [creazione di un progetto di applicazione Windows](/previous-versions/visualstudio/visual-studio-2010/42wc9kk5). Un' *app. ico* file viene aggiunto al progetto per impostazione predefinita.

1. Nelle **Esplora soluzioni**, fare doppio clic sul file *app. ico*. Il [Editor di immagini](../windows/image-editor-for-icons.md) verrà aperto.

1. Dal **immagine** dal menu **Tools** e quindi selezionare **strumento testo**. Il **strumento testo** verrà visualizzata la finestra di dialogo.

1. Nel **dello strumento di testo** finestra di dialogo, digitare *C++* nell'area di testo vuoto. Questo testo verrà visualizzato in una finestra ridimensionabile situata nell'angolo superiore sinistro di *app. ico*, nella **Editor di immagini**.

1. Nel **Editor di immagini**, trascinare la finestra ridimensionabile al centro dell'app. ico, per migliorare la leggibilità del testo.

1. Nel **dello strumento di testo** finestra di dialogo, seleziona il **Font** pulsante. Il **carattere strumento testo** verrà visualizzata la finestra di dialogo.

1. Nel **carattere strumento testo** finestra di dialogo **Times New Roman** dall'elenco dei tipi di carattere disponibili elencate nel **Font** casella di riepilogo.

1. Selezionare **Bold** dall'elenco di stili di carattere disponibili elencate nel **lo stile del carattere** casella di riepilogo.

1. Selezionare **10** dall'elenco di disponibilità punto di dimensioni elencate nel **dimensioni** casella di riepilogo.

1. Selezionare il pulsante **OK** . Il **carattere strumento testo** nella finestra di dialogo verrà chiusa e le nuove impostazioni del tipo di carattere verranno applicate al testo.

1. Selezionare il **Close** pulsante il **strumento testo** nella finestra di dialogo. La finestra ridimensionabile intorno al testo non viene più il **Editor di immagini**.

#### <a name="text-area"></a>Area di testo

Visualizza il testo visualizzato come parte della risorsa. Quest'area è inizialmente vuota.

> [!NOTE]
> Se **sfondo trasparente** è impostato, l'immagine verrà inserito solo il testo. Se **sfondo opaco** è impostato, un rettangolo di delimitazione, compilato con la [colore di sfondo](../windows/selecting-foreground-or-background-colors-image-editor-for-icons.md), verrà inserito dietro il testo. Per altre informazioni, vedere [scelta sfondo opaco o trasparente](../windows/choosing-a-transparent-or-opaque-background-image-editor-for-icons.md).

È possibile fare doppio clic sui **strumento testo** finestra di dialogo per accedere a un menu di scelta rapida predefinito che contiene un elenco di comandi di Windows standard.

### <a name="to-display-or-hide-the-image-editor-toolbar"></a>Per visualizzare o nascondere la barra degli strumenti Editor di immagini

Poiché molti degli strumenti di disegno sono disponibili dal [tastiera](../windows/accelerator-keys-image-editor-for-icons.md), è talvolta utile nascondere il **Editor di immagini** sulla barra degli strumenti.

Nel **View** dal menu **barre degli strumenti** quindi scegliere **Editor di immagini**.

   > [!NOTE]
   > Gli elementi di questa barra degli strumenti verranno visualizzata non disponibili quando un file di immagine dal progetto corrente o non è aperta nella soluzione il **Editor di immagini**. Visualizzare [creazione di un'icona o un'altra immagine](../windows/creating-an-icon-or-other-image-image-editor-for-icons.md), per informazioni sull'aggiunta di file di immagine per i progetti.

## <a name="window-panes"></a>Riquadri della finestra

Il **Editor di immagini** finestra in genere visualizza un'immagine in due riquadri separati da una barra di divisione. Una vista è dimensioni effettive e l'altra viene ingrandita (il fattore di ingrandimento predefinita è 6). Le viste in questi due riquadri vengono aggiornate automaticamente: le modifiche apportate in un riquadro vengono visualizzate immediatamente in altro. I due riquadri rendono più semplice per usare una vista ingrandita dell'immagine, in cui è possibile distinguere i singoli pixel e, contemporaneamente, osservare gli effetti del lavoro svolto sulla vista dimensioni effettive dell'immagine.

Nel riquadro a sinistra viene utilizzato tutto lo spazio è necessario (fino a metà della **immagine** finestra) per visualizzare la visualizzazione di ingrandimento 1:1 (predefinito) dell'immagine. Riquadro di destra visualizza l'immagine con zoom (percentuale di ingrandimento 6:1 per impostazione predefinita). È possibile modificare il livello di ingrandimento in ogni riquadro usando il **Magnify** strumento nel [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md) oppure usando i tasti di scelta rapida.

È possibile ingrandire il riquadro inferiore del **Editor di immagini** finestra e utilizzare i due riquadri per mostrare diverse aree di un'immagine di grandi dimensioni. Selezionare questa opzione all'interno del riquadro per selezionarlo.

È possibile modificare le dimensioni relative dei riquadri posizionando il puntatore del mouse sulla barra di divisione e spostando la barra di divisione verso destra o sinistra. Barra di divisione è possibile spostare completamente in entrambi i lati se si desidera lavorare con un solo riquadro.

Se il **Editor di immagini** riquadro viene ingrandita di un fattore pari a 4 o versione successiva, è possibile visualizzare una griglia in pixel che delimita i singoli pixel nell'immagine.

### <a name="to-change-the-magnification-factor"></a>Per modificare del fattore di ingrandimento

Per impostazione predefinita, il **immagine** editor Mostra la visualizzazione nel riquadro a sinistra con le dimensioni effettive e la visualizzazione nel riquadro di destra in 6 volte le dimensioni effettive. Il fattore di ingrandimento (visualizzato nella barra di stato nella parte inferiore dell'area di lavoro) è il rapporto tra le dimensioni effettive dell'immagine e le dimensioni di visualizzazione. Il fattore di predefinito è 6 e l'intervallo va da 1 a 10.

1. Selezionare il **Editor di immagini** riquadro cui fattore di ingrandimento che si desidera modificare.

1. Nel [sulla barra degli strumenti Editor di immagini](../windows/toolbar-image-editor-for-icons.md), selezionare la freccia a destra del [strumento Ingrandisci](../windows/toolbar-image-editor-for-icons.md) e selezionare il fattore di ingrandimento dal sottomenu: **1 X**, **2 X**, **6 X**, oppure **8 X**.

   > [!NOTE]
   > Per selezionare un fattore di ingrandimento diversi da quelli elencati nel **Ingrandisci** dello strumento, usare i tasti di scelta rapida.

### <a name="to-display-or-hide-the-pixel-grid"></a>Per visualizzare o nascondere la griglia in pixel

Per tutti i **Editor di immagini** riquadri con un fattore di ingrandimento pari a 4 o versione successiva, è possibile visualizzare una griglia che delimita i singoli pixel nell'immagine.

1. Nel **immagine** dal menu **Impostazioni griglia**.

1. Selezionare il **griglia in Pixel** casella di controllo per visualizzare la griglia, o deselezionare la casella per nascondere la griglia.

> [!TIP]
> Descrizioni comandi vengono visualizzati quando si passa il cursore su un pulsante della barra degli strumenti. Questi suggerimenti consentono di identificare la funzione di ogni pulsante.

## <a name="visual-studio-image-library"></a>Libreria di immagini di Visual Studio

È possibile scaricare gratuitamente il **Visual Studio Image Library** che contiene numerose animazioni, bitmap e icone che è possibile usare nelle applicazioni. Per ulteriori informazioni sul download della libreria, vedere [Libreria di immagini di Visual Studio](/visualstudio/designers/the-visual-studio-image-library).

## <a name="managed-resources"></a>Risorse gestite

È possibile usare la **immagine** editor e il [editor binario](binary-editor.md) per lavorare con i file di risorse nei progetti gestiti. Per modificare le risorse gestite è necessario che siano collegate. L'editor di risorse di Visual Studio non supporta la modifica di risorse incorporate.

Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [risorse nelle App Desktop](/dotnet/framework/resources/index) nel *manuale dello sviluppatore di .NET Framework*. Per informazioni sull'aggiunta manuale di file di risorse a progetti gestiti, sull'accesso alle risorse, visualizzazione di risorse statiche e sull'assegnazione di stringhe di risorse alle proprietà, vedere [creazione di file di risorse per le app Desktop](/dotnet/framework/resources/creating-resource-files-for-desktop-apps). Per informazioni sulla globalizzazione e localizzazione delle risorse nelle App gestite, vedere [globalizzazione e localizzazione di applicazioni .NET Framework](/dotnet/standard/globalization-localization/index).

## <a name="requirements"></a>Requisiti

nessuno

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[Icone](https://msdn.microsoft.com/library/windows/desktop/ms646973.aspx)