---
title: "Layout dinamico | Microsoft Docs"
ms.custom: ""
ms.date: "12/16/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 8598cfb2-c8d4-4f5a-bf2b-59dc4653e042
caps.latest.revision: 7
caps.handback.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Layout dinamico
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Con MFC in [!INCLUDE[vs_dev14](../ide/includes/vs_dev14_md.md)] è possibile creare finestre di dialogo ridimensionabili dall'utente e controllare l'adattamento del layout in caso di modifica delle dimensioni.  È ad esempio possibile collegare i pulsanti nella parte inferiore di una finestra di dialogo al bordo inferiore in modo che mantengano sempre tale posizione.  È anche possibile configurare determinati controlli, come caselle di riepilogo, caselle di modifica e campi di testo in modo che si espandano quando l'utente espande la finestra di dialogo.  
  
## Specifica delle impostazioni per il layout dinamico per una finestra di dialogo MFC  
 Quando l'utente ridimensiona una finestra di dialogo, i controlli di tale finestra possono essere ridimensionati o spostati nelle direzioni X e Y.  La modifica delle dimensioni o della posizione di un controllo in seguito al ridimensionamento di una finestra di dialogo da parte dell'utente viene definita layout dinamico.  La seguente è ad esempio una finestra di dialogo prima che venga ridimensionata:  
  
 ![Finestra di dialogo prima del ridimensionamento.](../mfc/media/mfcdynamiclayout4.png "MFCDynamicLayout4")  
  
 Dopo il ridimensionamento l'area della casella di riepilogo viene ampliata in modo da visualizzare più elementi e i pulsanti vengono spostati unitamente all'angolo inferiore destro:  
  
 ![Finestra di dialogo dopo il ridimensionamento.](../mfc/media/mfcdynamiclayout5.png "MFCDynamicLayout5")  
  
 È possibile controllare il layout dinamico specificando i dettagli per ogni controllo nell'Editor risorse nell'IDE o effettuare questa operazione a livello di codice accedendo all'oggetto CMFCDynamicLayout per un determinato controllo e impostando le proprietà.  
  
### Impostazione delle proprietà del layout dinamico nell'Editor risorse  
 È possibile usare l'Editor risorse per impostare il comportamento del layout dinamico per una finestra di dialogo senza dover scrivere codice.  
  
##### Per impostare le proprietà del layout dinamico nell'Editor risorse  
  
