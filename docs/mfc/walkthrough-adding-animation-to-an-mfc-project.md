---
description: 'Altre informazioni su: procedura dettagliata: aggiunta di animazioni a un progetto MFC'
title: 'Procedura dettagliata: aggiunta di animazione a un progetto MFC'
ms.date: 04/25/2019
helpviewer_keywords:
- animation [MFC]
- MFC, animation
ms.assetid: 004f832c-9fd5-4f88-9ca9-ae65dececdc2
ms.openlocfilehash: ef6d6fc8e17c8e6dc4c6f0f4e8d7407f2690927f
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143117"
---
# <a name="walkthrough-adding-animation-to-an-mfc-project"></a>Procedura dettagliata: aggiunta di animazione a un progetto MFC

In questa procedura dettagliata viene illustrato come aggiungere un oggetto animato di base a un progetto di Visual C++, libreria Microsoft Foundation Class (MFC).

Nella procedura dettagliata viene illustrato come eseguire queste attività:

- Creare un'applicazione MFC.

- Aggiungere un menu e quindi aggiungere i comandi per avviare e arrestare un'animazione.

- Creare gestori per i comandi Start e stop.

- Aggiungere un oggetto animato al progetto.

- Centrare l'oggetto animato nella finestra.

- Verificare i risultati.

[!INCLUDE[note_settings_general](../mfc/includes/note_settings_general_md.md)]

## <a name="prerequisites"></a>Prerequisiti

Per completare la procedura dettagliata, è necessario disporre di Visual Studio.

### <a name="to-create-an-mfc-application"></a>Per creare un'applicazione MFC

1. Utilizzare la **creazione guidata applicazione MFC** per creare un'applicazione MFC. Vedere [procedura dettagliata: uso dei nuovi controlli della shell MFC](walkthrough-using-the-new-mfc-shell-controls.md) per istruzioni su come aprire la procedura guidata per la versione di Visual Studio.

1. Nella casella **nome** digitare *MFCAnimationWalkthrough*. Fare clic su **OK**.

1. Nella finestra di dialogo **creazione guidata applicazione MFC** verificare che **tipo di applicazione** sia **più documenti**, **stile progetto** è **Visual Studio** e l'opzione **supporto architettura documento/visualizzazione** è selezionata. Fare clic su **Fine**.

### <a name="to-add-a-menu-and-then-add-commands-to-start-and-stop-an-animation"></a>Per aggiungere un menu e quindi aggiungere i comandi per avviare e arrestare un'animazione

1. Scegliere **altre finestre** dal menu **Visualizza** , quindi fare clic su **visualizzazione risorse**.

1. In **visualizzazione risorse** passare alla cartella dei **menu** e aprirla. Fare doppio clic sulla risorsa **IDR_MFCAnimationWalkthroughTYPE** per aprirla per la modifica.

1. Nella barra dei menu, nella casella **digitare qui** digitare *un&nimazione* per creare un menu di animazione.

1. In **animazione**, nella casella **digitare qui** digitare *Start &in futuro* per creare un comando di avvio in base.

1. In **inizia avanti**, digitare *Start &indietro* nella casella **digitare qui** .

1. In **Start indietro** digitare *S&Top* nella casella **digitare qui** per creare un comando stop.

1. Salvare MFCAnimationWalkthrough. RC e chiuderlo.

1. In **Esplora soluzioni** fare doppio clic su MainFrm. cpp per aprirlo per la modifica. Nel `CMainFrame::OnCreate` metodo individuare la sezione con diverse chiamate a `lstBasicCommands.AddTail` . Subito dopo questa sezione, aggiungere il codice seguente.

    ```cpp
    lstBasicCommands.AddTail(ID_ANIMATION_STARTFORWARD);
    lstBasicCommands.AddTail(ID_ANIMATION_STARTBACKWARD);
    lstBasicCommands.AddTail(ID_ANIMATION_STOP);
    ```

1. Salvare il file e chiuderlo.

### <a name="to-create-handlers-for-the-start-and-stop-commands"></a>Per creare gestori per i comandi Start e stop

1. Scegliere **creazione guidata classe** dal menu **progetto** .

1. Nella **creazione guidata classe MFC**, in **nome classe**, selezionare **CMFCAnimationWalkthroughView**.

1. Nella casella **ID oggetto** della scheda **comandi** selezionare **ID_ANIMATION_STARTFORWARD**, quindi nella casella **messaggi** selezionare **comando**. Fare clic su **Aggiungi gestore**.

1. Nella finestra di dialogo **Aggiungi funzione membro** fare clic su **OK**.

1. Nella casella **ID oggetto** selezionare **ID_ANIMATION_STARTBACKWARD**, quindi nella casella **messaggi** selezionare **comando**. Fare clic su **Aggiungi gestore**.

1. Nella finestra di dialogo **Aggiungi funzione membro** fare clic su **OK**.

