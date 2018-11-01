---
title: 'Procedura dettagliata: utilizzo dei nuovi controlli Shell MFC'
ms.date: 09/20/2018
helpviewer_keywords:
- shell controls (MFC)
ms.assetid: f0015caa-199d-4aaf-9501-5a239fce9095
ms.openlocfilehash: 4ff585123fb30a4fc31460c95f8960f5cfd7b7bc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50507564"
---
# <a name="walkthrough-using-the-new-mfc-shell-controls"></a>Procedura dettagliata: utilizzo dei nuovi controlli Shell MFC

In questa procedura dettagliata, si creerà un'applicazione simile a Esplora File. Si creerà una finestra che è disponibili due riquadri. Riquadro a sinistra conterrà un [CMFCShellTreeCtrl](../mfc/reference/cmfcshelltreectrl-class.md) oggetto che consente di visualizzare il Desktop in una visualizzazione gerarchica. Riquadro di destra conterrà una [CMFCShellListCtrl](../mfc/reference/cmfcshelllistctrl-class.md) che mostra i file nella cartella selezionata nel riquadro sinistro.

## <a name="prerequisites"></a>Prerequisiti

Questa procedura dettagliata si presuppone di aver impostato Visual Studio da usare **delle impostazioni di sviluppo generale**. Se si usa un'impostazione di sviluppo diverso, potrebbero non essere visualizzate alcune finestre di Visual Studio che utilizziamo in questa procedura dettagliata per impostazione predefinita.

### <a name="to-create-a-new-mfc-application-by-using-the-mfc-application-wizard"></a>Per creare una nuova applicazione MFC mediante la creazione guidata applicazione MFC

1. Usare la **Creazione guidata applicazione MFC** per creare una nuova applicazione MFC. Per eseguire la procedura guidata, dal **File** dal menu **New**e quindi selezionare **progetto**. Il **nuovo progetto** verrà visualizzata la finestra di dialogo.

1. Nel **nuovo progetto** finestra di dialogo espandere il **Visual C++** nodo nel **tipi di progetto** riquadro e selezionare **MFC**. Quindi, nella **modelli** riquadro, selezionare **applicazione MFC**. Digitare un nome per il progetto, ad esempio `MFCShellControls` e fare clic su **OK**. Dopo aver **Creazione guidata applicazione MFC** consente di visualizzare, utilizzare le opzioni seguenti:

    1. Nel **tipo di applicazione** riquadro, in **tipo di applicazione**deselezionare il **documenti a schede** opzione. Successivamente, selezionare **singolo documento** e selezionare **Supporto architettura documento/visualizzazione**. Sotto **Project style**, selezionare **Visual Studio**e dal **dello stile di visualizzazione e colori** selezione elenco a discesa **Office 2007 (tema blu)**.

    1. Nel **supporto documenti compositi** riquadro, selezionare **None**.

    1. Non apportare alcuna modifica per il **stringhe modello documento** riquadro.

    1. Nel **supporto per Database** riquadro (Visual Studio 2015 e versioni precedente), selezionare **None** perché l'applicazione non usa un database.

    1. Nel **funzionalità dell'interfaccia utente** riquadro, assicurarsi che il **usare una barra dei menu e barra degli strumenti** opzione è selezionata. Lasciare tutte le altre opzioni, così come sono.

    1. Nel **Advanced Features** riquadro, in **funzionalità avanzate**, selezionare solo **controlli ActiveX** e **manifesto controllo comune**. Sotto **riquadri frame avanzati**, selezionare solo le **riquadro di spostamento** opzione. Causa la procedura guidata per creare il riquadro a sinistra della finestra con un `CMFCShellTreeCtrl` già incorporati.

    1. Non ci occuperemo apportare modifiche per il **classi generate** riquadro, fare clic su **fine** per creare un nuovo progetto MFC.

1. Verificare che l'applicazione è stata creata correttamente per la creazione e la sua esecuzione. Per compilare l'applicazione, dai **compilare** dal menu **Compila soluzione**. Se l'applicazione viene compilata correttamente, eseguire l'applicazione selezionando **Avvia debug** dalle **Debug** menu.

   La procedura guidata crea automaticamente un'applicazione che dispone di una barra dei menu standard, una barra degli strumenti standard, una barra di stato standard e una barra di Outlook a sinistra della finestra con una **cartelle** visualizzazione e una **calendario** vista .

### <a name="to-add-the-shell-list-control-to-the-document-view"></a>Per aggiungere il controllo di elenco della shell per la visualizzazione del documento

1. In questa sezione si aggiungerà un'istanza di `CMFCShellListCtrl` alla visualizzazione che ha creata la procedura guidata. Aprire il file di intestazione vista facendo doppio clic **MFCShellControlsView.h** nel **Esplora soluzioni**.

   Individuare il `#pragma once` direttiva all'inizio del file di intestazione. Immediatamente sotto, aggiungere questo codice per includere il file di intestazione per `CMFCShellListCtrl`:

   ```cpp
   #include <afxShellListCtrl.h>
   ```

   Ora aggiungere una variabile membro di tipo `CMFCShellListCtrl`. In primo luogo, individuare il seguente commento nel file di intestazione:

   ```cpp
   // Generated message map functions
   ```

   Immediatamente sopra il commento, aggiungere questo codice:

   ```cpp
   private:
   CMFCShellListCtrl m_wndList;
   ```

