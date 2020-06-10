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
ms.openlocfilehash: 00254bdf49015f26ac257789a15afd1e7f5cc31f
ms.sourcegitcommit: c21b05042debc97d14875e019ee9d698691ffc0b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/09/2020
ms.locfileid: "84621699"
---
# <a name="frame-window-classes-created-by-the-application-wizard"></a>Classi Frame-Window create dalla Creazione guidata applicazione

Quando si crea un nuovo progetto MFC dalla finestra di dialogo **nuovo progetto** , oltre alle classi applicazione, documento e visualizzazione, la creazione guidata applicazione crea una classe della finestra cornice derivata per la finestra cornice principale dell'applicazione. `CMainFrame`Per impostazione predefinita, la classe viene chiamata e i file che lo contengono sono denominati MainFrm. H e MAINFRM. CPP.

Se l'applicazione è SDI, la `CMainFrame` classe viene derivata dalla classe [CFrameWnd](reference/cframewnd-class.md).

Se l'applicazione è MDI, `CMainFrame` viene derivata dalla classe [CMDIFrameWnd](reference/cmdiframewnd-class.md). In questo caso `CMainFrame` implementa il frame principale, che include il menu, la barra degli strumenti e le barre di stato. La creazione guidata applicazione non deriva una nuova classe della finestra cornice del documento. USA invece l'implementazione predefinita nella [classe CMDIChildWnd](reference/cmdichildwnd-class.md). Il framework MFC crea una finestra figlio per contenere ogni visualizzazione, che può essere di tipo `CScrollView` ,,, `CEditView` `CTreeView` `CListView` e così via, richiesta dall'applicazione. Se è necessario personalizzare la finestra cornice del documento, è possibile creare una nuova classe della finestra cornice del documento (vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)).

Se si sceglie di supportare una barra degli strumenti, la classe dispone anche di variabili membro di tipo [CToolBar](reference/ctoolbar-class.md) e [CStatusBar](reference/cstatusbar-class.md) e `OnCreate` di una funzione di gestione messaggi per inizializzare le due [barre di controllo](control-bars.md).

Queste classi della finestra cornice funzionano come create, ma per migliorarne le funzionalità è necessario aggiungere le variabili membro e le funzioni membro. È anche possibile che le classi di finestre gestiscano altri messaggi di Windows. Per ulteriori informazioni, vedere [modifica degli stili di una finestra creata da MFC](changing-the-styles-of-a-window-created-by-mfc.md).

## <a name="see-also"></a>Vedere anche

[Classi della finestra cornice](frame-window-classes.md)<br/>
[File di origine e di intestazione del controllo o del programma MFC](../build/reference/mfc-program-or-control-source-and-header-files.md)
