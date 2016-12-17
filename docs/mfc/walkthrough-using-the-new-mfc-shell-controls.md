---
title: "Procedura dettagliata: utilizzo dei nuovi controlli Shell MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "controlli Shell (MFC)"
ms.assetid: f0015caa-199d-4aaf-9501-5a239fce9095
caps.latest.revision: 14
caps.handback.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura dettagliata: utilizzo dei nuovi controlli Shell MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa procedura dettagliata si creerà un'applicazione che assomiglia a Esplora Risorse.  Si creerà una finestra che contiene due riquadri.  Il riquadro a sinistra conterrà un oggetto [CMFCShellTreeCtrl](../mfc/reference/cmfcshelltreectrl-class.md) che mostrerà una visualizzazione gerarchica del desktop.  Il riquadro a destra conterrà un oggetto [CMFCShellListCtrl](../mfc/reference/cmfcshelllistctrl-class.md) che mostrerà i file inclusi nella cartella selezionata nel riquadro di sinistra.  
  
## Prerequisiti  
 In questa spiegazione dettagliata si presuppone che sia impostato [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] per utilizzare le **Impostazioni generali per lo sviluppo**.  In caso si stia usando un'impostazione per lo sviluppo differente, alcune finestre di [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] che usiamo in questa procedura potrebbero non essere visualizzate per default.  
  
### Per creare una nuova applicazione MFC mediante la Creazione guidata applicazione MFC  
  
1.  Usare la **Creazione guidata applicazione MFC** per creare una nuova applicazione MFC.  Per eseguire la procedura guidata, dal menu **File** selezionare **Nuovo**, e quindi **Progetto**.  Verrà visualizzata la finestra di dialogo **Nuovo progetto**.  
  
2.  Nella finestra di dialogo **Nuovo progetto** espandere il nodo **Visual C\+\+** nel pannello **Tipi di progetto** e selezionare **MFC**.  In seguito, nel riquadro **Modelli** selezionare **Applicazione MFC**.  Digitare un nome per il progetto, ad esempio `MFCShellControls` e fare clic su **OK**.  Verrà visualizzata la **Creazione guidata applicazione MFC**.  
  
3.  Nella finestra di dialogo **Creazione guidata applicazione MFC** fare clic su **Avanti**.  Verrà visualizzato il riquadro **Tipo di applicazione**.  
  
4.  Nel riquadro **Tipo di applicazione**, in **Tipo di applicazione**, deselezionare l'opzione **Documenti a schede**.  Successivamente, selezionare **Documento singolo** e quindi **Documento\/Supporto architettura visualizzazione**.  In **Stile del progetto**, selezionare **Visual Studio** e dall'elenco a discesa **Stile di visualizzazione e colori** selezionare **Office 2007 \(tema blu\)**.  Lasciare invariate le altre opzioni.  Fare clic su **Avanti** per visualizzare il riquadro **Supporto documenti compositi**.  
  
5.  Nel riquadro **Supporto documenti compositi**, selezionare **Nessuno**.  Fare clic su **Avanti** per visualizzare il riquadro **Stringhe di modello del documento**.  
  
6.  Non apportare alcune modifica al riquadro **Stringhe di modello del documento**.  Fare clic su **Avanti** per visualizzare il riquadro **Supporto database**.  
  
7.  Nel riquadro **Supporto database** selezionare **Nessuno** affinché l'applicazione non utilizzi un database.  Fare clic su **Avanti** per visualizzare il riquadro **Funzionalità interfaccia utente**.  
  
8.  Nel riquadro **Funzionalità interfaccia utente**, assicurarsi che sia selezionata l'opzione **Usa barra dei menu e barra degli strumenti**.  Lasciare invariate le altre opzioni.  Fare clic su **Avanti** per visualizzare il riquadro **Funzionalità avanzate**.  
  
9. Nel riquadro **Funzionalità avanzate**, in **Funzionalità avanzate**, selezionare solo **Controlli ActiveX** e **Manifesto controlli comuni**.  In **Riquadri frame avanzati**, selezionare solamente l'opzione **Riquadro di navigazione**.  In questo modo la procedura guidata creerà il riquadro alla sinistra della finestra con `CMFCShellTreeCtrl` già incorporato.  Fare clic su **Avanti** per visualizzare il riquadro **Classi generate**.  
  
