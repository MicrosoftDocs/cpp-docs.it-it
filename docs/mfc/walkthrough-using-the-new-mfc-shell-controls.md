---
title: 'Procedura dettagliata: Utilizzo di MFC la nuova Shell controlli | Documenti Microsoft'
ms.custom: ''
ms.date: 11/04/2016
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
ms.openlocfilehash: f19939a50b5bdbf98d087450b6301a923651a433
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="walkthrough-using-the-new-mfc-shell-controls"></a>Procedura dettagliata: utilizzo dei nuovi controlli Shell MFC
In questa procedura dettagliata verrà creata un'applicazione simile a Esplora risorse. Si creerà una finestra che contiene due riquadri. Riquadro a sinistra conterrà un [CMFCShellTreeCtrl](../mfc/reference/cmfcshelltreectrl-class.md) oggetto che consente di visualizzare il Desktop in una visualizzazione gerarchica. Il riquadro di destra contiene un [oggetto CMFCShellListCtrl](../mfc/reference/cmfcshelllistctrl-class.md) che vengono mostrati i file nella cartella selezionata nel riquadro a sinistra.  
  
## <a name="prerequisites"></a>Prerequisiti  
 Questa procedura dettagliata si presuppone che siano impostati [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] utilizzare **impostazioni generali per lo sviluppo**. Se si utilizza un'impostazione di sviluppo diversi, alcune [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)] windows utilizzati in questa procedura dettagliata potrebbe non essere visualizzato per impostazione predefinita.  
  
### <a name="to-create-a-new-mfc-application-by-using-the-mfc-application-wizard"></a>Per creare una nuova applicazione MFC mediante la creazione guidata applicazione MFC  
  
1.  Utilizzare il **Creazione guidata applicazione MFC** per creare una nuova applicazione MFC. Per eseguire la procedura guidata, dal **File** menu selezionare **New**, quindi selezionare **progetto**. Il **nuovo progetto** verrà visualizzata la finestra di dialogo.  
  
2.  Nel **nuovo progetto** finestra di dialogo espandere il **Visual C++** nodo il **tipi di progetto** riquadro e selezionare **MFC**. Quindi, nel **modelli** riquadro, selezionare **applicazione MFC**. Digitare un nome per il progetto, ad esempio `MFCShellControls` e fare clic su **OK**. Il **Creazione guidata applicazione MFC** verrà visualizzato.  
  
3.  Nel **Creazione guidata applicazione MFC** la finestra di dialogo, fare clic su **Avanti**. Il **tipo di applicazione** verrà visualizzato il riquadro.  
  
4.  Nel **tipo di applicazione** riquadro, in **tipo di applicazione**, deselezionare il **documenti a schede** opzione. Selezionare quindi **singolo documento** e selezionare **Supporto architettura documento/visualizzazione**. In **progetto stile**selezionare **Visual Studio**e dal **dello stile di visualizzazione e colori** selezionare elenco a discesa **Office 2007 (tema blu)**. Lascia invariate tutte le altre opzioni. Fare clic su **Avanti** per visualizzare il **supporto documenti compositi** riquadro.  
  
5.  Nel **supporto documenti compositi** riquadro, selezionare **Nessuno**. Fare clic su **Avanti** per visualizzare il **stringhe modello documento** riquadro.  
  
6.  Non apportare alcuna modifica nel **stringhe modello documento** riquadro. Fare clic su **Avanti** per visualizzare il **supporto Database** riquadro.  
  
7.  Nel **supporto Database** riquadro, selezionare **Nessuno** poiché questa applicazione non utilizza un database. Fare clic su **Avanti** per visualizzare il **funzionalità dell'interfaccia utente** riquadro.  
  
8.  Nel **funzionalità dell'interfaccia utente** riquadro, assicurarsi che il **utilizzare una barra dei menu e barra degli strumenti** opzione è selezionata. Lascia invariate tutte le altre opzioni. Fare clic su **Avanti** per visualizzare il **funzionalità avanzate** riquadro.  
  
