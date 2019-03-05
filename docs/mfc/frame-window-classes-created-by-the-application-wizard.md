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
ms.openlocfilehash: a0610ae901b817a1c8f7707d9ba87c15d634e134
ms.sourcegitcommit: c3093251193944840e3d0a068ecc30e6449624ba
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 03/04/2019
ms.locfileid: "57298061"
---
# <a name="frame-window-classes-created-by-the-application-wizard"></a>Classi Frame-Window create dalla Creazione guidata applicazione

Quando si usa la [Creazione guidata applicazione](../ide/creating-desktop-projects-by-using-application-wizards.md) per creare uno scheletro di applicazione, oltre all'applicazione, documenti e classi di visualizzazione, la creazione guidata applicazione crea una classe derivata frame-window per finestra cornice principale dell'applicazione. La classe è detta `CMainFrame` per impostazione predefinita e i file che lo contengono sono denominati MAINFRM. H e MAINFRM. CPP.

Se l'applicazione SDI, il `CMainFrame` classe è derivata dalla classe [CFrameWnd](../mfc/reference/cframewnd-class.md).

Se l'applicazione, MDI `CMainFrame` è derivata dalla classe [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md). In questo caso `CMainFrame` implementa la cornice principale, che contiene le barre di menu della barra degli strumenti e lo stato. La procedura guidata dell'applicazione non deriva una nuova classe di finestre cornice di documento per l'utente. Usa invece l'implementazione predefinita in [classe CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md). Framework MFC crea una finestra figlio per contenere ciascuna visualizzazione (che può essere di tipo `CScrollView`, `CEditView`, `CTreeView`, `CListView`e così via) necessari all'applicazione. Se si desidera personalizzare la finestra cornice di documento, è possibile creare una nuova classe di finestre cornice di documento (vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)).

Se si sceglie di supportare una barra degli strumenti, la classe include anche le variabili membro di tipo [CToolBar](../mfc/reference/ctoolbar-class.md) e [CStatusBar](../mfc/reference/cstatusbar-class.md) e un `OnCreate` funzioni gestore messaggi per inizializzare i due [ le barre di controllo](../mfc/control-bars.md).

Queste classi frame-window funzionano come creato, ma per migliorare le proprie funzionalità, è necessario aggiungere le variabili membro e funzioni membro. È anche possibile che le classi di finestra gestisca gli altri messaggi di Windows. Per altre informazioni, vedere [modifica degli stili di una finestra creata da MFC](../mfc/changing-the-styles-of-a-window-created-by-mfc.md).

## <a name="see-also"></a>Vedere anche

[Classi di finestre cornice](../mfc/frame-window-classes.md)<br/>
[File di intestazione e di origine di un controllo o programma MFC](../ide/mfc-program-or-control-source-and-header-files.md)
