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
ms.openlocfilehash: 7bc5d5763881b862487fa97e02da02d98bcd017d
ms.sourcegitcommit: b4645761ce5acf8c2fc7a662334dd5a471ea976d
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/07/2019
ms.locfileid: "57562949"
---
# <a name="dialog-editor-c"></a>Editor finestre (C++)

Il **finestra di dialogo Editor** consente di creare o modificare le risorse finestra di dialogo.

- Per aprire l'editor, fare doppio clic sul file RC di una finestra di dialogo di **visualizzazione risorse** finestra o passare al menu **View** > **visualizzazione risorse**.

È uno dei primi passaggi della creazione di una nuova finestra di dialogo o un modello di finestra di dialogo, aggiunta di controlli. Nel **finestra di dialogo Editor**, è possibile disporre i controlli per adattarli un determinate dimensioni, forma o allineamento o è possibile spostare circa affinché funzioni nella finestra di dialogo. È inoltre facile eliminare un controllo.

È possibile archiviare una finestra di dialogo come modello in modo da poterla riusare. È possibile passare facilmente dalla progettazione della finestra di dialogo e alla modifica del codice che la implementa e viceveresa.

È anche possibile modificare le proprietà del singolo o più controlli nel **finestra di dialogo Editor**. È possibile modificare l'ordine di tabulazione, vale a dire, l'ordine in cui i controlli vengono attivati lo stato attivo quando la **scheda** viene premuto, oppure è possibile definire una chiave di accesso o una combinazione di tasti che consente agli utenti di scegliere un controllo usando la tastiera.

Il **finestra di dialogo Editor** consente inoltre di usare i controlli personalizzati, inclusi i controlli ActiveX. È anche possibile modificare un [visualizzazione form](../mfc/reference/cformview-class.md), [visualizzazioni di record](../data/record-views-mfc-data-access.md), o [barre di finestra di dialogo](../mfc/dialog-bars.md).

A partire da Visual Studio 2015, è possibile usare la **finestra di dialogo Editor** definire layout dinamico che specifica come controlli vengono spostati e ridimensionamento quando l'utente ridimensiona una finestra di dialogo. Per altre informazioni, vedere [Dynamic Layout](../mfc/dynamic-layout.md).

Per altre informazioni sulle risorse, vedere come [creare una finestra di dialogo](../windows/creating-a-new-dialog-box.md) e [controlli finestra di dialogo](../windows/controls-in-dialog-boxes.md).

> [!TIP]
> Quando si usa la **finestra di dialogo Editor**, in molti casi, è possibile selezionare con il pulsante destro del mouse per visualizzare un menu di scelta rapida dei comandi usati frequentemente.

## <a name="dialog-editor-toolbar"></a>Barra degli strumenti dell'editor finestre

Il **finestra di dialogo Editor** sulla barra degli strumenti contiene pulsanti per la disposizione del layout dei controlli nella finestra di dialogo, ad esempio dimensione e allineamento. **Editor finestre** pulsanti della barra degli strumenti corrispondono ai comandi nella **formato** menu.