9. Nel **funzionalità avanzate** riquadro, in **funzionalità avanzate**, selezionare solo **controlli ActiveX** e **manifesto controllo comune**. In **riquadri frame avanzati**, selezionare solo la **riquadro di spostamento** opzione. In questo modo, la procedura guidata creare il riquadro a sinistra della finestra con un `CMFCShellTreeCtrl` già incorporate. Fare clic su **Avanti** per visualizzare il **classi generate** riquadro.  
  
10. Non occorre apportare alcuna modifica nel **classi generate** riquadro. Pertanto, fare clic su **fine** per creare un nuovo progetto MFC.  
  
11. Verificare che l'applicazione è stato creato correttamente per la creazione e l'esecuzione. Per compilare l'applicazione, dal **compilare** menu selezionare **Compila soluzione**. Se l'applicazione viene compilata correttamente, eseguire l'applicazione selezionando **Avvia debug** dal **Debug** menu.  
  
     La procedura guidata crea automaticamente un'applicazione che dispone di una barra dei menu standard, una barra degli strumenti standard, una barra di stato standard e una barra di Outlook a sinistra della finestra con un **cartelle** Vista e un **calendario** visualizzazione .  
  
### <a name="to-add-the-shell-list-control-to-the-document-view"></a>Per aggiungere il controllo elenco shell per la visualizzazione del documento  
  
1.  In questa sezione si aggiungerà un'istanza di `CMFCShellListCtrl` alla visualizzazione che ha creata la procedura guidata. Aprire il file di intestazione della visualizzazione facendo doppio clic su MFCShellControlsView.h nel **Esplora**.  
  
     Individuare il `#pragma once` direttiva nella parte superiore del file di intestazione. Immediatamente sottostante, aggiungere questo codice per includere il file di intestazione per `CMFCShellListCtrl`:  
  
 ```  
    #include <afxShellListCtrl.h>  
 ```  
  
     A questo punto aggiungere una variabile membro di tipo `CMFCShellListCtrl`. In primo luogo, è possibile individuare il seguente commento nel file di intestazione:  
  
 ' ' * / / Generati funzioni della mappa messaggi  
 ```  
  
     Immediately above that comment add this code:  
  
 ```  
    privato: oggetto CMFCShellListCtrl m_wndList;  
 ```  
  
2.  The **MFC Application Wizard** already created a `CMFCShellTreeCtrl` object in the `CMainFrame` class, but it is a protected member. We will access this object later. Therefore, create an accessor for it now. Open the MainFrm.h header file by double-clicking it in the **Solution Explorer**. Locate the following comment:  
  
 ``` *// Attributes  
 ```  
  
     Immediatamente sotto di esso, è possibile aggiungere la seguente dichiarazione di metodo:  
  
 ```  
    public: 
    CMFCShellTreeCtrl& GetShellTreeCtrl();

 ```  
  
     Successivamente, aprire il file di origine MainFrm.cpp facendo doppio clic su esso nel **Esplora**. Nella parte inferiore del file, aggiungere la definizione di metodo seguenti:  
  
 ```  
    CMFCShellTreeCtrl& CMainFrame::GetShellTreeCtrl()  
 {  
    return m_wndTree;  
 }  
 ```  
  
3.  Ora è aggiornare il `CMFCShellControlsView` classe per gestire il **WM_CREATE** messaggio di windows. Aprire il file di intestazione MFCShellControlsView.h e fare clic su questa riga di codice:  
  
 ```  
    class CMFCShellControlsView : public CView  
 ```  
  
     Successivamente, nel **proprietà** finestra, fare clic su di **messaggi** icona. Scorrere verso il basso fino a individuare il **WM_CREATE** messaggio. Nell'elenco a discesa elenco accanto alla **WM_CREATE**selezionare  **\<Aggiungi > OnCreate**. Viene creato un gestore di messaggi per noi e aggiorna automaticamente la mappa dei messaggi MFC.  
  
     Nel `OnCreate` metodo ora verrà creato il nostro `CMFCShellListCtrl` oggetto. Trovare il `OnCreate` definizione di metodo nel MFCShellControlsView.cpp file di origine e sostituire l'implementazione con il codice seguente:  
  
 ```  
    int CMFCShellControlsView::OnCreate(LPCREATESTRUCT lpCreateStruct)  
 {  
    if (CView::OnCreate(lpCreateStruct) == -1)  
    return -1;  
 
    CRect rectDummy (0,
    0,
    0,
    0);

    m_wndList.Create(WS_CHILD | WS_VISIBLE | LVS_REPORT,  
    rectDummy,
    this,
    1);

 
    return 0;  
 }  
 ```  
  
4.  Ripetere il passaggio precedente, ma per il **WM_SIZE** messaggio. In questo modo la visualizzazione di applicazioni da ricreare ogni volta che un utente modifica la dimensione della finestra dell'applicazione. Sostituire la definizione di `OnSize` (metodo) con il codice seguente:  
  
 ```  
    void CMFCShellControlsView::OnSize(UINT nType,
    int cx,
    int cy)  
 {  
    CView::OnSize(nType,
    cx,
    cy);

    m_wndList.SetWindowPos(NULL, -1, -1,
    cx,
    cy,  
    SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);

 }  
 ```  
  
5.  L'ultimo passaggio consiste nel connettere i `CMFCShellTreeCtrl` e `CMFCShellListCtrl` oggetti usando il [CMFCShellTreeCtrl::SetRelatedList](../mfc/reference/cmfcshelltreectrl-class.md#setrelatedlist) (metodo). Dopo aver chiamato questo metodo, il `CMFCShellListCtrl` visualizzerà automaticamente il contenuto dell'elemento selezionato nel `CMFCShellTreeCtrl`. Questa operazione è verrà eseguita nel `OnActivateView` metodo, che viene sottoposta a override da [CView::OnActivateView](../mfc/reference/cview-class.md#onactivateview).  
  
     Nel file di intestazione MFCShellControlsView.h, all'interno di `CMFCShellControlsView` dichiarazione di classe, aggiungere la seguente dichiarazione di metodo:  
  
 ```  
    protected: 
    virtual void OnActivateView(BOOL bActivate,  
    CView* pActivateView,  
    CView* pDeactiveView);

 ```  
  
     Successivamente, aggiungere la definizione di questo metodo al file di origine MFCShellControlsView.cpp:  
  
 ```  
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
  
     Poiché stiamo chiamando il metodi di `CMainFrame` (classe), è necessario aggiungere un `#include` direttiva all'inizio del file di origine MFCShellControlsView.cpp:  
  
 ```  
    #include "MainFrm.h"  
 ```  
  
