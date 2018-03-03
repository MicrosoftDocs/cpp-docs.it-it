---
title: Modifica degli stili di una finestra creata da MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: article
dev_langs:
- C++
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
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 0d17f49535078261669841ea502c6af821aa5e29
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="changing-the-styles-of-a-window-created-by-mfc"></a>Modifica degli stili di una finestra creata da MFC
La versione del `WinMain` (funzione), MFC la registrazione da diverse classi di finestra standard. Poiché non è in genere non modificare MFC `WinMain`, che non restituisce è alcuna possibilità di modificare gli stili di finestra predefiniti MFC. In questo articolo viene illustrato come è possibile modificare gli stili di tale classe finestra preregistrato in un'applicazione esistente.  
  
##  <a name="_core_changing_styles_in_a_new_mfc_application"></a>Modifica degli stili in una nuova applicazione MFC  
 Se si utilizza Visual C++ 2.0 o versione successiva, è possibile modificare gli stili di finestra predefinito nella creazione guidata applicazione, quando si crea l'applicazione. Nella pagina di funzionalità dell'interfaccia utente della procedura guidata applicazione, è possibile modificare gli stili per la finestra cornice principale e le finestre figlio MDI. Per un tipo di finestra, è possibile specificare lo spessore del frame (thick o thin) e uno dei seguenti:  
  
-   Se la finestra dispone di controlli di riduzione a icona o ingrandimento.  
  
-   Se viene visualizzata la finestra inizialmente ridotta a icona, ingrandito, o entrambe le opzioni.  
  
 Per le finestre cornice principale, è possibile specificare se la finestra dispone di un Menu di sistema. Per le finestre figlio MDI, è possibile specificare il supporto di riquadri di divisione.  
  
##  <a name="_core_changing_styles_in_an_existing_application"></a>Modifica degli stili in un'applicazione esistente  
 Se si desidera modificare gli attributi di finestra in un'applicazione esistente, è possibile seguire le istruzioni nella parte restante di questo articolo.  
  
 Per modificare gli attributi di finestra predefinito utilizzati da un'applicazione creata con la creazione guidata applicazione, eseguire l'override della finestra [PreCreateWindow](../mfc/reference/cwnd-class.md#precreatewindow) funzione membro virtuale. `PreCreateWindow`consente a un'applicazione di accedere in genere gestito internamente per il processo di creazione di [CDocTemplate](../mfc/reference/cdoctemplate-class.md) classe. Il framework chiama `PreCreateWindow` appena prima della creazione della finestra. Modificando il [CREATESTRUCT](../mfc/reference/createstruct-structure.md) struttura passata al `PreCreateWindow`, l'applicazione è possibile modificare gli attributi utilizzati per creare una finestra. Ad esempio, per garantire una finestra non viene utilizzata una didascalia, utilizzare la seguente operazione bit per bit:  
  
 [!code-cpp[NVC_MFCDocView#15](../mfc/codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_1.cpp)]  
  
 Il [viene](../visual-cpp-samples.md) applicazione di esempio illustra questa tecnica per la modifica degli attributi della finestra. A seconda di ciò che l'applicazione viene modificato `PreCreateWindow`, potrebbe essere necessario chiamare l'implementazione della classe di base della funzione.  
  
 La seguente discussione riguarda il caso SDI e [case MDI](#_core_the_mdi_case).  
  
##  <a name="_core_the_sdi_case"></a>Nel caso di SDI  
 In un'applicazione single document interface (SDI), lo stile di finestra predefinito in framework è una combinazione del **WS_OVERLAPPEDWINDOW** e **FWS_ADDTOTITLE** stili. **FWS_ADDTOTITLE** è uno stile specifici di MFC che indica al framework di aggiungere il titolo del documento per la didascalia della finestra. Per modificare gli attributi della finestra in un'applicazione SDI, eseguire l'override di `PreCreateWindow` funzione nella classe derivata da `CFrameWnd` (quali i nomi di creazione guidata applicazione `CMainFrame`). Ad esempio:  
  
 [!code-cpp[NVC_MFCDocViewSDI#11](../mfc/codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_2.cpp)]  
  
 Questo codice crea una finestra cornice principale, senza i pulsanti Riduci a icona e Ingrandisci e senza bordo ridimensionabile. La finestra è inizialmente centrata sullo schermo.  
  
##  <a name="_core_the_mdi_case"></a>Nel caso MDI  
 Più lunga è necessaria per modificare lo stile della finestra di una finestra figlio in un'applicazione di multiple document interface (MDI). Per impostazione predefinita, un'applicazione MDI creata con la creazione guidata applicazione viene utilizzato il valore predefinito [CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md) classe definita in MFC. Per modificare lo stile della finestra di una finestra figlio MDI, è necessario derivare una nuova classe da `CMDIChildWnd` e sostituire tutti i riferimenti a `CMDIChildWnd` nel progetto con i riferimenti alla nuova classe. È probabile che il riferimento solo a `CMDIChildWnd` nell'applicazione si trova in un'applicazione `InitInstance` funzione membro.  
  
 Lo stile di finestra predefinito utilizzato in un'applicazione MDI è una combinazione del **WS_CHILD**, **WS_OVERLAPPEDWINDOW**, e **FWS_ADDTOTITLE** stili. Per modificare gli attributi delle finestre figlio di un'applicazione MDI, eseguire l'override di [PreCreateWindow](../mfc/reference/cwnd-class.md#precreatewindow) funzione nella classe derivata da `CMDIChildWnd`. Ad esempio:  
  
 [!code-cpp[NVC_MFCDocView#16](../mfc/codesnippet/cpp/changing-the-styles-of-a-window-created-by-mfc_3.cpp)]  
  
 Questo codice crea figlio MDI di windows senza un pulsante di ingrandimento.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
  
-   [Stili di Windows](../mfc/reference/styles-used-by-mfc.md#window-styles)  
  
-   [Stili frame-window](../mfc/frame-window-styles-cpp.md)  
  
-   [Stili finestra](http://msdn.microsoft.com/library/windows/desktop/ms632600)  
  
## <a name="see-also"></a>Vedere anche  
 [Stili frame-Window](../mfc/frame-window-styles-cpp.md)

