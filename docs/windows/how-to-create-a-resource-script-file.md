---
title: 'Procedura: creare risorse (C++)'
ms.date: 02/14/2019
f1_keywords:
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
ms.openlocfilehash: 93bee6319d356128f56c1886d395cf25db372e80
ms.sourcegitcommit: 63784729604aaf526de21f6c6b62813882af930a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/17/2020
ms.locfileid: "79443879"
---
# <a name="how-to-create-resources-c"></a>Procedura: creare risorse (C++)

Per creare risorse per il progetto, è possibile:

- Uso di un file script di risorsa.

   > [!NOTE]
   > Questo passaggio è necessario prima di aggiungere risorse.

- Aggiunta di risorse al progetto e utilizzo del **visualizzazione risorse**.

- Uso di un modello di risorsa per creare risorse personalizzate.

## <a name="use-resource-script-files"></a>Usare i file di script di risorsa

Prima di creare e aggiungere nuove risorse al progetto, è necessario creare prima di tutto un file script di risorsa (RC).

> [!NOTE]
> È possibile aggiungere solo un file script di risorsa a un progetto esistente caricato nell'IDE di Visual Studio. Non è possibile creare uno script di risorsa autonomo all'esterno del progetto, anche se è possibile creare i file del modello di risorsa (con estensione RCT) in qualsiasi momento.

### <a name="to-create-a-resource-script-file"></a>Per creare un file script di risorsa

1. Spostare lo stato attivo sulla cartella del progetto esistente in **Esplora soluzioni**, ad esempio *MyProject*.

   > [!NOTE]
   > Non confondere la cartella del progetto con la cartella della soluzione in **Esplora soluzioni**. Se si posiziona lo stato attivo sulla cartella della **soluzione** , non si avranno le stesse opzioni **Aggiungi nuovo elemento** .

1. Nel menu passare a **progetto** > **Aggiungi nuovo elemento**.

1. Selezionare la **cartella C++ visuale** e scegliere **file di risorse (. RC)** nel riquadro di destra.

1. Specificare un nome per il file di script di risorsa nella casella di testo **nome** e selezionare **Apri**.

### <a name="to-open-a-resource-script-file"></a>Per aprire un file script di risorsa

È possibile visualizzare le risorse in un file script di risorsa senza aprire un progetto. Il file di script viene aperto in una finestra del documento anziché nella **visualizzazione risorse**.

> [!NOTE]
> Alcuni comandi sono disponibili solo se il file è aperto autonomo, ovvero all'esterno di un progetto senza prima caricare il progetto. Ad esempio, per utilizzare il comando **Salva** con nome e salvare un file con un formato o un nome di file diverso, il file deve essere aperto autonomamente.

- Per aprire un file di script di risorsa all'esterno di un progetto, nel menu passare a **file** > **Apri**e scegliere **file**. Passare al file di script di risorsa, evidenziare il file e scegliere **Apri**.

    > [!NOTE]
    > A volte può essere utile visualizzare il contenuto del file di script di risorse del progetto senza usare gli editor di risorse per aprire una risorsa. È ad esempio possibile che si desideri cercare una stringa in tutte le finestre di dialogo del file di risorse senza che sia necessario aprire separatamente ogni finestra. È possibile aprire facilmente il file di risorse in formato testo per visualizzare tutte le risorse in esso contenute e completare le operazioni globali supportate dall'editor di testo.
    >
    > Per aprire un file script di risorsa in formato testo, usare la freccia a discesa sul lato destro del pulsante **Apri** nel passaggio precedente e scegliere **Apri con**. Selezionare **editor di codice sorgente (testo)** e nell'elenco a discesa **Apri come** Selezionare **testo** e la risorsa verrà aperta nell'editor del **codice sorgente** .

- Per aprire più script di risorse, seguire lo stesso passaggio precedente per ogni file che si vuole aprire, ad esempio *source1. RC* e *source2. RC*. Quindi, quando entrambi i file RC sono aperti in finestre documenti separate, usare il menu **finestra** o fare clic con il pulsante destro del mouse su uno dei file e scegliere **nuovo gruppo di schede orizzontali** o **nuovo gruppo di schede verticali**. Le finestre sono ora affiancate in modo che sia possibile visualizzarle contemporaneamente.

> [!TIP]
> È possibile aprire i file di script di risorsa facendo clic con il pulsante destro del mouse sul file RC in **Esplora soluzioni**, selezionando **Apri con** e scegliendo **Editor del codice sorgente (testo)** .

Quando si compila un'applicazione MFC (Microsoft Foundation Class) per Windows mediante la [creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md), la procedura guidata genera un set di file di base, incluso un file script di risorsa (RC), che contiene le funzionalità di base di MFC. Tuttavia, queste funzionalità specifiche di MFC non sono disponibili quando si modifica un file RC per le applicazioni Windows non basate su MFC. Sono incluse le creazioni guidate codice, le stringhe di richiesta di menu, il contenuto dell'elenco per i controlli casella combinata e l'hosting del controllo ActiveX.

