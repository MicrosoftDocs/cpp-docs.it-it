---
title: "Classi Frame-Window create dalla Creazione guidata applicazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CMainFrame"
  - "CMainFrame::PreCreateWindow"
  - "CMainFrame.PreCreateWindow"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "creazioni guidate applicazione [C++], classi finestra cornice create da"
  - "CFrameWnd (classe), finestre cornice"
  - "classi [C++], finestra cornice"
  - "CMainFrame (classe)"
  - "CMDIChildWnd (classe), finestre cornice"
  - "CMDIFrameWnd (classe), finestre cornice"
  - "classi finestra cornice, creazioni guidate applicazione"
  - "classi di finestra"
  - "classi di finestra, cornice"
ms.assetid: 9947df73-4470-49a0-ac61-7b6ee401a74e
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 4
---
# Classi Frame-Window create dalla Creazione guidata applicazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si utilizza [Creazione guidata applicazione](../ide/creating-desktop-projects-by-using-application-wizards.md) per creare una struttura di applicazione, indipendentemente dall'applicazione, al documento e classi di visualizzazione, la creazione guidata applicazione crea una classe derivata della finestra cornice per la finestra cornice principale dell'applicazione.  La classe viene denominata `CMainFrame` per impostazione predefinita e i file che lo contengono sono denominati MAINFRM.H e MAINFRM.CPP.  
  
 Se l'applicazione è SDI, la classe di `CMainFrame` è derivata dalla classe [CFrameWnd](../mfc/reference/cframewnd-class.md).  
  
 Se l'applicazione è MDI, `CMainFrame` è derivato dalla classe [CMDIFrameWnd](../mfc/reference/cmdiframewnd-class.md).  In questo caso `CMainFrame` implementa la cornice principale, che utilizza il menu, la barra degli strumenti e barre di stato.  La procedura guidata non deriva una classe della finestra cornice di nuovo documento automaticamente.  Al contrario, utilizza l'implementazione predefinita in [Classe di CMDIChildWnd](../mfc/reference/cmdichildwnd-class.md).  Il framework MFC crea una finestra figlio per contenere ogni visualizzazione \(che può essere di tipo `CScrollView`, `CEditView`, `CTreeView`, `CListView` e così via, che l'applicazione richiede.  Se è necessario personalizzare la finestra cornice di documento, è possibile creare una classe della finestra cornice di nuovo documento \(vedere [Aggiunta di un classe](../ide/adding-a-class-visual-cpp.md)\).  
  
 Se si sceglie di supportare una barra degli strumenti, la classe dispone anche di variabili membro di tipo [CToolBar](../mfc/reference/ctoolbar-class.md) e [CStatusBar](../mfc/reference/cstatusbar-class.md) e una funzione del gestore dei messaggi di `OnCreate` per inizializzare due [barre di controllo](../mfc/control-bars.md).  
  
 Queste classi della finestra cornice funzionano come creato, ma migliorare le proprie funzionalità, è necessario aggiungere le variabili membro e le funzioni membro.  È inoltre possibile apportare gestire le classi di finestre altri messaggi di windows.  Per ulteriori informazioni, vedere [Modificando gli stili di una finestra creata da MFC](../mfc/changing-the-styles-of-a-window-created-by-mfc.md).  
  
## Vedere anche  
 [Classi Frame\-Window](../mfc/frame-window-classes.md)   
 [File di intestazione e di origine di un controllo o di un programma MFC](../ide/mfc-program-or-control-source-and-header-files.md)