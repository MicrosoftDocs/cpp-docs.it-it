---
title: "Controlli Rich Edit infiniti | Microsoft Docs"
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
  - "controlli Rich Edit (infiniti)"
  - "CRichEditCtrl (classe), infiniti"
  - "Rich Edit (controlli), infiniti"
ms.assetid: 2877dd32-1e9a-4fd1-98c0-66dcbbeef1de
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Controlli Rich Edit infiniti
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'applicazione può ridimensionare un controllo Rich Edit \([CRichEditCtrl](../mfc/reference/cricheditctrl-class.md)\) in base alle necessità in modo che sia sempre della stessa dimensione del relativo contenuto.  Un controllo Rich Edit supporta la cosiddetta funzionalità "infinita" tramite l'invio alla finestra padre di un messaggio di notifica [EN\_REQUESTRESIZE](http://msdn.microsoft.com/library/windows/desktop/bb787983) ogni volta che la dimensione del contenuto cambia.  
  
 Nell'elaborare il messaggio di notifica **EN\_REQUESTRESIZE**, un'applicazione deve ridimensionare il controllo alle dimensioni della struttura [REQRESIZE](http://msdn.microsoft.com/library/windows/desktop/bb787950) specificata.  Un'applicazione potrebbe inoltre spostare qualsiasi informazione vicino al controllo per adattarsi alla modifica dell'altezza del controllo.  Per ridimensionare il controllo, è possibile utilizzare la funzione [SetWindowPos](../Topic/CWnd::SetWindowPos.md) di `CWnd`.  
  
 È possibile forzare un controllo Rich Edit infinito per inviare un messaggio di notifica **EN\_REQUESTRESIZE** utilizzando la funzione membro [RequestResize](../Topic/CRichEditCtrl::RequestResize.md).  Questo messaggio può essere utile nel gestore di [OnSize](../Topic/CWnd::OnSize.md).  
  
 Per ricevere i messaggi di notifica **EN\_REQUESTRESIZE**, è necessario abilitare la notifica tramite la funzione membro `SetEventMask`.  
  
## Vedere anche  
 [Utilizzo di CRichEditCtrl](../mfc/using-cricheditctrl.md)   
 [Controlli](../mfc/controls-mfc.md)