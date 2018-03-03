---
title: Finestre cornice | Documenti Microsoft
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
- document frame windows [MFC]
- windows [MFC], MDI
- window classes [MFC], frame
- single document interface (SDI) [MFC]
- single document interface (SDI) [MFC], frame windows
- views [MFC], and frame windows
- CFrameWnd class [MFC], frame windows
- frame windows [MFC]
- frame windows [MFC], about frame widows
- MFC, frame windows
- MDI [MFC], frame windows
- splitter windows [MFC], and frame windows
ms.assetid: 40677339-8135-4f5e-aba6-3fced3078077
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 14dabd345f47b064f78a4e9a3dede834bddeb9d3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="frame-windows"></a>Finestre cornice
Quando un'applicazione viene eseguita in Windows, l'utente interagisce con i documenti visualizzati nelle finestre cornice. Una finestra cornice documento ha due componenti principali: il frame e il contenuto che frame. Una finestra cornice di documento può essere un [interfaccia a documento singolo](../mfc/sdi-and-mdi.md) finestra cornice (SDI) o un [interfaccia a documenti multipli](../mfc/sdi-and-mdi.md) finestra figlio (MDI). Windows gestisce la maggior parte dell'interazione dell'utente con la finestra cornice: lo spostamento e il ridimensionamento della finestra, chiuderla e ridurre al minimo e averla. Per gestire il contenuto all'interno del frame.  
  
## <a name="frame-windows-and-views"></a>Finestre cornice e visualizzazioni  
 Il framework MFC utilizza finestre cornice per contenere le visualizzazioni. I due componenti, frame e il contenuto, vengono rappresentati e gestiti da due classi diverse in MFC. Una classe finestra cornice gestisce il frame e una classe di visualizzazione consente di gestire il contenuto. La finestra di visualizzazione è un elemento figlio della finestra cornice. Disegno e all'interazione dell'utente con il documento avvengono nell'area client della vista, non i area client della finestra cornice. La finestra cornice fornisce un visibile frame intorno a una vista, con una barra del titolo e controlli di finestra standard, ad esempio un menu di controllo, i pulsanti per ridurre e ingrandire la finestra e controlli per il ridimensionamento della finestra. Il "contenuto" costituito da dell'area client della finestra, che è completamente occupato da una finestra figlio, ovvero la visualizzazione. Nella figura seguente viene illustrata la relazione tra una finestra cornice e una visualizzazione.  
  
 ![Visualizzazione della finestra cornice](../mfc/media/vc37fx1.gif "vc37fx1")  
Finestra cornice e visualizzazione  
  
## <a name="frame-windows-and-splitter-windows"></a>Finestre cornice e finestre con separatore  
 Sono un altro accordo comune per la finestra cornice a più visualizzazioni, in genere utilizzando un [finestra con separatore](../mfc/multiple-document-types-views-and-frame-windows.md). In una finestra con separatore, l'area client della finestra cornice è occupato da una finestra con separatore, che a sua volta ha più finestre figlio, denominate riquadri, che costituiscono le visualizzazioni.  
  
### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più  
 **Argomenti sulle finestre cornice generale**  
  
-   [Oggetti finestra](../mfc/window-objects.md)  
  
-   [Classi finestra cornice](../mfc/frame-window-classes.md)  
  
-   [Le classi Frame-Window create dalla creazione guidata applicazione](../mfc/frame-window-classes-created-by-the-application-wizard.md)  
  
-   [Stili della finestra cornice](../mfc/frame-window-styles-cpp.md)  
  
-   [Operazioni di finestre cornice](../mfc/what-frame-windows-do.md)  
  
 **Argomenti sull'utilizzo di finestre cornice**  
  
-   [Utilizzo di finestre cornice](../mfc/using-frame-windows.md)  
  
-   [Creazione di finestre cornice documento](../mfc/creating-document-frame-windows.md)  
  
-   [Distruzione di finestre cornice](../mfc/destroying-frame-windows.md)  
  
-   [Gestione di finestre figlio MDI](../mfc/managing-mdi-child-windows.md)  
  
-   [Gestione della visualizzazione corrente](../mfc/managing-the-current-view.md) in una finestra cornice contenente più di una visualizzazione  
  
-   [Gestione dei menu, barre di controllo e tasti di scelta rapida (gli altri oggetti che condividono lo spazio della finestra cornice)](../mfc/managing-menus-control-bars-and-accelerators.md)  
  
 **Argomenti relativi alla funzionalità finestra Frame speciale**  
  
-   [Trascinamento della selezione file](../mfc/dragging-and-dropping-files-in-a-frame-window.md) da Esplora File o File Manager in una finestra cornice  
  
-   [Risponde a dynamic data exchange (DDE)](../mfc/responding-to-dynamic-data-exchange-dde.md)  
  
-   [Stati semimodali: sensibile al contesto della Guida di Windows (orchestrazione di altre azioni della finestra)](../mfc/orchestrating-other-window-actions.md)  
  
-   [Stati semimodali: stampa e anteprima di stampa (orchestrazione di altre azioni della finestra)](../mfc/orchestrating-other-window-actions.md)  
  
 **Argomenti su altri tipi di Windows**  
  
-   [Uso delle visualizzazioni](../mfc/using-views.md)  
  
-   [Finestre di dialogo](../mfc/dialog-boxes.md)  
  
-   [Controlli](../mfc/controls-mfc.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Windows](../mfc/windows.md)

