---
title: 'Procedura dettagliata: Aggiunta di animazione a un progetto MFC | Microsoft Docs'
ms.custom: ''
ms.date: 09/20/2018
ms.technology:
- cpp-mfc
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- animation [MFC]
- MFC, animation
ms.assetid: 004f832c-9fd5-4f88-9ca9-ae65dececdc2
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 16613425633f55eeed152e86c1b4fea7f00a784c
ms.sourcegitcommit: 1d9bd38cacbc783fccd3884b7b92062161c91c84
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/03/2018
ms.locfileid: "48234064"
---
# <a name="walkthrough-adding-animation-to-an-mfc-project"></a>Procedura dettagliata: aggiunta di animazione a un progetto MFC

Questa procedura dettagliata illustra come aggiungere un oggetto animato di base a un progetto Microsoft Foundation Class Library (MFC) Visual C++.

La procedura dettagliata illustra come eseguire queste operazioni:

- Creare un'applicazione MFC.

- Aggiungere un menu di scelta e quindi aggiungere i comandi per avviare e arrestare un'animazione.

- Creare i gestori per i comandi di avvio e arresto.

- Aggiungere un oggetto animato al progetto.

- Centrare l'oggetto animato nella finestra.

- Verificare i risultati.

[!INCLUDE[note_settings_general](../mfc/includes/note_settings_general_md.md)]

## <a name="prerequisites"></a>Prerequisiti

Per completare la procedura dettagliata, è necessario disporre di Visual Studio.

### <a name="to-create-an-mfc-application"></a>Per creare un'applicazione MFC

1. Scegliere **Nuovo** dal menu **File** , quindi scegliere **Progetto**.

1. Nel **nuovo progetto** finestra di dialogo, nel riquadro sinistro sotto **modelli installati**, espandere **Visual C++** e quindi selezionare **MFC**. Nel riquadro centrale, selezionare **applicazione MFC**. Nel **Name** , digitare *MFCAnimationWalkthrough*. Fare clic su **OK**.

1. Nel **Creazione guidata applicazione MFC** finestra di dialogo, verificare che **tipo di applicazione** viene **più documenti**, **stile progetto** è  **Visual Studio**e il **Supporto architettura documento/visualizzazione** opzione è selezionata. Scegliere **Fine**.

### <a name="to-add-a-menu-and-then-add-commands-to-start-and-stop-an-animation"></a>Per aggiungere un menu di scelta e quindi aggiungere i comandi per avviare e arrestare un'animazione

1. Nel **View** dal menu **Other Windows** e quindi fare clic su **visualizzazione risorse**.

1. Nella **visualizzazione di risorse**, passare al **Menu** cartella e aprirlo. Fare doppio clic il **IDR_MFCAnimationWalkthroughTYPE** risorsa per aprirla per la modifica.

1. Nella barra dei menu, nelle **digitare qui** , digitare *A & nimazione* per creare un menu animazione.

1. Sotto **animazione**, nella **digitare qui** , digitare *avviare Posi & zione successiva* per creare un comando inizio in avanti.

1. Sotto **inizio in avanti**, nella **digitare qui** , digitare *inizio & Indietro*.

1. Sotto **iniziare con le versioni precedenti**, nella **digitare qui** , digitare *Arres & ta* per creare un comando Stop.

1. Salvare MFCAnimationWalkthrough e chiuderlo.

1. Nelle **Esplora soluzioni**, fare doppio clic su MainFrm. cpp per aprirla per la modifica. Nel `CMainFrame::OnCreate` metodo, individuare la sezione con diverse chiamate a `lstBasicCommands.AddTail`. Aggiungere il codice seguente subito dopo quella sezione.

    ```cpp
    lstBasicCommands.AddTail(ID_ANIMATION_STARTFORWARD);
    lstBasicCommands.AddTail(ID_ANIMATION_STARTBACKWARD);
    lstBasicCommands.AddTail(ID_ANIMATION_STOP);
    ```

1. Salvare il file e chiuderlo.

### <a name="to-create-handlers-for-the-start-and-stop-commands"></a>Per creare gestori per l'avvio e arresto di comandi

1. Nel **Project** menu, fare clic su **Creazione guidata classe**.

1. Nel **Creazione guidata classe MFC**, in **Class name**, selezionare **CMFCAnimationWalkthroughView**.

1. Nel **comandi** nella scheda il **gli ID oggetto** , quindi selezionare **ID_ANIMATION_STARTFORWARD**, quindi nel **messaggi** , selezionare  **COMANDO**. Fare clic su **aggiungere il gestore**.

1. Nel **Aggiungi funzione membro** finestra di dialogo, fare clic su **OK**.

1. Nel **gli ID oggetto** , quindi selezionare **ID_ANIMATION_STARTBACKWARD**e quindi il **messaggi** , quindi selezionare **comando**. Fare clic su **aggiungere il gestore**.

1. Nel **Aggiungi funzione membro** finestra di dialogo, fare clic su **OK**.

1. Nel **gli ID oggetto** , quindi selezionare **ID_ANIMATION_STOP**e quindi il **messaggi** , quindi selezionare **comando**. Fare clic su **Add Handler** e quindi fare clic su **OK**.

1. Nel **Aggiungi funzione membro** finestra di dialogo, fare clic su **OK**.

