---
title: 'Procedura: Creare le risorse (C++)'
ms.date: 02/14/2019
f1_keywords:
- vc.editors.resource
- vc.resvw.add.MFC
- vs.resourceview.F1
- vc.editors.insertresource
- vc.editors.newcustomresource
helpviewer_keywords:
- rc files [C++], creating
- .rc files [C++], creating
- resource script files [C++], creating
- resources [C++], viewing
- rc files [C++], viewing resources
- .rc files [C++], viewing resources
- resource script files [C++], viewing resources
- resource script files [C++], opening in text format
- .rc files [C++], opening in text format
- rc files [C++], opening in text format
- rc files [C++], adding MFC support
- .rc files [C++], adding MFC support
- MFC, adding support to resource scripts files
- resource script files [C++], adding MFC support
- toolbars [C++], resources
- resource toolbars
- resources [C++], creating
- Resource View window
- resources [C++], adding
- Add Resource dialog box [C++]
- Custom Resource Type dialog box [C++]
- language-specific template files [C++]
- resource templates
- rct files [C++]
- templates, resource templates
- resources [C++], templates
- .rct files [C++]
ms.assetid: 82be732a-cdcd-4a58-8de7-976d1418f86b
ms.openlocfilehash: 768675a878891ebb75c7f42c12eae8dfcfa3510b
ms.sourcegitcommit: e540706f4e2675e7f597cfc5b4f8dde648b007bb
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/22/2019
ms.locfileid: "56676487"
---
# <a name="how-to-create-resources-c"></a>Procedura: Creare le risorse (C++)

È possibile creare le risorse per il progetto da:

- Usando un file di script di risorsa. Questo passaggio è necessario prima di aggiungere le risorse.

- Aggiunta di risorse al progetto. Questo passaggio illustra come usare il **visualizzazione risorse**.

- Usando un modello di risorse per creare le risorse personalizzate.

> [!NOTE]
> Il **Editor di risorse** e **visualizzazione risorse** non sono disponibili nelle edizioni Express.

## <a name="use-resource-script-files"></a>Usare i file di Script di risorsa

Prima di creare e aggiungere nuove risorse al progetto, è necessario creare innanzitutto un file di script (RC) delle risorse.

> [!NOTE]
> È possibile aggiungere solo uno script di risorsa a un progetto esistente caricato nell'IDE di Visual Studio. È possibile creare uno script di risorsa autonoma all'esterno del progetto, anche se è possibile creare modelli di risorse (file con estensione rct) in qualsiasi momento.

### <a name="to-create-a-resource-script-file"></a>Per creare un file di script di risorsa

1. Spostare lo stato attivo nella cartella del progetto esistente in **Esplora soluzioni**, ad esempio *MyProject*.

   > [!NOTE]
   > Non confondere la cartella del progetto con la cartella della soluzione in **Esplora soluzioni**. Se si seleziona il **soluzione** cartella, non sarà necessario lo stesso **Aggiungi nuovo elemento** scelte.

1. Nel menu passare a **Project** > **Aggiungi nuovo elemento**.

1. Selezionare il **Visual C++** cartella e scegliere **File di risorse (RC)** nel riquadro di destra.

1. Specificare un nome per il file di script di risorsa nella **Name** casella di testo e selezionare **Open**.

### <a name="to-open-a-resource-script-file"></a>Per aprire un file di script di risorsa

È possibile visualizzare le risorse in un file di script di risorse senza un progetto aperto. Aprire il file di script in una finestra del documento anziché il **visualizzazione risorse**.

> [!NOTE]
> Alcuni comandi sono disponibili solo se il file è aperto in modo autonomo, vale a dire all'esterno di un progetto o senza prima caricare il progetto. Ad esempio, per usare la **Salva con nome** comando per salvare un file con un nome di formato o un file diverso, il file deve essere aperto in modo autonomo.

- Per aprire un file di script di risorsa all'esterno di un progetto, nel menu, passare a **File** > **aprire**, quindi scegliere **File**. Quindi passare al file script di risorsa, evidenziare il file e scegliere **aperto**.

  - Per aprire un file di script di risorsa in formato testo, usare la freccia giù sul lato destro del **apre** pulsante nel passaggio precedente e scegliere **Apri con**. Quindi selezionare **Editor di codice sorgente (testo)** e dal **Apri come** elenco a discesa, seleziona **testo**, e la risorsa viene aperta nel **codice sorgente**dell'editor.

    > [!NOTE]
    > È possibile che quando si desidera visualizzare il contenuto del file di script di risorsa del progetto senza usare l'editor di risorse per aprire una risorsa. È ad esempio possibile che si desideri cercare una stringa in tutte le finestre di dialogo del file di risorse senza che sia necessario aprire separatamente ogni finestra. È possibile aprire il file di risorse con facilità in formato testo per visualizzare tutte le risorse in che esso contenute e completare le operazioni globali supportate dall'editor di testo.