- Per aggiungere il supporto MFC, con il file script di risorsa aperto, in **visualizzazione risorse**evidenziare la cartella risorse (ad esempio, *MFC. RC*). Quindi, nella [finestra Proprietà](/visualstudio/ide/reference/properties-window)impostare la **modalità MFC** su **true**.

  > [!NOTE]
  > Oltre a impostare la **modalità MFC**, è necessario che il file RC faccia parte di un progetto MFC. L'impostazione della **modalità MFC** su **true** solo in un file RC in un progetto Win32 non offre funzionalità MFC.

## <a name="create-resources"></a>Creazione di risorse

È possibile creare una risorsa come nuova risorsa predefinita, vale a dire una risorsa che non è basata su un modello o come una risorsa modellata dopo un modello.

Utilizzare la finestra **visualizzazione risorse** per visualizzare i file di risorse inclusi nei progetti. Espandendo la cartella top, ad esempio, *Project1. RC*, vengono visualizzati i tipi di risorse all'interno di tale file. Espandere ogni tipo di risorsa per visualizzare le singole risorse di quel tipo.

> [!TIP]
> Per aprire la finestra di **visualizzazione risorse** , passare alla **visualizzazione** menu > **altre finestre** > **visualizzazione risorse** oppure premere **CTRL**+**MAIUSC**+**E**.

È anche possibile fare clic con il pulsante destro del mouse sulla finestra **visualizzazione risorse** per avviare un menu di scelta rapida dei comandi oppure fare doppio clic sulla barra del titolo per ancorare e disancorare la finestra. Fare clic con il pulsante destro del mouse sulla barra del titolo per i comandi che controllano il comportamento della finestra. Per ulteriori informazioni, vedere [gestione di Windows](/visualstudio/ide/customizing-window-layouts-in-visual-studio).

Il **visualizzazione risorse** Windows include la finestra di dialogo **Aggiungi risorsa** con le proprietà seguenti per aggiungere risorse a C++ un progetto di applicazione desktop di Windows:

| Proprietà | Descrizione |
|---|---|
| **Tipo di risorsa** | Specificare il tipo di risorsa che si vuole creare.<br/><br/>È possibile espandere le categorie di risorse del cursore e della finestra di dialogo per visualizzare altre risorse, che si trovano in *. \Microsoft Visual Studio \<Version\>\VC\VCResourceTemplates\\< LCID\>\mfc.rct*. Se è necessario aggiungere i file RCT, inserirli qui o specificare un altro [percorso di inclusione](../windows/how-to-specify-include-directories-for-resources.md). Le risorse visualizzate al primo livello del controllo albero sono le risorse predefinite fornite da Visual Studio. Le risorse nei file con estensione RCT vengono visualizzate al secondo livello nella categoria appropriata. Non è previsto alcun limite per il numero di file con estensione RCT che è possibile aggiungere.<br/><br/> |
| **Nuovo** | Creare una risorsa in base al tipo selezionato nella casella **tipo di risorsa** e aprire la risorsa nell'editor appropriato.<br/><br/>Se, ad esempio, si crea una risorsa finestra di dialogo, la risorsa viene aperta nell' [editor finestre](../windows/dialog-editor.md). |
| **Importa** | Aprire la finestra di dialogo **Importa** per passare alla risorsa che si desidera importare nel progetto corrente.<br/><br/>È possibile importare una bitmap, un'icona, un cursore, un HTML, un suono (. WAV) o file di risorse personalizzato. |
| **Impostazione personalizzata** | Aprire la finestra di dialogo **nuova risorsa personalizzata** per creare una risorsa personalizzata.<br/><br/>Include anche una proprietà relativa al **tipo di risorsa** che fornisce una casella di testo in cui immettere il nome del tipo di risorsa personalizzato. Quando C++ si esce, Visual crea automaticamente il nome in maiuscolo. Le risorse personalizzate vengono modificate solo nell' [editor binario](../windows/binary-editor.md). |

Quando si crea una nuova risorsa, l' C++ oggetto visivo assegna a tale risorsa un nome univoco, ad esempio `IDD_Dialog1`. È possibile personalizzare questo ID risorsa modificando le proprietà della risorsa nell'editor di risorse associato o nel [finestra Proprietà](/visualstudio/ide/reference/properties-window).

> [!NOTE]
> Non specificare un nome di risorsa o un ID riservato da Visual Studio. I nomi riservati sono `DESIGNINFO`, `HWB`e `TEXTINCLUDE`e l'ID riservato è `255`.

### <a name="to-create-a-resource"></a>Per creare una risorsa

- In **visualizzazione risorse**selezionare il file RC, quindi usare **modifica** > **Aggiungi risorsa** e scegliere il tipo di risorsa da aggiungere al progetto.

   > [!TIP]
   > È anche possibile fare clic con il pulsante destro del mouse sul file RC in **visualizzazione risorse** e scegliere **Aggiungi risorsa** dal menu di scelta rapida.

