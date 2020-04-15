---
title: 'Procedura dettagliata: utilizzo dei nuovi controlli Shell MFC'
ms.date: 04/25/2019
helpviewer_keywords:
- shell controls (MFC)
ms.assetid: f0015caa-199d-4aaf-9501-5a239fce9095
ms.openlocfilehash: 5786fbbf7ec9f31e7d895a96dae27b8fc95abda1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81360218"
---
# <a name="walkthrough-using-the-new-mfc-shell-controls"></a>Procedura dettagliata: utilizzo dei nuovi controlli Shell MFC

In questa procedura dettagliata verrà creata un'applicazione simile a Esplora file. Verrà creata una finestra con due riquadri. Il riquadro sinistro conterrà un [CMFCShellTreeCtrl](../mfc/reference/cmfcshelltreectrl-class.md) oggetto che visualizza il Desktop in una visualizzazione gerarchica. Il riquadro destro conterrà un [CMFCShellListCtrl](../mfc/reference/cmfcshelllistctrl-class.md) che mostra i file nella cartella selezionata nel riquadro sinistro.

## <a name="prerequisites"></a>Prerequisiti

- In Visual Studio 2017 e versioni successive, il supporto MFC è un componente facoltativo. Per installarlo, aprire il programma di installazione di Visual Studio dal menu Start di Windows. Individuare la versione di Visual Studio in uso e scegliere il pulsante **Modifica.** Assicurarsi che il riquadro **Sviluppo desktop con C .** In **Componenti facoltativi**selezionare il pulsante **Supporto MFC.**

- In questa procedura dettagliata si presuppone che Visual Studio sia stato configurato per l'utilizzo **delle impostazioni generali di sviluppo.** Se si usa un'impostazione di sviluppo diversa, alcune finestre di Visual Studio usate in questa procedura dettagliata potrebbero non essere visualizzate per impostazione predefinita.

## <a name="to-create-a-new-mfc-application-by-using-the-mfc-application-wizard"></a>Per creare una nuova applicazione MFC utilizzando la Creazione guidata applicazione MFC

Questi passaggi variano a seconda della versione di Visual Studio in uso. Per visualizzare la documentazione per la versione preferita di Visual Studio, usare il controllo Selettore **versione.** Si trova nella parte superiore del sommario in questa pagina.

::: moniker range="vs-2019"

### <a name="to-create-an-mfc-project-in-visual-studio-2019"></a>Per creare un progetto MFC in Visual Studio 2019To create an MFC project in Visual Studio 2019

1. Dal menu principale scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

1. Nella casella di ricerca nella parte superiore digitare **MFC** e quindi scegliere **Applicazione MFC** dall'elenco dei risultati.

1. Fare clic su **Avanti**. Nella pagina successiva, immettere un nome per il progetto e specificare la posizione del progetto, se lo si desidera.

1. Scegliere il pulsante **Crea** per creare il progetto.

   Dopo la **visualizzazione della Creazione guidata applicazione MFC,** utilizzare le opzioni seguenti:

   1. Scegliere **Tipo di applicazione** a sinistra. Quindi selezionare **Documento singolo** e selezionare Supporto **architettura documento/visualizzazione**. In **Stile progetto**selezionare Visual **Studio**e nell'elenco a discesa Stile di visualizzazione e **colori** selezionare **Office 2007 (tema blu)**.

   1. Nel riquadro **Supporto documenti compositi** selezionare **Nessuno**.

   1. Non apportare modifiche al riquadro Proprietà modello di **documento.**

   1. Nel riquadro **Funzionalità interfaccia utente** verificare che l'opzione Usa barra dei menu e barra degli **strumenti** sia selezionata. Lasciare tutte le altre opzioni così come sono.

   1. Nel riquadro **Funzionalità avanzate** selezionare **Controlli ActiveX**, **Manifesto common control**e **Riquadro di spostamento** . Lascia tutto il resto così com'è. L'opzione **Riquadro di spostamento** farà in modo che la `CMFCShellTreeCtrl` procedura guidata crei il riquadro a sinistra della finestra con un già incorporato.

   1. Non si prevede di apportare modifiche al riquadro **Classi generate,** quindi fare clic su **Fine** per creare il nuovo progetto MFC.

::: moniker-end

::: moniker range="<=vs-2017"

### <a name="to-create-an-mfc-project-in-visual-studio-2017-or-earlier"></a>Per creare un progetto MFC in Visual Studio 2017 o versioni precedentiTo create an MFC project in Visual Studio 2017 or earlier

1. Utilizzare la **Creazione guidata applicazione MFC** per creare una nuova applicazione MFC. Per eseguire la procedura guidata, scegliere **Nuovo**dal menu **File** , quindi **Progetto**. Verrà visualizzata la finestra di dialogo **Nuovo progetto.**

