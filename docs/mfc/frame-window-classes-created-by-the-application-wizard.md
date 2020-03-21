---
title: Classi Frame-Window create dalla Creazione guidata applicazione
ms.date: 11/04/2016
f1_keywords:
- CMainFrame
helpviewer_keywords:
- application wizards [MFC], frame window classes created by
- window classes [MFC]
- classes [MFC], frame-window
- CMDIFrameWnd class [MFC], frame windows
- window classes [MFC], frame
- CFrameWnd class [MFC], frame windows
- CMDIChildWnd class [MFC], frame windows
- frame window classes [MFC], created by application wizards
- CMainFrame class [MFC]
ms.assetid: 9947df73-4470-49a0-ac61-7b6ee401a74e
ms.openlocfilehash: c17ba2b6dd79e8e62baa29bba403c136d16a0d95
ms.sourcegitcommit: 8e285a766523e653aeeb34d412dc6f615ef7b17b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/21/2020
ms.locfileid: "80077530"
---
# <a name="frame-window-classes-created-by-the-application-wizard"></a>Classi Frame-Window create dalla Creazione guidata applicazione

Quando si crea un nuovo progetto MFC dalla finestra di dialogo **nuovo progetto** , oltre alle classi applicazione, documento e visualizzazione, la creazione guidata applicazione crea una classe della finestra cornice derivata per la finestra cornice principale dell'applicazione. La classe viene chiamata `CMainFrame` per impostazione predefinita e i file che lo contengono sono denominati MAINFRM. H e MAINFRM. CPP.

Se l'applicazione è SDI, la classe `CMainFrame` viene derivata dalla classe [CFrameWnd](../mfc/reference/cframewnd-class.md).

Se l'applicazione è MDI, `CMainFrame` deriva dalla classe [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md). In questo caso `CMainFrame` implementa il frame principale, che include il menu, la barra degli strumenti e le barre di stato. La creazione guidata applicazione non deriva una nuova classe della finestra cornice del documento. USA invece l'implementazione predefinita nella [classe CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md). Il framework MFC crea una finestra figlio per contenere ogni visualizzazione, che può essere di tipo `CScrollView`, `CEditView`, `CTreeView`, `CListView`e così via, richiesta dall'applicazione. Se è necessario personalizzare la finestra cornice del documento, è possibile creare una nuova classe della finestra cornice del documento (vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)).

Se si sceglie di supportare una barra degli strumenti, la classe dispone anche di variabili membro di tipo [CToolBar](../mfc/reference/ctoolbar-class.md) e [CStatusBar](../mfc/reference/cstatusbar-class.md) e di una funzione di gestione messaggi `OnCreate` per inizializzare le due [barre di controllo](../mfc/control-bars.md).

Queste classi della finestra cornice funzionano come create, ma per migliorarne le funzionalità è necessario aggiungere le variabili membro e le funzioni membro. È anche possibile che le classi di finestre gestiscano altri messaggi di Windows. Per ulteriori informazioni, vedere [modifica degli stili di una finestra creata da MFC](../mfc/changing-the-styles-of-a-window-created-by-mfc.md).

## <a name="see-also"></a>Vedere anche

[Classi di finestre cornice](../mfc/frame-window-classes.md)<br/>
[File di intestazione e di origine di un controllo o programma MFC](../build/reference/mfc-program-or-control-source-and-header-files.md)
