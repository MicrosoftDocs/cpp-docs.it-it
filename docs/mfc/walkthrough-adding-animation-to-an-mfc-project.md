---
title: 'Procedura dettagliata: Aggiunta di animazione a un progetto MFC | Documenti Microsoft'
ms.custom: ''
ms.date: 06/28/2018
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
ms.openlocfilehash: f647c7621c01a18cedc8d08d1a3f344b19139a90
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37121799"
---
# <a name="walkthrough-adding-animation-to-an-mfc-project"></a>Procedura dettagliata: aggiunta di animazione a un progetto MFC

Questa procedura dettagliata viene illustrato come aggiungere un oggetto animato di base per un Visual C++, progetto Microsoft Foundation Class Library (MFC).

La procedura dettagliata viene illustrato come completare queste attività:

- Creare un'applicazione MFC.

- Aggiungere un menu, quindi i comandi per avviare e arrestare un'animazione.

- Creare gestori per i comandi start e stop.

- Aggiungere un oggetto animato al progetto.

- Centrare l'oggetto animato nella finestra.

- Verificare i risultati.

[!INCLUDE[note_settings_general](../mfc/includes/note_settings_general_md.md)]

## <a name="prerequisites"></a>Prerequisiti

Per completare la procedura dettagliata, è necessario disporre di Visual Studio.

### <a name="to-create-an-mfc-application"></a>Per creare un'applicazione MFC

1. Scegliere **Nuovo** dal menu **File** , quindi scegliere **Progetto**.

2. Nel **nuovo progetto** finestra di dialogo, nel riquadro sinistro sotto **modelli installati**, espandere **Visual C++** e quindi selezionare **MFC**. Nel riquadro centrale, seleziona **applicazione MFC**. Nel **nome** , digitare *MFCAnimationWalkthrough*. Fare clic su **OK**.

3. Nel **Creazione guidata applicazione MFC** finestra di dialogo, verificare che **tipo di applicazione** è **più documenti**, **stile progetto** è  **Visual Studio**e il **Supporto architettura documento/visualizzazione** opzione è selezionata. Scegliere **Fine**.

### <a name="to-add-a-menu-and-then-add-commands-to-start-and-stop-an-animation"></a>Per aggiungere un menu di scelta e quindi aggiungere i comandi per avviare e arrestare un'animazione

1. Nel **vista** dal menu **altre finestre** e quindi fare clic su **visualizzazione risorse**.

2. In **visualizzazione di risorse**, passare al **Menu** cartella e aprirlo. Fare doppio clic sul `IDR_MFCAnimationWalTYPE` risorsa da aprire per la modifica.

3. Nella barra dei menu, nelle **digitare qui** , digitare *A & nimazione* per creare un menu animazione.

4. Sotto **animazione**nella **digitare qui** , digitare *avviare & inoltra* per creare un comando inizio in avanti.

5. Sotto **inizio in avanti**nella **digitare qui** , digitare *inizio & Indietro*.

6. Sotto **iniziare con le versioni precedenti**nella **digitare qui** , digitare *& rresta* per creare un comando Stop.

7. Salvare MFCAnimationWalkthrough e chiuderlo.

8. In **Esplora soluzioni**, fare doppio clic su MainFrm. cpp per aprirla per la modifica. Nel `CMainFrame::OnCreate` metodo, individuare la sezione che presenta diverse chiamate a `lstBasicCommands.AddTail`. Subito dopo quella sezione, aggiungere il codice seguente.  

    ```cpp
    lstBasicCommands.AddTail(ID_ANIMATION_STARTFORWARD);
    lstBasicCommands.AddTail(ID_ANIMATION_STARTBACKWARD);
    lstBasicCommands.AddTail(ID_ANIMATION_STOP);
    ```

9. Salvare il file e chiuderlo.

### <a name="to-create-handlers-for-the-start-and-stop-commands"></a>Per creare gestori per l'avvio e arrestare i comandi

1. Nel **Project** menu, fare clic su **Creazione guidata classe**.

2. Nel **Creazione guidata classe MFC**, in **nome della classe**selezionare `CMFCAnimationWalkthroughView`.

3. Nel **comandi** nella scheda il **ID oggetto** , quindi selezionare `ID_ANIMATION_STARTFORWARD`e quindi il **messaggi** , quindi selezionare `COMMAND`. Fare clic su **aggiungere il gestore**.

4. Nel **Aggiungi funzione membro** finestra di dialogo, fare clic su **OK**.

5. Nel **ID oggetto** , quindi selezionare `ID_ANIMATION_STARTBACKWARD`e quindi la **messaggi** , quindi selezionare `COMMAND`. Fare clic su **aggiungere il gestore**.

6. Nel **Aggiungi funzione membro** finestra di dialogo, fare clic su **OK**.

7. Nel **ID oggetto** , quindi selezionare `ID_ANIMATION_STOP`e quindi la **messaggi** , quindi selezionare `COMMAND`. Fare clic su **Aggiungi gestore** e quindi fare clic su **OK**.

8. Nel **Aggiungi funzione membro** finestra di dialogo, fare clic su **OK**.

9. Nel **Creazione guidata classe MFC**, fare clic su **OK**.

10. Salvare MFCAnimationWalkthroughView, vale a dire aperto nell'editor, ma non chiuderla.

### <a name="to-add-an-animated-object-to-the-project"></a>Per aggiungere un oggetto animato al progetto

