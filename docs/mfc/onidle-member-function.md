---
title: "Funzione membro OnIdle | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "OnIdle"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWinApp (classe), OnIdle (metodo)"
  - "elaborazione di cicli inattivi"
  - "gestione dei messaggi, OnIdle (metodo)"
  - "OnIdle (metodo)"
  - "elaborazione di messaggi"
ms.assetid: 51adc874-0075-4f76-be1c-79283f46c10b
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Funzione membro OnIdle
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Quando nessun messaggio di windows sta sviluppando, il framework chiama la funzione membro [OnIdle](../Topic/CWinApp::OnIdle.md) di [CWinApp](../mfc/reference/cwinapp-class.md) \(descritto in riferimenti alla libreria MFC.  
  
 Override `OnIdle` eseguire attività in background.  La versione predefinita aggiorna lo stato degli oggetti dell'interfaccia utente quali pulsanti della barra degli strumenti e esegue la pulitura di oggetti temporanei creati dal framework durante le relative operazioni.  Nella figura seguente viene illustrato come il ciclo di messaggi chiama `OnIdle` in assenza di messaggi della coda.  
  
 ![Processo del ciclo di messaggi](../mfc/media/vc387c1.png "vc387C1")  
Ciclo del messaggio  
  
 Per ulteriori informazioni su cui è possibile eseguire il ciclo inattivo, vedere [Elaborazione di cicli inattivi](../mfc/idle-loop-processing.md).  
  
## Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)