10. Non si sta apportando alcuna modifica al riquadro **Classi generate**.  Quindi, fare clic su **Fine** per creare il nuovo progetto MFC.  
  
11. Verificare che l'applicazione sia stata creata correttamente compilandola ed eseguendola.  Per compilare l'applicazione selezionare **Compila soluzione** dal menu **Compila**.  Se l'applicazione viene compilata correttamente, eseguirla facendo clic su **Avvia debug** dal menu **Debug**.  
  
     La procedura guidata crea automaticamente un'applicazione con una barra dei menu standard, una barra degli strumenti standard, una barra di stato standard e una barra di Outlook a sinistra della finestra con una visualizzazione delle **Cartelle** e un **Calendario**.  
  
### Per aggiungere il controllo dell'elenco della shell alla visualizzazione del documento  
  
1.  In questa sezione, si aggiungerà un'istanza di `CMFCShellListCtrl` alla visualizzazione creata dalla procedura guidata.  Aprire il file di intestazione di visualizzazione facendo doppio clic su MFCShellControlsView.h in **Esplora soluzioni**.  
  
     Individuare la direttiva `#pragma once` nei pressi dell'inizio del file di intestazione.  Immediatamente al di sotto di esso aggiungere il codice seguente per includere il file di intestazione per `CMFCShellListCtrl`:  
  
    ```  
    #include <afxShellListCtrl.h>  
    ```  
  
     Aggiungere una variabile membro di tipo `CMFCShellListCtrl`.  Innanzitutto, individuare il commento seguente nel file di intestazione:  
  
    ```  
    // Generated message map functions  
    ```  
  
     Immediatamente sopra tale commento aggiungere il codice seguente:  
  
    ```  
    private:  
        CMFCShellListCtrl m_wndList;  
    ```  
  
2.  La **Creazione guidata applicazione MFC** ha già creato un oggetto `CMFCShellTreeCtrl` nella classe `CMainFrame`, ma è un membro protetto.  Accederemo più avanti a questo oggetto.  Di conseguenza, creare ora una funzione di accesso per esso.  Aprire il file di intestazione MainFrm.h facendovi doppio clic in **Esplora soluzioni**.  Individuare il commento seguente:  
  
    ```  
    // Attributes  
    ```  
  
     Immediatamente al di sotto, aggiungere la seguente dichiarazione di metodo:  
  
    ```  
    public:  
        CMFCShellTreeCtrl& GetShellTreeCtrl();  
    ```  
  
     Successivamente, aprire il file sorgente MainFrm.cpp facendovi doppio clic in **Esplora soluzioni**.  Nella parte inferiore del file, aggiungere la seguente definizione di metodo:  
  
    ```  
    CMFCShellTreeCtrl& CMainFrame::GetShellTreeCtrl()  
    {  
        return m_wndTree;  
    }  
    ```  
  
