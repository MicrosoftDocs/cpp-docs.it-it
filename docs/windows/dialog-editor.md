---
title: Editor finestre di lavoro (C
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
ms.openlocfilehash: f1544d3a8e14f9373e21b77d888860d24ab1ed6a
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81370285"
---
# <a name="dialog-editor-c"></a>Editor finestre di lavoro (C

L'Editor finestre di **dialogo** consente di creare o modificare le risorse della finestra di dialogo.

- Per aprire l'editor, fare doppio clic sul file RC di una finestra di dialogo nella finestra **Visualizzazione risorse** oppure scegliere il menu **Visualizza** > altro**elenco risorse**di**Windows.** > 

Uno dei primi passaggi per creare una nuova finestra di dialogo o un nuovo modello di finestra di dialogo consiste nell'aggiungere controlli. **Nell'Editor finestre**, è possibile disporre i controlli in modo che adattino a determinate dimensioni, forme o allineamento oppure spostarli per lavorare all'interno della finestra di dialogo. È inoltre facile eliminare un controllo.

È possibile archiviare una finestra di dialogo come modello in modo da poterla riusare. È possibile passare facilmente dalla progettazione della finestra di dialogo e alla modifica del codice che la implementa e viceveresa.

È anche possibile modificare le proprietà di uno o più controlli **nell'Editor finestre**. È possibile modificare l'ordine di tabulazione, ovvero l'ordine in cui i controlli acquisiscono lo stato attivo quando viene premuto il tasto **TAB,** oppure è possibile definire un tasto di scelta o una combinazione di tasti che consenta agli utenti di scegliere un controllo utilizzando la tastiera.

**L'Editor finestre** consente inoltre di utilizzare controlli personalizzati, inclusi i controlli ActiveX. È inoltre possibile modificare una [visualizzazione modulo,](../mfc/reference/cformview-class.md) [le visualizzazioni record](../data/record-views-mfc-data-access.md)o le barre della finestra di [dialogo.](../mfc/dialog-bars.md)

A partire da Visual Studio 2015, è possibile usare **l'editor finestre** per definire layout dinamici, che specificano la modalità di spostamento e ridimensionamento dei controlli quando l'utente ridimensiona una finestra di dialogo. Per altre informazioni, vedere [Dynamic Layout](../mfc/dynamic-layout.md).

Per ulteriori informazioni sulle risorse, vedere Creazione di una finestra di [dialogo](../windows/creating-a-new-dialog-box.md) e [controlli finestra di dialogo](../windows/controls-in-dialog-boxes.md).

> [!TIP]
> Durante l'utilizzo **dell'Editor finestre**, in molti casi è possibile selezionare con il pulsante destro del mouse per visualizzare un menu di scelta rapida dei comandi utilizzati di frequente.

## <a name="dialog-editor-toolbar"></a>Barra degli strumenti dell'editor finestre

La barra degli strumenti **dell'editor finestre** contiene pulsanti per la disposizione del layout dei controlli nella finestra di dialogo, ad esempio le dimensioni e l'allineamento. I pulsanti della barra degli strumenti **dell'editor** finestre corrispondono ai comandi del menu **Formato.**

|Icona|Significato|Icona|Significato|
|----------|-------------|----------|-------------|
|![Pulsante Verifica finestra di dialogo](../mfc/media/vcdialogeditortestdialog.png "vcDialogEditorTestDialog")|Verifica finestra di dialogo|![Pulsante Spaziatura orizzontale](../mfc/media/vcdialogeditoracross.png "vcDialogEditorAcross")|Spaziatura orizzontale|
|![Pulsante Allinea a sinistra](../mfc/media/vcdialogeditoralignlefts.png "vcDialogEditorAlignLefts")|Allinea a sinistra|![Pulsante Spaziatura verticale](../mfc/media/vcdialogeditordown.png "vcDialogEditorDown (Informazioni in lingua inglese)")|Giù|
|![Pulsante Allinea a destra](../mfc/media/vcdialogeditoralignrights.png "proprietà vcDialogEditorAlignRights")|Allinea a destra|![Pulsante Assegna stessa larghezza](../mfc/media/vcdialogeditorsamewidth.png "vcDialogEditorSameWidth")|Assegna stessa larghezza|
|![Pulsante Allinea in alto](../mfc/media/vcdialogeditoraligntops.png "vcDialogEditorAlignTops")|Allinea in alto|![Pulsante Assegna stessa altezza](../mfc/media/vcdialogeditormakesameheight.png "vcDialogEditorMakeSameHeight")|Assegna stessa altezza|
|![Pulsante Allinea in basso](../mfc/media/vcdialogeditoralignbottoms.png "vcDialogEditorAlignBottoms")|Allinea in basso|![Pulsante Rendi uguali](../mfc/media/vcdialogeditorsamesize.png "vcDialogEditorSameSize")|Rendi uguali|
|![Pulsante Centra verticalmente](../mfc/media/vcdialogeditorvertical.png "vcDialogEditorVertical")|Vertical|![Pulsante Attiva/Disattiva griglia](../mfc/media/vcdialogeditortogglegrid.png "vcDialogEditorToggleGrid (griglia)")|Attiva/Disattiva griglia|
|![Pulsante Centra orizzontalmente](../mfc/media/vcdialogeditorhorizontal.png "vcDialogEditorOrizzontale")|Ridimensionamento orizzontale|![Pulsante Attiva/Disattiva guide](../mfc/media/vcdialogeditortoggleguides.png "vcDialogEditorToggleGuides (Guide di controllo di vcDialogEditor)")|Attiva/Disattiva guide|

- Per visualizzare o nascondere la barra degli strumenti **dell'editor finestre,** passare al menu **Visualizza editor** > **finestre barre degli strumenti** > **.**

Quando si apre **l'editor** finestre in un progetto in C, la barra degli strumenti dell'editor **finestre** viene visualizzata automaticamente nella parte superiore della soluzione, tuttavia, se si chiude in modo esplicito la barra degli strumenti, sarà necessario richiamarla alla successiva apertura dell'editor **finestre.** È possibile attivarne o disattivarne la visualizzazione selezionandola dall'elenco delle barre degli strumenti e delle finestre disponibili.

## <a name="switch-between-dialog-box-controls-and-code"></a>Passare da un controllo e un altro ai controlli della finestra di dialogo e al codice

Nelle applicazioni MFC, è possibile fare doppio clic sui controlli della finestra di dialogo per passare al codice del gestore o per creare rapidamente funzioni del gestore stub.

Con un controllo selezionato, selezionare il pulsante **ControlEvents** o il pulsante **Messaggi** nella [finestra Proprietà](/visualstudio/ide/reference/properties-window) per visualizzare un elenco completo dei messaggi e degli eventi di Windows disponibili per l'elemento selezionato. Scegliere dall'elenco per creare o modificare le funzioni del gestore.

- Per passare al codice **dall'Editor finestre**, fare doppio clic su un controllo all'interno della finestra di dialogo per passare alla dichiarazione per la funzione di gestione dei messaggi implementata più di recente.

   Per le classi di finestre di dialogo basate su ATL, si passa sempre alla definizione del costruttore.

- Per visualizzare gli eventi per un controllo, con un controllo selezionato, scegliere il **ControlEvents** pulsante nel **proprietà** finestra.

   Quando un singolo controllo ha lo stato attivo nella finestra di dialogo, è possibile fare clic con il pulsante destro del mouse e scegliere **Aggiungi gestore eventi**. In questo modo è possibile specificare la classe a cui viene aggiunto il gestore. Per ulteriori informazioni, vedere [Aggiunta di un gestore eventi](../ide/adding-an-event-handler-visual-cpp.md).

   > [!NOTE]
   > La scelta del pulsante **ControlEvents** quando la finestra di dialogo ha lo stato attivo espone un elenco di tutti i controlli nella finestra di dialogo, che è quindi possibile espandere per modificare gli eventi per i singoli controlli.

- Per visualizzare i messaggi per una finestra di dialogo, con la finestra di dialogo selezionata, scegliere il pulsante **Messaggi** nella finestra **Proprietà.**

## <a name="accelerator-keys"></a>Tasti di scelta rapida

Di seguito sono riportati i tasti di scelta rapida predefiniti per i comandi **dell'editor finestre.**  

|Comando|Chiavi|Descrizione|
|-------------|----------|-----------------|
|Format.AlignBottoms|**Ctrl** + **Maiusc** + **Freccia giù**|Allinea i bordi inferiori dei controlli selezionati con il controllo dominante.|
|Format.AlignCenters|**Maiusc** + **F9**|Allinea i centri verticali dei controlli selezionati con il controllo dominante.|
|Format.AlignLefts|**Ctrl** + **Maiusc** + **Freccia sinistra**|Allinea i bordi sinistri dei controlli selezionati con il controllo dominante.|
|Format.AlignMiddles|**F9**|Allinea i centri orizzontali dei controlli selezionati con il controllo dominante.|
|Format.AlignRights|**Ctrl** + **Maiusc** + **freccia destra**|Allinea i bordi destro dei controlli selezionati con il controllo dominante.|
|Format.AlignTops|**Ctrl** + **Maiusc** + **su Freccia Giù**|Allinea i bordi superiori dei controlli selezionati con il controllo dominante.|
|Format.ButtonBottom|**Ctrl** + **B**|Posiziona i pulsanti selezionati lungo il centro inferiore della finestra di dialogo.|
|Format.ButtonRight|**Ctrl** + **R**|Inserisce i pulsanti selezionati nell'angolo superiore destro della finestra di dialogo.|
|Format.CenterHorizontal|**Ctrl** + **Maiusc** + **F9**|Centra i controlli orizzontalmente all'interno della finestra di dialogo.|
|Format.CenterVertical|**Ctrl** + **F9**|Centra i controlli verticalmente all'interno della finestra di dialogo.|
|Format.CheckMnemonics|**Ctrl** + **M**|Controlla l'univocità dei mnemonici.|
|Formato.SizeToContent|**Maiusc** + **F7**|Ridimensiona i controlli selezionati per adattarli al testo della didascalia.|
|Format.SpaceAcross|**Alt** + **Freccia sinistra**|Spazia uniformemente i controlli selezionati orizzontalmente.|
|Format.SpaceDown|**Alt** + **Freccia giù**|Spazia uniformemente i controlli selezionati verticalmente.|
|Format.TabOrder|**Ctrl** + **D**|Imposta l'ordine dei controlli all'interno della finestra di dialogo.|
|Format.TestDialog|**Ctrl** + **T**|Esegue la finestra di dialogo per verificare l'aspetto e il comportamento.|
|Format.ToggleGuides|**Ctrl** + **G**|Consente di passare da nessuna griglia, linee guida e griglia per la modifica delle finestre di dialogo.|

- Per modificare i tasti **Tools** > di scelta rapida, accedere al menu**Opzioni**e scegliere **Tastiera** nella cartella **Ambiente.**

   Per altre informazioni, vedere [Identificazione e personalizzazione dei tasti di scelta rapida](/visualstudio/ide/identifying-and-customizing-keyboard-shortcuts-in-visual-studio).

- Per modificare le impostazioni, vai al menu **Strumenti Importa** > **ed esporta impostazioni**.

   Le opzioni disponibili nelle finestre di dialogo e i nomi e le posizioni dei comandi di menu visualizzati potrebbero essere diversi da quelli descritti nella **Guida** a seconda delle impostazioni attive o dell'edizione.  Per ulteriori informazioni, vedere [Personalizzare l'IDE](/visualstudio/ide/personalizing-the-visual-studio-ide)di Visual Studio.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[Editor risorse](../windows/resource-editors.md)<br/>
[Procedura: creare una finestra di dialogoHow to: Create a Dialog Box](../windows/creating-a-new-dialog-box.md)<br/>
[Controlli delle finestre di dialogo](../windows/controls-in-dialog-boxes.md)<br/>
<!--
[Controls](../mfc/controls-mfc.md)<br/>
[Control Classes](../mfc/control-classes.md)<br/>
[Dialog Box Classes](../mfc/dialog-box-classes.md)<br/>
[Dialog Box Controls and Variable Types](../ide/dialog-box-controls-and-variable-types.md)-->
