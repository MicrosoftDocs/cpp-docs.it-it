---
title: 'Procedura: Creare le risorse (C++)'
ms.date: 11/04/2016
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
ms.openlocfilehash: 5a0bc6370d0973d63eb16ac992251531aa2e5193
ms.sourcegitcommit: f4be868c0d1d78e550fba105d4d3c993743a1f4b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/12/2019
ms.locfileid: "56152391"
---
# <a name="how-to-create-resources-c"></a>Procedura: Creare le risorse (C++)

> [!NOTE]
> Il **Editor di risorse** oppure **visualizzazione risorse** non è disponibile nelle edizioni Express.
>
> Queste informazioni non si applicano alle risorse in applicazioni desktop di Windows o le app della piattaforma Windows universale. I progetti in linguaggi .NET non usano i file di script di risorsa. Per informazioni sull'aggiunta di risorse a progetti gestiti, vedere [file di risorse](../windows/resource-files-visual-studio.md), [risorse dell'App e il sistema di gestione risorse](/windows/uwp/app-resources/), e [risorse nelle App desktop](/dotnet/framework/resources/index) in il *Guida per gli sviluppatori di .NET Framework*.

## <a name="create-a-resource-script"></a>Creare uno script di risorsa

Prima di creare e aggiungere nuove risorse al progetto, è innanzitutto necessario creare uno script di risorsa (file con estensione RC).

> [!NOTE]
> Si può aggiungere uno script di risorsa (file RC) solo a un progetto esistente caricato nell'IDE di Visual Studio. È possibile creare uno script di risorsa autonoma (all'esterno del progetto). È possibile creare modelli di risorse (file con estensione rct) in qualsiasi momento.

### <a name="to-create-a-resource-script"></a>Per creare uno script di risorsa

1. Spostare lo stato attivo nella cartella del progetto esistente in **Esplora soluzioni**, ad esempio *MyProject*.

   > [!NOTE]
   > Non confondere la cartella del progetto con la cartella della soluzione in **Esplora soluzioni**. Se si seleziona il **soluzione** cartella, le scelte effettuate nel **Aggiungi nuovo elemento** nella finestra di dialogo sarà diversa.

1. Scegliere **Aggiungi nuovo elemento** dal menu **Progetto**.

1. Nel **Aggiungi nuovo elemento** finestra di dialogo, seleziona la **Visual C++** cartella, quindi scegliere **File di risorse (RC)** nel riquadro di destra.

1. Specificare un nome per lo script di risorsa nel **Name** testo casella e quindi selezionare **Open**.

### <a name="to-open-a-resource-script"></a>Per aprire uno script di risorsa

