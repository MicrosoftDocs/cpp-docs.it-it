---
title: 'Procedura dettagliata: aggiunta di un oggetto D2D a un progetto MFC'
ms.date: 04/25/2019
helpviewer_keywords:
- MFC, D2D
- D2D [MFC]
ms.assetid: dda36c33-c231-4da6-a62f-72d69a12b6dd
ms.openlocfilehash: 5e1c75e32899ef9697025d662eeec4a6a2482f2b
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74304305"
---
# <a name="walkthrough-adding-a-d2d-object-to-an-mfc-project"></a>Procedura dettagliata: aggiunta di un oggetto D2D a un progetto MFC

In questa procedura dettagliata viene illustrato come aggiungere un oggetto Direct2D (D2D) di base C++a un progetto Visual, libreria Microsoft Foundation Class (MFC) e quindi compilare il progetto in un'applicazione che stampa "Hello, World!" su uno sfondo sfumato.

Nella procedura dettagliata viene illustrato come eseguire queste attività:

- Creare un'applicazione MFC.

- Creare un pennello a tinta unita e un pennello a sfumatura lineare.

- Modificare il pennello sfumato in modo che cambi correttamente quando la finestra viene ridimensionata.

- Implementare un gestore di disegno D2D.

- Verificare i risultati.

[!INCLUDE[note_settings_general](../mfc/includes/note_settings_general_md.md)]

## <a name="prerequisites"></a>Prerequisites

Per completare questa procedura dettagliata, è necessario che Visual Studio sia installato con il carico di lavoro sviluppo di applicazioni **desktop con C++**  e il componente **Visual C++ MFC facoltativo per x86 e x64** .

## <a name="to-create-an-mfc-application"></a>Per creare un'applicazione MFC

1. Utilizzare la **creazione guidata applicazione MFC** per creare un'applicazione MFC. Vedere [procedura dettagliata: uso dei nuovi controlli della shell MFC](walkthrough-using-the-new-mfc-shell-controls.md) per istruzioni su come aprire la procedura guidata per la versione di Visual Studio.

1. Nella casella **nome** digitare *MFCD2DWalkthrough*. Scegliere **OK**.

1. Nella **creazione guidata applicazione MFC**scegliere **fine** senza modificare le impostazioni.

## <a name="to-create-a-solid-color-brush-and-a-linear-gradient-brush"></a>Per creare un pennello a tinta unita e un pennello a sfumatura lineare

1. In **Esplora soluzioni**, nella cartella **file di intestazione** del progetto **MFCD2DWalkthrough** aprire MFCD2DWalkthroughView. h. Aggiungere questo codice alla classe `CMFCD2DWalkthroughView` per creare tre variabili di dati:

   ```cpp
   CD2DTextFormat* m_pTextFormat;
   CD2DSolidColorBrush* m_pBlackBrush;
   CD2DLinearGradientBrush* m_pLinearGradientBrush;
   ```

   Salvare il file e chiuderlo.

1. Nella cartella **file di origine** aprire MFCD2DWalkthroughView. cpp. Nel costruttore per la classe `CMFCD2DWalkthroughView` aggiungere il codice seguente:

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

## <a name="to-modify-the-gradient-brush-so-that-it-will-change-appropriately-when-the-window-is-resized"></a>Per modificare il pennello sfumato in modo che cambi correttamente quando la finestra viene ridimensionata

1. Scegliere **creazione guidata classe**dal menu **progetto** .

1. Nella **creazione guidata classe MFC**, in **nome classe**, selezionare `CMFCD2DWalkthroughView`.

1. Nella casella **messaggi** della scheda **messaggi** selezionare `WM_SIZE`, quindi scegliere **Aggiungi gestore**. Questa azione aggiunge il gestore di messaggi `OnSize` alla classe `CMFCD2DWalkthroughView`.

1. Nella casella **gestori esistenti** selezionare `OnSize`. Scegliere **modifica codice** per visualizzare il metodo `CMFCD2DWalkthroughView::OnSize`. Alla fine del metodo aggiungere il codice seguente.

   ```cpp
   m_pLinearGradientBrush->SetEndPoint(CPoint(cx, cy));
   ```

   Salvare il file e chiuderlo.

## <a name="to-implement-a-d2d-drawing-handler"></a>Per implementare un gestore di disegno D2D

1. Scegliere **creazione guidata classe**dal menu **progetto** .

1. Nella **creazione guidata classe MFC**, in **nome classe**, selezionare `CMFCD2DWalkthroughView`.

1. Nella scheda **messaggi** scegliere **Aggiungi messaggio personalizzato**.

1. Nella finestra di dialogo **Aggiungi messaggio personalizzato** Digitare *AFX_WM_DRAW2D*nella finestra di **messaggio di Windows personalizzata** . Nella casella **Nome gestore messaggi** digitare *OnDraw2D*. Selezionare l'opzione **messaggio registrato** , quindi scegliere **OK**. Questa azione consente di aggiungere un gestore di messaggi per il messaggio di AFX_WM_DRAW2D alla classe `CMFCD2DWalkthroughView`.

1. Nella casella **gestori esistenti** selezionare `OnDraw2D`. Scegliere **modifica codice** per visualizzare il metodo `CMFCD2DWalkthroughView::OnDraw2D`. Usare questo codice per il metodo `CMFCD2DWalkthroughView::OnDrawD2D`:

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

Compilare ed eseguire l'applicazione. Deve avere un rettangolo sfumatura che cambia quando si ridimensiona la finestra. "Hello World!" deve essere visualizzato al centro del rettangolo.

## <a name="see-also"></a>Vedere anche

[Procedure dettagliate](../mfc/walkthroughs-mfc.md)