|Icona|Significato|Icona|Significato|
|----------|-------------|----------|-------------|
|![Pulsante Verifica finestra di dialogo](../mfc/media/vcdialogeditortestdialog.png "vcDialogEditorTestDialog")|Verifica finestra di dialogo|![Pulsante spaziatura orizzontale](../mfc/media/vcdialogeditoracross.png "vcDialogEditorAcross")|Spaziatura orizzontale|
|![Pulsante Allinea a sinistra](../mfc/media/vcdialogeditoralignlefts.png "vcDialogEditorAlignLefts")|Allinea a sinistra|![Pulsante spaziatura verticale](../mfc/media/vcdialogeditordown.png "vcDialogEditorDown")|Giù|
|![Pulsante Allinea a destra](../mfc/media/vcdialogeditoralignrights.png "vcDialogEditorAlignRights")|Allinea a destra|![Marca stessa larghezza pulsante](../mfc/media/vcdialogeditorsamewidth.png "vcDialogEditorSameWidth")|Assegna stessa larghezza|
|![Pulsante Allinea in alto](../mfc/media/vcdialogeditoraligntops.png "vcDialogEditorAlignTops")|Allinea in alto|![Pulsante Crea stessa altezza](../mfc/media/vcdialogeditormakesameheight.png "vcDialogEditorMakeSameHeight")|Assegna stessa altezza|
|![Pulsante Allinea in basso](../mfc/media/vcdialogeditoralignbottoms.png "vcDialogEditorAlignBottoms")|Allinea in basso|![Pulsante di dimensione stessa marca](../mfc/media/vcdialogeditorsamesize.png "vcDialogEditorSameSize")|Rendi uguali|
|![Pulsante Centra verticalmente](../mfc/media/vcdialogeditorvertical.png "vcDialogEditorVertical")|Vertical|![Pulsante Mostra/Nascondi griglia](../mfc/media/vcdialogeditortogglegrid.png "vcDialogEditorToggleGrid")|Attiva/Disattiva griglia|
|![Pulsante Centra orizzontalmente](../mfc/media/vcdialogeditorhorizontal.png "vcDialogEditorHorizontal")|Orizzontale|![Pulsante Attiva/Disattiva guide](../mfc/media/vcdialogeditortoggleguides.png "vcDialogEditorToggleGuides")|Attiva/Disattiva guide|

- Per mostrare o nascondere il **Editor finestre** sulla barra degli strumenti, andare al menu **View** > **barre degli strumenti** > **Editor finestre**.

Quando si apre la **Editor finestre** in un progetto C++, il **Editor finestre** sulla barra degli strumenti viene visualizzato automaticamente nella parte superiore della soluzione, tuttavia, se si chiude in modo esplicito la barra degli strumenti, è necessario richiamare questo comando, il alla successiva apertura il **finestra di dialogo Editor**. È possibile attivare o disattivare la visualizzazione, selezionarlo dall'elenco di barre degli strumenti disponibili e windows.

## <a name="switch-between-dialog-box-controls-and-code"></a>Passare da una finestra di dialogo e il codice

Nelle applicazioni MFC, è possibile fare doppio clic su controlli di finestre di dialogo per passare al codice del gestore o di creare rapidamente stub di funzioni del gestore.

Con un controllo è selezionato, selezionare il **eventi di controllo** pulsante o il **messaggi** pulsante il [finestra proprietà](/visualstudio/ide/reference/properties-window) per visualizzare un elenco completo dei messaggi di Windows e gli eventi è disponibile per l'elemento selezionato. Scegliere dall'elenco per creare o modificare le funzioni del gestore.

- Per passare al codice dal **finestra di dialogo Editor**, fare doppio clic su un controllo nella finestra di dialogo a cui passare la dichiarazione per la funzione di gestione dei messaggi implementato più di recente.

   Per le classi di finestra di dialogo basato su ATL, è sempre passare direttamente alla definizione del costruttore.

- Per visualizzare gli eventi per un controllo, con un controllo è selezionato, scegliere il **eventi di controllo** pulsante il **proprietà** finestra.

   Quando un singolo controllo ha lo stato attivo nella finestra di dialogo, è possibile fare doppio clic e selezionare **Aggiungi gestore**. In questo modo è possibile specificare la classe a cui viene aggiunto il gestore. Per altre informazioni, vedere [aggiunta di un gestore eventi](../ide/adding-an-event-handler-visual-cpp.md).

   > [!NOTE]
   > Scegliere il **eventi di controllo** pulsante quando la finestra di dialogo ha lo stato attivo espone un elenco di tutti i controlli nella finestra di dialogo, è quindi possibile espandere per modificare gli eventi per i singoli controlli.

- Per visualizzare i messaggi per una finestra di dialogo con la finestra di dialogo selezionata, scegliere il **messaggi** pulsante il **proprietà** finestra.

## <a name="accelerator-keys"></a>Tasti di scelta rapida

