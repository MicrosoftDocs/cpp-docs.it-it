---
title: 'Procedura dettagliata: Uso dei nuovi controlli della shell MFC'
ms.date: 04/25/2019
helpviewer_keywords:
- shell controls (MFC)
ms.assetid: f0015caa-199d-4aaf-9501-5a239fce9095
ms.openlocfilehash: cf0a6bd230364b48c78c72b8e453e7e641fb2d0e
ms.sourcegitcommit: 3caf5261b3ea80d9cf14038c116ba981d655cd13
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/11/2019
ms.locfileid: "70907399"
---
# <a name="walkthrough-using-the-new-mfc-shell-controls"></a>Procedura dettagliata: Uso dei nuovi controlli della shell MFC

In questa procedura dettagliata verrà creata un'applicazione simile a Esplora file. Verrà creata una finestra con due riquadri. Il riquadro sinistro conterrà un oggetto [CMFCShellTreeCtrl](../mfc/reference/cmfcshelltreectrl-class.md) che Visualizza il desktop in una visualizzazione gerarchica. Il riquadro destro conterrà un [CMFCShellListCtrl](../mfc/reference/cmfcshelllistctrl-class.md) che mostra i file nella cartella selezionata nel riquadro sinistro.

## <a name="prerequisites"></a>Prerequisiti

- In Visual Studio 2017 e versioni successive il supporto MFC è un componente facoltativo. Per installarlo, aprire il Programma di installazione di Visual Studio dal menu Start di Windows. Trovare la versione di Visual Studio in uso e scegliere il pulsante **modifica** . Verificare che lo **sviluppo di applicazioni C++ desktop con** riquadro sia selezionato. In **componenti facoltativi**, selezionare il pulsante **supporto MFC** .

- In questa procedura dettagliata si presuppone che Visual Studio sia stato configurato per utilizzare **le impostazioni di sviluppo generali**. Se si usa un'impostazione di sviluppo diversa, alcune finestre di Visual Studio usate in questa procedura dettagliata potrebbero non essere visualizzate per impostazione predefinita.

## <a name="to-create-a-new-mfc-application-by-using-the-mfc-application-wizard"></a>Per creare una nuova applicazione MFC utilizzando la creazione guidata applicazione MFC

Questa procedura varia a seconda della versione di Visual Studio in uso. Assicurarsi che il selettore della versione in alto a sinistra nella pagina sia impostato correttamente.

::: moniker range="vs-2019"

### <a name="to-create-an-mfc-project-in-visual-studio-2019"></a>Per creare un progetto MFC in Visual Studio 2019

1. Dal menu principale scegliere **File** > **Nuovo** > **Progetto** per aprire la finestra di dialogo **Crea nuovo progetto**.

1. Nella casella di ricerca nella parte superiore digitare **MFC** , quindi scegliere **app MFC** dall'elenco risultati. 

1. Fare clic su **Avanti**. Nella pagina successiva immettere un nome per il progetto e specificare il percorso del progetto, se necessario.

1. Scegliere il pulsante **Crea** per creare il progetto.

   Dopo aver visualizzato la **creazione guidata applicazione MFC** , utilizzare le opzioni seguenti:
 
   1. Scegliere il **tipo di applicazione** a sinistra. Selezionare quindi **documento singolo** e selezionare **supporto per l'architettura documento/visualizzazione**. In **stile progetto**selezionare **Visual Studio**, quindi nell'elenco a discesa **stile di visualizzazione e colori** selezionare **Office 2007 (tema blu)** .

   1. Nel riquadro **supporto documenti compositi** selezionare **nessuno**.

   1. Non apportare modifiche al riquadro **Proprietà modello di documento** .

   1. Nel riquadro **funzionalità interfaccia utente** verificare che sia selezionata l'opzione **Usa una barra dei menu e una barra degli strumenti** . Lasciare invariate tutte le altre opzioni.

   1. Nel riquadro **funzionalità avanzate** selezionare **controlli ActiveX**, manifesto del **controllo comune**e opzione del **riquadro di spostamento** . Lasciare tutti gli altri elementi così come sono. Il **riquadro di spostamento** consente alla procedura guidata di creare il riquadro a sinistra della finestra con una `CMFCShellTreeCtrl` già incorporata.

   1. Non verranno apportate modifiche al riquadro **classi generate** , quindi fare clic su **fine** per creare il nuovo progetto MFC.

::: moniker-end

::: moniker range="<=vs-2017"

### <a name="to-create-an-mfc-project-in-visual-studio-2017-or-earlier"></a>Per creare un progetto MFC in Visual Studio 2017 o versioni precedenti

