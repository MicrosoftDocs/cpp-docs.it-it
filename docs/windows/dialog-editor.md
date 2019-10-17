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
ms.openlocfilehash: 40b5d8c8390c638b70bc2c0860ccf3c17872719c
ms.sourcegitcommit: 9aab425662a66825772f091112986952f341f7c8
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/16/2019
ms.locfileid: "72445020"
---
# <a name="dialog-editor-c"></a>Editor finestre (C++)

L' **editor finestre** consente di creare o modificare le risorse della finestra di dialogo.

- Per aprire l'editor, fare doppio clic sul file RC di una finestra di dialogo nella finestra di **visualizzazione risorse** o passare alla **visualizzazione**menu  > **altre finestre** > **visualizzazione risorse**.

Uno dei primi passaggi per creare una nuova finestra di dialogo o un modello di finestra di dialogo consiste nell'aggiungere controlli. Nell' **editor finestre**è possibile disporre i controlli per adattarli a una determinata dimensione, forma o allineamento oppure è possibile spostarli in modo che funzionino all'interno della finestra di dialogo. È inoltre facile eliminare un controllo.

È possibile archiviare una finestra di dialogo come modello in modo da poterla riusare. È possibile passare facilmente dalla progettazione della finestra di dialogo e alla modifica del codice che la implementa e viceveresa.

È anche possibile modificare le proprietà di uno o più controlli nell' **editor finestre**. È possibile modificare l'ordine di tabulazione, ovvero l'ordine in cui i controlli vengono attivati quando viene premuto il tasto **Tab** oppure è possibile definire una chiave di accesso o una combinazione di tasti che consente agli utenti di scegliere un controllo usando la tastiera.

L' **editor finestre** consente inoltre di utilizzare controlli personalizzati, inclusi i controlli ActiveX. È inoltre possibile modificare una [visualizzazione form](../mfc/reference/cformview-class.md), le [visualizzazioni di record](../data/record-views-mfc-data-access.md)o le barre delle finestre di [dialogo](../mfc/dialog-bars.md).

A partire da Visual Studio 2015, è possibile usare l' **editor finestre** per definire i layout dinamici, che specificano il modo in cui i controlli vengono spostati e ridimensionati quando l'utente ridimensiona una finestra di dialogo. Per altre informazioni, vedere [Dynamic Layout](../mfc/dynamic-layout.md).

Per ulteriori informazioni sulle risorse, vedere come [creare una](../windows/creating-a-new-dialog-box.md) finestra di dialogo e [controlli](../windows/controls-in-dialog-boxes.md)della finestra di dialogo.

> [!TIP]
> Quando si utilizza l' **editor finestre**, in molti casi è possibile selezionare con il pulsante destro del mouse per visualizzare un menu di scelta rapida dei comandi utilizzati di frequente.

## <a name="dialog-editor-toolbar"></a>Barra degli strumenti dell'editor finestre

La barra degli strumenti dell' **editor finestre** contiene i pulsanti per la disposizione del layout dei controlli nella finestra di dialogo, ad esempio dimensioni e allineamento. I pulsanti della barra degli strumenti dell' **editor finestre** corrispondono ai comandi del menu **formato** .