1. Il **Creazione guidata applicazione MFC** già creato una `CMFCShellTreeCtrl` dell'oggetto nel `CMainFrame` classe, ma un membro protetto. Si sarà accedere all'oggetto in un secondo momento, puoi creare una funzione di accesso per tale ora. Aprire il file di intestazione MainFrm facendo doppio clic su esso nel **Esplora soluzioni**. Individuare il seguente commento:

   ```cpp
   // Attributes
   ```

   Immediatamente sotto di essa, aggiungere la dichiarazione di metodo seguente:

   ```cpp
   public:
       CMFCShellTreeCtrl& GetShellTreeCtrl();
   ```

   Successivamente, aprire il file di origine MainFrm. cpp facendo doppio clic su esso nel **Esplora soluzioni**. Nella parte inferiore di tale file, aggiungere la definizione di metodo seguente:

   ```cpp
   CMFCShellTreeCtrl& CMainFrame::GetShellTreeCtrl()
   {
        return m_wndTree;
   }
   ```

1. A questo punto si aggiorna il `CMFCShellControlsView` classe per gestire il `WM_CREATE` messaggio di windows. Aprire il **Visualizzazione classi** finestra e selezionare il `CMFCShellControlsView` classe. Fare doppio clic e selezionare **proprietà**.

    Successivamente, nella **delle proprietà** finestra, fare clic sul **messaggi** icona. Scorrere verso il basso fino a individuare il `WM_CREATE` messaggio. Dall'elenco a discesa elenco accanto a `WM_CREATE`, selezionare  **\<Aggiungi > OnCreate**. Il comando crea un gestore di messaggi per noi e aggiorna automaticamente la mappa dei messaggi MFC.

   Nel `OnCreate` metodo, ora verrà creata la `CMFCShellListCtrl` oggetto. Trovare il `OnCreate` definizione di metodo in MFCShellControlsView.cpp il file di origine e sostituire l'implementazione con il codice seguente:

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

1. Ripetere il passaggio precedente, ma per il `WM_SIZE` messaggio. Ciò comporterà la visualizzazione applicazioni ridisegno ogni volta che un utente modifica la dimensione della finestra dell'applicazione. Sostituire la definizione per il `OnSize` metodo con il codice seguente:

    ```cpp
    void CMFCShellControlsView::OnSize(UINT nType, int cx, int cy)
    {
        CView::OnSize(nType, cx, cy);

        m_wndList.SetWindowPos(NULL, -1, -1, cx, cy,
            SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);
    }
    ```

1. L'ultimo passaggio consiste nel connettere il `CMFCShellTreeCtrl` e `CMFCShellListCtrl` oggetti utilizzando il [CMFCShellTreeCtrl::SetRelatedList](../mfc/reference/cmfcshelltreectrl-class.md#setrelatedlist) (metodo). Dopo aver chiamato `CMFCShellTreeCtrl::SetRelatedList`, il `CMFCShellListCtrl` visualizzerà automaticamente il contenuto dell'elemento selezionato nel `CMFCShellTreeCtrl`. Mettiamo gli oggetti di `OnActivateView` metodo, che viene sottoposto a override da [CView::OnActivateView](../mfc/reference/cview-class.md#onactivateview).

   Nel file di intestazione MFCShellControlsView.h, all'interno di `CMFCShellControlsView` dichiarazione di classe, aggiungere la dichiarazione di metodo seguente:

    ```cpp
    protected:
    virtual void OnActivateView(BOOL bActivate,
        CView* pActivateView,
        CView* pDeactiveView);
    ```

   Successivamente, aggiungere la definizione per il metodo al file di origine MFCShellControlsView.cpp:

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

   Poiché stiamo chiamando i metodi dal `CMainFrame` (classe), è necessario aggiungere un `#include` direttiva all'inizio del file di origine MFCShellControlsView.cpp:

    ```cpp
    #include "MainFrm.h"
    ```

1. Verificare che l'applicazione è stata creata correttamente per la creazione e la sua esecuzione. Per compilare l'applicazione, dai **compilare** dal menu **Compila soluzione**. Se l'applicazione viene compilata correttamente, eseguirla selezionando **Avvia debug** dalle **Debug** menu.

   Si noterà ora i dettagli per l'elemento selezionato nel `CMFCShellTreeCtrl` nel riquadro di visualizzazione. Quando si fa clic su un nodo nel `CMFCShellTreeCtrl`, il `CMFCShellListCtrl` verranno aggiornate automaticamente. Allo stesso modo, se si fa doppio clic in una cartella il `CMFCShellListCtrl`, il `CMFCShellTreeCtrl` devono essere aggiornati automaticamente.

   Fare doppio clic su qualsiasi elemento nel controllo albero o nel controllo elenco. Otterrai stesso menu di scelta rapida, come se si usava il reale **Esplora File**.

## <a name="next-steps"></a>Passaggi successivi

- La procedura guidata Creazione di una barra di Outlook con entrambi una **cartelle** riquadro e un **calendario** riquadro. Probabilmente non ha senso avere un **calendario** riquadro in un **Explorer** finestra, quindi rimuovere tale riquadro ora.

- Il `CMFCShellListCtrl` supporta la visualizzazione di file in modalità diverse, ad esempio **icone grandi**, **icone piccole**, **elenco**, e **dettagli**. Aggiornare l'applicazione per implementare questa funzionalità. Hint: vedere [esempi di Visual C++](../visual-cpp-samples.md).

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)
