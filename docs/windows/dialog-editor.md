---
title: Editor finestre (C++)
ms.date: 02/15/2019
f1_keywords:
- vc.editors.dialog.dialog
- vc.editors.dialog.F1
- vc.editors.dialog
helpviewer_keywords:
- resource editors [C++], Dialog editor
- editors, dialog boxes
- Dialog editor
- dialog boxes [C++], editing
- controls [C++], showing or hiding Dialog editor toolbar
- toolbars [C++], showing
- toolbars [C++], hiding
- Dialog Editor [C++], showing or hiding toolbar
- events [C++], viewing for controls
- Windows messages [C++], controls
- messages [C++], viewing for dialog boxes
- Dialog Editor [C++], accessing code
- code [C++], switching from Dialog Editor
- controls [C++], jumping to code
- Dialog Editor [C++], switching between controls and code
- Dialog Editor [C++], shortcut keys
ms.assetid: d94884ef-2cca-49d8-9b58-775f34848134
ms.openlocfilehash: fef4a7f0d4c785a40ea946127d8e3c84c797e1aa
ms.sourcegitcommit: 24592ba0a38c7c996ffd3d55fe1024231a59ccc2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/18/2019
ms.locfileid: "56336696"
---
# <a name="dialog-editor-c"></a>Editor finestre (C++)

Il **dialogo** editor consente di creare o modificare le risorse finestra di dialogo. Si apre l'editor finestre facendo doppio clic sul file RC di una finestra di dialogo il **visualizzazione di risorse** finestra (**View** > **visualizzazione risorse**). Si noti che **visualizzazione risorse** non è disponibile nelle edizioni Express.

Uno dei primi passaggi per creare una nuova finestra di dialogo (o un modello di finestra di dialogo) consiste nell'aggiunta dei controlli alla finestra di dialogo. Nel **dialogo** editor, è possibile disporre i controlli per adattarli un determinate dimensioni, forma o allineamento oppure è possibile spostare circa affinché funzioni nella finestra di dialogo. È inoltre facile eliminare un controllo.

È possibile archiviare una finestra di dialogo come modello in modo da poterla riusare. È possibile passare facilmente dalla progettazione della finestra di dialogo e alla modifica del codice che la implementa e viceveresa.

È inoltre possibile modificare le proprietà di uno o più controlli nell'editor finestre. È possibile modificare l'ordine di tabulazione, vale a dire, l'ordine in cui i controlli vengono attivati lo stato attivo quando la **scheda** viene premuto, oppure è possibile definire una chiave di accesso (una combinazione di tasti) che consente agli utenti di scegliere un controllo usando la tastiera.

Il **dialogo** editor consente anche di usare i controlli personalizzati, inclusi i controlli ActiveX. Inoltre, è possibile modificare una [visualizzazione maschera](../mfc/reference/cformview-class.md), le [visualizzazioni di record](../data/record-views-mfc-data-access.md)o [le barre delle finestre di dialogo](../mfc/dialog-bars.md).

A partire da Visual Studio 2015, è possibile utilizzare l'editor finestre per definire layout dinamico che specificano come controlli spostano e ridimensionare quando l'utente ridimensiona una finestra di dialogo. Per altre informazioni, vedere [Dynamic Layout](../mfc/dynamic-layout.md).

- [Procedura: Creare una finestra di dialogo](../windows/creating-a-new-dialog-box.md)

- [Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)

   > [!TIP]
   > Quando si usa la **dialogo** editor, in molti casi, è possibile selezionare il pulsante destro del mouse per visualizzare un menu di scelta rapida dei comandi usati frequentemente.

## <a name="dialog-editor-toolbar"></a>Barra degli strumenti dell'editor finestre

Quando si apre la **finestra di dialogo** editor in un progetto C++, il **Editor finestre** sulla barra degli strumenti viene visualizzato automaticamente nella parte superiore della soluzione.

