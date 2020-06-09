---
title: Layout dinamico
ms.date: 09/09/2019
ms.assetid: 8598cfb2-c8d4-4f5a-bf2b-59dc4653e042
ms.openlocfilehash: 3108e7bae0be216dfb877d03c87fdc17ef7d69f2
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84624757"
---
# <a name="dynamic-layout"></a>Layout dinamico

Con MFC in Visual Studio 2015, è possibile creare finestre di dialogo che l'utente può ridimensionare ed è possibile controllare il modo in cui il layout si adatta alla modifica delle dimensioni. È ad esempio possibile collegare i pulsanti nella parte inferiore di una finestra di dialogo al bordo inferiore in modo che mantengano sempre tale posizione. È anche possibile configurare determinati controlli, come caselle di riepilogo, caselle di modifica e campi di testo in modo che si espandano quando l'utente espande la finestra di dialogo.

## <a name="specifying-dynamic-layout-settings-for-an-mfc-dialog-box"></a>Specifica delle impostazioni per il layout dinamico per una finestra di dialogo MFC

Quando l'utente ridimensiona una finestra di dialogo, i controlli di tale finestra possono essere ridimensionati o spostati nelle direzioni X e Y. La modifica delle dimensioni o della posizione di un controllo in seguito al ridimensionamento di una finestra di dialogo da parte dell'utente viene definita layout dinamico. La seguente è ad esempio una finestra di dialogo prima che venga ridimensionata:

![Finestra di dialogo prima del ridimensionamento.](../mfc/media/mfcdynamiclayout4.png "Finestra di dialogo prima del ridimensionamento.")

Dopo il ridimensionamento l'area della casella di riepilogo viene ampliata in modo da visualizzare più elementi e i pulsanti vengono spostati unitamente all'angolo inferiore destro:

![Finestra di dialogo dopo il ridimensionamento.](../mfc/media/mfcdynamiclayout5.png "Finestra di dialogo dopo il ridimensionamento.")

È possibile controllare il layout dinamico specificando i dettagli per ogni controllo nell'editor risorse nell'IDE. in alternativa, è possibile eseguire questa operazione a livello di codice accedendo all' `CMFCDynamicLayout` oggetto per un particolare controllo e impostando le proprietà.

### <a name="setting-dynamic-layout-properties-in-the-resource-editor"></a>Impostazione delle proprietà del layout dinamico nell'Editor risorse

È possibile usare l'Editor risorse per impostare il comportamento del layout dinamico per una finestra di dialogo senza dover scrivere codice.

#### <a name="to-set-dynamic-layout-properties-in-the-resource-editor"></a>Per impostare le proprietà del layout dinamico nell'Editor risorse

