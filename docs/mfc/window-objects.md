---
title: "Oggetti finestra | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestre cornice [C++], oggetti delle finestre [C++]"
  - "HWND"
  - "HWND, oggetti delle finestre"
  - "messaggi [C++], Windows"
  - "MFC [C++], finestre"
  - "oggetti [C++], finestra"
  - "Visual C++, oggetti delle finestre"
  - "messaggi finestra [C++]"
  - "oggetti delle finestre [C++]"
  - "finestre [C++], oggetti delle finestre [C++]"
  - "finestra Windows [C++]"
ms.assetid: 28b33ce2-af05-4617-9d03-1cb9a02be687
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Oggetti finestra
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

MFC fornisce la classe [CWnd](../mfc/reference/cwnd-class.md) per fornire l'handle `HWND` di una finestra.  L'oggetto di `CWnd` è oggetto finestra di C\+\+, distinto da `HWND` che rappresenta una finestra di Windows, ma la prima finestra contiene la seconda.  Utilizzare `CWnd` per derivare le proprie classi di finestre figlie, o utilizzare una delle molte classi MFC derivate da `CWnd`.  La classe `CWnd` è la classe base per tutte le finestre, incluse le finestre cornice, le finestre di dialogo, le finestre figlio, i controlli e le barre di controllo come barre degli strumenti.  Una buona comprensione della [relazione tra un oggetto finestra di C\+\+ e un HWND](../mfc/relationship-between-a-cpp-window-object-and-an-hwnd.md) è fondamentale per programmare in modo efficace con MFC.  
  
 MFC fornisce alcune funzionalità predefinite e degli strumenti di gestione predefiniti per le finestre, ma è possibile derivare la propria classe da `CWnd` e utilizzare le relative funzioni membro per personalizzare la funzionalità fornita.  È possibile creare finestre figlio costruendo un oggetto `CWnd` e chiamando la funzione membro [Create](../Topic/CWnd::Create.md), dopodiché si possono personalizzare le finestre figlio mediante le funzioni membro di `CWnd`.  È possibile importare gli oggetti derivati da [CView](../mfc/reference/cview-class.md), ad esempio le visualizzazioni form o le visualizzazioni ad albero, in una finestra cornice.  Ed è possibile supportare visualizzazioni multiple dei documenti tramite dei riquadri di divisione, forniti dalla classe [CSplitterWnd](../mfc/reference/csplitterwnd-class.md).  
  
 Ogni oggetto derivato dalla classe `CWnd` contiene una mappa di messaggi, tramite la quale è possibile eseguire il mapping dei messaggi o gli ID di comando di Windows ai propri gestori.  
  
 La letteratura generale sulla programmazione per Windows è una buona risorsa per imparare a utilizzare le funzioni membro di `CWnd`, che incapsulano le API di `HWND`.  
  
## Funzioni per l'esecuzione in un CWnd  
 `CWnd` e le relative [classi di finestre derivate](../mfc/derived-window-classes.md) forniscono un costruttore, un distruttore e le funzioni membro per inizializzare l'oggetto, creare le strutture sottostanti di Windows e accedere alla `HWND` incapsulata.  `CWnd` fornisce inoltre funzioni membro che incapsulano le API Windows per inviare messaggi, accedere alla finestra di stato, convertire le coordinate, aggiornare, scorrere, accedere agli Appunti e molte altre attività.  La maggior parte delle API di Windows per la gestione delle finestre che accettano un argomento `HWND` vengono incapsulate come funzioni membro di `CWnd`.  I nomi di funzioni e dei relativi parametri vengono mantenuti nella funzione membro di `CWnd`.  Per informazioni dettagliate sulle API di Windows incapsulate da `CWnd`, vedere la classe [CWnd](../mfc/reference/cwnd-class.md).  
  
## CWnd e messaggi di Windows  
 Uno degli scopi principali di `CWnd` è fornire un'interfaccia per la gestione dei messaggi di Windows, ad esempio `WM_PAINT` o `WM_MOUSEMOVE`.  Molte delle funzioni membro di `CWnd` sono gestori per messaggi standard \- quelli che cominciano con l'identificatore **afx\_msg** e il prefisso "On", come `OnPaint` e **OnMouseMove**.  [Gestione e mappatura dei messaggi.](../mfc/message-handling-and-mapping.md) illustra in dettaglio i messaggi e la relativa gestione.  Le informazioni dell'argomento sono ugualmente applicabili alle finestre di framework e a quelle create dall'utente per scopi speciali.  
  
### Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [La relazione tra un oggetto finestra C\+\+ e una HWND](../mfc/relationship-between-a-cpp-window-object-and-an-hwnd.md)  
  
-   [Classi di finestre derivate](../mfc/derived-window-classes.md)  
  
-   [Creazione di finestre](../mfc/creating-windows.md)  
  
-   [Distruzione di oggetti finestra](../mfc/destroying-window-objects.md)  
  
-   [Disconnessione di CWnd da HWND](../mfc/detaching-a-cwnd-from-its-hwnd.md)  
  
-   [Utilizzo di oggetti finestra](../mfc/working-with-window-objects.md)  
  
-   [Contesti di dispositivo](../mfc/device-contexts.md): oggetti che garantiscono l'indipendenza al dispositivo di disegno di Windows.  
  
-   [Oggetti grafici](../mfc/graphic-objects.md): penne, pennelli, tipi di carattere, bitmap, tavolozze, aree  
  
## Vedere anche  
 [Windows](../mfc/windows.md)