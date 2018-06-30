---
title: 'Procedura dettagliata: Utilizzo di MFC nuova Shell controlli | Documenti Microsoft'
ms.custom: ''
ms.date: 06/28/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- shell controls (MFC)
ms.assetid: f0015caa-199d-4aaf-9501-5a239fce9095
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: eebfc98af109bbcdb0e5c1b3b2b3bf517dd8b076
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122098"
---
# <a name="walkthrough-using-the-new-mfc-shell-controls"></a>Procedura dettagliata: utilizzo dei nuovi controlli Shell MFC

In questa procedura dettagliata verrà creata un'applicazione simile a Esplora risorse. Si creerà una finestra che contiene due riquadri. Riquadro di sinistra conterrà un [CMFCShellTreeCtrl](../mfc/reference/cmfcshelltreectrl-class.md) oggetto che consente di visualizzare il Desktop in una visualizzazione gerarchica. Il riquadro di destra contiene un [oggetto CMFCShellListCtrl](../mfc/reference/cmfcshelllistctrl-class.md) che vengono mostrati i file nella cartella selezionata nel riquadro sinistro.

## <a name="prerequisites"></a>Prerequisiti

Questa procedura dettagliata si presuppone che siano impostati [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] da utilizzare **delle impostazioni di sviluppo generale**. Se si utilizza un'impostazione di sviluppo diversi, alcuni [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] windows utilizzati in questa procedura dettagliata potrebbe non essere visualizzato per impostazione predefinita.

### <a name="to-create-a-new-mfc-application-by-using-the-mfc-application-wizard"></a>Per creare una nuova applicazione MFC mediante la creazione guidata applicazione MFC

1. Usare la **Creazione guidata applicazione MFC** per creare una nuova applicazione MFC. Per eseguire la procedura guidata, dal **File** dal menu **New**e quindi selezionare **progetto**. Il **nuovo progetto** verrà visualizzata la finestra di dialogo.

2. Nel **nuovo progetto** finestra di dialogo espandere il **Visual C++** nodo il **i tipi di progetto** riquadro, quindi selezionare **MFC**. Quindi, nella **modelli** riquadro, selezionare **applicazione MFC**. Digitare un nome per il progetto, ad esempio `MFCShellControls` e fare clic su **OK**. Il **Creazione guidata applicazione MFC** verranno visualizzati.

3. Nel **Creazione guidata applicazione MFC** finestra di dialogo, fare clic su **successivo**. Il **tipo di applicazione** verrà visualizzato il riquadro.

4. Nel **tipo di applicazione** riquadro, in **tipo di applicazione**, deselezionare la **documenti a schede** opzione. Successivamente, selezionare **documento singolo** e selezionare **Supporto architettura documento/visualizzazione**. Sotto **progetto stile**, selezionare **Visual Studio**e dal **dello stile di visualizzazione e colori** selezione elenco a discesa **Office 2007 (tema blu)**. Lasciare tutte le altre opzioni così come sono. Fare clic su **successivo** per visualizzare il **supporto documenti compositi** riquadro.

5. Nel **supporto documenti compositi** riquadro, selezionare **Nessuno**. Fare clic su **successivo** per visualizzare il **stringhe modello documento** riquadro.

6. Non apportare eventuali modifiche per il **stringhe modello documento** riquadro. Fare clic su **successivo** per visualizzare il **supporto per Database** riquadro.

7. Nel **supporto per Database** riquadro, selezionare **Nessuno** poiché questa applicazione non utilizza un database. Fare clic su **successivo** per visualizzare il **funzionalità dell'interfaccia utente** riquadro.

8. Nel **funzionalità dell'interfaccia utente** riquadro, assicurarsi che il **usare una barra dei menu e barra degli strumenti** opzione è selezionata. Lasciare tutte le altre opzioni così come sono. Fare clic su **successivo** per visualizzare il **funzionalità avanzate** riquadro.

9. Nel **funzionalità avanzate** riquadro, in **funzionalità avanzate**, selezionare solo **controlli ActiveX** e **manifesto controllo comune**. Sotto **riquadri frame avanzati**, selezionare solo le **riquadro di spostamento** opzione. In questo modo, la procedura guidata creare il riquadro a sinistra della finestra con un `CMFCShellTreeCtrl` già incorporate. Fare clic su **successivo** per visualizzare il **classi generate mediante** riquadro.

10. Non verrà apportare modifiche per il **classi generate mediante** riquadro. Pertanto, fare clic su **fine** per creare un nuovo progetto MFC.

11. Verificare che l'applicazione è stata creata correttamente, la creazione e l'esecuzione. Per compilare l'applicazione, dal **compilare** dal menu **Compila soluzione**. Se l'applicazione viene compilata correttamente, eseguire l'applicazione selezionando **Avvia debug** dal **Debug** menu.

   La procedura guidata crea automaticamente un'applicazione con una barra dei menu standard, una barra degli strumenti standard, una barra di stato standard e una barra di Outlook a sinistra della finestra con un **cartelle** visualizzazione e una **calendario** vista .

### <a name="to-add-the-shell-list-control-to-the-document-view"></a>Per aggiungere il controllo di riepilogo della shell per la visualizzazione del documento

1. In questa sezione si aggiungerà un'istanza di `CMFCShellListCtrl` alla visualizzazione che ha creata la procedura guidata. Aprire il file di intestazione visualizzazione facendo doppio clic su MFCShellControlsView.h nel **Esplora soluzioni**.

   Individuare il `#pragma once` direttiva nella parte superiore del file di intestazione. Immediatamente sottostante, aggiungere questo codice per includere il file di intestazione per `CMFCShellListCtrl`:

   ```cpp
   #include <afxShellListCtrl.h>
   ```

   A questo punto aggiungere una variabile membro di tipo `CMFCShellListCtrl`. In primo luogo, individuare il seguente commento nel file di intestazione:

   ```cpp
   // Generated message map functions
   ```

   Immediatamente sopra il commento aggiungere questo codice:

   ```cpp
   private:
   CMFCShellListCtrl m_wndList;
   ```