3.  Ora aggiorniamo la classe `CMFCShellControlsView` per gestire il messaggio di windows **WM\_CREATE**.  Aprire il file di intestazione MFCShellControlsView.h e fare clic sulla seguente riga di codice:  
  
    ```  
    class CMFCShellControlsView : public CView  
    ```  
  
     Successivamente, nella finestra **Proprietà** fare clic sull'icona **Messaggi**.  Scorrere fino al messaggio **WM\_CREATE**.  Nell'elenco a discesa accanto a **WM\_CREATE**, selezionare **\<Add\> OnCreate**.  In questo modo viene creato un gestore di messaggi e la mappa dei messaggi MFC si aggiorna automaticamente.  
  
     Nel metodo `OnCreate` verrà ora creato l'oggetto `CMFCShellListCtrl`.  Individuare la definizione del metodo `OnCreate` nel file sorgente MFCShellControlsView.cpp e sostituirne l'implementazione con il codice seguente:  
  
    ```  
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
  
4.  Ripetere il passaggio precedente per il messaggio **\-WM\_SIZE**.  In questo modo la visualizzazione dell'applicazione verrà ridisegnata ogni volta che un utente modifica la dimensione della finestra dell'applicazione.  Sostituire la definizione per il metodo `OnSize` con il codice seguente:  
  
    ```  
    void CMFCShellControlsView::OnSize(UINT nType, int cx, int cy)  
    {  
        CView::OnSize(nType, cx, cy);  
        m_wndList.SetWindowPos(NULL, -1, -1, cx, cy,  
            SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);  
    }  
    ```  
  
5.  L'ultimo passaggio consiste nel connettere gli oggetti `CMFCShellListCtrl` e `CMFCShellTreeCtrl` utilizzando il metodo [CMFCShellTreeCtrl::SetRelatedList](../Topic/CMFCShellTreeCtrl::SetRelatedList.md).  Dopo avere invocato questo metodo, `CMFCShellListCtrl` visualizzerà automaticamente il contenuto dell'elemento selezionato in `CMFCShellTreeCtrl`.  Faremo questo nel metodo `OnActivateView`, il quale è sottoposto a override da [CView::OnActivateView](../Topic/CView::OnActivateView.md).  
  
     Nel file di intestazione MFCShellControlsView.h, nella dichiarazione di classe `CMFCShellControlsView`, aggiungere la seguente dichiarazione di metodo:  
  
    ```  
    protected:  
        virtual void OnActivateView(BOOL bActivate,  
            CView* pActivateView,  
            CView* pDeactiveView);  
    ```  
  
     Successivamente, aggiungere la definizione di questo metodo al file sorgente MFCShellControlsView.cpp:  
  
    ```  
    void CMFCShellControlsView::OnActivateView(BOOL bActivate,  
        CView* pActivateView,  
        CView* pDeactiveView)   
    {  
        if (bActivate && AfxGetMainWnd() != NULL)  
        {  
            ((CMainFrame*)AfxGetMainWnd())->GetShellTreeCtrl().SetRelatedList(&m_wndList);  
        }  
  
        CView::OnActivateView(bActivate, pActivateView, pDeactiveView);  
    }  
    ```  
  
     Dal momento che si sta invocando dei metodi dalla classe `CMainFrame`, è necessario aggiungere una direttiva `#include` all'inizio del file sorgente MFCShellControlsView.cpp:  
  
    ```  
    #include "MainFrm.h"  
    ```  
  
6.  Verificare che l'applicazione sia stata creata correttamente compilandola ed eseguendola.  Per compilare l'applicazione selezionare **Compila soluzione** dal menu **Compila**.  Se l'applicazione viene compilata correttamente, eseguirla selezionando **Avvia debug** dal menu **Debug**.  
  
     Ora dovrebbe essere possibile visualizzare i dettagli per l'elemento selezionato in `CMFCShellTreeCtrl` nel riquadro di visualizzazione.  Quando si fa clic su un nodo in `CMFCShellTreeCtrl`, `CMFCShellListCtrl` verrà automaticamente aggiornato.  Allo stesso modo, se si fa doppio clic su una cartella in `CMFCShellListCtrl`, `CMFCShellTreeCtrl` dovrebbe venire aggiornato automaticamente.  
  
     Fare clic con il pulsante destro del mouse su qualsiasi elemento nel controllo ad albero o nel controllo ad elenco.  Notare che si ottiene lo stesso menu di scelta rapida di quando si utilizza il vero Esplora file.  
  
## Passaggi successivi  
  
-   La procedura guidata ha creato una barra di Outlook con sia un riquadro **Cartelle** che un riquadro **Calendario**.  Probabilmente non ha senso disporre di un riquadro **Calendario** in una finestra di esplorazione.  Pertanto, rimuovere tale riquadro.  
  
-   `CMFCShellListCtrl` Supporta i file di visualizzazione in differenti modalità, come **Icone grandi**, **Icone piccole**, **Elenco** e **Dettagli**.  Aggiornare l'applicazione per implementare questa funzionalità.  Suggerimento: consultare [Esempi di Visual C\+\+](../top/visual-cpp-samples.md).  
  
## Vedere anche  
 [Procedure dettagliate](../mfc/walkthroughs-mfc.md)