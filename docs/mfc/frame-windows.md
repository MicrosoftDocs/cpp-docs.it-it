---
description: 'Altre informazioni su: finestre cornice'
title: Finestre cornice
ms.date: 11/19/2018
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
ms.openlocfilehash: ee993b7f8314c28dba38c9ca607366f6fb93da1d
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97193500"
---
# <a name="frame-windows"></a>Finestre cornice

Quando un'applicazione viene eseguita in Windows, l'utente interagisce con i documenti visualizzati nelle finestre cornice. Una finestra cornice del documento ha due componenti principali: il frame e il contenuto che incornicia. Una finestra cornice del documento può essere una finestra cornice a [documento singolo](sdi-and-mdi.md) (SDI) o una finestra secondaria dell' [interfaccia a documenti multipli](sdi-and-mdi.md) (MDI). Windows gestisce la maggior parte dell'interazione dell'utente con la finestra cornice, ovvero lo stato di trasferimento e il ridimensionamento della finestra, la chiusura e la riduzione al minimo e l'ottimizzazione. È possibile gestire il contenuto all'interno del frame.

## <a name="frame-windows-and-views"></a>Finestre cornice e visualizzazioni

Il framework MFC utilizza le finestre cornice per contenere le visualizzazioni. I due componenti, ovvero frame e contenuto, sono rappresentati e gestiti da due classi diverse in MFC. Una classe della finestra cornice gestisce il frame e una classe di visualizzazione gestisce il contenuto. La finestra di visualizzazione è un elemento figlio della finestra cornice. Il disegno e l'interazione dell'utente con il documento avvengono nell'area client della visualizzazione, non nell'area client della finestra cornice. La finestra cornice fornisce un frame visibile intorno a una visualizzazione, completa di una barra del titolo e di controlli standard della finestra, ad esempio un menu di controllo, i pulsanti per ridurre a icona e ingrandire la finestra e i controlli per ridimensionare la finestra. Il "contenuto" è costituito dall'area client della finestra, che è completamente occupata da una finestra figlio, ovvero la visualizzazione. Nella figura seguente viene illustrata la relazione tra una finestra cornice e una visualizzazione.

![Visualizzazione di una finestra cornice](../mfc/media/vc37fx1.gif "Visualizzazione di una finestra cornice") <br/>
Finestra cornice e visualizzazione

## <a name="frame-windows-and-splitter-windows"></a>Finestre cornice e finestre con separatore

Un altro accordo comune è che la finestra cornice per incorniciare più visualizzazioni, in genere utilizzando una [finestra con separatore](multiple-document-types-views-and-frame-windows.md). In una finestra con separatore, l'area client della finestra cornice è occupata da una finestra con separatore, che a sua volta ha più finestre figlio, denominate riquadri, che sono viste.

### <a name="what-do-you-want-to-know-more-about"></a>Che cosa si vuole sapere

**Argomenti della finestra cornice generale**

- [Oggetti finestra](window-objects.md)

- [Classi della finestra cornice](frame-window-classes.md)

- [Classi Frame-Window create dalla creazione guidata applicazione](frame-window-classes-created-by-the-application-wizard.md)

- [Stili della finestra cornice](frame-window-styles-cpp.md)

- [Funzione delle finestre cornice](what-frame-windows-do.md)

**Argomenti sull'utilizzo delle finestre cornice**

- [Uso di finestre cornice](using-frame-windows.md)

- [Creazione di finestre cornice di documenti](creating-document-frame-windows.md)

- [Eliminazione di finestre cornice](destroying-frame-windows.md)

- [Gestione di finestre figlio MDI](managing-mdi-child-windows.md)

- [Gestione della visualizzazione corrente](managing-the-current-view.md) in una finestra cornice che contiene più di una visualizzazione

- [Gestione di menu, barre di controllo e acceleratori (altri oggetti che condividono lo spazio della finestra cornice)](managing-menus-control-bars-and-accelerators.md)

**Argomenti sulle funzionalità speciali della finestra cornice**

- [Trascinamento e rilascio](dragging-and-dropping-files-in-a-frame-window.md) di file da Esplora file o file Manager in una finestra cornice

- [Risposta a DDE (Dynamic Data Exchange)](responding-to-dynamic-data-exchange-dde.md)

- [Semimodali States: Guida di Windows sensibile al contesto (orchestrazione di altre azioni della finestra)](orchestrating-other-window-actions.md)

- [Semimodali States: stampa e anteprima di stampa (orchestrazione di altre azioni della finestra)](orchestrating-other-window-actions.md)

**Argomenti su altri tipi di finestre**

- [Uso delle visualizzazioni](using-views.md)

- [Finestre di dialogo](dialog-boxes.md)

- [Controlli](controls-mfc.md)

## <a name="see-also"></a>Vedi anche

[Windows](windows.md)
