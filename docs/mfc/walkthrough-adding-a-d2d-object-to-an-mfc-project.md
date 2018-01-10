---
title: 'Procedura dettagliata: Aggiunta di un oggetto D2D a un progetto MFC | Documenti Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- MFC, D2D
- D2D [MFC]
ms.assetid: dda36c33-c231-4da6-a62f-72d69a12b6dd
caps.latest.revision: "20"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 98c14611bbca828f6264c3fcfa66462c02320432
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="walkthrough-adding-a-d2d-object-to-an-mfc-project"></a>Procedura dettagliata: aggiunta di un oggetto D2D a un progetto MFC
Questa procedura dettagliata viene illustrato come aggiungere una base Direct2D (D2D) l'oggetto in un progetto (MFC (Microsoft Foundation Class Library), Visual C++ e quindi compilare il progetto in un'applicazione che visualizza "Hello, world" su uno sfondo sfumato.  
  
 La procedura dettagliata viene illustrato come eseguire queste attività:  
  
-   Creare un'applicazione MFC.  
  
-   Creare un pennello tinta unita e un pennello sfumatura lineare.  
  
-   Modificare il pennello a sfumatura in modo che venga modificato di conseguenza quando la finestra viene ridimensionata.  
  
-   Implementare un gestore di disegno D2D.  
  
-   Verificare i risultati.  
  
 [!INCLUDE[note_settings_general](../mfc/includes/note_settings_general_md.md)]  
  
## <a name="prerequisites"></a>Prerequisiti  
 Per completare la procedura dettagliata, è necessario disporre di Visual Studio.  
  
### <a name="to-create-an-mfc-application"></a>Per creare un'applicazione MFC  
  
1.  Scegliere **Nuovo** dal menu **File** , quindi scegliere **Progetto**.  
  
2.  Nel **nuovo progetto** la finestra di dialogo, nel riquadro sinistro sotto **modelli installati**, espandere **Visual C++** e quindi selezionare **MFC**. Nel riquadro centrale, selezionare **applicazione MFC**. Nella casella **Nome** digitare `MFCD2DWalkthrough`. Fare clic su **OK**.  
  
3.  Nel **Creazione guidata applicazione MFC**, fare clic su **fine** senza modificare le impostazioni.  
  
### <a name="to-create-a-solid-color-brush-and-a-linear-gradient-brush"></a>Per creare un pennello tinta unita e un pennello sfumatura lineare  
  
1.  In **Esplora**nel **MFCD2DWalkthrough** nel progetto il **file di intestazione** MFCD2DWalkthroughView Apri cartella. Aggiungere il codice seguente per la `CMFCD2DWalkthroughView` classe da creare tre variabili di dati.  
  
 ```  
    CD2DTextFormat* m_pTextFormat;  
    CD2DSolidColorBrush* m_pBlackBrush;  
    CD2DLinearGradientBrush* m_pLinearGradientBrush;  
 ```  
  
     Salvare il file e chiuderlo.  
  
2.  Nel **i file di origine** cartella, aprire MFCD2DWalkthroughView. Nel costruttore per la `CMFCD2DWalkthroughView` classe, aggiungere il codice seguente.  
  
 ' ' * / / Attivare il supporto D2D per questa finestra:  
    EnableD2DSupport();

 * / / Inizializzare le risorse D2D:  
    m_pBlackBrush = nuovo CD2DSolidColorBrush(GetRenderTarget(), D2D1::ColorF(D2D1::ColorF::Black));

 
    m_pTextFormat = nuovo CD2DTextFormat(GetRenderTarget(), _T("Verdana"), 50);

    m_pTextFormat -> Get () -> SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);

 m_pTextFormat -> Get () -> SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);

 
    D2D1_GRADIENT_STOP gradientStops [2].  
 
    .color gradientStops [0] = D2D1::ColorF(D2D1::ColorF::White);

    Position gradientStops [0] = 0.f;  
    .color gradientStops [1] = D2D1::ColorF(D2D1::ColorF::Indigo);

    Position gradientStops [1] = 1.f;  
 
    m_pLinearGradientBrush = CD2DLinearGradientBrush(GetRenderTarget() nuovo,   
    gradientStops, ARRAYSIZE(gradientStops),  
    D2D1::LinearGradientBrushProperties (D2D1::Point2F (0, 0), D2D1::Point2F (0, 0)));

 ```  
  
     Save the file and close it.  
  
### To modify the gradient brush so that it will change appropriately when the window is resized  
  
1.  On the **Project** menu, click **Class Wizard**.  
  
2.  In the **MFC Class Wizard**, under **Class name**, select `CMFCD2DWalkthroughView`.  
  
3.  On the **Messages** tab, in the **Messages** box, select `WM_SIZE` and then click **Add Handler**. This action adds the `OnSize` message handler to the `CMFCD2DWalkthroughView` class.  
  
4.  In the **Existing handlers** box, select `OnSize`. Click **Edit Code** to display the `CMFCD2DWalkthroughView::OnSize` method. At the end of the method, add the following code.  
  
 ```  
    m_pLinearGradientBrush -> SetEndPoint (CPoint (cx, cy));

 ```  
  
     Save the file and close it.  
  
### To implement a D2D drawing handler  
  
1.  On the **Project** menu, click **Class Wizard**.  
  
2.  In the **MFC Class Wizard**, under **Class name**, select `CMFCD2DWalkthroughView`.  
  
3.  On the **Messages** tab, click **Add Custom Message**.  
  
4.  In the **Add Custom Message** dialog box, in the **Custom Windows Message** box, type `AFX_WM_DRAW2D`. In the **Message handler name** box, type `OnDraw2D`. Select the **Registered Message** option and then click **OK**. This action adds a message handler for the `AFX_WM_DRAW2D` message to the `CMFCD2DWalkthroughView` class.  
  
5.  In the **Existing handlers** box, select `OnDraw2D`. Click **Edit Code** to display the `CMFCD2DWalkthroughView::OnDraw2D` method. Use the following code for the `CMFCD2DWalkthroughView::OnDrawD2D` method.  
  
 ```  
    afx_msg LRESULT CMFCD2DWalkthroughView::OnDraw2D(WPARAM wParam, LPARAM lParam)  
    {  
 PRenderTarget CHwndRenderTarget * = (CHwndRenderTarget *) lParam;  
    ASSERT_VALID(pRenderTarget);

 
    CRect rect;  
    GetClientRect(rect);

 
    pRenderTarget -> FillRectangle (rect, m_pLinearGradientBrush);

    pRenderTarget -> DrawText ( t ("Hello, World!"), rect, m_pBlackBrush, m_pTextFormat);

 
    Restituisce TRUE;  
 }  
 ```  
  
     Save the file and close it.  
  
### To verify the results  
  
1.  Build and run the application. It should have a gradient rectangle that changes when you resize the window. “Hello World!” should be displayed in the center of the rectangle.  
  
## See Also  
 [Walkthroughs](../mfc/walkthroughs-mfc.md)

