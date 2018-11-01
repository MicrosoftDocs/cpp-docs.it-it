---
title: Finestre cornice
ms.date: 11/04/2016
helpviewer_keywords:
- document frame windows [MFC]
- windows [MFC], MDI
- window classes [MFC], frame
- single document interface (SDI) [MFC]
- single document interface (SDI) [MFC], frame windows
- views [MFC], and frame windows
- CFrameWnd class [MFC], frame windows
- frame windows [MFC]
- frame windows [MFC], about frame windows
- MFC, frame windows
- MDI [MFC], frame windows
- splitter windows [MFC], and frame windows
ms.assetid: 40677339-8135-4f5e-aba6-3fced3078077
ms.openlocfilehash: 09db7bab392778297f17c14f7bb807f91af4d896
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50619934"
---
# <a name="frame-windows"></a>Finestre cornice

Quando un'applicazione in esecuzione in Windows, l'utente interagisce con i documenti visualizzati nelle finestre cornice. Una finestra cornice di documento presenta due componenti principali: il frame e il contenuto che lo delimita. Una finestra cornice di documento può essere un' [interfaccia a documento singolo](../mfc/sdi-and-mdi.md) finestra cornice (SDI) o una [interfaccia a documenti multipli](../mfc/sdi-and-mdi.md) finestra figlio (MDI). Windows gestisce la maggior parte delle interazioni dell'utente con la finestra cornice: lo spostamento e il ridimensionamento della finestra, chiuderla, riducendo al minimo e averla. Per gestire il contenuto all'interno del frame.

## <a name="frame-windows-and-views"></a>Le visualizzazioni e frame Windows

Il framework MFC utilizza finestre cornice per contenere le viste. I due componenti, frame e il contenuto, vengono rappresentate e gestite da due diverse classi in MFC. Una classe della finestra cornice gestisce il frame e una classe di visualizzazione gestisce il contenuto. La finestra di visualizzazione è un elemento figlio della finestra cornice. Disegno e l'interazione dell'utente con il documento essere eseguite nell'area client della visualizzazione, non l'area client della finestra cornice. La finestra cornice fornisce un frame visibile intorno a una visualizzazione completa di una barra del titolo e i controlli di finestra standard, ad esempio un menu di controllo, i pulsanti per ridurre e ingrandire la finestra e controlli per il ridimensionamento della finestra. Il "contenuto" costituito da dell'area client della finestra, che è completamente occupato da una finestra figlio, ovvero la visualizzazione. Nella figura seguente mostra la relazione tra una finestra cornice e una visualizzazione.

![Visualizzazione della finestra cornice](../mfc/media/vc37fx1.gif "vc37fx1") finestra cornice e visualizzazione

## <a name="frame-windows-and-splitter-windows"></a>Frame Windows e Windows con separatore

Un'altra disposizione comune è per la finestra cornice a frame visualizzazioni multiple, in genere usando una [finestra con separatore](../mfc/multiple-document-types-views-and-frame-windows.md). In una finestra con separatore, l'area client della finestra cornice è occupato da una finestra con separatore, che a sua volta ha più finestre figlio, denominati, i riquadri sono viste.

### <a name="what-do-you-want-to-know-more-about"></a>Ciò che si desidera saperne di più

**Negli argomenti di finestra cornice generale**

- [Oggetti finestra](../mfc/window-objects.md)

- [Classi di finestre cornice](../mfc/frame-window-classes.md)

- [Le classi Frame-Window create dalla procedura guidata dell'applicazione](../mfc/frame-window-classes-created-by-the-application-wizard.md)

- [Stili finestra cornice](../mfc/frame-window-styles-cpp.md)

- [Operazioni di finestre cornice](../mfc/what-frame-windows-do.md)

**Argomenti sull'uso di Windows di Frame**

- [Utilizzo di finestre cornice](../mfc/using-frame-windows.md)

- [Creazione di finestre cornice documento](../mfc/creating-document-frame-windows.md)

- [Eliminazione definitiva di finestre cornice](../mfc/destroying-frame-windows.md)

- [Gestione di finestre figlio MDI](../mfc/managing-mdi-child-windows.md)

- [Gestione della visualizzazione corrente](../mfc/managing-the-current-view.md) in una finestra cornice che contiene più di una vista

- [Gestione dei menu, barre di controllo e tasti di scelta rapida (gli altri oggetti che condividono lo spazio della finestra cornice)](../mfc/managing-menus-control-bars-and-accelerators.md)

**Argomenti relativi alla funzionalità delle finestre cornice speciali**

- [Trascinare e rilasciare file](../mfc/dragging-and-dropping-files-in-a-frame-window.md) da Esplora File o File Manager in una finestra cornice

- [Risponde a dynamic data exchange (DDE)](../mfc/responding-to-dynamic-data-exchange-dde.md)

- [Stati semimodali: Guida Windows sensibile al contesto (orchestrazione di altre azioni della finestra)](../mfc/orchestrating-other-window-actions.md)

- [Stati semimodali: la stampa e anteprima di stampa (orchestrazione di altre azioni della finestra)](../mfc/orchestrating-other-window-actions.md)

**Argomenti sugli altri tipi di Windows**

- [Uso delle visualizzazioni](../mfc/using-views.md)

- [Finestre di dialogo](../mfc/dialog-boxes.md)

- [Controlli](../mfc/controls-mfc.md)

## <a name="see-also"></a>Vedere anche

[Windows](../mfc/windows.md)