- Per aprire la risorsa più script seguire i passaggi precedenti per ogni file che si desidera aprire, ad esempio, *Origine1.rc* e *Origine2.rc*. Quindi, quando entrambi i file RC sono aperti nelle finestre di documenti separati, usare il **finestra** dal menu o fare doppio clic su uno dei file con estensione RC e scegliere **nuovo gruppo di schede orizzontali** o **nuovo carattere di tabulazione verticale Gruppo**. Le finestre sono affiancate ora in modo da visualizzarle contemporaneamente.

> [!TIP]
> È anche possibile aprire i file di script di risorsa facendo clic con il file RC **Esplora soluzioni**, scegliendo **Apri con...**  e selezionando **Editor di codice sorgente (testo)**.

### <a name="to-edit-a-resource-script-file"></a>Per modificare un file di script di risorsa

- Per convertire un file di risorse esistente in un modello, con il file di script di risorsa aperto, nel menu, passare a **File** > **salvare \< *filename*> come**. Quindi specificare un percorso e scegliere **OK**.

Quando si compila un'applicazione di classe MFC (Microsoft Foundation) per Windows utilizzando il [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md), la procedura guidata genera un set base di file incluso un file di risorse (RC)) che contiene la funzionalità di base di MFC. Tuttavia, queste funzioni MFC specifiche non sono disponibili quando si modifica un file con estensione RC per le applicazioni di Windows non basata su MFC. Sono inclusi creazioni guidate codice, le stringhe di richiesta di menu, contenuti di elenco per controlli casella combinata e hosting di controlli ActiveX.

- Per aggiungere il supporto MFC, con il file di script di risorsa aperto, in **visualizzazione di risorse**, selezionare la cartella delle risorse (ad esempio *RC*). Quindi nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), impostare **MFC Mode** al **True**.

  > [!NOTE]
  > Oltre all'impostazione **modalità MFC**, il file RC deve far parte di un progetto MFC. Solo l'impostazione **modalità MFC** al **True** su un RC file in un progetto Win32 non fornisce funzionalità MFC.

## <a name="create-resources"></a>Creare le risorse

È possibile creare una risorsa come una nuova risorsa predefinita, vale a dire una risorsa che non è basata su un modello o come una risorsa in base a un modello.

Usare la **visualizzazione risorse** finestra per visualizzare i file di risorse inclusi nei progetti. Cartella di primo livello, ad esempio, espandendo *Progetto1.rc*, Mostra i tipi di risorse all'interno del file. Espandere ogni tipo di risorsa per visualizzare le singole risorse di quel tipo.

> [!TIP]
> Per aprire la **visualizzazione di risorse** finestra, passare al menu **vista** > **visualizzazione risorse** oppure premere **Ctrl** +  **Shift**+**elettronica**.