1. Utilizzare la **creazione guidata applicazione MFC** per creare una nuova applicazione MFC. Per eseguire la procedura guidata, scegliere **nuovo**dal menu **file** , quindi selezionare **progetto**. Verrà visualizzata la finestra di dialogo **nuovo progetto** .

1. Nella finestra di dialogo **nuovo progetto** espandere il nodo **visivo C++**  nel riquadro **Tipi progetto** e selezionare **MFC**. Quindi, nel riquadro **modelli** selezionare **applicazione MFC**. Digitare un nome per il progetto, ad esempio `MFCShellControls` e fare clic su **OK**. 

   Dopo aver visualizzato la **creazione guidata applicazione MFC** , utilizzare le opzioni seguenti:

   1. Nel riquadro **tipo di applicazione** , in **tipo di applicazione**, deselezionare l'opzione **documenti a schede** . Selezionare quindi **documento singolo** e selezionare supporto per l' **architettura documento/visualizzazione**. In **stile progetto**selezionare **Visual Studio**, quindi nell'elenco a discesa **stile di visualizzazione e colori** selezionare **Office 2007 (tema blu)** .

   1. Nel riquadro **supporto documenti compositi** selezionare **nessuno**.

   1. Non apportare modifiche al riquadro **stringhe modello di documento** .

   1. Nel riquadro **supporto database** (Visual Studio 2015 e versioni precedenti) selezionare **nessuno** perché l'applicazione non usa un database.

   1. Nel riquadro **funzionalità interfaccia utente** verificare che sia selezionata l'opzione **Usa una barra dei menu e una barra degli strumenti** . Lasciare invariate tutte le altre opzioni.

   1. Nel riquadro **funzionalità avanzate** , in **funzionalità avanzate**, selezionare solo i **controlli ActiveX** e il **manifesto del controllo comune**. In **riquadri frame avanzati**selezionare solo l'opzione **riquadro di spostamento** . La procedura guidata creerà il riquadro a sinistra della finestra con una `CMFCShellTreeCtrl` già incorporata.

   1. Non verranno apportate modifiche al riquadro **classi generate** , quindi fare clic su **fine** per creare il nuovo progetto MFC.

::: moniker-end

Verificare che l'applicazione sia stata creata correttamente mediante la compilazione e l'esecuzione. Per compilare l'applicazione, scegliere **Compila soluzione**dal menu **Compila** . Se l'applicazione viene compilata correttamente, eseguire l'applicazione selezionando **Avvia debug** dal menu **debug** .

La procedura guidata crea automaticamente un'applicazione con una barra dei menu standard, una barra degli strumenti standard, una barra di stato standard e una barra di Outlook a sinistra della finestra con una visualizzazione **cartelle** e una visualizzazione **Calendario** .

### <a name="to-add-the-shell-list-control-to-the-document-view"></a>Per aggiungere il controllo elenco Shell alla visualizzazione documento

1. In questa sezione verrà aggiunta un'istanza di `CMFCShellListCtrl` alla visualizzazione creata dalla procedura guidata. Aprire il file di intestazione della visualizzazione facendo doppio clic su **MFCShellControlsView. h** nella **Esplora soluzioni**.

   Individuare la `#pragma once` direttiva nella parte superiore del file di intestazione. Immediatamente sotto, aggiungere questo codice per includere il file di intestazione `CMFCShellListCtrl`per:

   ```cpp
   #include <afxShellListCtrl.h>
   ```

   Aggiungere ora una variabile membro di tipo `CMFCShellListCtrl`. Per prima cosa, individuare il commento seguente nel file di intestazione:

   ```cpp
   // Generated message map functions
   ```

   Immediatamente sopra il commento, aggiungere il codice seguente:

   ```cpp
   private:
   CMFCShellListCtrl m_wndList;
   ```

1. La **creazione guidata applicazione MFC** ha già `CMFCShellTreeCtrl` creato un oggetto `CMainFrame` nella classe, ma è un membro protetto. Per accedere all'oggetto in un secondo momento, è necessario creare una funzione di accesso. Per aprire il file di intestazione MainFrm. h, fare doppio clic su di esso nel **Esplora soluzioni**. Individuare il commento seguente:

   ```cpp
   // Attributes
   ```

   Immediatamente sotto di essa aggiungere la dichiarazione di metodo seguente:

   ```cpp
   public:
       CMFCShellTreeCtrl& GetShellTreeCtrl();
   ```

   Successivamente, aprire il file di origine MainFrm. cpp facendo doppio clic su di esso nel **Esplora soluzioni**. Nella parte inferiore del file aggiungere la definizione di metodo seguente:

   ```cpp
   CMFCShellTreeCtrl& CMainFrame::GetShellTreeCtrl()
   {
        return m_wndTree;
   }
   ```