1. Nella finestra di dialogo **Nuovo progetto** , espandere il nodo **Visual C,** nel riquadro **Tipi** progetto e selezionare **MFC**. Nel riquadro Modelli selezionare **Applicazione MFC**nel riquadro **Modelli** . Digitare un nome per `MFCShellControls` il progetto, ad esempio e fare clic **su OK**.

   Dopo la **visualizzazione della Creazione guidata applicazione MFC,** utilizzare le opzioni seguenti:

   1. Nel riquadro **Tipo di applicazione,** in **Tipo di applicazione,** deselezionare l'opzione **Documenti a schede.** Selezionare quindi **Documento singolo** e quindi Supporto **architettura documento/visualizzazione**. In **Stile progetto**selezionare Visual **Studio**e nell'elenco a discesa Stile di visualizzazione e **colori** selezionare **Office 2007 (tema blu)**.

   1. Nel riquadro **Supporto documenti compositi** selezionare **Nessuno**.

   1. Non apportare modifiche al riquadro **Stringhe modello** documento.

   1. Nel riquadro **Supporto database** (Visual Studio 2015 e versioni precedenti) selezionare **Nessuno** perché l'applicazione non usa un database.

   1. Nel riquadro **Funzionalità interfaccia utente** verificare che l'opzione Usa barra dei menu e barra degli **strumenti** sia selezionata. Lasciare tutte le altre opzioni così come sono.

   1. Nel riquadro **Funzionalità avanzate,** in **Funzionalità avanzate**, selezionare solo i **controlli ActiveX** e il manifesto dei **controlli comuni**. In **Riquadri frame avanzati**selezionare solo l'opzione **Riquadro di spostamento.** Verrà eseguita la procedura guidata per creare il `CMFCShellTreeCtrl` riquadro a sinistra della finestra con un già incorporato.

   1. Non si prevede di apportare modifiche al riquadro **Classi generate,** quindi fare clic su **Fine** per creare il nuovo progetto MFC.

::: moniker-end

Verificare che l'applicazione sia stata creata correttamente compilandola ed eseguendola. Per compilare l'applicazione, scegliere **Compila soluzione**dal menu **Compila** . Se l'applicazione viene compilata correttamente, eseguire l'applicazione selezionando **Avvia debug** dal menu **Debug** .

La procedura guidata crea automaticamente un'applicazione con una barra dei menu standard, una barra degli strumenti standard, una barra di stato standard e una barra di Outlook a sinistra della finestra con una visualizzazione **Cartelle** e una visualizzazione **Calendario.**

### <a name="to-add-the-shell-list-control-to-the-document-view"></a>Per aggiungere il controllo elenco shell alla visualizzazione del documento

1. In questa sezione verrà aggiunta un'istanza di `CMFCShellListCtrl` alla visualizzazione creata dalla procedura guidata. Aprire il file di intestazione della visualizzazione facendo doppio clic su **MFCShellControlsView.h** in **Esplora soluzioni**.

   Individuare `#pragma once` la direttiva nella parte superiore del file di intestazione. Immediatamente sotto di esso aggiungere questo `CMFCShellListCtrl`codice per includere il file di intestazione per :

   ```cpp
   #include <afxShellListCtrl.h>
   ```

   A questo punto aggiungere `CMFCShellListCtrl`una variabile membro di tipo . Individuare innanzitutto il seguente commento nel file di intestazione:

   ```cpp
   // Generated message map functions
   ```

   Immediatamente sopra quel commento, aggiungi questo codice:

   ```cpp
   private:
   CMFCShellListCtrl m_wndList;
   ```

1. La **Creazione guidata applicazione MFC** ha già creato un `CMFCShellTreeCtrl` oggetto nella `CMainFrame` classe, ma è un membro protetto. Accederemo all'oggetto in un secondo momento, quindi crea una funzione di accesso per esso ora. Aprire il file di intestazione MainFrm.h facendo doppio clic su di esso in **Esplora soluzioni**. Individuare il seguente commento:

   ```cpp
   // Attributes
   ```

   Immediatamente sotto di esso, aggiungere la seguente dichiarazione di metodo:

   ```cpp
   public:
       CMFCShellTreeCtrl& GetShellTreeCtrl();
   ```

   Aprire quindi il file di origine MainFrm.cpp facendo doppio clic su di esso in **Esplora soluzioni**. Nella parte inferiore del file aggiungere la seguente definizione di metodo:

   ```cpp
   CMFCShellTreeCtrl& CMainFrame::GetShellTreeCtrl()
   {
        return m_wndTree;
   }
   ```

