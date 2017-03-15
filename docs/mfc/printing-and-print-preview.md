---
title: "Stampa e anteprima di stampa | Microsoft Docs"
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
  - "anteprima di stampa"
  - "anteprima di stampa"
  - "stampa [C++]"
  - "stampa [C++], anteprima di stampa"
  - "stampa [MFC]"
ms.assetid: d15059cd-32de-4450-95f7-e73aece238f6
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 7
---
# Stampa e anteprima di stampa
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Stampa e anteprima di stampa di supporto MFC per i documenti del programma tramite classi [CView](../mfc/reference/cview-class.md).  Per la stampa di base e anteprima di stampa, eseguire l'override della funzione membro di visualizzazione di [OnDraw](../Topic/CView::OnDraw.md) della classe, è necessario eseguire scelta.  Tale funzione può applicare alla visualizzazione sullo schermo, a un contesto di dispositivo printer della stampante, o a un contesto di dispositivo che simula la stampante sullo schermo.  
  
 È inoltre possibile aggiungere codice per gestire la stampa a più pagine e anteprima di documento, ai documenti stampati e per aggiungere le intestazioni e piè di pagina a essi.  
  
 La famiglia di articoli viene illustrato come stampa è implementata nella libreria Microsoft Foundation classes \(MFC\) e come sfruttare architettura di stampa già disponibili nel framework.  Articoli inoltre illustrato come implementazione semplice di MFC supporta di funzionalità di anteprima di stampa e come utilizzare e modificare tale funzionalità.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Stampa](../mfc/printing.md)  
  
-   [Architettura di anteprima di stampa](../mfc/print-preview-architecture.md)  
  
-   [Esempio](../top/visual-cpp-samples.md)  
  
## Vedere anche  
 [Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)