È possibile visualizzare le risorse in uno script di risorse senza un progetto aperto. Verrà aperto il file di script in una finestra del documento anziché nella **visualizzazione risorse** finestra (come avviene quando il file è aperto all'interno di un progetto).

> [!NOTE]
> Alcuni comandi sono disponibili solo quando il file è aperto in modo autonomo (all'esterno di un progetto). Apertura di un file autonomo significa aprirlo senza caricare il progetto.
>
> Ad esempio, per salvare un file in un formato diverso o come un nome file diverso (come le **Salva con nome** comando non è disponibile per il file all'interno di un progetto). Se si apre il progetto prima con **File** > **aprire** > **progetto**, i comandi seguenti non sono disponibili.

Per aprire uno script di risorsa all'esterno di un progetto:

1. Dal **File** dal menu **Open**, quindi scegliere **File**.

1. Nel **Apri File** finestra di dialogo, selezionare il file di script di risorsa, evidenziare il file e scegliere **Open**.

Per aprire più script di risorsa all'esterno di un progetto:

1. Aprire entrambi i file di risorsa in modo autonomo. Ad esempio, aprire *Origine1.rc* e *Origine2.rc*.

1. Dal **File** menu, scegliere **Open**, quindi selezionare **File**.

1. Nel **Apri File** finestra di dialogo passare per il primo file di script di risorsa che si desidera aprire (*Origine1.rc*), evidenziare il file e scegliere **aprire**.

1. Ripetere il passaggio precedente per aprire il secondo file RC (*Origine2.rc*).

   I file RC verranno quindi aperti in finestre del documento separate.

1. Quando vengono aperti, in entrambi i file RC il **finestra** menu (o scelta di uno dei file con estensione RC) sceglie **nuovo gruppo di schede orizzontali** oppure **nuovo gruppo di schede verticali**.

   Le finestre sono affiancate ora in modo da visualizzarle contemporaneamente.

Talvolta può essere utile visualizzare il contenuto del file di script di risorsa (RC) del progetto senza aprire una risorsa, quale una finestra di dialogo, all'interno dell'editor di risorse specifico. È ad esempio possibile che si desideri cercare una stringa in tutte le finestre di dialogo del file di risorse senza che sia necessario aprire separatamente ogni finestra.

È possibile aprire il file di risorse con facilità in formato testo per visualizzare tutte le risorse in che esso contenute e completare le operazioni globali supportate dall'editor di testo.

> [!NOTE]
> Editor di risorse non leggono direttamente RC o `resource.h` file. Questi file vengono compilati dal compilatore di risorse in file APS, che vengono usati dagli editor di risorse. Questo file è presente in una fase di compilazione e archivia solo dati simbolici. Come con un normale processo di compilazione, le informazioni che non sono simboliche (ad esempio, i commenti) vengono eliminate durante il processo di compilazione. Ogni volta che il file APS non ottiene sincronizzato con il file RC, il file RC viene rigenerato (ad esempio, quando si salva, l'editor di risorse sovrascrive il file RC e `resource.h` file). Tutte le modifiche alle risorse rimangono integrate nel file RC, ma i commenti vengono persi dopo che il file RC viene sovrascritto. Per informazioni su come mantenere i commenti, vedere [includere le risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md).

Per aprire un file di script di risorsa in formato testo:

1. Dal **File** dal menu **Open**, quindi scegliere **File**.

1. Nel **Apri File** finestra di dialogo passare al file di script di risorse che si desidera visualizzare in formato testo.

1. Evidenziare il file, quindi selezionare la freccia a discesa nel **aperto** pulsante (a destra del pulsante).

1. Scegli **aperta con** dal menu di riepilogo a discesa.

1. Nel **Apri con** finestra di dialogo **Editor di codice sorgente (testo)**.

1. Dal **aperto come** elenco a discesa, seleziona **testo**.

   La risorsa viene aperta nel **codice sorgente** editor.

> [!TIP]
> Un collegamento consiste nel fare clic sul file RC in **Esplora soluzioni**, scegliere **Apri con...**  e selezionare **Editor di codice sorgente (testo)**.

### <a name="to-add-mfc-support"></a>Per aggiungere supporto MFC

In genere, se si compila un'applicazione di classe MFC (Microsoft Foundation) per Windows utilizzando il [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md), la procedura guidata genera un set di file (incluso un file di risorse (RC)) che contiene le funzionalità core di base di MFC. Tuttavia, quando si modifica un file con estensione RC per un'applicazione di Windows non basata su MFC, le seguenti funzionalità MFC non sono disponibili:

Alcune funzionalità specifiche di MFC includono creazioni guidate codice MFC, stringhe di richiesta di menu, contenuti di elenco per controlli casella combinata e hosting di controlli ActiveX.

Per aggiungere supporto MFC per un file di script di risorsa:

1. Aprire il file script di risorsa vuoto.

1. In **visualizzazione di risorse**, selezionare la cartella delle risorse (ad esempio *RC*).

1. Nel [finestra delle proprietà](/visualstudio/ide/reference/properties-window), impostare il **MFC Mode** proprietà **True**.

   > [!NOTE]
   > Oltre a impostare questa proprietà, il file RC deve far parte di un progetto MFC. Ad esempio, l'impostazione **modalità MFC** al **True** su un RC file in un progetto Win32 non fornisce funzionalità MFC.

## <a name="create-a-resource"></a>Creare una risorsa

È possibile creare una risorsa come nuova risorsa predefinita (una risorsa che non è basata su un modello) o come una risorsa in base a un modello.

Quando si crea una nuova risorsa, Visual C++ assegna un nome univoco, ad esempio, `IDD_Dialog1`. È possibile personalizzare questo ID risorsa modificando le proprietà della risorsa nell'editor di risorse associato oppure nella [finestra Proprietà](/visualstudio/ide/reference/properties-window).

> [!NOTE]
> Non specificare un nome di risorsa o un ID che è riservato da Visual Studio. Nomi riservati sono DESIGNINFO, HWB e TEXTINCLUDE e l'ID riservato è 255.

Il **visualizzazione risorse** finestra Visualizza i file di risorse inclusi nei progetti. Espandere la cartella principale (ad esempio, *Progetto1.rc*) Mostra i tipi di risorse all'interno di file ed espandendo ogni tipo di risorsa illustra le singole risorse di quel tipo.

> [!TIP]
> Per aprire la finestra Visualizzazione risorse, selezionare **visualizzazione risorse** nel **View** menu (oppure usare **Ctrl** + **MAIUSC**  +  **Elettronica**).
>
> Uso del mouse sulla **visualizzazione risorse** finestra per avviare un menu di scelta rapida dei comandi o fare doppio clic sulla barra del titolo per ancorare o disancorare la finestra. Pulsante destro del mouse sulla barra del titolo fornisce altri comandi che consentono di controllare il comportamento della finestra. Per altre informazioni, vedere [Windows Management](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

Usare la **Aggiungi risorsa** finestra di dialogo per aggiungere risorse a un progetto di applicazione desktop Windows C++ con le proprietà seguenti:

|Proprietà|Descrizione|
|-|-|
|**Tipo di risorsa**|Specifica il tipo di risorsa che si vuole creare.<br/><br/>È possibile espandere le categorie di risorse della finestra di dialogo e del cursore per visualizzare risorse aggiuntive. Queste risorse si trovano in Visual Studio ...\Microsoft \<versione\>\VC\VCResourceTemplates\\< LCID\>\mfc.rct.. Se si aggiungono file con estensione rct, inserirli in questa directory o specificare un altro [percorso di inclusione](../windows/how-to-specify-include-directories-for-resources.md). Le risorse contenute in tali file verranno quindi visualizzate in corrispondenza del secondo livello nella categoria appropriata. Non vi è alcun limite predefinito al numero di file con estensione rct che è possibile aggiungere.<br/><br/>Le risorse visualizzate al primo livello del controllo albero sono le risorse predefinite fornite da Visual Studio.|
|**Nuovo**|Crea una risorsa in base al tipo selezionato nel **tipo di risorsa** casella e apre la risorsa nell'editor appropriato. Ad esempio, se si crea una risorsa finestra di dialogo, viene aperto nel [editor finestre](../windows/dialog-editor.md).|
|**Import**|Apre la **importare** nella finestra di dialogo in cui è possibile passare alla risorsa si desidera importare nel progetto corrente. È possibile importare una bitmap, icone, cursori, HTML, audio (. WAV), o file di risorse personalizzato.|
|**Personalizzato**|Apre la **nuova risorsa personalizzata** nella finestra di dialogo in cui è possibile creare una risorsa personalizzata. Risorse personalizzate vengono modificate solo nell'editor binario.|

Usare la **nuova risorsa personalizzata** finestra di dialogo per creare una nuova risorsa personalizzata in un progetto C++ con la proprietà seguente:

|Proprietà|Descrizione|
|-|-|
|**Tipo di risorsa**|Fornisce una casella di testo per immettere il nome di un tipo di risorsa personalizzata. Visual C++ in maiuscolo automaticamente il nome quando si esce dal **nuova risorsa personalizzata** nella finestra di dialogo.|

### <a name="to-create-a-new-resource"></a>Per creare una nuova risorsa

È possibile creare una nuova risorsa con le seguenti operazioni:

- In **visualizzazione di risorse**, selezionare il file con estensione RC, quindi selezionare la **modificare** menu e scegliere **Aggiungi risorsa**. Nel **Aggiungi risorsa** finestra di dialogo, scegliere il tipo di risorsa da aggiungere al progetto.

   > [!TIP]
   > È anche possibile fare clic sul file RC in **visualizzazione di risorse** e scegliere **Aggiungi risorsa** dal menu di scelta rapida.

- Nelle **Esplora soluzioni**, fare clic sulla cartella di progetto e selezionare **Add**, quindi scegliere **Aggiungi risorsa** menu di scelta rapida. Nel **Aggiungi risorsa** finestra di dialogo, scegliere il tipo di risorsa da aggiungere al progetto.

   > [!NOTE]
   > Se si ha già un file RC nel progetto, questo passaggio verrà creato uno. È possibile ripetere questo passaggio per aggiungere tipi di risorse specifici al nuovo file RC.

- Nelle [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code), fare doppio clic su classe e scegliere **Add**. Selezionare **Aggiungi risorsa** dal menu di scelta rapida e scegliere il tipo di risorsa da aggiungere al progetto.

- Nel **Project** menu, scegliere **Aggiungi risorsa**.

## <a name="create-a-resource-template"></a>Creare un modello di risorse

Un modello di risorse è una risorsa personalizzata salvata in precedenza come file con estensione rct. Un modello di risorsa viene quindi usato come punto di partenza per la creazione di risorse. Modelli di risorse di risparmiare tempo nello sviluppo di risorse aggiuntive o i gruppi di risorse che condividono caratteristiche, ad esempio i controlli standard o elementi ripetuti. Ad esempio, se si desidera includere un pulsante della Guida in linea con un'icona del logo della società in diverse finestre di dialogo, creare un nuovo modello di finestra di dialogo e personalizzarlo con il pulsante della Guida in linea e il logo.

Dopo aver personalizzato il modello di risorsa, salvare le modifiche nella cartella del modello (o il percorso specificato nel percorso di inclusione) in modo che il nuovo modello di risorsa verrà visualizzato nel relativo tipo di risorsa nel **Aggiungi risorsa** nella finestra di dialogo. È ora possibile usare il nuovo modello di risorsa con la frequenza in base alle esigenze.

> [!NOTE]
> L'editor di risorse fornisce automaticamente un ID della risorsa univoco. È possibile rivedere le [le proprietà delle risorse](../windows/changing-the-properties-of-a-resource.md) in base alle esigenze.

> [!NOTE]
> Posizionare i file di modello specifici del linguaggio nelle sottodirectory della directory del modello principale. Ad esempio, inserire i file di modello solo in inglese in... \\< directory dei modelli di resource\>\1033. Visual Studio cerca i nuovi file RCT in \Programmi\Microsoft Visual Studio \<versione\>\VC\VCResourceTemplates, in \Programmi\Microsoft Visual Studio \<versione > \VC\VCResourceTemplates\\< LCID\> (ad esempio 1033 per inglese), *oppure* ovunque si trovino con le [percorso di inclusione](../windows/how-to-specify-include-directories-for-resources.md). Se si preferisce archiviare i file RCT in un'altra posizione, ad esempio documenti, è necessario aggiungere questa cartella al percorso di inclusione in modo che Visual Studio può individuare il file RCT creato.

### <a name="to-create-a-resource-template"></a>Per creare un modello di risorse

1. Nelle **Esplora soluzioni**, fare doppio clic su progetto.

1. Nel menu di scelta rapida, selezionare **Add**, quindi scegliere **Aggiungi nuovo elemento**.

1. Nel **Aggiungi nuovo elemento** nella finestra di dialogo il **modelli:** riquadro, selezionare **File di modello di risorse (RCT)**.

1. Specificare un nome e percorso per il nuovo file RCT e scegliere **aperto**.

   Il nuovo file RCT verrà aggiunto al progetto e viene visualizzato nella **Esplora soluzioni** sotto il **risorse** cartella.

1. Fare doppio clic sul file RCT per aprirlo in una finestra del documento. Per aggiungere le risorse, il pulsante destro nella finestra del documento e scegliere **Aggiungi risorsa**.

   È possibile personalizzare queste risorse e salvare il file con estensione rct.

### <a name="to-convert-an-existing-resource-file-to-a-template"></a>Per convertire un file di risorse esistente in un modello

1. Aprire il file RC come file autonomo.

1. Nel **File** dal menu **salvare \< *filename*> come**.

1. Specificare un percorso e scegliere **OK**.

### <a name="to-create-a-new-resource-from-a-template"></a>Per creare una nuova risorsa da un modello

1. Nel **visualizzazione di risorse** riquadro, fare clic sul file RC e scegliere **Aggiungi risorsa** dal menu di scelta rapida.

1. Nel **Aggiungi risorsa** finestra di dialogo, selezionare il segno più (**+**) accanto a una risorsa per espandere il nodo di risorsa e visualizzare tutti i modelli disponibili per tale risorsa.

1. Fare doppio clic sul modello che si desidera usare.

1. Modificare le risorse aggiunte in base alle specifiche esigenze nel relativo editor di risorse.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Editor di risorse](../windows/resource-editors.md)<br/>
[Uso di file di risorse](../windows/working-with-resource-files.md)<br/>