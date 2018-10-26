---
title: Layout dinamico | Microsoft Docs
ms.custom: ''
ms.date: 06/25/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: 8598cfb2-c8d4-4f5a-bf2b-59dc4653e042
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 5e2fb7b2468946be29553f54fcedde98e43881d7
ms.sourcegitcommit: a9dcbcc85b4c28eed280d8e451c494a00d8c4c25
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/25/2018
ms.locfileid: "50068827"
---
# <a name="dynamic-layout"></a>Layout dinamico

Con MFC in Visual Studio 2015, è possibile creare finestre di dialogo che l'utente può ridimensionare ed è possibile controllare l'adattamento del layout per la modifica delle dimensioni. È ad esempio possibile collegare i pulsanti nella parte inferiore di una finestra di dialogo al bordo inferiore in modo che mantengano sempre tale posizione. È anche possibile configurare determinati controlli, come caselle di riepilogo, caselle di modifica e campi di testo in modo che si espandano quando l'utente espande la finestra di dialogo.

## <a name="specifying-dynamic-layout-settings-for-an-mfc-dialog-box"></a>Specifica delle impostazioni per il layout dinamico per una finestra di dialogo MFC

Quando l'utente ridimensiona una finestra di dialogo, i controlli di tale finestra possono essere ridimensionati o spostati nelle direzioni X e Y. La modifica delle dimensioni o della posizione di un controllo in seguito al ridimensionamento di una finestra di dialogo da parte dell'utente viene definita layout dinamico. La seguente è ad esempio una finestra di dialogo prima che venga ridimensionata:

![Finestra di dialogo prima che venga ridimensionata. ](../mfc/media/mfcdynamiclayout4.png "mfcdynamiclayout4")

Dopo il ridimensionamento l'area della casella di riepilogo viene ampliata in modo da visualizzare più elementi e i pulsanti vengono spostati unitamente all'angolo inferiore destro:

![Finestra di dialogo dopo il ridimensionamento. ](../mfc/media/mfcdynamiclayout5.png "mfcdynamiclayout5")

È possibile controllare il layout dinamico specificando i dettagli per ogni controllo nell'Editor risorse nell'IDE, o procedere a livello di codice tramite l'accesso di `CMFCDynamicLayout` dell'oggetto per un determinato controllo e impostando le proprietà.

### <a name="setting-dynamic-layout-properties-in-the-resource-editor"></a>Impostazione delle proprietà del layout dinamico nell'Editor risorse

È possibile usare l'Editor risorse per impostare il comportamento del layout dinamico per una finestra di dialogo senza dover scrivere codice.

#### <a name="to-set-dynamic-layout-properties-in-the-resource-editor"></a>Per impostare le proprietà del layout dinamico nell'Editor risorse