|Icona|Significato|Icona|Significato|
|----------|-------------|----------|-------------|
|![Pulsante della finestra di dialogo test](../mfc/media/vcdialogeditortestdialog.png "vcDialogEditorTestDialog")|Verifica finestra di dialogo|![Pulsante spazio tra](../mfc/media/vcdialogeditoracross.png "vcDialogEditorAcross")|Spaziatura orizzontale|
|![Pulsante Allinea a sinistra](../mfc/media/vcdialogeditoralignlefts.png "vcDialogEditorAlignLefts")|Allinea a sinistra|![Pulsante di scorrimento dello spazio](../mfc/media/vcdialogeditordown.png "vcDialogEditorDown")|Giù|
|![Pulsante Allinea diritti](../mfc/media/vcdialogeditoralignrights.png "vcDialogEditorAlignRights")|Allinea a destra|![Fare lo stesso pulsante larghezza](../mfc/media/vcdialogeditorsamewidth.png "vcDialogEditorSameWidth")|Assegna stessa larghezza|
|![Pulsante Allinea in alto](../mfc/media/vcdialogeditoraligntops.png "vcDialogEditorAlignTops")|Allinea in alto|![Pulsante Crea stessa altezza](../mfc/media/vcdialogeditormakesameheight.png "vcDialogEditorMakeSameHeight")|Assegna stessa altezza|
|![Pulsante Allinea in basso](../mfc/media/vcdialogeditoralignbottoms.png "vcDialogEditorAlignBottoms")|Allinea in basso|![Pulsante Crea stessa dimensione](../mfc/media/vcdialogeditorsamesize.png "vcDialogEditorSameSize")|Rendi uguali|
|![Pulsante Centra verticalmente](../mfc/media/vcdialogeditorvertical.png "vcDialogEditorVertical")|Vertical|![Pulsante Imposta/Rimuovi griglia](../mfc/media/vcdialogeditortogglegrid.png "vcDialogEditorToggleGrid")|Attiva/Disattiva griglia|
|![Pulsante Centra orizzontalmente](../mfc/media/vcdialogeditorhorizontal.png "vcDialogEditorHorizontal")|Orizzontale|![Pulsante Mostra/Nascondi guide](../mfc/media/vcdialogeditortoggleguides.png "vcDialogEditorToggleGuides")|Attiva/Disattiva guide|

- Per visualizzare o nascondere la barra degli strumenti dell' **editor finestre** , passare a menu **Visualizza** > **barre degli strumenti** > **editor finestre**.

Quando si apre l' **editor finestre** di un C++ progetto, la barra degli strumenti dell' **editor finestre** viene visualizzata automaticamente nella parte superiore della soluzione. Tuttavia, se si chiude in modo esplicito la barra degli strumenti, sarà necessario richiamarla alla successiva apertura dell' **editor finestre** . È possibile abilitare o disabilitare la visualizzazione selezionandola dall'elenco delle barre degli strumenti e delle finestre disponibili.

## <a name="switch-between-dialog-box-controls-and-code"></a>Spostarsi tra i controlli della finestra di dialogo e il codice

Nelle applicazioni MFC, è possibile fare doppio clic sui controlli della finestra di dialogo per passare al codice del gestore o creare rapidamente funzioni del gestore stub.

Con un controllo selezionato, selezionare il pulsante **ControlEvents** o il pulsante **messages (messaggi** ) nella [finestra Proprietà](/visualstudio/ide/reference/properties-window) per visualizzare un elenco completo dei messaggi e degli eventi di Windows disponibili per l'elemento selezionato. Scegliere dall'elenco per creare o modificare le funzioni del gestore.

- Per passare al codice dall' **editor finestre**, fare doppio clic su un controllo nella finestra di dialogo per passare alla dichiarazione per la funzione di gestione dei messaggi implementata più di recente.

   Per le classi di finestre di dialogo basate su ATL, è sempre possibile passare alla definizione del costruttore.

- Per visualizzare gli eventi per un controllo, con un controllo selezionato, scegliere il pulsante **ControlEvents** nella finestra **Proprietà** .

   Quando un singolo controllo ha lo stato attivo nella finestra di dialogo, è possibile fare clic con il pulsante destro del mouse e scegliere **Aggiungi gestore eventi**. In questo modo è possibile specificare la classe a cui viene aggiunto il gestore. Per ulteriori informazioni, vedere [aggiunta di un gestore eventi](../ide/adding-an-event-handler-visual-cpp.md).

   > [!NOTE]
   > Se si sceglie il pulsante **ControlEvents** quando la finestra di dialogo ha lo stato attivo, viene esposto un elenco di tutti i controlli della finestra di dialogo, che è quindi possibile espandere per modificare gli eventi per i singoli controlli.

- Per visualizzare i messaggi per una finestra di dialogo, con la finestra di dialogo selezionata, scegliere il pulsante **messaggi** nella finestra **Proprietà** .