1. Dopo aver aperto un progetto MFC aprire la finestra di dialogo con cui lavorare nell'editor della finestra di dialogo.

   ![Aprire la finestra di dialogo nell'editor di risorse.](../mfc/media/mfcdynamiclayout3.png "Aprire la finestra di dialogo nell'editor di risorse.")

1. Selezionare un controllo e nella finestra **Proprietà** (in **Visualizzazione classi**) impostare le proprietà del layout dinamico. La sezione **layout dinamico** della finestra **Proprietà** contiene le proprietà **tipo di spostamento**, **tipo di ridimensionamento**e, a seconda dei valori selezionati per tali proprietà, proprietà specifiche che definiscono la quantità di controlli che spostano o modificano le dimensioni. Il **tipo in movimento** determina il modo in cui un controllo viene spostato quando viene modificata la dimensione della finestra di dialogo; Il **tipo di ridimensionamento** determina il modo in cui un controllo viene ridimensionato quando viene modificata la dimensione della finestra di dialogo. Lo stato di **tipo e il** **tipo di ridimensionamento** possono essere **orizzontali**, **verticali**, **entrambi**o **nessuno** , a seconda delle dimensioni che si desidera modificare dinamicamente. Il termine Orizzontale si riferisce alla dimensione X, mentre Verticale corrisponde alla direzione Y.

1. Se si vuole che un controllo, ad esempio un pulsante, sia a dimensione fissa e venga inserito in basso a destra, come avviene in comune per i pulsanti **OK** o **Annulla** , impostare il **tipo di ridimensionamento** su **None**e impostare il **tipo di spostamento** su **entrambi**. Per la **X spostamento** e lo spostamento dei valori **Y** in **tipo di spostamento**, impostare 100% per fare in modo che il controllo resti a una distanza fissa dall'angolo inferiore destro.

   ![Layout dinamico](../mfc/media/mfcdynamiclayout1.png "Layout dinamico")

1. Si supponga che sia presente anche un altro controllo da espandere all'espansione della finestra di dialogo. In genere, un utente espande una finestra di dialogo per espandere una casella di modifica multiriga e aumentare le dimensioni dell'area di testo oppure espande un controllo elenco per visualizzare ulteriori dati. Per questo caso, impostare il **tipo di ridimensionamento** su entrambi e impostare il **tipo di trasferimento** su nessuno. Impostare quindi i valori **X di ridimensionamento** e **ridimensionamento Y** su 100.

   ![Impostazioni layout dinamico](../mfc/media/mfcdynamiclayout2.png "Impostazioni layout dinamico")

1. Sperimentare altri valori che potrebbero risultare efficaci per i controlli usati. Un dialogo con una casella di testo a riga singola potrebbe avere il **tipo di ridimensionamento** impostato solo su **orizzontale** , ad esempio.

### <a name="setting-dynamic-layout-properties-programmatically"></a>Impostazione delle proprietà del layout dinamico a livello di codice

La procedura precedente è utile per specificare le proprietà del layout dinamico per una finestra di dialogo in fase di progettazione, ma se si intende controllare il layout dinamico in fase di esecuzione, è possibile impostare tali proprietà a livello di codice.

#### <a name="to-set-dynamic-layout-properties-programmatically"></a>Per impostare le proprietà del layout dinamico a livello di codice

1. Nel codice di implementazione della classe della finestra individuare o creare un punto in cui specificare il layout dinamico per la finestra di dialogo. Ad esempio, si può aggiungere un metodo come `AdjustLayout` nella finestra di dialogo e chiamarlo da punti in cui è necessario modificare il layout. Il metodo può innanzitutto essere chiamato dal costruttore o dopo aver apportato modifiche alla finestra di dialogo.

1. Per la finestra di dialogo, chiamare [GetDynamicLayout](reference/cwnd-class.md#getdynamiclayout), un metodo della `CWnd` classe. `GetDynamicLayout` restituisce un puntatore a un oggetto `CMFCDynamicLayout` .

    ```cpp
    CMFCDynamicLayout* dynamicLayout = pDialog->GetDynamicLayout();
    ```

1. Per il primo controllo a cui si desidera aggiungere il comportamento dinamico, utilizzare i metodi statici sulla classe del layout dinamico per creare la struttura [MoveSettings](reference/cmfcdynamiclayout-class.md#movesettings_structure) che codifica il modo in cui deve essere regolato il controllo. A tale scopo, è necessario innanzitutto scegliere il metodo statico appropriato: [CMFCDynamicLayout:: MoveHorizontal](reference/cmfcdynamiclayout-class.md#movehorizontal), [CMFCDynamicLayout:: MoveVertical](reference/cmfcdynamiclayout-class.md#movevertical), [CMFCDynamicLayout:: MoveNone](reference/cmfcdynamiclayout-class.md#movenone)o [CMFCDynamicLayout:: MoveHorizontalAndVertical](reference/cmfcdynamiclayout-class.md#movehorizontalandvertical). Passare una percentuale per gli aspetti orizzontale e/o verticale dello spostamento. Questi metodi statici restituiscono tutti un oggetto MoveSettings appena creato che è possibile usare per specificare il comportamento di spostamento di un controllo.

   Tenere presente che con il valore 100 l'entità dello spostamento sarà identico a quello del ridimensionamento della finestra di dialogo, di conseguenza il bordo di un controllo rimarrà a una distanza fissa dal nuovo bordo.

    ```cpp
    MoveSettings moveSettings = CMFCDynamicLayout::MoveHorizontal(100);
    ```

1. Eseguire la stessa operazione per il comportamento delle dimensioni, che usa il tipo [SizeSettings](reference/cmfcdynamiclayout-class.md#sizesettings_structure) . Ad esempio, per specificare che le dimensioni di un controllo non cambiano quando si ridimensiona la finestra di dialogo, usare il codice seguente:

    ```cpp
    SizeSettings sizeSettings = CMFCDynamicLayout::SizeNone();
    ```

1. Aggiungere il controllo al gestore del layout dinamico usando il metodo [CMFCDynamicLayout:: AddItem](reference/cmfcdynamiclayout-class.md#additem) . Esistono due overload utili per specificare il controllo desiderato. Uno accetta l'handle della finestra (HWND) del controllo, mentre l'altro accetta l'ID del controllo.

    ```cpp
    dynamicLayout->AddItem(hWndControl,
    moveSettings,
    sizeSettings);
    ```

1. Ripetere l'operazione per ogni controllo da spostare o ridimensionare.

1. Se necessario, può usare il metodo [CMFCDynamicLayout:: HasItem](reference/cmfcdynamiclayout-class.md#hasitem) per determinare se un controllo è già presente nell'elenco di controlli sottoposti a modifiche del layout dinamico oppure il metodo [CMFCDynamicLayout:: IsEmpty](reference/cmfcdynamiclayout-class.md#isempty) per determinare se sono presenti controlli soggetti a modifiche.

1. Per abilitare il layout della finestra di dialogo, chiamare il metodo [CWnd:: EnableDynamicLayout](reference/cwnd-class.md#enabledynamiclayout) .

    ```cpp
    pDialog->EnableDynamicLayout(TRUE);
    ```

1. La volta successiva che l'utente ridimensiona la finestra di dialogo, viene chiamato il metodo [CMFCDynamicLayout:: Adjust](reference/cmfcdynamiclayout-class.md#adjust) che applica effettivamente le impostazioni.

1. Se si vuole disabilitare il layout dinamico, chiamare [CWnd:: EnableDynamicLayout](reference/cwnd-class.md#enabledynamiclayout) con **false** come per il parametro *bEnabled* .

    ```cpp
    pDialog->EnableDynamicLayout(FALSE);
    ```

#### <a name="to-set-the-dynamic-layout-programmatically-from-a-resource-file"></a>Per impostare il layout dinamico a livello di codice da un file di risorse

1. Usare il metodo [CMFCDynamicLayout:: MoveHorizontalAndVertical](reference/cmfcdynamiclayout-class.md#movehorizontalandvertical) per specificare un nome di risorsa nel file di script di risorsa pertinente (file RC) che specifica le informazioni sul layout dinamico, come nell'esempio seguente:

    ```cpp
    dynamicLayout->LoadResource("IDD_DIALOG1");
    ```

   La risorsa denominata deve fare riferimento a una finestra di dialogo che contiene informazioni sul layout sotto forma di una voce di **AFX_DIALOG_LAYOUT** nel file di risorse, come nell'esempio seguente:

    ```RC
    /////////////////////////////////////////////////////////////////////////////
    //
    // AFX_DIALOG_LAYOUT
    //

    IDD_MFCAPPLICATION1_DIALOG AFX_DIALOG_LAYOUT
    BEGIN
    0x0000,
    0x6400,
    0x0028,
    0x643c,
    0x0028
    END

    IDD_DIALOG1 AFX_DIALOG_LAYOUT
    BEGIN
    0x0000,
    0x6464,
    0x0000,
    0x6464,
    0x0000,
    0x0000,
    0x6464,
    0x0000,
    0x0000

    END
    ```

## <a name="see-also"></a>Vedere anche

[Classe CMFCDynamicLayout](reference/cmfcdynamiclayout-class.md)<br/>
[Classi dei controlli](control-classes.md)<br/>
[Classi di finestre di dialogo](dialog-box-classes.md)<br/>
[Editor finestre](../windows/dialog-editor.md)<br/>
[Layout dinamico della finestra di dialogo per MFC in Visual C++ 2015](https://mariusbancila.ro/blog/2015/07/27/dynamic-dialog-layout-for-mfc-in-visual-c-2015/)
