---
title: "Procedura dettagliata: aggiunta di animazione a un progetto MFC | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "animazione [MFC]"
  - "MFC, animazione"
ms.assetid: 004f832c-9fd5-4f88-9ca9-ae65dececdc2
caps.latest.revision: 18
caps.handback.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura dettagliata: aggiunta di animazione a un progetto MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa procedura dettagliata viene illustrato come aggiungere un oggetto animato di base a un progetto di libreria Microsoft Foundation Class \(MFC\) in Visual C\+\+.  
  
 Nella procedura dettagliata viene descritto come eseguire le attività elencate di seguito:  
  
-   Creare un'applicazione MFC.  
  
-   Aggiungere un menu, quindi i comandi per avviare e arrestare un'animazione.  
  
-   Creare gestori per i comandi di avvio e arresto.  
  
-   Aggiungere un oggetto animato al progetto.  
  
-   Centrare l'oggetto animato nella finestra.  
  
-   Verificare i risultati.  
  
 [!INCLUDE[note_settings_general](../mfc/includes/note_settings_general_md.md)]  
  
## Prerequisiti  
 Per completare la procedura dettagliata, è necessario avere Visual Studio.  
  
### Per creare un'applicazione MFC  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi scegliere **Progetto**.  
  
2.  Nella finestra di dialogo **Nuovo progetto** espandere **Visual C\+\+** nel riquadro sinistro **Modelli installati**, quindi selezionare **MFC**.  Nel riquadro centrale selezionare **Applicazione MFC**.  Nella casella **Nome** digitare `MFCAnimationWalkthrough`.  Scegliere **OK**.  
  
3.  Nella finestra di dialogo **Creazione guidata applicazione MFC** verificare che **Tipo di applicazione** sia impostata su **Documenti multipli**, **Stile del progetto** su **Visual Studio** e che l'opzione **supporto per l'architettura documento\/visualizzazione** sia selezionata.  Scegliere **Fine**.  
  
### Per aggiungere un menu, quindi i comandi per avviare e arrestare un'animazione  
  
1.  Scegliere **Altre finestre** dal menu **Visualizza**, quindi **Visualizzazione risorse**.  
  
2.  In **Visualizzazione risorse**, passare alla cartella **Menu** e aprirla.  Fare doppio clic sulla risorsa `IDR_MFCAnimationWalTYPE` per aprirla per la modifica.  
  
3.  Nella barra dei menu, nella casella **Digitare il testo qui**, digitare `A&nimazione` per creare un menu Animazione.  
  
4.  In **Animazione**, digitare `Inizio &Avanti` nella casella **Digitare il testo qui** per creare un comando Inizio in Avanti.  
  
5.  In **Inizio in Avanti**, digitare `Inizio &Indietro` nella casella **Digitare il testo qui**.  
  
6.  In **Inizio indietro**, digitare `A&rresta` nella casella **Digitare il testo qui** per creare un comando Arresta.  
  
7.  Salvare, quindi chiudere MFCAnimationWalkthrough.rc.  
  
8.  In **Esplora soluzioni** fare doppio clic su MainFrm.cpp per aprirlo per la modifica.  Nel metodo `CMainFrame::OnCreate` individuare la sezione che include diverse chiamate a `lstBasicCommands.AddTail`.  Subito dopo tale sezione, aggiungere il codice riportato di seguito.  
  
    ```  
    lstBasicCommands.AddTail(ID_ANIMATION_STARTFORWARD);  
    lstBasicCommands.AddTail(ID_ANIMATION_STARTBACKWARD);  
    lstBasicCommands.AddTail(ID_ANIMATION_STOP);  
    ```  
  
9. Salvare e chiudere il file.  
  
### Per creare gestori per i comandi di avvio e arresto  
  
1.  Scegliere **Creazione guidata classe** dal menu **Progetto**.  
  
2.  Nella **Creazione guidata classe MFC** selezionare `CMFCAnimationWalkthroughView` in **Nome classe**.  
  
3.  Nella scheda **Comandi** selezionare `ID_ANIMATION_STARTFORWARD` nella casella **ID oggetto**, quindi nella casella **Messaggi**, selezionare `COMMAND`.  Fare clic su **Aggiungi gestore**.  
  