1.  Dopo aver aperto un progetto MFC aprire la finestra di dialogo con cui lavorare nell'editor della finestra di dialogo.  
  
     ![Aprire la finestra di dialogo nell'editor di risorse.](../mfc/media/mfcdynamiclayout3.png "MFCDynamicLayout3")  
  
2.  Selezionare un controllo e nella finestra delle proprietà impostarne le proprietà del layout dinamico.  La sezione **Layout dinamico** nella finestra delle proprietà contiene le proprietà **Tipo di spostamento**, **Tipo di ridimensionamento** e, a seconda dei valori selezionati per tali proprietà, proprietà specifiche che definiscono l'entità dello spostamento o del ridimensionamento dei controlli.  **Tipo di spostamento** e **Tipo di ridimensionamento** determinano rispettivamente la modalità di spostamento e la modalità di ridimensionamento di un controllo al variare delle dimensioni della finestra di dialogo.  I valori di **Tipo di spostamento** e di **Tipo di ridimensionamento** possono essere **Orizzontale**, **Verticale**, **Entrambi** o **Nessuno** a seconda delle dimensioni che si intende modificare dinamicamente.  Il termine Orizzontale si riferisce alla dimensione X, mentre Verticale corrisponde alla direzione Y.  
  
3.  Se si vuole definire un controllo, ad esempio un pulsante, di dimensioni fisse e posizionato sempre in basso a destra, come avviene normalmente per i pulsanti **OK** o **Annulla**, impostare **Tipo di ridimensionamento** su **Nessuno** e **Tipo di spostamento** su **Entrambi**.  Impostare i valori di **Percentuale di spostamento X** e **Percentuale di spostamento Y** in **Tipo di spostamento** su 100% per fare in modo che il controllo rimanga a una distanza fissa dall'angolo inferiore destro.  
  
     ![Layout dinamico](../mfc/media/mfcdynamiclayout1.png "MFCDynamicLayout1")  
  
4.  Si supponga che sia presente anche un altro controllo da espandere all'espansione della finestra di dialogo.  In genere, un utente espande una finestra di dialogo per espandere una casella di modifica multiriga e aumentare le dimensioni dell'area di testo oppure espande un controllo elenco per visualizzare ulteriori dati.  In questo caso impostare **Tipo di ridimensionamento** su Entrambi e **Tipo di spostamento** su Nessuno.  Impostare quindi i valori di **Percentuale di ridimensionamento X** e **Percentuale di ridimensionamento Y** su 100.  
  
     ![Impostazioni layout dinamico](../mfc/media/mfcdynamiclayout2.png "MFCDynamicLayout2")  
  
5.  Sperimentare altri valori che potrebbero risultare efficaci per i controlli usati.  Con una finestra di dialogo contenente una casella di testo a una riga, ad esempio, **Tipo di ridimensionamento** può essere impostato solo su **Orizzontale**.  
  
### Impostazione delle proprietà del layout dinamico a livello di codice  
 La procedura precedente è utile per specificare le proprietà del layout dinamico per una finestra di dialogo in fase di progettazione, ma se si intende controllare il layout dinamico in fase di esecuzione, è possibile impostare tali proprietà a livello di codice.  
  
##### Per impostare le proprietà del layout dinamico a livello di codice  
  
1.  Nel codice di implementazione della classe della finestra individuare o creare un punto in cui specificare il layout dinamico per la finestra di dialogo.  Ad esempio, si può aggiungere un metodo come `AdjustLayout` nella finestra di dialogo e chiamarlo da punti in cui è necessario modificare il layout.  Il metodo può innanzitutto essere chiamato dal costruttore o dopo aver apportato modifiche alla finestra di dialogo.  
  
2.  Per la finestra di dialogo chiamare [GetDynamicLayout](../Topic/CWnd::GetDynamicLayout.md), un metodo della classe CWnd.  GetDynamicLayout restituisce un puntatore a un oggetto CMFCDynamicLayout.  
  
    ```  
    CMFCDynamicLayout* dynamicLayout = pDialog->GetDynamicLayout();  
    ```  
  
3.  Per il primo controllo a cui aggiungere un comportamento dinamico, usare i metodi statici sulla classe del layout dinamico in modo da creare la struttura [MoveSettings](../Topic/CMFCDynamicLayout::MoveSettings%20Structure.md) che consente di codificare la modalità di modifica del controllo.  A tale scopo, scegliere il metodo statico appropriato: [CMFCDynamicLayout::MoveHorizontal](../Topic/CMFCDynamicLayout::MoveHorizontal.md), [CMFCDynamicLayout::MoveVertical](../Topic/CMFCDynamicLayout::MoveVertical.md), [CMFCDynamicLayout::MoveNone](../Topic/CMFCDynamicLayout::MoveNone.md) o [CMFCDynamicLayout::MoveHorizontalAndVertical](../Topic/CMFCDynamicLayout::MoveHorizontalAndVertical.md).  Passare una percentuale per gli aspetti orizzontale e\/o verticale dello spostamento.  Questi metodi statici restituiscono tutti un oggetto MoveSettings appena creato che è possibile usare per specificare il comportamento di spostamento di un controllo.  
  
     Tenere presente che con il valore 100 l'entità dello spostamento sarà identico a quello del ridimensionamento della finestra di dialogo, di conseguenza il bordo di un controllo rimarrà a una distanza fissa dal nuovo bordo.  
  
    ```  
    MoveSettings moveSettings = CMFCDynamicLayout::MoveHorizontal(100);  
    ```  
  
4.  Eseguire la stessa operazione per il ridimensionamento, che usa il tipo [SizeSettings](../Topic/CMFCDynamicLayout::SizeSettings%20Structure.md).  Ad esempio, per specificare che le dimensioni di un controllo non cambiano quando si ridimensiona la finestra di dialogo, usare il codice seguente:  
  
    ```  
    SizeSettings sizeSettings = CMFCDynamicLayout::SizeNone();  
    ```  
  
5.  Per aggiungere il controllo al gestore del layout dinamico, usare il metodo [CMFCDynamicLayout::AddItem](../Topic/CMFCDynamicLayout::AddItem.md).  Esistono due overload utili per specificare il controllo desiderato.  Uno accetta l'handle della finestra \(HWND\) del controllo, mentre l'altro accetta l'ID del controllo.  
  
    ```  
    dynamicLayout->AddItem(hWndControl, moveSettings, sizeSettings);  
    ```  
  
6.  Ripetere l'operazione per ogni controllo da spostare o ridimensionare.  
  
7.  Se necessario, è possibile usare il metodo [CMFCDynamicLayout::HasItem](../Topic/CMFCDynamicLayout::HasItem.md) per determinare se un controllo è già incluso nell'elenco dei controlli soggetti alle modifiche del layout dinamico oppure il metodo [CMFCDynamicLayout::IsEmpty](../Topic/CMFCDynamicLayout::IsEmpty.md) per determinare se sono presenti controlli soggetti a modifiche.  
  
8.  Per abilitare il layout della finestra di dialogo, chiamare il metodo [CWnd::EnableDynamicLayout](../Topic/CWnd::EnableDynamicLayout.md).  
  
    ```  
    pDialog->EnableDynamicLayout(TRUE);  
    ```  
  
9. Quando successivamente l'utente ridimensiona la finestra di dialogo, viene chiamato il metodo [CMFCDynamicLayout::Adjust](../Topic/CMFCDynamicLayout::Adjust.md) che applica effettivamente le impostazioni.  
  
10. Per disabilitare il layout dinamico, chiamare [CWnd::EnableDynamicLayout](../Topic/CWnd::EnableDynamicLayout.md) specificando `FALSE` per il parametro `bEnabled`.  
  
    ```  
    pDialog->EnableDynamicLayout(FALSE);  
    ```  
  
##### Per impostare il layout dinamico a livello di codice da un file di risorse  
  
1.  Usare il metodo [CMFCDynamicLayout::MoveHorizontalAndVertical](../Topic/CMFCDynamicLayout::MoveHorizontalAndVertical.md) per specificare un nome di risorsa nel file di script della risorsa pertinente \(file con estensione rc\) che specifica le informazioni sul layout dinamico, come nell'esempio seguente:  
  
    ```  
    dynamicLayout->LoadResource("IDD_DIALOG1");  
    ```  
  
     La risorsa denominata deve fare riferimento a una finestra di dialogo che contiene le informazioni sul layout in una voce AFX\_DIALOG\_LAYOUT del file di risorse, come nell'esempio seguente:  
  
    ```  
    /////////////////////////////////////////////////////////////////////////////  
    //  
    // AFX_DIALOG_LAYOUT  
    //  
  
    IDD_MFCAPPLICATION1_DIALOG AFX_DIALOG_LAYOUT  
    BEGIN  
        0x0000, 0x6400, 0x0028, 0x643c, 0x0028  
    END  
  
    IDD_DIALOG1 AFX_DIALOG_LAYOUT  
    BEGIN  
        0x0000, 0x6464, 0x0000, 0x6464, 0x0000, 0x0000, 0x6464, 0x0000, 0x0000  
  
    END  
    ```  
  
## Vedere anche  
 [Classe CMFCDynamicLayout](../mfc/reference/cmfcdynamiclayout-class.md)   
 [Classi dei controlli](../mfc/control-classes.md)   
 [Classi di finestre di dialogo](../mfc/dialog-box-classes.md)   
 [Dialog Editor](../mfc/dialog-editor.md)