## <a name="accelerator-keys"></a>Tasti di scelta rapida

Di seguito sono riportati i tasti di scelta rapida predefiniti per i comandi dell' **editor finestre** .  

|Comando|Tasti|Descrizione|
|-------------|----------|-----------------|
|Format.AlignBottoms|**Ctrl** + **MAIUSC** + **freccia giù**|Allinea i bordi inferiore dei controlli selezionati con il controllo dominante.|
|Format.AlignCenters|**Maiusc** + **F9**|Allinea i centri verticali dei controlli selezionati con il controllo dominante.|
|Format.AlignLefts|**Ctrl** + **MAIUSC** + **freccia sinistra**|Allinea i bordi sinistro dei controlli selezionati con il controllo dominante.|
|Format.AlignMiddles|**F9**|Allinea i centri orizzontali dei controlli selezionati con il controllo dominante.|
|Format.AlignRights|**Ctrl** + **MAIUSC** + **freccia destra**|Allinea i bordi destro dei controlli selezionati con il controllo dominante.|
|Format.AlignTops|**Ctrl** + **MAIUSC** + **freccia su**|Allinea i bordi superiori dei controlli selezionati con il controllo dominante.|
|Format.ButtonBottom|**Ctrl** + **B**|Inserisce i pulsanti selezionati lungo il centro inferiore della finestra di dialogo.|
|Format.ButtonRight|**Ctrl** + **R**|Inserisce i pulsanti selezionati nell'angolo superiore destro della finestra di dialogo.|
|Format.CenterHorizontal|**Ctrl** + **MAIUSC** + **F9**|Centra orizzontalmente i controlli all'interno della finestra di dialogo.|
|Format.CenterVertical|**CTRL** + **F9**|Centra verticalmente i controlli all'interno della finestra di dialogo.|
|Format.CheckMnemonics|**Ctrl** + **M**|Verifica l'univocità dei tasti di scelta.|
|Format. SizeToContent|**Maiusc** + **F7**|Ridimensiona i controlli selezionati per adattarli al testo della didascalia.|
|Format.SpaceAcross|**ALT** + **Freccia SINISTRA**|Spazi uniformemente i controlli selezionati orizzontalmente.|
|Format.SpaceDown|**Alt** + **freccia giù**|Consente di spaziare in modo uniforme i controlli selezionati verticalmente.|
|Format.TabOrder|**Ctrl** + **D**|Imposta l'ordine dei controlli all'interno della finestra di dialogo.|
|Format.TestDialog|**CTRL** + **T**|Esegue la finestra di dialogo per verificare l'aspetto e il comportamento.|
|Format.ToggleGuides|**CTRL** + **G**|Cicli tra nessuna griglia, linee guida e griglia per la modifica della finestra di dialogo.|

- Per modificare i tasti di scelta rapida, passare a menu **strumenti** > **Opzioni**e scegliere **tastiera** nella cartella **ambiente** .

   Per altre informazioni, vedere [Identificazione e personalizzazione dei tasti di scelta rapida](/visualstudio/ide/identifying-and-customizing-keyboard-shortcuts-in-visual-studio).

- Per modificare le impostazioni, passare a menu **strumenti** > **Importa/Esporta impostazioni**.

   Le opzioni disponibili nelle finestre di dialogo e i nomi e i percorsi dei comandi di menu visualizzati potrebbero essere diversi da quelli descritti nella **Guida** a seconda dell'edizione o delle impostazioni attive.  Per altre informazioni, vedere [Personalizzare l'IDE di Visual Studio](/visualstudio/ide/personalizing-the-visual-studio-ide).

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor di risorse](../windows/resource-editors.md)<br/>
[Procedura: creare una finestra di dialogo](../windows/creating-a-new-dialog-box.md)<br/>
[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
<!--
[Controls](../mfc/controls-mfc.md)<br/>
[Control Classes](../mfc/control-classes.md)<br/>
[Dialog Box Classes](../mfc/dialog-box-classes.md)<br/>
[Dialog Box Controls and Variable Types](../ide/dialog-box-controls-and-variable-types.md)-->