---
title: 'Procedura dettagliata: aggiunta di un oggetto D2D a un progetto MFC'
ms.date: 09/20/2018
helpviewer_keywords:
- MFC, D2D
- D2D [MFC]
ms.assetid: dda36c33-c231-4da6-a62f-72d69a12b6dd
ms.openlocfilehash: 0793511f09be9dcb37732c4c16bfd2b3038a6cf4
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50567258"
---
# <a name="walkthrough-adding-a-d2d-object-to-an-mfc-project"></a>Procedura dettagliata: aggiunta di un oggetto D2D a un progetto MFC

Questa procedura dettagliata illustra come aggiungere un Direct2D basic (D2D) dell'oggetto a un progetto (MFC (Microsoft Foundation Class Library), Visual C++ e quindi compilare il progetto in un'applicazione che visualizza "Hello, world" su uno sfondo sfumato.

La procedura dettagliata illustra come eseguire queste operazioni:

- Creare un'applicazione MFC.

- Creare un pennello tinta unita e un pennello sfumatura lineare.

- Modificare il pennello a sfumatura in modo che venga modificato di conseguenza quando la finestra viene ridimensionata.

- Implementare un gestore disegno D2D.

- Verificare i risultati.

[!INCLUDE[note_settings_general](../mfc/includes/note_settings_general_md.md)]

## <a name="prerequisites"></a>Prerequisiti

Per completare questa procedura dettagliata, è necessario disporre di Visual Studio installati con il **sviluppo di applicazioni Desktop con C++** carichi di lavoro e l'opzione facoltativa **MFC Visual C++ per x86 e x64** componente.

## <a name="to-create-an-mfc-application"></a>Per creare un'applicazione MFC

1. Nel **File** dal menu **New** e quindi scegliere **progetto**.

1. Nel **nuovo progetto** finestra di dialogo, nel riquadro sinistro sotto **modelli installati**, espandere **Visual C++** e quindi selezionare **MFC**. Nel riquadro centrale, selezionare **applicazione MFC**. Nel **Name** , digitare *MFCD2DWalkthrough*. Scegliere **OK**.

1. Nel **Creazione guidata applicazione MFC**, scegliere **fine** senza modificare le impostazioni.

## <a name="to-create-a-solid-color-brush-and-a-linear-gradient-brush"></a>Per creare un pennello tinta unita e un pennello sfumatura lineare

1. In **Esplora soluzioni**, nella **MFCD2DWalkthrough** progetto il **file di intestazione** MFCD2DWalkthroughView Apri cartella. Aggiungere questo codice per il `CMFCD2DWalkthroughView` classe per creare tre variabili di dati:

   ```cpp
   CD2DTextFormat* m_pTextFormat;
   CD2DSolidColorBrush* m_pBlackBrush;
   CD2DLinearGradientBrush* m_pLinearGradientBrush;
   ```

   Salvare il file e chiuderlo.

1. Nel **file di origine** MFCD2DWalkthroughView Apri cartella. Nel costruttore per il `CMFCD2DWalkthroughView` classe, aggiungere questo codice:

   ```cpp
   // Enable D2D support for this window:
   EnableD2DSupport();

   // Initialize D2D resources:
   m_pBlackBrush = new CD2DSolidColorBrush(
       GetRenderTarget(),
       D2D1::ColorF(D2D1::ColorF::Black));

   m_pTextFormat = new CD2DTextFormat(
       GetRenderTarget(),
       _T("Verdana"),
       50);

   m_pTextFormat->Get()->SetTextAlignment(
       DWRITE_TEXT_ALIGNMENT_CENTER);

   m_pTextFormat->Get()->SetParagraphAlignment(
       DWRITE_PARAGRAPH_ALIGNMENT_CENTER);

   D2D1_GRADIENT_STOP gradientStops[2];

   gradientStops[0].color =
       D2D1::ColorF(D2D1::ColorF::White);

   gradientStops[0].position = 0.f;
   gradientStops[1].color =
       D2D1::ColorF(D2D1::ColorF::Indigo);

   gradientStops[1].position = 1.f;

   m_pLinearGradientBrush = new CD2DLinearGradientBrush(
       GetRenderTarget(),
       gradientStops,
       ARRAYSIZE(gradientStops),
       D2D1::LinearGradientBrushProperties(
           D2D1::Point2F(0,0),
           D2D1::Point2F(0,0)));
   ```

   Salvare il file e chiuderlo.

## <a name="to-modify-the-gradient-brush-so-that-it-will-change-appropriately-when-the-window-is-resized"></a>Modificare il pennello a sfumatura in modo che venga modificato di conseguenza quando la finestra viene ridimensionata

1. Nel **Project** menu, scegliere **Creazione guidata classe**.

1. Nel **Creazione guidata classe MFC**, in **Class name**, selezionare `CMFCD2DWalkthroughView`.

1. Nel **messaggi** nella scheda il **messaggi** , quindi selezionare `WM_SIZE` e quindi scegliere **Add Handler**. Questa azione aggiunge il `OnSize` gestore di messaggi per il `CMFCD2DWalkthroughView` classe.

1. Nel **i gestori esistenti** , quindi selezionare `OnSize`. Scegli **modificare il codice** per visualizzare il `CMFCD2DWalkthroughView::OnSize` (metodo). Alla fine del metodo, aggiungere il codice seguente.

   ```cpp
   m_pLinearGradientBrush->SetEndPoint(CPoint(cx, cy));
   ```

   Salvare il file e chiuderlo.

## <a name="to-implement-a-d2d-drawing-handler"></a>Per implementare un gestore disegno D2D

1. Nel **Project** menu, scegliere **Creazione guidata classe**.

1. Nel **Creazione guidata classe MFC**, in **Class name**, selezionare `CMFCD2DWalkthroughView`.

1. Nel **messaggi** scheda, scegliere **Aggiungi messaggio personalizzato**.

1. Nel **Aggiungi messaggio personalizzato** nella finestra di dialogo il **messaggio Windows personalizzato** , digitare *AFX_WM_DRAW2D*. Nel **nome gestore di messaggi** , digitare *OnDraw2D*. Selezionare il **messaggio registrato** opzione e quindi scegliere **OK**. Questa azione aggiunge un gestore di messaggi per il messaggio AFX_WM_DRAW2D il `CMFCD2DWalkthroughView` classe.

1. Nel **i gestori esistenti** , quindi selezionare `OnDraw2D`. Scegli **modificare il codice** per visualizzare il `CMFCD2DWalkthroughView::OnDraw2D` (metodo). Usare questo codice per il `CMFCD2DWalkthroughView::OnDrawD2D` metodo:

   ```cpp
   afx_msg LRESULT CMFCD2DWalkthroughView::OnDraw2D(
       WPARAM wParam,
       LPARAM lParam)
   {
       CHwndRenderTarget* pRenderTarget = (CHwndRenderTarget*)lParam;
       ASSERT_VALID(pRenderTarget);

       CRect rect;
       GetClientRect(rect);

       pRenderTarget->FillRectangle(rect, m_pLinearGradientBrush);

       pRenderTarget->DrawText(
           _T("Hello, World!"),
           rect,
           m_pBlackBrush,
           m_pTextFormat);

       return TRUE;
   }
   ```

   Salvare il file e chiuderlo.

## <a name="to-verify-the-results"></a>Per verificare i risultati

Compilare ed eseguire l'applicazione. Dovrebbe avere un rettangolo di sfumato che cambia quando si ridimensiona la finestra. "Hello World!" deve essere visualizzato al centro del rettangolo.

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)