2. Il **Creazione guidata applicazione MFC** già creato una `CMFCShellTreeCtrl` oggetto la `CMainFrame` (classe), ma è un membro protetto. In un secondo momento si accederà questo oggetto. Pertanto, creare una funzione di accesso per tale ora. Aprire il file di intestazione MainFrm facendo doppio clic su esso nel **Esplora soluzioni**. Individuare il seguente commento:

   ```cpp
   // Attributes
   ```

   Immediatamente sotto di essa, Aggiungi la seguente dichiarazione di metodo:

   ```cpp
   public:
       CMFCShellTreeCtrl& GetShellTreeCtrl();
   ```

   Successivamente, aprire il file di origine MainFrm. cpp per aprirla nel **Esplora soluzioni**. Nella parte inferiore del file, aggiungere la definizione di metodo seguenti:

   ```cpp
   CMFCShellTreeCtrl& CMainFrame::GetShellTreeCtrl()
   {
        return m_wndTree;
   }
   ```

3. A questo punto viene aggiornato il `CMFCShellControlsView` classe per gestire i **WM_CREATE** messaggio di windows. Aprire il file di intestazione MFCShellControlsView.h e fare clic su questa riga di codice:

    ```cpp
    class CMFCShellControlsView : public CView
    ```

   Successivamente, nella **delle proprietà** finestra, fare clic sul **messaggi** icona. Scorrere verso il basso fino a individuare il **WM_CREATE** messaggio. Dall'elenco a discesa accanto all'elenco **WM_CREATE**, selezionare  **\<Aggiungi > OnCreate**. Verrà creato un gestore di messaggi per noi, aggiorna automaticamente la mappa dei messaggi MFC.

   Nel `OnCreate` metodo ora verrà creato il nostro `CMFCShellListCtrl` oggetto. Trovare il `OnCreate` definizione del metodo in MFCShellControlsView.cpp il file di origine e sostituire l'implementazione con il codice seguente:

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

4. Ripetere il passaggio precedente, ma per il **WM_SIZE** messaggio. Ciò causerà la visualizzazione di applicazioni da ricreare ogni volta che un utente modifica la dimensione della finestra dell'applicazione. Sostituire la definizione per il `OnSize` (metodo) con il codice seguente:

    ```cpp
    void CMFCShellControlsView::OnSize(UINT nType, int cx, int cy)
    {
        CView::OnSize(nType, cx, cy);

        m_wndList.SetWindowPos(NULL, -1, -1, cx, cy,
            SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);
    }
    ```

5. L'ultimo passaggio consiste nel connettere i `CMFCShellTreeCtrl` e `CMFCShellListCtrl` oggetti utilizzando il [CMFCShellTreeCtrl::SetRelatedList](../mfc/reference/cmfcshelltreectrl-class.md#setrelatedlist) (metodo). Dopo aver chiamato questo metodo, il `CMFCShellListCtrl` visualizzerà automaticamente il contenuto dell'elemento selezionato nel `CMFCShellTreeCtrl`. Verrà prepariamo queste `OnActivateView` metodo, che viene sottoposta a override da [CView::OnActivateView](../mfc/reference/cview-class.md#onactivateview).

   Nel file di intestazione MFCShellControlsView.h all'interno di `CMFCShellControlsView` dichiarazione di classe, aggiungere la dichiarazione di metodo seguenti:

    ```cpp
    protected:
    virtual void OnActivateView(BOOL bActivate,
        CView* pActivateView,
        CView* pDeactiveView);
    ```

   Successivamente, aggiungere la definizione di questo metodo al file di origine MFCShellControlsView.cpp:

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

   Poiché è in corso la chiamata di metodi dal `CMainFrame` (classe), è necessario aggiungere un `#include` direttiva all'inizio del file di origine MFCShellControlsView.cpp:

    ```cpp
    #include "MainFrm.h"
    ```

6. Verificare che l'applicazione è stata creata correttamente, la creazione e l'esecuzione. Per compilare l'applicazione, dal **compilare** dal menu **Compila soluzione**. Se l'applicazione viene compilata correttamente, eseguirla scegliendo **Avvia debug** dal **Debug** menu.

   I dettagli per l'elemento selezionato dovrebbe essere visualizzato il `CMFCShellTreeCtrl` nel riquadro di visualizzazione. Quando si fa clic su un nodo nel `CMFCShellTreeCtrl`, il `CMFCShellListCtrl` verranno aggiornate automaticamente. Analogamente, se si fa doppio clic su una cartella nel `CMFCShellListCtrl`, il `CMFCShellTreeCtrl` devono essere aggiornati automaticamente.

   Pulsante destro del mouse su qualsiasi elemento nel controllo albero o nel controllo elenco. Si noti come ottenere il menu di scelta rapida stesso come se si utilizza Esplora File reale.

## <a name="next-steps"></a>Passaggi successivi

- La procedura guidata create una barra di Outlook con un **cartelle** riquadro e un **calendario** riquadro. Probabile che non ha senso disporre di un **calendario** riquadro in una finestra. Pertanto, rimuovere tale riquadro.

- Il `CMFCShellListCtrl` supporta la visualizzazione di file in modalità diverse, ad esempio **icone grandi**, **icone piccole**, **elenco**, e **dettagli**. Aggiornare l'applicazione per implementare questa funzionalità. Suggerimento: vedere [esempi di Visual C++](../visual-cpp-samples.md).

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)  
