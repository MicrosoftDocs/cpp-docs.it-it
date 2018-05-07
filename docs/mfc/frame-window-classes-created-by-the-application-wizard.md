---
title: Classi frame-Window create dalla creazione guidata applicazione | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: conceptual
f1_keywords:
- CMainFrame
dev_langs:
- C++
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
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d3446de072266fdf7661d2e8d8ca0fc968279646
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
---
# <a name="frame-window-classes-created-by-the-application-wizard"></a>Classi Frame-Window create dalla Creazione guidata applicazione
Quando si utilizza il [Creazione guidata applicazione](../ide/creating-desktop-projects-by-using-application-wizards.md) per creare uno scheletro di applicazione, oltre alle applicazioni, documento e visualizzazione classi, la creazione guidata applicazione crea una classe derivata della finestra cornice per la finestra cornice principale dell'applicazione. La classe viene denominata `CMainFrame` per impostazione predefinita e i file in essa contenuti sono denominati MAINFRM. H e MAINFRM. CPP.  
  
 Se l'applicazione SDI, il `CMainFrame` classe è derivata dalla classe [CFrameWnd](../mfc/reference/cframewnd-class.md).  
  
 Se l'applicazione MDI, `CMainFrame` è derivata dalla classe [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md). In questo caso `CMainFrame` implementa la cornice principale, che include le barre di stato, barra degli strumenti e menu. La creazione guidata applicazione non derivare una nuova classe finestra cornice di documento per l'utente. Utilizza invece l'implementazione predefinita in [CMDIChildWnd (classe)](../mfc/reference/cmdichildwnd-class.md). Il framework MFC crea una finestra figlio per contenere ogni visualizzazione (che può essere di tipo `CScrollView`, `CEditView`, `CTreeView`, `CListView`e così via) che richiede l'applicazione. Se si desidera personalizzare la finestra cornice di documento, è possibile creare una nuova classe finestra cornice di documento (vedere [aggiunta di una classe](../ide/adding-a-class-visual-cpp.md)).  
  
 Se si sceglie di supportare una barra degli strumenti, la classe presenta inoltre le variabili membro di tipo [CToolBar](../mfc/reference/ctoolbar-class.md) e [CStatusBar](../mfc/reference/cstatusbar-class.md) e `OnCreate` funzione gestore messaggi per inizializzare i due [ barre di controllo](../mfc/control-bars.md).  
  
 Queste classi finestra cornice funzionano come creato, ma per potenziare le funzionalità, è necessario aggiungere le variabili membro e funzioni membro. È anche consigliabile gestire altri messaggi di Windows per le classi di finestra. Per ulteriori informazioni, vedere [modifica degli stili di una finestra creata da MFC](../mfc/changing-the-styles-of-a-window-created-by-mfc.md).  
  
## <a name="see-also"></a>Vedere anche  
 [Classi di finestre cornice](../mfc/frame-window-classes.md)   
 [File di intestazione e di origine di un controllo o programma MFC](../ide/mfc-program-or-control-source-and-header-files.md)

