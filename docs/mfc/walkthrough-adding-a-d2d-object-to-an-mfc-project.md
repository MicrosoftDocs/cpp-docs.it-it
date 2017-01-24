---
title: "Procedura dettagliata: aggiunta di un oggetto D2D a un progetto MFC | Microsoft Docs"
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
  - "D2D [MFC]"
  - "MFC, D2D"
ms.assetid: dda36c33-c231-4da6-a62f-72d69a12b6dd
caps.latest.revision: 20
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Procedura dettagliata: aggiunta di un oggetto D2D a un progetto MFC
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questa procedura dettagliata viene illustrato come aggiungere un oggetto Direct2D \(D2D\) di base a un progetto di libreria Microsoft Foundation Class \(MFC\) in Visual C\+\+, quindi come compilare il progetto in un'applicazione che stampa "Hello, world" su uno sfondo sfumato.  
  
 Nella procedura dettagliata viene descritto come eseguire le attività elencate di seguito:  
  
-   Creare un'applicazione MFC.  
  
-   Creare un pennello tinta unita e un pennello sfumatura lineare.  
  
-   Modificare il pennello sfumatura affinché venga modificato di conseguenza quando viene ridimensionata la finestra.  
  
-   Implementare un gestore di disegno D2D.  
  
-   Verificare i risultati.  
  
 [!INCLUDE[note_settings_general](../mfc/includes/note_settings_general_md.md)]  
  
## Prerequisiti  
 Per completare questa procedura dettagliata, è necessario che Visual Studio.  
  
### Per creare un'applicazione MFC  
  
1.  Scegliere **Nuovo** dal menu **File**, quindi scegliere **Progetto**.  
  
2.  Nella finestra di dialogo **Nuovo progetto** espandere **Visual C\+\+** nel riquadro sinistro **Modelli installati**, quindi selezionare **MFC**.  Nel riquadro centrale selezionare **Applicazione MFC**.  Nella casella **Nome** digitare `MFCD2DWalkthrough`.  Scegliere **OK**.  
  
3.  Nella **Creazione guidata applicazione MFC** fare clic su **Fine** senza modificare le impostazioni.  
  
### Per creare un pennello tinta unita e un pennello sfumatura lineare  
  
1.  In **Esplora soluzioni** aprire MFCD2DWalkthroughView.h nella cartella **File di intestazione** del progetto **MFCD2DWalkthrough**.  Aggiungere il codice riportato di seguito alla classe `CMFCD2DWalkthroughView` per creare tre variabili dati.  
  
    ```  
    CD2DTextFormat* m_pTextFormat;  
    CD2DSolidColorBrush* m_pBlackBrush;  
    CD2DLinearGradientBrush* m_pLinearGradientBrush;  
    ```  
  
     Salvare e chiudere il file.  
  
2.  Nella cartella **File di origine** aprire MFCD2DWalkthroughView.cpp.  Nel costruttore della classe `CMFCD2DWalkthroughView` aggiungere il codice riportato di seguito.  
  
    ```  
    // Enable D2D support for this window:  
    EnableD2DSupport();  
  
    // Initialize D2D resources:  
    m_pBlackBrush = new CD2DSolidColorBrush(GetRenderTarget(), D2D1::ColorF(D2D1::ColorF::Black));  
  
    m_pTextFormat = new CD2DTextFormat(GetRenderTarget(), _T("Verdana"), 50);  
    m_pTextFormat->Get()->SetTextAlignment(DWRITE_TEXT_ALIGNMENT_CENTER);  
    m_pTextFormat->Get()->SetParagraphAlignment(DWRITE_PARAGRAPH_ALIGNMENT_CENTER);  
  
    D2D1_GRADIENT_STOP gradientStops[2];  
  
    gradientStops[0].color = D2D1::ColorF(D2D1::ColorF::White);  
    gradientStops[0].position = 0.f;  
    gradientStops[1].color = D2D1::ColorF(D2D1::ColorF::Indigo);  
    gradientStops[1].position = 1.f;  
  
    m_pLinearGradientBrush = new CD2DLinearGradientBrush(GetRenderTarget(),   
        gradientStops, ARRAYSIZE(gradientStops),  
        D2D1::LinearGradientBrushProperties(D2D1::Point2F(0, 0), D2D1::Point2F(0, 0)));  
    ```  
  
     Salvare e chiudere il file.  
  
### Per modificare il pennello sfumatura affinché venga modificato di conseguenza quando viene ridimensionata la finestra  
  
1.  Scegliere **Creazione guidata classe** dal menu **Progetto**.  
  
2.  Nella **Creazione guidata classe MFC** selezionare `CMFCD2DWalkthroughView` in **Nome classe**.  
  
3.  Nella scheda **Messaggi** selezionare `WM_SIZE` nella casella **Messaggi**, quindi fare clic su **Aggiungi gestore**.  Questa azione aggiunge il gestore di messaggi `OnSize` alla classe `CMFCD2DWalkthroughView`.  
  
4.  Nella casella **Gestori esistenti** selezionare `OnSize`.  Fare clic su **Modifica codice** per visualizzare il metodo `CMFCD2DWalkthroughView::OnSize`.  Alla fine del metodo aggiungere il codice riportato di seguito.  
  
    ```  
    m_pLinearGradientBrush->SetEndPoint(CPoint(cx, cy));  
    ```  
  
     Salvare e chiudere il file.  
  
### Per implementare un gestore di disegno D2D  
  
1.  Scegliere **Creazione guidata classe** dal menu **Progetto**.  
  
2.  Nella **Creazione guidata classe MFC** selezionare `CMFCD2DWalkthroughView` in **Nome classe**.  
  
3.  Nella scheda **Messaggi** fare clic su **Aggiungi messaggio personalizzato**.  
  
4.  Nella finestra di dialogo **Aggiungi messaggio personalizzato** digitare `AFX_WM_DRAW2D` nella casella **Messaggio finestre personalizzate**.  Nella casella **Nome gestore messaggi** digitare `OnDraw2D`.  Selezionare l'opzione **Messaggio registrato**, quindi scegliere **OK**.  Questa azione aggiunge un gestore di messaggi per il messaggio `AFX_WM_DRAW2D` alla classe `CMFCD2DWalkthroughView`.  
  
5.  Nella casella **Gestori esistenti** selezionare `OnDraw2D`.  Fare clic su **Modifica codice** per visualizzare il metodo `CMFCD2DWalkthroughView::OnDraw2D`.  Utilizzare il codice riportato di seguito per il metodo `CMFCD2DWalkthroughView::OnDrawD2D`.  
  
    ```  
    afx_msg LRESULT CMFCD2DWalkthroughView::OnDraw2D(WPARAM wParam, LPARAM lParam)  
    {  
        CHwndRenderTarget* pRenderTarget = (CHwndRenderTarget*)lParam;  
        ASSERT_VALID(pRenderTarget);  
  
        CRect rect;  
        GetClientRect(rect);  
  
        pRenderTarget->FillRectangle(rect, m_pLinearGradientBrush);  
        pRenderTarget->DrawText(_T("Hello, World!"), rect, m_pBlackBrush, m_pTextFormat);  
  
        return TRUE;  
    }  
    ```  
  
     Salvare e chiudere il file.  
  
### Per verificare i risultati  
  
1.  Compilare ed eseguire l'applicazione.  Includerà un rettangolo sfumato che cambia quando si ridimensiona la finestra. Al centro del rettangolo verrà visualizzato "Hello World\!".  
  
## Vedere anche  
 [Procedure dettagliate](../mfc/walkthroughs-mfc.md)