4.  Nella finestra di dialogo **Aggiungi funzione membro** scegliere **OK**.  
  
5.  Nella casella **ID oggetto** selezionare `ID_ANIMATION_STARTBACKWARD`, quindi nella casella **Messaggi** selezionare `COMMAND`.  Fare clic su **Aggiungi gestore**.  
  
6.  Nella finestra di dialogo **Aggiungi funzione membro** scegliere **OK**.  
  
7.  Nella casella **ID oggetto** selezionare `ID_ANIMATION_STOP`, quindi nella casella **Messaggi** selezionare `COMMAND`.  Fare clic su **Aggiungi gestore**, quindi scegliere **OK**.  
  
8.  Nella finestra di dialogo **Aggiungi funzione membro** scegliere **OK**.  
  
9. In **Creazione guidata classe MFC** scegliere **OK**.  
  
10. Salvare MFCAnimationWalkthroughView.cpp, aperto nell'editor, senza chiuderlo.  
  
### Per aggiungere un oggetto animato al progetto  
  
1.  In Esplora soluzioni fare doppio clic su MFCAnimationWalkthroughView.h per aprirlo per la modifica.  Subito prima della definizione della classe `CMFCAnimationWalkthroughView` aggiungere il codice seguente per creare un controller di animazione personalizzato per la gestione dei conflitti di pianificazione con l'oggetto di animazione.  
  
    ```  
    class CCustomAnimationController : public CAnimationController  
    {  
    public:  
        CCustomAnimationController()  
        {  
        }  
  
        virtual BOOL OnHasPriorityTrim(CAnimationGroup* pGroupScheduled, CAnimationGroup* pGroupNew, UI_ANIMATION_PRIORITY_EFFECT priorityEffect)  
        {  
            return TRUE;  
        }  
    };  
    ```  
  
2.  Alla fine della classe `CMFCAnimationWalkthroughView` aggiungere il codice riportato di seguito.  
  
    ```  
    CCustomAnimationController m_animationController;  
    CAnimationColor m_animationColor;   
    CAnimationRect m_animationRect;  
    ```  
  
3.  Dopo la riga `DECLARE_MESSAGE_MAP()` aggiungere il codice riportato di seguito.  
  
    ```  
    void Animate(BOOL bDirection);  
    ```  
  
4.  Salvare e chiudere il file.  
  
5.  All'inizio del file MFCAnimationWalkthroughView.cpp, dopo le istruzioni `#include` ma prima di qualsiasi metodo della classe, aggiungere il codice riportato di seguito.  
  
    ```  
    static int nAnimationGroup = 0;  
    static int nInfoAreaHeight = 40;  
    ```  
  
6.  Alla fine del costruttore per `CMFCAnimationWalkthroughView` aggiungere il codice riportato di seguito.  
  
    ```  
    m_animationController.EnableAnimationTimerEventHandler();  
    m_animationController.EnablePriorityComparisonHandler(UI_ANIMATION_PHT_TRIM);  
  
    m_animationColor = RGB(255, 255, 255);  
    m_animationRect = CRect(0, 0, 0, 0);  
  
    m_animationColor.SetID(-1, nAnimationGroup);  
    m_animationRect.SetID(-1, nAnimationGroup);  
  
    m_animationController.AddAnimationObject(&m_animationColor);  
    m_animationController.AddAnimationObject(&m_animationRect);  
    ```  
  
7.  Individuare il metodo `CAnimationWalthroughView::PreCreateWindow`, quindi sostituirlo con il codice riportato di seguito.  
  
    ```  
    BOOL CMFCAnimationWalkthroughView::PreCreateWindow(CREATESTRUCT& cs)  
    {  
        // TODO: Modify the Window class or styles here by modifying  
        //  the CREATESTRUCT cs  
  
        m_animationController.SetRelatedWnd(this);  
        return CView::PreCreateWindow(cs);  
    }  
    ```  
  