È possibile usare i pulsante destro del mouse sul **visualizzazione risorse** finestra per sferrare un menu di scelta rapida dei comandi o fare doppio clic sulla barra del titolo per ancorare e disancorare la finestra. Fare clic sulla barra del titolo per altri comandi che consentono di controllare il comportamento della finestra. Per altre informazioni, vedere [Windows Management](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

Il **visualizzazione di risorse** windows include il **Aggiungi risorsa** finestra di dialogo con le proprietà seguenti per aggiungere risorse a un progetto di applicazione desktop Windows C++:

| Proprietà | Descrizione |
|---|---|
| **Tipo di risorsa** | Specificare il tipo di risorsa che si desidera creare.<br/><br/>È possibile espandere le categorie di risorsa finestra di cursore e finestra di dialogo per visualizzare risorse aggiuntive, che si trovano in Visual Studio ...\Microsoft \<versione\>\VC\VCResourceTemplates\\< LCID\>\mfc.rct.. Se è necessario aggiungere i file con estensione rct, inserirli qui o specificare un altro [percorso di inclusione](../windows/how-to-specify-include-directories-for-resources.md).<br/><br/>Risorse visualizzate al livello superiore nel controllo albero sono le risorse predefinite fornite da Visual Studio. Le risorse in file con estensione rct vengono visualizzati nel secondo livello nella categoria appropriata. Non vi è alcun limite predefinito al numero di file con estensione rct che è possibile aggiungere.<br/><br/> |
| **Nuovo** | Crea una risorsa in base al tipo selezionato nel **tipo di risorsa** casella e aprire la risorsa nell'editor appropriato.<br/><br/>Ad esempio, se si crea una risorsa finestra di dialogo, apre la risorsa nel [editor finestre](../windows/dialog-editor.md). |
| **Import** | Aprire il **importare** finestra di dialogo per passare alla risorsa di cui si desidera importare nel progetto corrente.<br/><br/>È possibile importare una bitmap, icone, cursori, HTML, audio (. WAV), o file di risorse personalizzato. |
| **Personalizzato** | Aprire il **nuova risorsa personalizzata** finestra di dialogo per creare una risorsa personalizzata.<br/><br/>Include anche un **tipo di risorsa** proprietà che fornisce una casella di testo immettere il nome del tipo di risorsa personalizzata. Quando si esce dalla, Visual C++ scritto automaticamente in maiuscolo il nome.<br/><br/>Risorse personalizzate vengono modificate solo nell'editor binario. |

Quando si crea una nuova risorsa, Visual C++ assegna un nome univoco, ad esempio, `IDD_Dialog1`. È possibile personalizzare questo ID risorsa modificando le proprietà della risorsa nell'editor di risorse associato o nel [finestra proprietà](/visualstudio/ide/reference/properties-window).

> [!NOTE]
> Non specificare un nome di risorsa o un ID che è riservato da Visual Studio. Nomi riservati sono `DESIGNINFO`, `HWB`, e `TEXTINCLUDE`, e l'ID riservato è `255`.

Per creare una risorsa, usare uno dei seguenti:

- Nelle **visualizzazione di risorse**, selezionare il file RC, quindi usare **modificare** > **Aggiungi risorsa** e scegliere il tipo di risorsa da aggiungere al progetto.

   > [!TIP]
   > È anche possibile fare clic sul file RC in **visualizzazione di risorse** e scegliere **Aggiungi risorsa** dal menu di scelta rapida.

- Nelle **Esplora soluzioni**, fare clic sulla cartella di progetto, selezionare **Add** > **Aggiungi risorsa** e scegliere il tipo di risorsa da aggiungere al progetto.

   > [!NOTE]
   > Se si ha già un file RC nel progetto, questo passaggio verrà creato uno. È possibile ripetere questo passaggio per aggiungere tipi di risorse specifici al nuovo file RC.

- Nelle [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code), fare doppio clic su della classe, selezionare **Add** > **Aggiungi risorsa** e scegliere il tipo di risorsa da aggiungere al progetto.

- Usare il menu **Project** > **Aggiungi risorsa**.

## <a name="use-resource-templates"></a>Usare i modelli di risorse

Un modello di risorse è una risorsa personalizzata salvata in precedenza come file con estensione rct. Un modello di risorsa viene quindi usato come punto di partenza per la creazione di risorse. Modelli di risorse di risparmiare tempo nello sviluppo di risorse aggiuntive o i gruppi di risorse che condividono caratteristiche, ad esempio i controlli standard o elementi ripetuti. Ad esempio, se si desidera includere un pulsante della Guida in linea con un'icona del logo della società in diverse finestre di dialogo, creare un nuovo modello di finestra di dialogo e personalizzarlo con il pulsante della Guida in linea e il logo.

Dopo aver personalizzato un modello di risorsa, salvare le modifiche nella cartella del modello o il percorso specificato nel percorso di inclusione, in modo che il nuovo modello di risorsa verrà visualizzato nel relativo tipo di risorsa nel **Aggiungi risorsa** nella finestra di dialogo. È ora possibile usare il nuovo modello di risorsa con la frequenza in base alle esigenze.

> [!NOTE]
> L'editor di risorse fornisce automaticamente un ID della risorsa univoco. È possibile rivedere le [le proprietà delle risorse](../windows/changing-the-properties-of-a-resource.md) in base alle esigenze.

> [!NOTE]
> Posizionare i file di modello specifici del linguaggio nelle sottodirectory della directory del modello principale. I file di modello solo in inglese, ad esempio, andare... \\< directory dei modelli di resource\>\1033. Visual Studio cerca i nuovi file RCT in \Programmi\Microsoft Visual Studio \<versione\>\VC\VCResourceTemplates, \Programmi\Microsoft Visual Studio \<versione > \VC\VCResourceTemplates\\< LCID\> (ad esempio un LCID 1033 per inglese), o in qualsiasi punto nel [percorso di inclusione](../windows/how-to-specify-include-directories-for-resources.md). Se si preferisce archiviare i file con estensione rct in un'altra posizione, è necessario aggiungere il percorso al percorso di inclusione.

### <a name="to-create-and-use-a-resource-template"></a>Creare e usare un modello di risorse

1. Nelle **Esplora soluzioni**, fare doppio clic su progetto.

1. Nel menu di scelta rapida, selezionare **Add** > **Aggiungi nuovo elemento**.

1. Nel **modelli:** riquadro, selezionare **File di modello di risorse (RCT)**.

1. Specificare un nome e percorso per il nuovo file RCT e scegliere **aperto**.

   Il nuovo file RCT verrà aggiunto al progetto e viene visualizzato nella **Esplora soluzioni** sotto il **risorse** cartella.

1. Fare doppio clic sul file RCT per aprirlo in una finestra del documento. Per aggiungere le risorse, il pulsante destro nella finestra del documento e scegliere **Aggiungi risorsa**.

   È possibile personalizzare le risorse aggiunte e salvare il file con estensione rct.

1. Nel **visualizzazione di risorse** riquadro, fare clic sul file RC e scegliere **Aggiungi risorsa**.

1. Selezionare il segno più (**+**) accanto a una risorsa per espandere il nodo di risorsa e visualizzare i modelli disponibili per tale risorsa.

1. Fare doppio clic sul modello che si desidera usare.

   È possibile modificare le risorse aggiunte in base alle esigenze nel relativo editor di risorse.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Procedura: Gestisci risorse](../windows/how-to-copy-resources.md)<br/>
[Procedura: Includere risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md)<br/>