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
ms.openlocfilehash: 221092eb25a4f044cda5b379d6774659d9e9d2d1
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81374600"
---
# <a name="changing-the-styles-of-a-window-created-by-mfc"></a>Modifica degli stili di una finestra creata da MFC

Nella versione della `WinMain` funzione, MFC registra diverse classi di finestra standard per l'utente. Poiché in genere non si `WinMain`modificano le funzioni di MFC , tale funzione non offre alcuna possibilità di modificare gli stili di finestra predefiniti di MFC. In questo articolo viene illustrato come modificare gli stili di tale classe di finestra preregistrata in un'applicazione esistente.

## <a name="changing-styles-in-a-new-mfc-application"></a><a name="_core_changing_styles_in_a_new_mfc_application"></a>Modifica degli stili in una nuova applicazione MFC

Se si utilizza Visual C .NET 2.0 o versione successiva, è possibile modificare gli stili di finestra predefiniti nella creazione guidata applicazione quando si crea l'applicazione. Nella pagina Funzionalità interfaccia utente della Creazione guidata applicazione è possibile modificare gli stili per la finestra cornice principale e le finestre figlio MDI. Per entrambi i tipi di finestra, è possibile specificarne lo spessore del telaio (spessore o sottile) e uno dei seguenti elementi:

- Se la finestra dispone di controlli Riduci a icona o Ingrandisci.

- Se la finestra viene visualizzata inizialmente ridotta a icona, ingrandita o nessuna delle due.

Per le finestre cornice principali, è inoltre possibile specificare se la finestra dispone di un menu di sistema. Per le finestre figlio MDI, è possibile specificare se la finestra supporta i riquadri con separatore.

## <a name="changing-styles-in-an-existing-application"></a><a name="_core_changing_styles_in_an_existing_application"></a>Modifica degli stili in un'applicazione esistente

Se si modificano gli attributi della finestra in un'applicazione esistente, seguire invece le istruzioni nel resto di questo articolo.

Per modificare gli attributi di finestra predefiniti utilizzati da un'applicazione framework creata con la creazione guidata applicazione, eseguire l'override della funzione membro virtuale [PreCreateWindow](../mfc/reference/cwnd-class.md#precreatewindow) della finestra. `PreCreateWindow`consente a un'applicazione di accedere al processo di creazione normalmente gestito internamente dalla classe [CDocTemplate.](../mfc/reference/cdoctemplate-class.md) Il framework `PreCreateWindow` chiama appena prima di creare la finestra. Modificando la struttura [CREATESTRUCT](/windows/win32/api/winuser/ns-winuser-createstructw) passata a `PreCreateWindow`, l'applicazione può modificare gli attributi utilizzati per creare la finestra. Ad esempio, per assicurarsi che una finestra non utilizzi una didascalia, utilizzare la seguente operazione bit per bit:

[!code-cpp[NVC_MFCDocView#15](../mfc/codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_1.cpp)]

Nell'applicazione di esempio [CTRLBARS](../overview/visual-cpp-samples.md) viene illustrata questa tecnica per la modifica degli attributi della finestra. A seconda di ciò che l'applicazione cambia in `PreCreateWindow`, potrebbe essere necessario chiamare l'implementazione della classe base della funzione.

La discussione seguente riguarda il caso SDI e il [caso MDI](#_core_the_mdi_case).

## <a name="the-sdi-case"></a><a name="_core_the_sdi_case"></a>Il caso SDI

In un'applicazione di interfaccia a documento singolo (SDI), lo stile di finestra predefinito nel framework è una combinazione degli stili **di WS_OVERLAPPEDWINDOW** e **FWS_ADDTOTITLE.** **FWS_ADDTOTITLE** è uno stile specifico di MFC che indica al framework di aggiungere il titolo del documento alla didascalia della finestra. Per modificare gli attributi della finestra in `PreCreateWindow` un'applicazione SDI, eseguire l'override della funzione nella classe derivata da (da `CFrameWnd` cui è namesla `CMainFrame`la creazione guidata applicazione ). Ad esempio:

[!code-cpp[NVC_MFCDocViewSDI#11](../mfc/codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_2.cpp)]

Questo codice crea una finestra cornice principale senza i pulsanti Riduci a icona e Ingrandisci e senza un bordo considerevole. La finestra è inizialmente centrata sullo schermo.

## <a name="the-mdi-case"></a><a name="_core_the_mdi_case"></a>Il caso MDI

È necessario un po' più di lavoro per modificare lo stile di una finestra figlio in un'applicazione MDI (Multiple Document Interface). Per impostazione predefinita, un'applicazione MDI creata con la creazione guidata applicazione utilizza la classe [predefinita CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) definita in MFC. Per modificare lo stile della finestra di una finestra figlio `CMDIChildWnd` MDI, `CMDIChildWnd` è necessario derivare una nuova classe da e sostituire tutti i riferimenti a nel progetto con riferimenti alla nuova classe. Molto probabilmente, l'unico riferimento a `CMDIChildWnd` nell'applicazione `InitInstance` si trova nella funzione membro dell'applicazione.

Lo stile di finestra predefinito utilizzato in un'applicazione MDI è una combinazione degli stili **WS_CHILD**, **WS_OVERLAPPEDWINDOW**e **FWS_ADDTOTITLE** . Per modificare gli attributi della finestra delle finestre figlio di un'applicazione MDI, eseguire l'override della funzione [PreCreateWindow](../mfc/reference/cwnd-class.md#precreatewindow) nella classe derivata da `CMDIChildWnd`. Ad esempio:

[!code-cpp[NVC_MFCDocView#16](../mfc/codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_3.cpp)]

Questo codice crea finestre figlio MDI senza un pulsante Ingrandisci.This code creates MDI child windows without a Maximize button.

### <a name="what-do-you-want-to-know-more-about"></a>Cosa vuoi sapere di più su

- [Stili di Windows](../mfc/reference/styles-used-by-mfc.md#window-styles)

- [Stili della finestra cornice](../mfc/frame-window-styles-cpp.md)

- [Stili di finestra](/windows/win32/winmsg/window-styles)

## <a name="see-also"></a>Vedere anche

[Stili Frame-Window](../mfc/frame-window-styles-cpp.md)