8.  Individuare il metodo `CAnimationWalkthroughView::OnDraw`, quindi sostituirlo con il codice riportato di seguito.  
  
    ```  
    void CMFCAnimationWalkthroughView::OnDraw(CDC* pDC)  
    {  
        CMFCAnimationWalkthroughDoc* pDoc = GetDocument();  
        ASSERT_VALID(pDoc);  
        if (!pDoc)  
            return;  
  
        // TODO: add draw code for native data here  
        CMemDC dcMem(*pDC, this);  
        CDC& dc = dcMem.GetDC();  
  
        CRect rect;  
        GetClientRect(rect);  
  
        dc.FillSolidRect(rect, GetSysColor(COLOR_WINDOW));  
  
        CString strRGB;  
        strRGB.Format(_T("Fill Color is: %d; %d; %d"), GetRValue(m_animationColor), GetGValue(m_animationColor), GetBValue(m_animationColor));  
  
        dc.DrawText(strRGB, rect, DT_CENTER);  
        rect.top += nInfoAreaHeight;  
  
        CBrush br;  
  
        br.CreateSolidBrush(m_animationColor);  
        CBrush* pBrushOld = dc.SelectObject(&br);  
  
        dc.Rectangle((CRect)m_animationRect);  
        dc.SelectObject(pBrushOld);  
    }  
    ```  
  
9. Alla fine del file, aggiungere il codice riportato di seguito.  
  
    ```  
    void CMFCAnimationWalkthroughView::Animate(BOOL bDirection)  
    {  
        static UI_ANIMATION_SECONDS duration = 3;  
        static DOUBLE dblSpeed = 35.;  
        static BYTE nStartColor = 50;  
        static BYTE nEndColor = 255;  
  
        BYTE nRedColorFinal = bDirection ? nStartColor : nEndColor;  
        BYTE nGreenColorFinal = bDirection ? nStartColor : nEndColor;  
        BYTE nBlueColorFinal = bDirection ? nStartColor : nEndColor;  
  
        CLinearTransition* pRedTransition = new CLinearTransition(duration, (DOUBLE)nRedColorFinal);  
        CSmoothStopTransition* pGreenTransition = new CSmoothStopTransition(duration, (DOUBLE)nGreenColorFinal);  
        CLinearTransitionFromSpeed* pBlueTransition = new CLinearTransitionFromSpeed(dblSpeed, (DOUBLE)nBlueColorFinal);  
  
        m_animationColor.AddTransition(pRedTransition, pGreenTransition, pBlueTransition);  
  
        CRect rectClient;  
        GetClientRect(rectClient);  
        rectClient.top += nInfoAreaHeight;  
  
        int nLeftFinal = bDirection ? rectClient.left : rectClient.CenterPoint().x;  
        int nTopFinal = bDirection ? rectClient.top : rectClient.CenterPoint().y;  
        int nRightFinal = bDirection ? rectClient.right : rectClient.CenterPoint().x;  
        int nBottomFinal = bDirection ? rectClient.bottom : rectClient.CenterPoint().y;  
  
        CLinearTransition* pLeftTransition = new CLinearTransition(duration, nLeftFinal);  
        CLinearTransition* pTopTransition = new CLinearTransition(duration, nTopFinal);  
        CLinearTransition* pRightTransition = new CLinearTransition(duration, nRightFinal);  
        CLinearTransition* pBottomTransition = new CLinearTransition(duration, nBottomFinal);  
  
        m_animationRect.AddTransition(pLeftTransition, pTopTransition, pRightTransition, pBottomTransition);  
  
        CBaseKeyFrame* pKeyframeStart = CAnimationController::GetKeyframeStoryboardStart();  
        CKeyFrame* pKeyFrameEnd = m_animationController.CreateKeyframe(nAnimationGroup, pBlueTransition);  
  
        pLeftTransition->SetKeyframes(pKeyframeStart, pKeyFrameEnd);  
        pTopTransition->SetKeyframes(pKeyframeStart, pKeyFrameEnd);  
        pRightTransition->SetKeyframes(pKeyframeStart, pKeyFrameEnd);  
        pBottomTransition->SetKeyframes(pKeyframeStart, pKeyFrameEnd);  
  
        m_animationController.AnimateGroup(nAnimationGroup);  
    }  
    ```  
  
10. Scegliere **Creazione guidata classe** dal menu **Progetto**.  
  
11. Nella **Creazione guidata classe MFC** selezionare `CMFCAnimationWalkthroughView` in **Nome classe**.  
  
12. Nella scheda **Messaggi** selezionare `WM_ERASEBKGND` nella casella **Messaggi**, fare clic su **Aggiungi gestore**, quindi scegliere **OK**.  
  
