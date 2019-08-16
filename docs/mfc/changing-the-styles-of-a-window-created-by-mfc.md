---
title: Modifica degli stili di una finestra creata da MFC
ms.date: 11/04/2016
helpviewer_keywords:
- window styles [MFC]
- WS_OVERLAPPEDWINDOW macro [MFC]
- single document interface (SDI), changing window attributes
- MDI [MFC], window styles
- windows [MFC], MFC
- child windows [MFC], styles
- MFC, windows
- CFrameWnd class [MFC], window styles
- CREATESTRUCT macro [MFC]
- CMDIChildWnd class [MFC], changing window styles
- multidocument interface style
- PreCreateWindow method [MFC], window styles
- single document interface (SDI), style
- default window style
- defaults [MFC], window style
- PreCreateWindow method [MFC], changing window styles
- CMainFrame class [MFC]
- styles [MFC], windows
ms.assetid: 77fa4f03-96b4-4687-9ade-41e46f7e4b0a
ms.openlocfilehash: ef79fc88604d565a942fdb0ae07d5fc5a2e0ebeb
ms.sourcegitcommit: fcb48824f9ca24b1f8bd37d647a4d592de1cc925
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 08/15/2019
ms.locfileid: "69509004"
---
# <a name="changing-the-styles-of-a-window-created-by-mfc"></a>Modifica degli stili di una finestra creata da MFC

Nella versione della `WinMain` funzione MFC registra diverse classi di finestra standard. Poiché in genere non si modificano `WinMain`le classi di MFC, la funzione non consente di modificare gli stili predefiniti della finestra MFC. Questo articolo illustra come è possibile modificare gli stili di una classe di finestra preregistrata in un'applicazione esistente.

##  <a name="_core_changing_styles_in_a_new_mfc_application"></a>Modifica degli stili in una nuova applicazione MFC

Se si usa Visual C++ 2,0 o versione successiva, è possibile modificare gli stili predefiniti della finestra nella creazione guidata applicazione quando si crea l'applicazione. Nella pagina funzionalità interfaccia utente della creazione guidata applicazione è possibile modificare gli stili per la finestra cornice principale e le finestre figlio MDI. Per entrambi i tipi di finestra, è possibile specificare lo spessore del fotogramma (thick o thin) e uno degli elementi seguenti:

- Indica se la finestra dispone di controlli Riduci a icona o Ingrandisci.

- Indica se la finestra viene visualizzata inizialmente ridotta a icona, ingrandita o nessuna delle due.

Per le finestre cornice principali, è inoltre possibile specificare se la finestra dispone di un menu di sistema. Per le finestre figlio MDI, è possibile specificare se la finestra supporta i riquadri con barra di divisione.

##  <a name="_core_changing_styles_in_an_existing_application"></a>Modifica degli stili in un'applicazione esistente

Se si modificano gli attributi di finestra in un'applicazione esistente, seguire invece le istruzioni riportate nella parte restante di questo articolo.

Per modificare gli attributi predefiniti della finestra utilizzati da un'applicazione Framework creata con la creazione guidata applicazione, eseguire l'override della funzione membro virtuale [PreCreateWindow](../mfc/reference/cwnd-class.md#precreatewindow) della finestra. `PreCreateWindow`consente a un'applicazione di accedere al processo di creazione normalmente gestito internamente dalla classe [CDocTemplate](../mfc/reference/cdoctemplate-class.md) . Il Framework chiama `PreCreateWindow` immediatamente prima di creare la finestra. Modificando la struttura [struttura CREATESTRUCT](/windows/win32/api/winuser/ns-winuser-createstructw) passata a `PreCreateWindow`, l'applicazione può modificare gli attributi utilizzati per creare la finestra. Per assicurarsi, ad esempio, che una finestra non utilizzi una didascalia, utilizzare l'operazione bit per bit seguente:

[!code-cpp[NVC_MFCDocView#15](../mfc/codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_1.cpp)]

L'applicazione di esempio [CTRLBARS](../overview/visual-cpp-samples.md) illustra questa tecnica per modificare gli attributi di finestra. A seconda delle modifiche apportate all' `PreCreateWindow`applicazione, potrebbe essere necessario chiamare l'implementazione della classe di base della funzione.

Nella discussione seguente vengono descritti i casi SDI e [MDI](#_core_the_mdi_case).

##  <a name="_core_the_sdi_case"></a>Il caso SDI

In un'applicazione SDI (Single Document Interface), lo stile predefinito della finestra nel Framework è una combinazione degli stili **WS_OVERLAPPEDWINDOW** e **FWS_ADDTOTITLE** . **FWS_ADDTOTITLE** è uno stile specifico di MFC che indica al Framework di aggiungere il titolo del documento alla didascalia della finestra. Per modificare gli attributi della finestra in un'applicazione SDI, eseguire `PreCreateWindow` l'override della funzione nella classe `CFrameWnd` derivata da, che viene assegnata `CMainFrame`alla creazione guidata applicazione. Ad esempio:

[!code-cpp[NVC_MFCDocViewSDI#11](../mfc/codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_2.cpp)]

Questo codice crea una finestra cornice principale senza Riduci a icona e Ingrandisci pulsanti senza un bordo ridimensionabile. La finestra viene inizialmente centrata sullo schermo.

##  <a name="_core_the_mdi_case"></a>Il caso MDI

Per modificare lo stile della finestra di una finestra figlio in un'applicazione con interfaccia a documenti multipli (MDI), è necessario un po' di lavoro. Per impostazione predefinita, un'applicazione MDI creata con la creazione guidata applicazione utilizza la classe [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) predefinita definita in MFC. Per modificare lo stile della finestra di una finestra figlio MDI, è necessario derivare una nuova `CMDIChildWnd` classe da e sostituire tutti `CMDIChildWnd` i riferimenti a nel progetto con riferimenti alla nuova classe. Probabilmente, l'unico riferimento a `CMDIChildWnd` nell'applicazione si trova nella funzione `InitInstance` membro dell'applicazione.

Lo stile predefinito della finestra utilizzato in un'applicazione MDI è costituito da una combinazione degli stili **WS_CHILD**, **WS_OVERLAPPEDWINDOW**e **FWS_ADDTOTITLE** . Per modificare gli attributi delle finestre figlio di un'applicazione MDI, eseguire l'override della funzione [PreCreateWindow](../mfc/reference/cwnd-class.md#precreatewindow) nella classe derivata da `CMDIChildWnd`. Ad esempio:

[!code-cpp[NVC_MFCDocView#16](../mfc/codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_3.cpp)]

Questo codice crea finestre figlio MDI senza pulsante Ingrandisci.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

- [Stili di Windows](../mfc/reference/styles-used-by-mfc.md#window-styles)

- [Stili della finestra cornice](../mfc/frame-window-styles-cpp.md)

- [Stili finestra](/windows/win32/winmsg/window-styles)

## <a name="see-also"></a>Vedere anche

[Stili della finestra cornice](../mfc/frame-window-styles-cpp.md)
