---
title: Layout dinamico | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: 1e0fcfff6bcca8cb073c337043490d32f8724aad
ms.sourcegitcommit: 060f381fe0807107ec26c18b46d3fcb859d8d2e7
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/25/2018
ms.locfileid: "36930352"
---
# <a name="dynamic-layout"></a>Layout dinamico
Con MFC in Visual Studio 2015, è possibile creare finestre di dialogo che l'utente può ridimensionare ed è possibile controllare l'adattamento del layout per la modifica delle dimensioni. È ad esempio possibile collegare i pulsanti nella parte inferiore di una finestra di dialogo al bordo inferiore in modo che mantengano sempre tale posizione. È anche possibile configurare determinati controlli, come caselle di riepilogo, caselle di modifica e campi di testo in modo che si espandano quando l'utente espande la finestra di dialogo.  
  
## <a name="specifying-dynamic-layout-settings-for-an-mfc-dialog-box"></a>Specifica delle impostazioni per il layout dinamico per una finestra di dialogo MFC  
 Quando l'utente ridimensiona una finestra di dialogo, i controlli di tale finestra possono essere ridimensionati o spostati nelle direzioni X e Y. La modifica delle dimensioni o della posizione di un controllo in seguito al ridimensionamento di una finestra di dialogo da parte dell'utente viene definita layout dinamico. La seguente è ad esempio una finestra di dialogo prima che venga ridimensionata:  
  
 ![Finestra di dialogo prima che venga ridimensionata. ] (../mfc/media/mfcdynamiclayout4.png "mfcdynamiclayout4")  
  
 Dopo il ridimensionamento l'area della casella di riepilogo viene ampliata in modo da visualizzare più elementi e i pulsanti vengono spostati unitamente all'angolo inferiore destro:  
  
 ![Finestra di dialogo dopo il ridimensionamento. ] (../mfc/media/mfcdynamiclayout5.png "mfcdynamiclayout5")  
  
 È possibile controllare il layout dinamico specificando i dettagli per ogni controllo nell'Editor di risorse nell'IDE, o è possibile eseguire in modo a livello di programmazione accedendo il `CMFCDynamicLayout` dell'oggetto per un determinato controllo e impostando le proprietà.  
  
### <a name="setting-dynamic-layout-properties-in-the-resource-editor"></a>Impostazione delle proprietà del layout dinamico nell'Editor risorse  
 È possibile usare l'Editor risorse per impostare il comportamento del layout dinamico per una finestra di dialogo senza dover scrivere codice.  
  
##### <a name="to-set-dynamic-layout-properties-in-the-resource-editor"></a>Per impostare le proprietà del layout dinamico nell'Editor risorse  
  