- In **Esplora soluzioni**fare clic con il pulsante destro del mouse sulla cartella del progetto, scegliere **Aggiungi** > **Aggiungi risorsa** e scegliere il tipo di risorsa da aggiungere al progetto.

   > [!NOTE]
   > Se nel progetto non è già presente un file RC, questo passaggio ne creerà uno. È possibile ripetere questo passaggio per aggiungere tipi di risorse specifici al nuovo file RC.

- In [Visualizzazione classi](/visualstudio/ide/viewing-the-structure-of-code)fare clic con il pulsante destro del mouse sulla classe, scegliere **Aggiungi** > **Aggiungi risorsa** e scegliere il tipo di risorsa da aggiungere al progetto.

- Usare il **progetto** di menu > **Aggiungi risorsa**.

## <a name="use-resource-templates"></a>Usare i modelli di risorse

Un modello di risorsa è una risorsa personalizzata che è stata salvata come file RCT. Un modello di risorsa funge quindi da punto di partenza per la creazione di risorse. I modelli di risorse risparmiano tempo nello sviluppo di risorse o gruppi di risorse aggiuntivi che condividono funzionalità, ad esempio controlli standard o elementi ripetuti. Se, ad esempio, si desidera includere un pulsante? con un'icona del logo della società in diverse finestre di dialogo, creare un nuovo modello di finestra di dialogo e personalizzarlo con il pulsante? e il logo.

Dopo aver personalizzato un modello di risorsa, salvare le modifiche nella cartella del modello o nel percorso specificato nel percorso di inclusione, in modo che il nuovo modello di risorsa venga visualizzato sotto il tipo di risorsa nella finestra di dialogo **Aggiungi risorsa** . È ora possibile usare il nuovo modello di risorsa con la frequenza necessaria.

> [!NOTE]
> L'editor di risorse fornisce automaticamente un ID della risorsa univoco. È possibile modificare le [proprietà delle risorse](../windows/changing-the-properties-of-a-resource.md) in base alle esigenze.

> [!NOTE]
> Inserire i file di modello specifici della lingua nelle sottodirectory della directory principale del modello. Ad esempio, i file di modello solo in lingua inglese passano *..\\< directory del modello di risorsa\>\ 1033*.
>
> Visual Studio cerca i nuovi file RCT in *\Programmi\microsoft Visual studio \<version\>\VC\VCResourceTemplates*, *\programmi\microsoft visual studio \<version > \VC\VCRESOURCETEMPLATES\\< LCID\>* (ad esempio un LCID 1033 per l'inglese) o in qualsiasi punto del [percorso di inclusione](../windows/how-to-specify-include-directories-for-resources.md). Se si preferisce archiviare i file RCT in un'altra posizione, è necessario aggiungere il percorso al percorso di inclusione.

### <a name="to-create-and-use-a-resource-template"></a>Per creare e usare un modello di risorsa

1. In **Esplora soluzioni**fare clic con il pulsante destro del mouse sul progetto e scegliere **Aggiungi** > **Aggiungi nuovo elemento**.

1. Nel riquadro **modelli:** selezionare **file modello di risorse (. RCT)** .

1. Specificare un nome e un percorso per il nuovo file *RCT* e scegliere **Apri**.

   Il nuovo file *RCT* viene aggiunto al progetto e visualizzato in **Esplora soluzioni** nella cartella **risorse** .

1. Fare doppio clic sul file *RCT* per aprirlo in una finestra del documento. Per aggiungere risorse, fare clic con il pulsante destro del mouse sul file nella finestra del documento e scegliere **Aggiungi risorsa**.

   È possibile personalizzare le risorse aggiunte e salvare il file *RCT* .

1. Nel riquadro **visualizzazione risorse** fare clic con il pulsante destro del mouse sul file *RC* e scegliere **Aggiungi risorsa**.

1. Selezionare il segno più ( **+** ) accanto a una risorsa per espandere il nodo delle risorse e visualizzare i modelli disponibili per la risorsa.

1. Fare doppio clic sul modello che si desidera usare.

   È possibile modificare la risorsa aggiunta in base alle esigenze nell'editor di risorse.

### <a name="to-convert-an-existing-resource-file-to-a-template"></a>Per convertire un file di risorse esistente in un modello

Con il file script di risorsa aperto, nel menu Vai a **file** > **salva \<*nomefile*> come**. Specificare un percorso e scegliere **OK**.

## <a name="requirements"></a>Requisiti

Win32

## <a name="see-also"></a>Vedere anche

[File di risorse](../windows/resource-files-visual-studio.md)<br/>
[Procedura: gestire le risorse](../windows/how-to-copy-resources.md)<br/>
[Procedura: Includere risorse in fase di compilazione](../windows/how-to-include-resources-at-compile-time.md)<br/>