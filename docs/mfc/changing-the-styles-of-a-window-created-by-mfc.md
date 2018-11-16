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
ms.openlocfilehash: ebef671a34d2b50bd547a2fd9e484581df8ee3e8
ms.sourcegitcommit: b032daf81cb5fdb1f5a988277ee30201441c4945
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/15/2018
ms.locfileid: "51693218"
---
# <a name="changing-the-styles-of-a-window-created-by-mfc"></a>Modifica degli stili di una finestra creata da MFC

Nella sua versione del `WinMain` (funzione), MFC registra diverse classi di finestra standard per l'utente. Perché in genere non devono modificati di MFC `WinMain`, che la funzione non offre alcuna possibilità di modificare gli stili di finestra predefiniti MFC. Questo articolo illustra come è possibile modificare gli stili di tali classi preregistrato finestra in un'applicazione esistente.

##  <a name="_core_changing_styles_in_a_new_mfc_application"></a> Modifica degli stili in una nuova applicazione MFC

Se si usa Visual C++ versione 2.0 o versioni successive, è possibile modificare gli stili di finestra predefiniti nella procedura guidata dell'applicazione quando si crea l'applicazione. Nella pagina di funzionalità dell'interfaccia utente della procedura guidata dell'applicazione, è possibile modificare gli stili per la finestra cornice principale e le finestre figlio MDI. Per entrambi i tipi finestra, è possibile specificare lo spessore del frame (completa o thin) e uno dei seguenti:

- Indica se la finestra dispone di controlli di ingrandimento o riduzione a icona.

- Se viene visualizzata la finestra inizialmente ridotto a icona, ingrandita, o nessuna delle due.

Per le finestre cornice principale, è anche possibile specificare se la finestra dispone di un Menu di sistema. Per le finestre figlio MDI, è possibile specificare se la finestra supporta dei riquadri di divisione.

##  <a name="_core_changing_styles_in_an_existing_application"></a> Modifica degli stili in un'applicazione esistente

Se si sta modificando gli attributi di finestra in un'applicazione esistente, seguire invece le istruzioni nella parte restante di questo articolo.

Per modificare gli attributi di finestra predefinito usati da un'applicazione creata con la creazione guidata applicazione, eseguire l'override della finestra [PreCreateWindow](../mfc/reference/cwnd-class.md#precreatewindow) funzione membro virtuale. `PreCreateWindow` un'applicazione può accedere il processo di creazione in genere gestito internamente dal [CDocTemplate](../mfc/reference/cdoctemplate-class.md) classe. Il framework chiama `PreCreateWindow` appena prima della creazione della finestra. Modificando la [CREATESTRUCT](../mfc/reference/createstruct-structure.md) struttura passata al `PreCreateWindow`, l'applicazione può modificare gli attributi utilizzati per creare la finestra. Ad esempio, per garantire una finestra non viene utilizzata una didascalia, utilizzare la seguente operazione bit per bit:

[!code-cpp[NVC_MFCDocView#15](../mfc/codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_1.cpp)]

Il [viene](../visual-cpp-samples.md) applicazione di esempio illustra questa tecnica per la modifica degli attributi della finestra. A seconda della modifica all'applicazione nel `PreCreateWindow`, potrebbe essere necessario chiamare l'implementazione della classe base della funzione.

La discussione seguente illustra il caso SDI e il [caso MDI](#_core_the_mdi_case).

##  <a name="_core_the_sdi_case"></a> Il caso SDI

In un'applicazione single document interface (SDI), lo stile di finestra predefinito in framework è una combinazione dei **WS_OVERLAPPEDWINDOW** e **FWS_ADDTOTITLE** stili. **FWS_ADDTOTITLE** è uno stile di MFC specifiche che indica al framework di aggiungere il titolo del documento per la didascalia della finestra. Per modificare gli attributi della finestra in un'applicazione SDI, eseguire l'override di `PreCreateWindow` funzione nella classe derivata da `CFrameWnd` (quali i nomi di creazione guidata applicazione `CMainFrame`). Ad esempio:

[!code-cpp[NVC_MFCDocViewSDI#11](../mfc/codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_2.cpp)]

Questo codice crea una finestra cornice principale senza i pulsanti Riduci a icona e Ingrandisci né un bordo ridimensionabile. La finestra è centrata inizialmente sullo schermo.

##  <a name="_core_the_mdi_case"></a> Nel caso MDI

È necessario più lavoro per modificare lo stile della finestra di una finestra figlio in un'applicazione (MDI) interfaccia a documenti multipli. Per impostazione predefinita, un'applicazione MDI creata con la creazione guidata applicazioni utilizza il valore predefinito [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) classe definita in MFC. Per modificare lo stile della finestra di una finestra figlio MDI, è necessario derivare una nuova classe da `CMDIChildWnd` e sostituire tutti i riferimenti a `CMDIChildWnd` nel progetto con riferimenti alla nuova classe. Molto probabilmente, l'unico riferimento a `CMDIChildWnd` nell'applicazione si trova all'interno dell'applicazione `InitInstance` funzione membro.

Lo stile di finestra predefinito usato in un'applicazione MDI è una combinazione dei **WS_CHILD**, **WS_OVERLAPPEDWINDOW**, e **FWS_ADDTOTITLE** stili. Per modificare gli attributi della finestra di finestre figlio di un'applicazione MDI, eseguire l'override di [PreCreateWindow](../mfc/reference/cwnd-class.md#precreatewindow) funzione nella classe derivata da `CMDIChildWnd`. Ad esempio:

[!code-cpp[NVC_MFCDocView#16](../mfc/codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_3.cpp)]

Questo codice crea figlio MDI windows senza un pulsante di ingrandimento.

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

- [Stili di Windows](../mfc/reference/styles-used-by-mfc.md#window-styles)

- [Stili frame-window](../mfc/frame-window-styles-cpp.md)

- [Stili finestra](/windows/desktop/winmsg/window-styles)

## <a name="see-also"></a>Vedere anche

[Stili frame-Window](../mfc/frame-window-styles-cpp.md)

