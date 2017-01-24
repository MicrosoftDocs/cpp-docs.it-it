---
title: "Creazione della classe di finestre di dialogo | Microsoft Docs"
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
  - "finestre di dialogo [C++], creazione"
  - "classi della finestra di dialogo, Creazione guidata aggiunta classe"
  - "classi della finestra di dialogo, creazione"
  - "file [C++], creazione"
  - "MFC (finestre di dialogo), creazione"
ms.assetid: d5321741-da41-47a8-bb1c-6a0e8b28c4c1
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Creazione della classe di finestre di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Per ogni finestra di dialogo nel programma, creare una nuova classe della finestra di dialogo per utilizzare la finestra di dialogo.  
  
 [Aggiunta di un classe](../ide/adding-a-class-visual-cpp.md) viene illustrato come creare una nuova classe della finestra di dialogo.  Quando si crea una classe di finestra di dialogo con la procedura guidata aggiungi classe, produce gli elementi seguenti in. File di .CPP e H specificare:  
  
 In. File H:  
  
-   Una dichiarazione di classe per la classe della finestra di dialogo.  La classe è derivata da [CDialog](../mfc/reference/cdialog-class.md).  
  
 Nel file di .CPP:  
  
-   Una mappa messaggi per la classe.  
  
-   Un costruttore standard per la finestra di dialogo.  
  
-   Override della funzione membro di [DoDataExchange](../Topic/CWnd::DoDataExchange.md).  Modificare la funzione.  Viene utilizzata per le funzionalità di scambio e di convalida della finestra di dialogo come descritto più avanti in [Scambio di dati e convalida della finestra di dialogo](../mfc/dialog-data-exchange-and-validation.md).  
  
## Vedere anche  
 [Creazione di una classe di finestre di dialogo con creazioni guidate codice](../mfc/creating-a-dialog-class-with-code-wizards.md)   
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)