Di seguito sono quelli predefiniti dei tasti di scelta rapida per il **finestra di dialogo Editor** comandi.  

|Comando|Tasti|Descrizione|
|-------------|----------|-----------------|
|Format.AlignBottoms|**CTRL** + **MAIUSC** + **freccia giù**|Consente di allineare i bordi inferiore dei controlli selezionati con il controllo dominante.|
|Format.AlignCenters|**Shift** + **F9**|Consente di allineare l'asse verticale dei controlli selezionati con il controllo dominante.|
|Format.AlignLefts|**CTRL** + **MAIUSC** + **freccia sinistra**|Allinea bordi a sinistra dei controlli selezionati con il controllo dominante.|
|Format.AlignMiddles|**F9**|Consente di allineare l'asse orizzontale dei controlli selezionati con il controllo dominante.|
|Format.AlignRights|**CTRL** + **MAIUSC** + **freccia destra**|Allinea bordi a destra dei controlli selezionati con il controllo dominante.|
|Format.AlignTops|**CTRL** + **MAIUSC** + **freccia in su**|Consente di allineare i bordi superiore dei controlli selezionati con il controllo dominante.|
|Format.ButtonBottom|**Ctrl** + **B**|Colloca i pulsanti selezionati in basso al centro della finestra di dialogo.|
|Format.ButtonRight|**Ctrl** + **R**|Colloca i pulsanti selezionati nell'angolo superiore destro della finestra di dialogo.|
|Format.CenterHorizontal|**Ctrl** + **Shift** + **F9**|Centra i controlli orizzontalmente nella finestra di dialogo.|
|Format.CenterVertical|**CTRL** + **F9**|Centra i controlli verticalmente nella finestra di dialogo.|
|Format.CheckMnemonics|**Ctrl** + **M**|Controlla l'univocità dei tasti di scelta.|
|Format.SizeToContent|**Shift** + **F7**|Ridimensiona i controlli selezionati per adattarsi al testo della didascalia.|
|Format.SpaceAcross|**ALT** + **Freccia SINISTRA**|Distribuire uniformemente i controlli selezionati in senso orizzontale.|
|Format.SpaceDown|**ALT** + **freccia giù**|Distribuire uniformemente i controlli selezionati in senso verticale.|
|Format.TabOrder|**Ctrl** + **D**|Imposta l'ordine dei controlli nella finestra di dialogo.|
|Format.TestDialog|**CTRL** + **T**|Esegue la finestra di dialogo per verificarne l'aspetto e comportamento.|
|Format.ToggleGuides|**CTRL** + **G**|Consente di alternare alcuna griglia, la griglia e guide per la finestra di dialogo Modifica.|

- Per modificare i tasti di scelta rapida, passare al menu di scelta **degli strumenti** > **opzioni**e scegliere **tastiera** sotto la **ambiente** cartella.

   Per altre informazioni, vedere [Identificazione e personalizzazione dei tasti di scelta rapida](/visualstudio/ide/identifying-and-customizing-keyboard-shortcuts-in-visual-studio).

- Per modificare le impostazioni, passare al menu di scelta **degli strumenti** > **Importa / Esporta impostazioni**.

   Le opzioni disponibili nelle finestre di dialogo e i nomi e i percorsi dei comandi di menu viene visualizzata, potrebbe essere diverso rispetto a quanto descritto nella **aiutare** a seconda dell'edizione o dalle impostazioni attive.  Per altre informazioni, vedere [Personalizzare l'IDE di Visual Studio](/visualstudio/ide/personalizing-the-visual-studio-ide).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[Procedura: Creare una finestra di dialogo](../windows/creating-a-new-dialog-box.md)<br/>
[Finestra di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
<!--
[Controls](../mfc/controls-mfc.md)<br/>
[Control Classes](../mfc/control-classes.md)<br/>
[Dialog Box Classes](../mfc/dialog-box-classes.md)<br/>
[Dialog Box Controls and Variable Types](../ide/dialog-box-controls-and-variable-types.md)-->