1. Dopo aver aperto un progetto MFC aprire la finestra di dialogo con cui lavorare nell'editor della finestra di dialogo.

     ![Aprire la finestra di dialogo nell'editor di risorse. ](../mfc/media/mfcdynamiclayout3.png "mfcdynamiclayout3")

2. Selezionare un controllo e nella finestra delle proprietà impostarne le proprietà del layout dinamico. Il **Layout dinamico** sezione nella finestra delle proprietà contiene la proprietà **tipo di spostamento**, **tipo di ridimensionamento**e, a seconda dei valori selezionati per tali proprietà, le proprietà specifiche che definiscono quanti controlli spostare o modificare le dimensioni. **Tipo di spostamento** determina la modalità di spostamento di un controllo quando vengono modificate le dimensioni della finestra di dialogo; **Tipo di ridimensionamento** determina la modalità di ridimensionamento di un controllo quando vengono modificate le dimensioni della finestra di dialogo. **Tipo di spostamento** e **tipo di ridimensionamento** può essere **orizzontale**, **verticale**, **entrambi**, o **None**a seconda delle dimensioni che si desidera modificare in modo dinamico. Il termine Orizzontale si riferisce alla dimensione X, mentre Verticale corrisponde alla direzione Y.

3. Se si desidera un controllo, ad esempio un pulsante in una dimensione fissa e rimangono nella stessa posizione in basso a destra, come avviene comunemente per la **OK** oppure **Annulla** pulsanti, impostare il **tipo di ridimensionamento** a  **None**e impostare il **tipo di spostamento** al **entrambi**. Per il **percentuale di spostamento X** e **percentuale di spostamento Y** valori sotto **tipo di spostamento**, impostato 100% per fare in modo il controllo rimanga a una distanza fissa dal basso verso destra.

     ![Layout dinamico](../mfc/media/mfcdynamiclayout1.png "mfcdynamiclayout1")

4. Si supponga che sia presente anche un altro controllo da espandere all'espansione della finestra di dialogo. In genere, un utente espande una finestra di dialogo per espandere una casella di modifica multiriga e aumentare le dimensioni dell'area di testo oppure espande un controllo elenco per visualizzare ulteriori dati. In questo caso, impostare il **tipo di ridimensionamento** su entrambi e impostare le **tipo di spostamento** su none. Quindi, impostare il **percentuale di ridimensionamento X** e **percentuale di ridimensionamento Y** valori a 100.

     ![Impostazioni Layout dinamico](../mfc/media/mfcdynamiclayout2.png "mfcdynamiclayout2")

5. Sperimentare altri valori che potrebbero risultare efficaci per i controlli usati. Una finestra di dialogo con una casella di testo una riga potrebbe essere il **tipo di ridimensionamento** impostata su **orizzontale** solo, ad esempio.

### <a name="setting-dynamic-layout-properties-programmatically"></a>Impostazione delle proprietà del layout dinamico a livello di codice

La procedura precedente è utile per specificare le proprietà del layout dinamico per una finestra di dialogo in fase di progettazione, ma se si intende controllare il layout dinamico in fase di esecuzione, è possibile impostare tali proprietà a livello di codice.

#### <a name="to-set-dynamic-layout-properties-programmatically"></a>Per impostare le proprietà del layout dinamico a livello di codice

1. Nel codice di implementazione della classe della finestra individuare o creare un punto in cui specificare il layout dinamico per la finestra di dialogo. Ad esempio, si può aggiungere un metodo come `AdjustLayout` nella finestra di dialogo e chiamarlo da punti in cui è necessario modificare il layout. Il metodo può innanzitutto essere chiamato dal costruttore o dopo aver apportato modifiche alla finestra di dialogo.

2. Per la finestra di dialogo, chiamare [GetDynamicLayout](../mfc/reference/cwnd-class.md#getdynamiclayout), un metodo per il `CWnd` classe. `GetDynamicLayout` restituisce un puntatore a un oggetto `CMFCDynamicLayout` .

    ```cpp
    CMFCDynamicLayout* dynamicLayout = pDialog->GetDynamicLayout();
    ```

3. Per il primo controllo a cui si desidera aggiungere un comportamento dinamico, usare i metodi statici nella classe del layout dinamico per creare il [MoveSettings](../mfc/reference/cmfcdynamiclayout-class.md#movesettings_structure) struttura che codifica il modo in cui deve essere regolato il controllo. A tale scopo, scegliere il metodo statico appropriato: [Movehorizontal](../mfc/reference/cmfcdynamiclayout-class.md#movehorizontal), [Movevertical](../mfc/reference/cmfcdynamiclayout-class.md#movevertical), [Movenone](../mfc/reference/cmfcdynamiclayout-class.md#movenone), oppure [Movehorizontalandvertical](../mfc/reference/cmfcdynamiclayout-class.md#movehorizontalandvertical). Passare una percentuale per gli aspetti orizzontale e/o verticale dello spostamento. Questi metodi statici restituiscono tutti un oggetto MoveSettings appena creato che è possibile usare per specificare il comportamento di spostamento di un controllo.

   Tenere presente che con il valore 100 l'entità dello spostamento sarà identico a quello del ridimensionamento della finestra di dialogo, di conseguenza il bordo di un controllo rimarrà a una distanza fissa dal nuovo bordo.

    ```cpp
    MoveSettings moveSettings = CMFCDynamicLayout::MoveHorizontal(100);
    ```

4. Eseguire la stessa operazione per il ridimensionamento, che usa il [SizeSettings](../mfc/reference/cmfcdynamiclayout-class.md#sizesettings_structure) tipo. Ad esempio, per specificare che le dimensioni di un controllo non cambiano quando si ridimensiona la finestra di dialogo, usare il codice seguente:

    ```cpp
    SizeSettings sizeSettings = CMFCDynamicLayout::SizeNone();
    ```

5. Aggiungere il controllo al gestore del layout dinamico usando il [cmfcdynamiclayout:: AddItem](../mfc/reference/cmfcdynamiclayout-class.md#additem) (metodo). Esistono due overload utili per specificare il controllo desiderato. Uno accetta l'handle della finestra (HWND) del controllo, mentre l'altro accetta l'ID del controllo.

    ```cpp
    dynamicLayout->AddItem(hWndControl,
    moveSettings,
    sizeSettings);
    ```

6. Ripetere l'operazione per ogni controllo da spostare o ridimensionare.

7. Se necessario, è possibile usare la [cmfcdynamiclayout:: Hasitem](../mfc/reference/cmfcdynamiclayout-class.md#hasitem) metodo per determinare se un controllo è già presente nell'elenco dei controlli soggetti a modifiche del layout dinamico incluso o il [cmfcdynamiclayout:: isEmpty](../mfc/reference/cmfcdynamiclayout-class.md#isempty) metodo per determinare se sono presenti controlli soggetti a modifiche.

8. Per abilitare il layout di finestra di dialogo, chiamare il [CWnd:: Enabledynamiclayout](../mfc/reference/cwnd-class.md#enabledynamiclayout) (metodo).

    ```cpp
    pDialog->EnableDynamicLayout(TRUE);
    ```

9. La volta successiva che l'utente ridimensiona la finestra di dialogo, il [cmfcdynamiclayout:: Adjust](../mfc/reference/cmfcdynamiclayout-class.md#adjust) viene chiamato il metodo che applica effettivamente le impostazioni.

10. Se si desidera disabilitare il layout dinamico, chiamare [CWnd:: Enabledynamiclayout](../mfc/reference/cwnd-class.md#enabledynamiclayout) con **FALSE** come per il *bEnabled* parametro.

    ```cpp
    pDialog->EnableDynamicLayout(FALSE);
    ```

#### <a name="to-set-the-dynamic-layout-programmatically-from-a-resource-file"></a>Per impostare il layout dinamico a livello di codice da un file di risorse

1. Usare la [Movehorizontalandvertical](../mfc/reference/cmfcdynamiclayout-class.md#movehorizontalandvertical) metodo per specificare un nome di risorsa nel file di script di risorse rilevanti (file con estensione RC) che specifica informazioni sul layout dinamico, come nell'esempio seguente:

    ```cpp
    dynamicLayout->LoadResource("IDD_DIALOG1");
    ```

   La risorsa denominata deve fare riferimento a una finestra di dialogo che contiene le informazioni sul layout sotto forma di un' **AFX_DIALOG_LAYOUT** voce nel file di risorse, come nell'esempio seguente:

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

[Classe CMFCDynamicLayout](../mfc/reference/cmfcdynamiclayout-class.md)<br/>
[Classi di controlli](../mfc/control-classes.md)<br/>
[Classi di finestre di dialogo](../mfc/dialog-box-classes.md)<br/>
[Editor finestre](../windows/dialog-editor.md)<br/>
[Layout di finestra di dialogo Dynamic per MFC in Visual C++ 2015](https://mariusbancila.ro/blog/2015/07/27/dynamic-dialog-layout-for-mfc-in-visual-c-2015/)