1.  Dopo aver aperto un progetto MFC aprire la finestra di dialogo con cui lavorare nell'editor della finestra di dialogo.  
  
     ![Aprire la finestra di dialogo nell'editor di risorse. ] (../mfc/media/mfcdynamiclayout3.png "mfcdynamiclayout3")  
  
2.  Selezionare un controllo e nella finestra delle proprietà impostarne le proprietà del layout dinamico. Il **Layout dinamico** nella finestra Proprietà, è compresa la proprietà **tipo di spostamento**, **tipo di ridimensionamento**e, a seconda dei valori selezionati per tali proprietà, proprietà specifiche che definiscono la quantità controlli spostare o modificare le dimensioni. **Tipo di spostamento** determina la modalità di spostamento di un controllo come vengono modificate le dimensioni della finestra di dialogo; **Tipo di ridimensionamento** determina la modalità di ridimensionamento di un controllo come vengono modificate le dimensioni della finestra di dialogo. **Tipo di spostamento** e **tipo di ridimensionamento** può essere **orizzontale**, **verticale**, **entrambi**, o **Nessuno**a seconda delle dimensioni che si desidera modificare in modo dinamico. Il termine Orizzontale si riferisce alla dimensione X, mentre Verticale corrisponde alla direzione Y.  
  
3.  Se si desidera un controllo, ad esempio un pulsante in una dimensione fissa e rimangono nella stessa posizione in basso a destra, come avviene comunemente per la **OK** o **Annulla** pulsanti, impostare il **tipo di ridimensionamento** a  **Nessuna**e impostare il **tipo di spostamento** a **entrambi**. Per il **percentuale di spostamento X** e **percentuale di spostamento Y** valori sotto **tipo di spostamento**, impostare 100% per fare in modo il controllo rimanga a una distanza fissa dal basso verso nell'angolo destro.  
  
     ![Layout dinamico](../mfc/media/mfcdynamiclayout1.png "mfcdynamiclayout1")  
  
4.  Si supponga che sia presente anche un altro controllo da espandere all'espansione della finestra di dialogo. In genere, un utente espande una finestra di dialogo per espandere una casella di modifica multiriga e aumentare le dimensioni dell'area di testo oppure espande un controllo elenco per visualizzare ulteriori dati. In questo caso, impostare il **tipo di ridimensionamento** su entrambi e impostare il **tipo di spostamento** su none. Quindi, impostare il **percentuale di ridimensionamento X** e **percentuale di ridimensionamento Y** valori a 100.  
  
     ![Le impostazioni di Layout dinamico](../mfc/media/mfcdynamiclayout2.png "mfcdynamiclayout2")  
  
5.  Sperimentare altri valori che potrebbero risultare efficaci per i controlli usati. Una finestra di dialogo con una casella di testo di una sola riga potrebbe essere necessario il **tipo di ridimensionamento** impostato su **orizzontale** solo, ad esempio.  
  
### <a name="setting-dynamic-layout-properties-programmatically"></a>Impostazione delle proprietà del layout dinamico a livello di codice  
 La procedura precedente è utile per specificare le proprietà del layout dinamico per una finestra di dialogo in fase di progettazione, ma se si intende controllare il layout dinamico in fase di esecuzione, è possibile impostare tali proprietà a livello di codice.  
  
##### <a name="to-set-dynamic-layout-properties-programmatically"></a>Per impostare le proprietà del layout dinamico a livello di codice  
  
1.  Nel codice di implementazione della classe della finestra individuare o creare un punto in cui specificare il layout dinamico per la finestra di dialogo. Ad esempio, si può aggiungere un metodo come `AdjustLayout` nella finestra di dialogo e chiamarlo da punti in cui è necessario modificare il layout. Il metodo può innanzitutto essere chiamato dal costruttore o dopo aver apportato modifiche alla finestra di dialogo.  
  
2.  Per la finestra di dialogo, chiamare [GetDynamicLayout](../mfc/reference/cwnd-class.md#getdynamiclayout), un metodo per la `CWnd` classe. `GetDynamicLayout` Restituisce un puntatore a un `CMFCDynamicLayout` oggetto.  
  
 ```  
    CMFCDynamicLayout* dynamicLayout = pDialog->GetDynamicLayout();

 ```  
  
3.  Per il primo controllo a cui si desidera aggiungere un comportamento dinamico, utilizzare i metodi statici nella classe del layout dinamico per creare il [MoveSettings](../mfc/reference/cmfcdynamiclayout-class.md#movesettings_structure) struttura che codifica il modo in cui il controllo deve essere regolato. A tale scopo, scegliere il metodo statico appropriato: [Movehorizontal](../mfc/reference/cmfcdynamiclayout-class.md#movehorizontal), [Movevertical](../mfc/reference/cmfcdynamiclayout-class.md#movevertical), [Movenone](../mfc/reference/cmfcdynamiclayout-class.md#movenone), o [Movehorizontalandvertical](../mfc/reference/cmfcdynamiclayout-class.md#movehorizontalandvertical). Passare una percentuale per gli aspetti orizzontale e/o verticale dello spostamento. Questi metodi statici restituiscono tutti un oggetto MoveSettings appena creato che è possibile usare per specificare il comportamento di spostamento di un controllo.  
  
     Tenere presente che con il valore 100 l'entità dello spostamento sarà identico a quello del ridimensionamento della finestra di dialogo, di conseguenza il bordo di un controllo rimarrà a una distanza fissa dal nuovo bordo.  
  
 ```  
    MoveSettings moveSettings = CMFCDynamicLayout::MoveHorizontal(100);

 ```  
  
4.  Eseguire la stessa operazione per il ridimensionamento, che usa il [SizeSettings](../mfc/reference/cmfcdynamiclayout-class.md#sizesettings_structure) tipo. Ad esempio, per specificare che le dimensioni di un controllo non cambiano quando si ridimensiona la finestra di dialogo, usare il codice seguente:  
  
 ```  
    SizeSettings sizeSettings = CMFCDynamicLayout::SizeNone();

 ```  
  
5.  Aggiungere il controllo al gestore del layout dinamico usando il [cmfcdynamiclayout:: AddItem](../mfc/reference/cmfcdynamiclayout-class.md#additem) metodo. Esistono due overload utili per specificare il controllo desiderato. Uno accetta l'handle della finestra (HWND) del controllo, mentre l'altro accetta l'ID del controllo.  
  
 ```  
    dynamicLayout->AddItem(hWndControl,
    moveSettings,
    sizeSettings);

 ```  
  
6.  Ripetere l'operazione per ogni controllo da spostare o ridimensionare.  
  
7.  Se necessario, è possibile usare il [cmfcdynamiclayout:: Hasitem](../mfc/reference/cmfcdynamiclayout-class.md#hasitem) metodo per determinare se un controllo è già presente nell'elenco dei controlli soggetti a modifiche del layout dinamico incluso o il [cmfcdynamiclayout:: isEmpty](../mfc/reference/cmfcdynamiclayout-class.md#isempty) metodo per determinare se sono presenti tutti i controlli che sono soggetti a modifiche.  
  
8.  Per abilitare il layout di finestra di dialogo, chiamare il [CWnd:: Enabledynamiclayout](../mfc/reference/cwnd-class.md#enabledynamiclayout) metodo.  
  
 ```  
    pDialog->EnableDynamicLayout(TRUE);

 ```  
  
9. La volta successiva che l'utente ridimensiona la finestra di dialogo, il [cmfcdynamiclayout:: Adjust](../mfc/reference/cmfcdynamiclayout-class.md#adjust) è detto che applica effettivamente le impostazioni.  
  
10. Se si desidera disabilitare il layout dinamico, chiamare [CWnd:: Enabledynamiclayout](../mfc/reference/cwnd-class.md#enabledynamiclayout) con **FALSE** come per il *bEnabled* parametro.  
  
 ```  
    pDialog->EnableDynamicLayout(FALSE);

 ```  
  
##### <a name="to-set-the-dynamic-layout-programmatically-from-a-resource-file"></a>Per impostare il layout dinamico a livello di codice da un file di risorse  
  
1.  Usare la [Movehorizontalandvertical](../mfc/reference/cmfcdynamiclayout-class.md#movehorizontalandvertical) metodo per specificare un nome di risorsa nel file di script di risorsa pertinente (file con estensione RC) che specifica le informazioni di layout dinamico, come nell'esempio seguente:  
  
 ```  
    dynamicLayout->LoadResource("IDD_DIALOG1");

 ```  
  
     La risorsa denominata deve fare riferimento a una finestra di dialogo che contiene le informazioni sul layout sotto forma di un **AFX_DIALOG_LAYOUT** voce nel file di risorse, come nell'esempio seguente:  
  
 ' ' * / / / * / / * / / AFX_DIALOG_LAYOUT * / /  
 
    IDD_MFCAPPLICATION1_DIALOG AFX_DIALOG_LAYOUT  
    INIZIARE a 0X0000, 0X6400, 0X0028, 0X643C, 0X0028  
    FINE 
 
    IDD_DIALOG1 AFX_DIALOG_LAYOUT  
    INIZIARE a 0X0000 0X6464, 0X0000, 0X6464, 0X0000, 0X0000, 0X6464, 0X0000, 0X0000  
 
    FINE 
 ```  
  
## See Also  
 [CMFCDynamicLayout Class](../mfc/reference/cmfcdynamiclayout-class.md)   
 [Control Classes](../mfc/control-classes.md)   
 [Dialog Box Classes](../mfc/dialog-box-classes.md)   
 [Dialog Editor](../windows/dialog-editor.md)

