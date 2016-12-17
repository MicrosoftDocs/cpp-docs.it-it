---
title: "Messaggi | Microsoft Docs"
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
  - "messaggi"
  - "messaggi, MFC"
ms.assetid: b1476310-a135-42ca-817c-444fb3675491
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Messaggi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il ciclo di messaggi nella funzione membro di **Esegui** di classe `CWinApp` recupera i messaggi in coda generati dai vari eventi.  Ad esempio, quando l'utente fa clic con il mouse, le finestre invia diversi messaggi correlati al mouse, come `WM_LBUTTONDOWN` quando il pulsante sinistro del mouse viene premuto e `WM_LBUTTONUP` quando il pulsante sinistro del mouse viene rilasciato.  L'implementazione del framework del ciclo di messaggi dell'applicazione invia il messaggio nella finestra appropriata.  
  
 Le categorie principali di messaggi sono descritte in [Categorie del messaggio](../mfc/message-categories.md).  
  
## Vedere anche  
 [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)