1. Ora aggiorniamo `CMFCShellControlsView` la classe `WM_CREATE` per gestire il messaggio di Windows. Aprire la finestra **Visualizzazione** `CMFCShellControlsView` classi e selezionare la classe. Fare clic con il pulsante destro del mouse e scegliere **Proprietà**.

   Successivamente, in [Creazione guidata classe](reference/mfc-class-wizard.md), fare clic sulla scheda **Messaggi.** `WM_CREATE` Nell'elenco a discesa `WM_CREATE`accanto a , selezionare ** \<Aggiungi> OnCreate**. Il comando crea un gestore messaggi per noi e aggiorna automaticamente la mappa messaggi MFC.

   Nel `OnCreate` metodo, creeremo ora `CMFCShellListCtrl` il nostro oggetto. Individuare `OnCreate` la definizione del metodo nel file di origine MFCShellControlsView.cpp e sostituirne l'implementazione con il codice seguente:

    ```cpp
    int CMFCShellControlsView::OnCreate(LPCREATESTRUCT lpCreateStruct)
    {
        if (CView::OnCreate(lpCreateStruct) == -1)
            return -1;

        CRect rectDummy (0, 0, 0, 0);

        m_wndList.Create(WS_CHILD | WS_VISIBLE | LVS_REPORT,
            rectDummy, this, 1);

        return 0;
    }
    ```

1. Ripetere il passaggio `WM_SIZE` precedente, ma per il messaggio. Verrà eseguito il ridisegno della visualizzazione delle applicazioni ogni volta che un utente modifica le dimensioni della finestra dell'applicazione. Sostituire la definizione per il `OnSize` metodo con il codice seguente:

    ```cpp
    void CMFCShellControlsView::OnSize(UINT nType, int cx, int cy)
    {
        CView::OnSize(nType, cx, cy);

        m_wndList.SetWindowPos(NULL, -1, -1, cx, cy,
            SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);
    }
    ```

1. L'ultimo passaggio `CMFCShellTreeCtrl` consiste `CMFCShellListCtrl` nel connettere gli oggetti e utilizzando il [CMFCShellTreeCtrl::SetRelatedList](../mfc/reference/cmfcshelltreectrl-class.md#setrelatedlist) metodo. Dopo aver `CMFCShellTreeCtrl::SetRelatedList`chiamato `CMFCShellListCtrl` , verrà visualizzato automaticamente il `CMFCShellTreeCtrl`contenuto dell'elemento selezionato nel file . Gli oggetti nel `OnActivateView` metodo , che viene sottoposto a override da [CView::OnActivateView](../mfc/reference/cview-class.md#onactivateview).

   Nel file di intestazione MFCShellControlsView.h, all'interno della `CMFCShellControlsView` dichiarazione di classe, aggiungere la seguente dichiarazione di metodo:

    ```cpp
    protected:
    virtual void OnActivateView(BOOL bActivate,
        CView* pActivateView,
        CView* pDeactiveView);
    ```

   Aggiungere quindi la definizione per il metodo al file di origine MFCShellControlsView.cpp:

    ```cpp
    void CMFCShellControlsView::OnActivateView(BOOL bActivate,
        CView* pActivateView,
        CView* pDeactiveView)
    {
        if (bActivate&& AfxGetMainWnd() != NULL)
        {
            ((CMainFrame*)AfxGetMainWnd())->GetShellTreeCtrl().SetRelatedList(&m_wndList);
        }

        CView::OnActivateView(bActivate,
            pActivateView,
            pDeactiveView);
    }
    ```

   Poiché stiamo chiamando i `CMainFrame` metodi dalla classe, è necessario aggiungere una direttiva `#include` all'inizio del file di origine MFCShellControlsView.cpp:

    ```cpp
    #include "MainFrm.h"
    ```

1. Verificare che l'applicazione sia stata creata correttamente compilandola ed eseguendola. Per compilare l'applicazione, scegliere **Compila soluzione**dal menu **Compila** . Se l'applicazione viene compilata correttamente, eseguirla selezionando **Avvia debug** dal menu **Debug** .

   Dovrebbero ora essere visualizzati i dettagli `CMFCShellTreeCtrl` per l'elemento selezionato nel riquadro di visualizzazione. Quando si fa clic `CMFCShellTreeCtrl`su `CMFCShellListCtrl` un nodo in , l'oggetto verrà aggiornato automaticamente. Analogamente, se si fa doppio `CMFCShellListCtrl`clic `CMFCShellTreeCtrl` su una cartella nella cartella , l'oggetto deve essere aggiornato automaticamente.

   Fare clic con il pulsante destro del mouse su un elemento nel controllo struttura ad albero o nel controllo elenco. Si ottiene lo stesso menu di scelta rapida come se si stesse utilizzando il real **File Explorer**.

## <a name="next-steps"></a>Passaggi successivi

- La procedura guidata ha creato una barra di Outlook con un riquadro **Cartelle** e un **riquadro Calendario.** Probabilmente non ha senso avere un riquadro **Calendario** in una finestra **di Esplora** risorse, quindi rimuovi subito il riquadro.

- Supporta `CMFCShellListCtrl` la visualizzazione dei file in diverse modalità, ad esempio **Icone grandi**, **Icone piccole**, **Elenco**e **Dettagli**. Aggiornare l'applicazione per implementare questa funzionalità. Suggerimento: vedere Esempi di [Visual C](../overview/visual-cpp-samples.md)

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)