1. Nella casella **ID oggetto** selezionare **ID_ANIMATION_STOP**, quindi nella casella **messaggi** selezionare **comando**. Fare clic su **Aggiungi gestore** , quindi fare clic su **OK**.

1. Nella finestra di dialogo **Aggiungi funzione membro** fare clic su **OK**.

1. Nella **creazione guidata classe MFC** fare clic su **OK**.

1. Salvare MFCAnimationWalkthroughView. cpp, che è aperto nell'editor, ma non chiuderlo.

### <a name="to-add-an-animated-object-to-the-project"></a>Per aggiungere un oggetto animato al progetto

1. In **Esplora soluzioni** fare doppio clic su MFCAnimationWalkthroughView. h per aprirlo per la modifica. Appena prima della definizione della `CMFCAnimationWalkthroughView` classe, aggiungere il codice seguente per creare un controller di animazione personalizzato che gestirà i conflitti di pianificazione con l'oggetto animazione.

    ```cpp
    class CCustomAnimationController : public CAnimationController
    {
    public:
        CCustomAnimationController()
        {
        }

        virtual BOOL OnHasPriorityTrim(CAnimationGroup* pGroupScheduled,
            CAnimationGroup* pGroupNew,
            UI_ANIMATION_PRIORITY_EFFECT priorityEffect)
        {
            return TRUE;
        }
    };
    ```

1. Alla fine della `CMFCAnimationWalkthroughView` classe aggiungere il codice seguente.

    ```cpp
    CCustomAnimationController m_animationController;
    CAnimationColor m_animationColor;
    CAnimationRect m_animationRect;
    ```

1. Dopo la `DECLARE_MESSAGE_MAP()` riga, aggiungere il codice seguente.

    ```cpp
    void Animate(BOOL bDirection);
    ```

1. Salvare il file e chiuderlo.

1. In MFCAnimationWalkthroughView. cpp, all'inizio del file dopo le `#include` istruzioni, ma prima di qualsiasi metodo di classe, aggiungere il codice seguente.

    ```cpp
    static int nAnimationGroup = 0;
    static int nInfoAreaHeight = 40;
    ```

1. Alla fine del costruttore per `CMFCAnimationWalkthroughView` , aggiungere il codice seguente.

    ```cpp
    m_animationController.EnableAnimationTimerEventHandler();
    m_animationController.EnablePriorityComparisonHandler(UI_ANIMATION_PHT_TRIM);
    m_animationColor = RGB(255, 255, 255);
    m_animationRect = CRect(0, 0, 0, 0);
    m_animationColor.SetID(-1, nAnimationGroup);
    m_animationRect.SetID(-1, nAnimationGroup);
    m_animationController.AddAnimationObject(&m_animationColor);
    m_animationController.AddAnimationObject(&m_animationRect);
    ```

1. Individuare il `CAnimationWalthroughView::PreCreateWindow` metodo e sostituirlo con il codice seguente.

    ```cpp
    BOOL CMFCAnimationWalkthroughView::PreCreateWindow(CREATESTRUCT& cs)
    {
        // TODO: Modify the Window class or styles here by modifying
        //       the CREATESTRUCT cs
        m_animationController.SetRelatedWnd(this);

        return CView::PreCreateWindow(cs);
    }
    ```

1. Individuare il `CAnimationWalkthroughView::OnDraw` metodo e sostituirlo con il codice seguente.

    ```cpp
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
        strRGB.Format(_T("Fill Color is: %d; %d; %d"),
            GetRValue(m_animationColor),
            GetGValue(m_animationColor),
            GetBValue(m_animationColor));

        dc.DrawText(strRGB, rect, DT_CENTER);
        rect.top += nInfoAreaHeight;

        CBrush br;
        br.CreateSolidBrush(m_animationColor);
        CBrush* pBrushOld = dc.SelectObject(&br);

        dc.Rectangle((CRect)m_animationRect);

        dc.SelectObject(pBrushOld);
    }
    ```