13. In MFCAnimationWalkthroughView.cpp sostituire l'implementazione di `OnEraseBkgnd` con il codice riportato di seguito per ridurre lo sfarfallio nell'oggetto animato mentre viene ridisegnato.  
  
    ```  
    BOOL CMFCAnimationWalkthroughView::OnEraseBkgnd(CDC* /*pDC*/)  
    {  
        return TRUE;  
    }  
    ```  
  
14. Sostituire l'implementazione di `CMFCAnimationWalkthroughView::OnAnimationStartforward`, `CMFCAnimationWalkthroughView::OnAnimationStartbackward` e `CMFCAnimationWalkthroughView::OnAnimationStop` con il codice riportato di seguito.  
  
    ```  
    void CMFCAnimationWalkthroughView::OnAnimationStartforward()  
    {  
        Animate(TRUE);  
    }  
  
    void CMFCAnimationWalkthroughView::OnAnimationStartbackward()  
    {  
        Animate(FALSE);  
    }  
  
    void CMFCAnimationWalkthroughView::OnAnimationStop()  
    {  
        IUIAnimationManager* pManager = m_animationController.GetUIAnimationManager();  
        if (pManager != NULL)  
        {  
            pManager->AbandonAllStoryboards();  
        }  
    }  
  
    ```  
  
15. Salvare e chiudere il file.  
  
### Per centrare l'oggetto animato nella finestra.  
  
1.  In **Esplora soluzioni** fare doppio clic su MFCAnimationWalkthroughView.h per aprirlo per la modifica.  Alla fine della classe `CMFCAnimationWalkthroughView`, subito dopo la definizione di `m_animationRect`, aggiungere il codice riportato di seguito.  
  
    ```  
    BOOL m_bCurrentDirection;  
    ```  
  
2.  Salvare e chiudere il file.  
  
3.  Scegliere **Creazione guidata classe** dal menu **Progetto**.  
  
4.  Nella **Creazione guidata classe MFC** selezionare `CMFCAnimationWalkthroughView` in **Nome classe**.  
  
5.  Nella scheda **Messaggi** selezionare `WM_SIZE` nella casella **Messaggi**, fare clic su **Aggiungi gestore**, quindi scegliere **OK**.  
  
6.  In MFCAnimationWalkthroughView.cpp sostituire il codice per `CMFCAnimationWalkthroughView::OnSize` con il codice riportato di seguito.  
  
    ```  
    void CMFCAnimationWalkthroughView::OnSize(UINT nType, int cx, int cy)  
    {  
        CView::OnSize(nType, cx, cy);  
  
        CRect rect;  
        GetClientRect(rect);  
        rect.top += nInfoAreaHeight;  
  
        CRect rectAnim = m_animationRect;  
        m_animationRect = CRect(CPoint(rect.CenterPoint().x - rectAnim.Width() / 2,   
                                rect.CenterPoint().y - rectAnim.Height() / 2),   
                                rectAnim.Size());  
  
        if (m_animationController.IsAnimationInProgress())  
        {  
            Animate(m_bCurrentDirection);  
        }  
    }  
    ```  
  
7.  All'inizio del costruttore per `CMFCAnimationWalkthroughView` aggiungere il codice riportato di seguito.  
  
    ```  
    m_bCurrentDirection = TRUE;  
    ```  
  
8.  All'inizio del metodo `CMFCAnimationWalkthroughView::Animate` aggiungere il codice riportato di seguito.  
  
    ```  
    m_bCurrentDirection = bDirection;  
    ```  
  
9. Salvare e chiudere il file.  
  
### Per verificare i risultati  
  
1.  Compilare ed eseguire l'applicazione.  Scegliere **Inizio in avanti** dal menu **Animazione**.  Verrà visualizzato un rettangolo, quindi verrà riempita l'area centrale.  Quando si fa clic su **Inizio indietro** l'animazione verrà invertita e quando si fa clic **su Arresta** verrà arrestata.  Il colore di riempimento del rettangolo verrà modificato durante l'avanzamento dell'animazione e il colore corrente verrà visualizzato nella parte superiore della finestra di animazione.  
  
## Vedere anche  
 [Procedure dettagliate](../mfc/walkthroughs-mfc.md)