1. In Esplora soluzioni fare doppio clic su MFCAnimationWalkthroughView. H per aprirla per la modifica. Prima della definizione del `CMFCAnimationWalkthroughView` classe, aggiungere il codice seguente per creare un controller di animazione personalizzata che consente di gestire i conflitti di pianificazione con l'oggetto di animazione.

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

2. Alla fine del `CMFCAnimationWalkthroughView` classe, aggiungere il codice seguente.

    ```cpp
    CCustomAnimationController m_animationController;
    CAnimationColor m_animationColor;
    CAnimationRect m_animationRect;
    ```

3. Dopo il `DECLARE_MESSAGE_MAP()` riga, aggiungere il codice seguente.

    ```cpp
    void Animate(BOOL bDirection);
    ```

4. Salvare il file e chiuderlo.

5. In MFCAnimationWalkthroughView, nella parte superiore del file dopo la `#include` istruzioni ma prima di qualsiasi metodo della classe, aggiungere il codice seguente.

    ```cpp
    static int nAnimationGroup = 0;
    static int nInfoAreaHeight = 40;
    ```

6. Alla fine del costruttore per `CMFCAnimationWalkthroughView`, aggiungere il codice seguente.

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

7. Individuare il `CAnimationWalthroughView::PreCreateWindow` (metodo), quindi sostituirla con il codice seguente.

    ```cpp
    BOOL CMFCAnimationWalkthroughView::PreCreateWindow(CREATESTRUCT& cs)
    {
        // TODO: Modify the Window class or styles here by modifying
        //       the CREATESTRUCT cs
        m_animationController.SetRelatedWnd(this);

        return CView::PreCreateWindow(cs);
    }
    ```

8. Individuare il `CAnimationWalkthroughView::OnDraw` (metodo), quindi sostituirla con il codice seguente.

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

9. Alla fine del file, aggiungere il codice seguente.

    ```cpp
    void CMFCAnimationWalkthroughView::Animate(BOOL bDirection)
    {
        static UI_ANIMATION_SECONDS duration = 3;
        static DOUBLE dblSpeed = 35.;
        static BYTE nStartColor = 50;
        static BYTE nEndColor = 255;

        BYTE nRedColorFinal = bDirection  nStartColor : nEndColor;
        BYTE nGreenColorFinal = bDirection  nStartColor : nEndColor;
        BYTE nBlueColorFinal = bDirection  nStartColor : nEndColor;

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

10. Nel **Project** menu, fare clic su **Creazione guidata classe**.

11. Nel **Creazione guidata classe MFC**, in **nome della classe**selezionare `CMFCAnimationWalkthroughView`.

12. Nel **messaggi** nella scheda il **messaggi** , quindi selezionare `WM_ERASEBKGND`, fare clic su **Aggiungi gestore**e quindi fare clic su **OK**.

13. In MFCAnimationWalkthroughView, sostituire l'implementazione di `OnEraseBkgnd` con il codice seguente per ridurre lo sfarfallio nell'oggetto di animazione quando viene ridisegnato.

    ```cpp
    BOOL CMFCAnimationWalkthroughView::OnEraseBkgnd(CDC* /*pDC*/)
    {
        return TRUE;
    }
    ```

14. Sostituire le implementazioni di `CMFCAnimationWalkthroughView::OnAnimationStartforward`, `CMFCAnimationWalkthroughView::OnAnimationStartbackward`, e `CMFCAnimationWalkthroughView::OnAnimationStop` con il codice seguente.

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

15. Salvare il file e chiuderlo.

### <a name="to-center-the-animated-object-in-the-window"></a>Al centro e l'oggetto animata nella finestra

1. In **Esplora soluzioni**, fare doppio clic su MFCAnimationWalkthroughView. H per aprirla per la modifica. In fondo il `CMFCAnimationWalkthroughView` (classe), subito dopo la definizione di `m_animationRect`, aggiungere il codice seguente.

    ```cpp
    BOOL m_bCurrentDirection;
    ```

2. Salvare il file e chiuderlo.

3. Nel **Project** menu, fare clic su **Creazione guidata classe**.

4. Nel **Creazione guidata classe MFC**, in **nome della classe**selezionare `CMFCAnimationWalkthroughView`.

5. Nel **messaggi** nella scheda il **messaggi** , quindi selezionare `WM_SIZE`, fare clic su **Aggiungi gestore**e quindi fare clic su **OK**.

6. In MFCAnimationWalkthroughView, sostituire il codice per `CMFCAnimationWalkthroughView::OnSize` con il codice seguente.

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

7. All'inizio del costruttore per `CMFCAnimationWalkthroughView`, aggiungere il codice seguente.

    ```cpp
    m_bCurrentDirection = TRUE;
    ```

8. All'inizio del `CMFCAnimationWalkthroughView::Animate` metodo, aggiungere il codice seguente.

    ```cpp
    m_bCurrentDirection = bDirection;
    ```

9. Salvare il file e chiuderlo.

### <a name="to-verify-the-results"></a>Per verificare i risultati

1. Compilare ed eseguire l'applicazione. Nel **animazione** menu, fare clic su **inizio in avanti**. Un rettangolo dovrà essere visualizzato e quindi riempire l'area centrale. Quando fa clic su **iniziare con le versioni precedenti**, l'animazione deve invertire e quando fa clic su **arrestare**, deve essere arrestata. Con l'avanzamento dell'animazione deve modificare il colore di riempimento del rettangolo e il colore corrente deve essere visualizzato nella parte superiore della finestra di animazione.

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)  