1. Alla fine del file aggiungere il codice seguente.

    ```cpp
    void CMFCAnimationWalkthroughView::Animate(BOOL bDirection)
    {
        static UI_ANIMATION_SECONDS duration = 3;
        static DOUBLE dblSpeed = 35.;
        static BYTE nStartColor = 50;
        static BYTE nEndColor = 255;

        BYTE nRedColorFinal = bDirection ? nStartColor : nEndColor;
        BYTE nGreenColorFinal = bDirection ? nStartColor : nEndColor;
        BYTE nBlueColorFinal = bDirection ? nStartColor : nEndColor;

        CLinearTransition* pRedTransition =
            new CLinearTransition(duration, (DOUBLE)nRedColorFinal);

        CSmoothStopTransition* pGreenTransition =
            new CSmoothStopTransition(duration, (DOUBLE)nGreenColorFinal);

        CLinearTransitionFromSpeed* pBlueTransition =
            new CLinearTransitionFromSpeed(dblSpeed, (DOUBLE)nBlueColorFinal);

        m_animationColor.AddTransition(pRedTransition,
            pGreenTransition,
            pBlueTransition);

        CRect rectClient;
        GetClientRect(rectClient);

        rectClient.top += nInfoAreaHeight;

        int nLeftFinal = bDirection ? rectClient.left : rectClient.CenterPoint().x;
        int nTopFinal = bDirection ? rectClient.top : rectClient.CenterPoint().y;
        int nRightFinal = bDirection ? rectClient.right : rectClient.CenterPoint().x;
        int nBottomFinal = bDirection ? rectClient.bottom : rectClient.CenterPoint().y;

        CLinearTransition* pLeftTransition =
            new CLinearTransition(duration, nLeftFinal);

        CLinearTransition* pTopTransition =
            new CLinearTransition(duration, nTopFinal);

        CLinearTransition* pRightTransition =
            new CLinearTransition(duration, nRightFinal);

        CLinearTransition* pBottomTransition =
            new CLinearTransition(duration, nBottomFinal);

        m_animationRect.AddTransition(pLeftTransition,
            pTopTransition,
            pRightTransition,
            pBottomTransition);

        CBaseKeyFrame* pKeyframeStart =
            CAnimationController::GetKeyframeStoryboardStart();
        CKeyFrame* pKeyFrameEnd =
            m_animationController.CreateKeyframe(nAnimationGroup,
                pBlueTransition);

        pLeftTransition->SetKeyframes(pKeyframeStart, pKeyFrameEnd);
        pTopTransition->SetKeyframes(pKeyframeStart, pKeyFrameEnd);
        pRightTransition->SetKeyframes(pKeyframeStart, pKeyFrameEnd);
        pBottomTransition->SetKeyframes(pKeyframeStart, pKeyFrameEnd);

        m_animationController.AnimateGroup(nAnimationGroup);
    }
    ```

1. Scegliere **creazione guidata classe** dal menu **progetto** .

1. Nella **creazione guidata classe MFC**, in **nome classe**, selezionare **CMFCAnimationWalkthroughView**.

1. Nella casella **messaggi** della scheda **messaggi** selezionare **WM_ERASEBKGND**, fare clic su **Aggiungi gestore**, quindi fare clic su **OK**.

1. In MFCAnimationWalkthroughView. cpp sostituire l'implementazione di `OnEraseBkgnd` con il codice seguente per ridurre lo sfarfallio nell'oggetto animato quando viene ridisegnato.

    ```cpp
    BOOL CMFCAnimationWalkthroughView::OnEraseBkgnd(CDC* /*pDC*/)
    {
        return TRUE;
    }
    ```

1. Sostituire le implementazioni di `CMFCAnimationWalkthroughView::OnAnimationStartforward` , `CMFCAnimationWalkthroughView::OnAnimationStartbackward` e `CMFCAnimationWalkthroughView::OnAnimationStop` con il codice seguente.

    ```cpp
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

1. Salvare il file e chiuderlo.

### <a name="to-center-the-animated-object-in-the-window"></a>Per centrare l'oggetto animato nella finestra

1. In **Esplora soluzioni** fare doppio clic su MFCAnimationWalkthroughView. h per aprirlo per la modifica. Alla fine della `CMFCAnimationWalkthroughView` classe, subito dopo la definizione di `m_animationRect` , aggiungere il codice seguente.

    ```cpp
    BOOL m_bCurrentDirection;
    ```

1. Salvare il file e chiuderlo.

1. Scegliere **creazione guidata classe** dal menu **progetto** .

1. Nella **creazione guidata classe MFC**, in **nome classe**, selezionare **CMFCAnimationWalkthroughView**.

1. Nella casella **messaggi** della scheda **messaggi** selezionare **WM_SIZE**, fare clic su **Aggiungi gestore**, quindi fare clic su **OK**.

1. In MFCAnimationWalkthroughView. cpp sostituire il codice per `CMFCAnimationWalkthroughView::OnSize` con il codice seguente.

    ```cpp
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

1. All'inizio del costruttore per `CMFCAnimationWalkthroughView` , aggiungere il codice seguente.

    ```cpp
    m_bCurrentDirection = TRUE;
    ```

1. All'inizio del `CMFCAnimationWalkthroughView::Animate` metodo aggiungere il codice seguente.

    ```cpp
    m_bCurrentDirection = bDirection;
    ```

1. Salvare il file e chiuderlo.

### <a name="to-verify-the-results"></a>Per verificare i risultati

1. Compilare ed eseguire l'applicazione. Scegliere **Avvia avanti** dal menu **animazione** . Verrà visualizzato un rettangolo che compilerà l'area centrale. Quando si fa clic su **Start indietro**, l'animazione deve essere invertita e, quando si fa clic su **Interrompi**, l'animazione dovrebbe arrestarsi. Il colore di riempimento del rettangolo deve essere modificato durante l'avanzamento dell'animazione e il colore corrente deve essere visualizzato nella parte superiore della finestra di animazione.

## <a name="see-also"></a>Vedi anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)
