---
title: "Sequenza generale di creazione finestre | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestre cornice [C++], creazione"
  - "sequenza [C++]"
  - "sequenza [C++], finestra (creazione)"
  - "finestre [C++], creazione"
ms.assetid: 9cd8c7ea-5e24-429e-b6d9-d7b6041d8ba6
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Sequenza generale di creazione finestre
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando si crea una finestra di dialogo personalizzate, come una finestra figlio, nel framework più o meno lo stesso processo come quello descritto in [Creazione documento\/visualizzazione](../mfc/document-view-creation.md).  
  
 Tutte le classi della finestra fornita da MFC utilizzano [costruzione a due livelli](../mfc/one-stage-and-two-stage-construction-of-objects.md).  Ovvero durante la chiamata dell'operatore C\+\+ **nuova**, il costruttore alloca e inizializza l'oggetto c\+\+ ma non ne crea una finestra corrispondente di windows.  Questa operazione viene eseguita successivamente chiamare la funzione membro di [Crea](../Topic/CWnd::Create.md) dell'oggetto window.  
  
 La funzione membro di **Crea** effettua la finestra delle finestre archivia e il relativo `HWND` nel membro dati pubblico [m\_hWnd](../Topic/CWnd::m_hWnd.md)di oggetti C\+\+.  **Crea** flessibilità completa sui parametri di progettazione.  Prima di chiamare **Crea**, è necessario registrare una classe finestra con la funzione globale [Chiamata di AfxRegisterWndClass](../Topic/AfxRegisterWndClass.md) per impostare gli stili della classe e l'icona del frame.  
  
 Per le finestre cornici, è possibile utilizzare la funzione membro di [LoadFrame](../Topic/CFrameWnd::LoadFrame.md) anziché **Crea**.  `LoadFrame` effettua la finestra di windows utilizzando meno parametri.  Ottiene molti valori predefiniti delle risorse, inclusi la barra del titolo del frame, l'icona, la tabella dei tasti di scelta rapida e il menu.  
  
> [!NOTE]
>  Le icone, tabella dei tasti di scelta rapida e risorse menu devono avere un ID di risorsa comune, ad esempio **IDR\_MAINFRAME**, affinché siano vengano caricati da LoadFrame.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Oggetti Window](../mfc/window-objects.md)  
  
-   [Registrare la finestra "classe"](../mfc/registering-window-classes.md)  
  
-   [Eliminare gli oggetti della finestra](../mfc/destroying-window-objects.md)  
  
-   [Creazione delle finestre di documento](../mfc/creating-document-frame-windows.md)  
  
## Vedere anche  
 [Creazione di finestre](../mfc/creating-windows.md)