1. Nel **Creazione guidata classe MFC**, fare clic su **OK**.

1. Salva MFCAnimationWalkthroughView, che viene aperto nell'editor, ma non chiuderla.

### <a name="to-add-an-animated-object-to-the-project"></a>Per aggiungere un oggetto animato al progetto

1. Nelle **Esplora soluzioni**, fare doppio clic su MFCAnimationWalkthroughView. H per aprirla per la modifica. Appena prima della definizione del `CMFCAnimationWalkthroughView` classe, aggiungere il codice seguente per creare un controller di animazione personalizzata che consente di gestire i conflitti di pianificazione con l'oggetto di animazione.

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

1. In fondo il `CMFCAnimationWalkthroughView` classe, aggiungere il codice seguente.

    ```cpp
    CCustomAnimationController m_animationController;
    CAnimationColor m_animationColor;
    CAnimationRect m_animationRect;
    ```

1. Dopo il `DECLARE_MESSAGE_MAP()` riga, aggiungere il codice seguente.

    ```cpp
    void Animate(BOOL bDirection);
    ```

1. Salvare il file e chiuderlo.

1. In MFCAnimationWalkthroughView, nella parte superiore del file dopo la `#include` istruzioni ma prima che qualsiasi metodo della classe, aggiungono il codice seguente.

    ```cpp
    static int nAnimationGroup = 0;
    static int nInfoAreaHeight = 40;
    ```

1. Alla fine del costruttore per `CMFCAnimationWalkthroughView`, aggiungere il codice seguente.

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

1. Individuare il `CAnimationWalthroughView::PreCreateWindow` (metodo) e quindi sostituirlo con il codice seguente.

    ```cpp
    BOOL CMFCAnimationWalkthroughView::PreCreateWindow(CREATESTRUCT& cs)
    {
        // TODO: Modify the Window class or styles here by modifying
        //       the CREATESTRUCT cs
        m_animationController.SetRelatedWnd(this);

        return CView::PreCreateWindow(cs);
    }
    ```

1. Individuare il `CAnimationWalkthroughView::OnDraw` (metodo) e quindi sostituirlo con il codice seguente.

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

1. Alla fine del file, aggiungere il codice seguente.

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

1. Nel **Project** menu, fare clic su **Creazione guidata classe**.

1. Nel **Creazione guidata classe MFC**, in **Class name**, selezionare **CMFCAnimationWalkthroughView**.

1. Nel **messaggi** nella scheda il **messaggi** , quindi selezionare **WM_ERASEBKGND**, fare clic su **Aggiungi gestore**e quindi fare clic su **OK** .

1. In MFCAnimationWalkthroughView, sostituire l'implementazione di `OnEraseBkgnd` con il codice seguente per ridurre lo sfarfallio in oggetto animato mentre viene ridisegnato.

    ```cpp
    BOOL CMFCAnimationWalkthroughView::OnEraseBkgnd(CDC* /*pDC*/)
    {
        return TRUE;
    }
    ```

1. Sostituire le implementazioni di `CMFCAnimationWalkthroughView::OnAnimationStartforward`, `CMFCAnimationWalkthroughView::OnAnimationStartbackward`, e `CMFCAnimationWalkthroughView::OnAnimationStop` con il codice seguente.

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

### <a name="to-center-the-animated-object-in-the-window"></a>Per allineare al centro l'oggetto animato nella finestra

1. Nelle **Esplora soluzioni**, fare doppio clic su MFCAnimationWalkthroughView. H per aprirla per la modifica. Alla fine del `CMFCAnimationWalkthroughView` subito dopo la definizione di classe `m_animationRect`, aggiungere il codice seguente.

    ```cpp
    BOOL m_bCurrentDirection;
    ```

1. Salvare il file e chiuderlo.

1. Nel **Project** menu, fare clic su **Creazione guidata classe**.

1. Nel **Creazione guidata classe MFC**, in **Class name**, selezionare **CMFCAnimationWalkthroughView**.

1. Nel **messaggi** nella scheda il **messaggi** , quindi selezionare **WM_SIZE**, fare clic su **Aggiungi gestore**e quindi fare clic su **OK**.

1. In MFCAnimationWalkthroughView, sostituire il codice per `CMFCAnimationWalkthroughView::OnSize` con il codice seguente.

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

1. All'inizio del costruttore per `CMFCAnimationWalkthroughView`, aggiungere il codice seguente.

    ```cpp
    m_bCurrentDirection = TRUE;
    ```

1. All'inizio del `CMFCAnimationWalkthroughView::Animate` metodo, aggiungere il codice seguente.

    ```cpp
    m_bCurrentDirection = bDirection;
    ```

1. Salvare il file e chiuderlo.

### <a name="to-verify-the-results"></a>Per verificare i risultati

1. Compilare ed eseguire l'applicazione. Nel **animazione** menu, fare clic su **inizio in avanti**. Un rettangolo dovrà essere visualizzato e quindi riempire l'area centrale. Quando fa clic su **iniziare con le versioni precedenti**, l'animazione deve invertire e quando fa clic su **arrestare**, deve essere arrestata. Il colore di riempimento del rettangolo deve cambiare nel corso dell'animazione e il colore corrente deve essere visualizzato nella parte superiore della finestra di animazione.

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)