|Icona|Significato|Icona|Significato|
|----------|-------------|----------|-------------|
|![Pulsante Verifica finestra di dialogo](../mfc/media/vcdialogeditortestdialog.png "vcDialogEditorTestDialog")|Verifica finestra di dialogo|![Pulsante spaziatura orizzontale](../mfc/media/vcdialogeditoracross.png "vcDialogEditorAcross")|Spaziatura orizzontale|
|![Pulsante Allinea a sinistra](../mfc/media/vcdialogeditoralignlefts.png "vcDialogEditorAlignLefts")|Allinea a sinistra|![Pulsante spaziatura verticale](../mfc/media/vcdialogeditordown.png "vcDialogEditorDown")|Giù|
|![Pulsante Allinea a destra](../mfc/media/vcdialogeditoralignrights.png "vcDialogEditorAlignRights")|Allinea a destra|![Marca stessa larghezza pulsante](../mfc/media/vcdialogeditorsamewidth.png "vcDialogEditorSameWidth")|Assegna stessa larghezza|
|![Pulsante Allinea in alto](../mfc/media/vcdialogeditoraligntops.png "vcDialogEditorAlignTops")|Allinea in alto|![Pulsante Crea stessa altezza](../mfc/media/vcdialogeditormakesameheight.png "vcDialogEditorMakeSameHeight")|Assegna stessa altezza|
|![Pulsante Allinea in basso](../mfc/media/vcdialogeditoralignbottoms.png "vcDialogEditorAlignBottoms")|Allinea in basso|![Pulsante di dimensione stessa marca](../mfc/media/vcdialogeditorsamesize.png "vcDialogEditorSameSize")|Rendi uguali|
|![Pulsante Centra verticalmente](../mfc/media/vcdialogeditorvertical.png "vcDialogEditorVertical")|Vertical|![Pulsante Mostra/Nascondi griglia](../mfc/media/vcdialogeditortogglegrid.png "vcDialogEditorToggleGrid")|Attiva/Disattiva griglia|
|![Pulsante Centra orizzontalmente](../mfc/media/vcdialogeditorhorizontal.png "vcDialogEditorHorizontal")|Orizzontale|![Pulsante Attiva/Disattiva guide](../mfc/media/vcdialogeditortoggleguides.png "vcDialogEditorToggleGuides")|Attiva/Disattiva guide|

Il **finestra di dialogo Editor** sulla barra degli strumenti contiene pulsanti per la disposizione del layout dei controlli nella finestra di dialogo, ad esempio dimensione e allineamento. **Editor finestre** pulsanti della barra degli strumenti corrispondono ai comandi nella **formato** menu.

Quando si utilizza il **finestra di dialogo** editor, è possibile attivare o disattivare la visualizzazione del **Editor finestre** sulla barra degli strumenti, selezionarlo dall'elenco di barre degli strumenti disponibili e windows.

- Per mostrare o nascondere la barra degli strumenti editor finestra di dialogo, nella **View** dal menu **barre degli strumenti**, quindi scegliere **Editor finestre** dal sottomenu.

   > [!NOTE]
   > Il **finestra di dialogo Editor** sulla barra degli strumenti viene visualizzato per impostazione predefinita quando si apre una risorsa finestra di dialogo nell'editor finestre; tuttavia, se si chiude in modo esplicito la barra degli strumenti, è necessario richiamare questo comando, alla successiva apertura di una risorsa finestra di dialogo.

## <a name="switch-between-dialog-box-controls-and-code"></a>Passare da una finestra di dialogo e il codice

Nelle applicazioni MFC, è possibile fare doppio clic su controlli di finestre di dialogo per passare al codice del gestore o di creare rapidamente stub di funzioni del gestore.

Con un controllo è selezionato, fare clic sul **eventi di controllo** pulsante o il **messaggi** pulsante il [finestra proprietà](/visualstudio/ide/reference/properties-window) per visualizzare un elenco completo dei messaggi di Windows e gli eventi è disponibile per l'elemento selezionato. Scegliere dall'elenco per creare o modificare le funzioni del gestore.

- Per passare al codice dall'editor finestre, fare doppio clic su un controllo nella finestra di dialogo a cui passare la dichiarazione per la funzione di gestione dei messaggi implementato più di recente. (Per le classi di finestra di dialogo basato su ATL, è sempre passare alla definizione del costruttore.)

- Per visualizzare gli eventi per un controllo, con un controllo è selezionato, scegliere il **eventi di controllo** pulsante il [finestra proprietà](/visualstudio/ide/reference/properties-window).

   > [!NOTE]
   > Scegliendo il **eventi di controllo** pulsante quando il *nella finestra di dialogo* dispone di un elenco di tutti i controlli espone lo stato attivo nella finestra di dialogo, è quindi possibile espandere per modificare gli eventi per i singoli controlli.

   Quando un singolo controllo ha lo stato attivo nella finestra di dialogo, è possibile pulsante destro del mouse e selezionare **Aggiungi gestore** dal menu di scelta rapida. In questo modo è possibile specificare la classe a cui viene aggiunto il gestore. Per altre informazioni, vedere [aggiunta di un gestore eventi](../ide/adding-an-event-handler-visual-cpp.md).