6.  Verificare che l'applicazione è stato creato correttamente per la creazione e l'esecuzione. Per compilare l'applicazione, dal **compilare** menu selezionare **Compila soluzione**. Se l'applicazione viene compilata correttamente, eseguirla scegliendo **Avvia debug** dal **Debug** menu.  
  
     I dettagli per l'elemento selezionato dovrebbe il `CMFCShellTreeCtrl` nel riquadro di visualizzazione. Quando si fa clic su un nodo nel `CMFCShellTreeCtrl`, `CMFCShellListCtrl` verrà aggiornato automaticamente. Analogamente, se si fa doppio clic su una cartella nel `CMFCShellListCtrl`, il `CMFCShellTreeCtrl` devono essere aggiornati automaticamente.  
  
     A destra, fare clic su qualsiasi elemento nel controllo della struttura o nel controllo elenco. Si noti che ottenere stesso menu di scelta rapida come se si utilizza Esplora File reali.  
  
## <a name="next-steps"></a>Passaggi successivi  
  
-   Verrà creata una barra di Outlook con entrambi un **cartelle** riquadro e un **calendario** riquadro. Probabile che non ha senso disporre di un **calendario** riquadro in una finestra. Pertanto, rimuovere tale riquadro.  
  
-   Il `CMFCShellListCtrl` supporta la visualizzazione di file in modalità diverse, ad esempio **icone grandi**, **icone piccole**, **elenco**, e **dettagli**. Aggiornare l'applicazione per implementare questa funzionalità. Suggerimento: vedere [esempi di Visual C++](../visual-cpp-samples.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Procedure dettagliate](../mfc/walkthroughs-mfc.md)