1. A questo punto si `CMFCShellControlsView` aggiorna la classe per `WM_CREATE` gestire il messaggio di Windows. Aprire la finestra di **Visualizzazione classi** e selezionare `CMFCShellControlsView` la classe. Fare clic con il pulsante destro del mouse e scegliere **Proprietà**.

   Successivamente, nella [creazione guidata classe](reference/mfc-class-wizard.md)fare clic sulla scheda **messaggi** . Scorrere verso il basso fino a `WM_CREATE` trovare il messaggio. Nell'elenco a discesa accanto a `WM_CREATE`Selezionare  **\<Aggiungi > OnCreate**. Il comando crea un gestore di messaggi per Microsoft e aggiorna automaticamente la mappa messaggi MFC.

   Nel metodo `OnCreate` verrà ora `CMFCShellListCtrl` creato l'oggetto. Individuare la `OnCreate` definizione del metodo nel file di origine MFCShellControlsView. cpp e sostituirne l'implementazione con il codice seguente:

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

1. Ripetere il passaggio precedente ma per il `WM_SIZE` messaggio. La visualizzazione delle applicazioni verrà ridisegnato ogni volta che un utente modifica le dimensioni della finestra dell'applicazione. Sostituire la definizione per il `OnSize` metodo con il codice seguente:

    ```cpp
    void CMFCShellControlsView::OnSize(UINT nType, int cx, int cy)
    {
        CView::OnSize(nType, cx, cy);

        m_wndList.SetWindowPos(NULL, -1, -1, cx, cy,
            SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);
    }
    ```

1. L'ultimo passaggio consiste nel connettere gli `CMFCShellTreeCtrl` oggetti `CMFCShellListCtrl` e usando il metodo [CMFCShellTreeCtrl:: serelated](../mfc/reference/cmfcshelltreectrl-class.md#setrelatedlist) . Dopo la `CMFCShellTreeCtrl::SetRelatedList` `CMFCShellListCtrl` chiamata a, in verrà visualizzato automaticamente il contenuto dell'elemento selezionato in `CMFCShellTreeCtrl`. Si connettono gli oggetti `OnActivateView` nel metodo, di cui viene eseguito l'override da [CView:: OnActivateView](../mfc/reference/cview-class.md#onactivateview).

   Nel file di intestazione MFCShellControlsView. h, all'interno `CMFCShellControlsView` della dichiarazione di classe, aggiungere la dichiarazione di metodo seguente:

    ```cpp
    protected:
    virtual void OnActivateView(BOOL bActivate,
        CView* pActivateView,
        CView* pDeactiveView);
    ```

   Aggiungere quindi la definizione per il metodo al file di origine MFCShellControlsView. cpp:

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

   Poiché i metodi vengono chiamati dalla `CMainFrame` classe, è necessario aggiungere una `#include` direttiva all'inizio del file di origine MFCShellControlsView. cpp:

    ```cpp
    #include "MainFrm.h"
    ```

1. Verificare che l'applicazione sia stata creata correttamente mediante la compilazione e l'esecuzione. Per compilare l'applicazione, scegliere **Compila soluzione**dal menu **Compila** . Se l'applicazione viene compilata correttamente, eseguirla selezionando **Avvia debug** dal menu **debug** .

   A questo punto verranno visualizzati i dettagli per l'elemento selezionato nel `CMFCShellTreeCtrl` riquadro visualizzazione. Quando si fa clic su un nodo `CMFCShellTreeCtrl`in, `CMFCShellListCtrl` l'verrà aggiornato automaticamente. Analogamente, se si fa doppio clic su una cartella `CMFCShellListCtrl`in, `CMFCShellTreeCtrl` il deve essere aggiornato automaticamente.

   Fare clic con il pulsante destro del mouse su un elemento nel controllo dell'albero o nel controllo elenco. Si ottiene lo stesso menu di scelta rapida di se si utilizza **Esplora file**reale.

## <a name="next-steps"></a>Passaggi successivi

- La procedura guidata ha creato una barra di Outlook con un riquadro **cartelle** e un riquadro **Calendario** . Probabilmente non ha senso avere un riquadro **Calendario** in una finestra di **esplorazione** , quindi rimuovere il riquadro.

- Supporta `CMFCShellListCtrl` la visualizzazione di file in modalità diverse, ad esempio **Icone grandi**, **icone piccole**, **elenco**e **Dettagli**. Aggiornare l'applicazione per implementare questa funzionalità. Hint: vedere [gli C++ esempi visivi](../overview/visual-cpp-samples.md).

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)