- Per visualizzare i messaggi per una finestra di dialogo con la finestra di dialogo selezionata, scegliere il **messaggi** pulsante il [finestra proprietà](/visualstudio/ide/reference/properties-window).

## <a name="accelerator-keys"></a>Tasti di scelta rapida

Di seguito sono quelli predefiniti tasti di scelta rapida per i comandi dell'editor finestre. Per modificare i tasti di scelta rapida, selezionare **opzioni** nel **strumenti** menu, quindi scegliere **tastiera** sotto il **ambiente** cartella. Per altre informazioni, vedere [Identificazione e personalizzazione dei tasti di scelta rapida](/visualstudio/ide/identifying-and-customizing-keyboard-shortcuts-in-visual-studio).

> [!NOTE]
> Le opzioni disponibili nelle finestre di dialogo e i nomi e i percorsi dei comandi di menu visualizzati potrebbero non corrispondere a quelli descritti nella Guida a seconda dell'edizione o delle impostazioni attive. Per modificare le impostazioni, scegliere **Importa/Esporta impostazioni** dal menu **Strumenti** . Per altre informazioni, vedere [Personalizzare l'IDE di Visual Studio](/visualstudio/ide/personalizing-the-visual-studio-ide).

|Comando|Tasti|Descrizione|
|-------------|----------|-----------------|
|Format.AlignBottoms|**CTRL** + **MAIUSC** + **freccia giù**|Consente di allineare i bordi inferiore dei controlli selezionati con il controllo dominante|
|Format.AlignCenters|**Shift** + **F9**|Consente di allineare l'asse verticale dei controlli selezionati con il controllo dominante|
|Format.AlignLefts|**CTRL** + **MAIUSC** + **freccia sinistra**|Allinea il bordo sinistro dei controlli selezionati con il controllo dominante|
|Format.AlignMiddles|**F9**|Consente di allineare l'asse orizzontale dei controlli selezionati con il controllo dominante|
|Format.AlignRights|**CTRL** + **MAIUSC** + **freccia destra**|Allinea il bordo destro dei controlli selezionati con il controllo dominante|
|Format.AlignTops|**CTRL** + **MAIUSC** + **freccia in su**|Allinea il bordo superiore dei controlli selezionati con il controllo dominante|
|Format.ButtonBottom|**Ctrl** + **B**|Colloca i pulsanti selezionati in basso al centro della finestra di dialogo|
|Format.ButtonRight|**Ctrl** + **R**|Colloca i pulsanti selezionati nell'angolo superiore destro della finestra di dialogo|
|Format.CenterHorizontal|**Ctrl** + **Shift** + **F9**|Data Center i controlli orizzontalmente nella finestra di dialogo|
|Format.CenterVertical|**CTRL** + **F9**|Data Center i controlli verticalmente nella finestra di dialogo|
|Format.CheckMnemonics|**Ctrl** + **M**|Controlla l'univocità dei tasti di scelta|
|Format.SizeToContent|**Shift** + **F7**|Ridimensiona i controlli selezionati per adattarsi al testo della didascalia|
|Format.SpaceAcross|**ALT** + **Freccia SINISTRA**|Distribuire uniformemente i controlli selezionati orizzontalmente|
|Format.SpaceDown|**ALT** + **freccia giù**|Distribuire uniformemente i controlli selezionati in verticale|
|Format.TabOrder|**Ctrl** + **D**|Imposta l'ordine dei controlli nella finestra di dialogo|
|Format.TestDialog|**CTRL** + **T**|La finestra di dialogo per verificarne l'aspetto e comportamento di esecuzione|
|Format.ToggleGuides|**CTRL** + **G**|Consente di alternare alcuna griglia, la griglia e guide per la finestra di dialogo Modifica|

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Procedura: Creare una risorsa](../windows/how-to-create-a-resource.md)<br/>
[Controlli](../mfc/controls-mfc.md)<br/>
[Classi di controlli](../mfc/control-classes.md)<br/>
[Classi di finestre di dialogo](../mfc/dialog-box-classes.md)<br/>
[Tipi di variabili e controlli di finestre di dialogo](../ide/dialog-box-controls-and-variable-types.md)