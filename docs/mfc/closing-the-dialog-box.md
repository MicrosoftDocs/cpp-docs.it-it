---
title: "Chiusura della finestra di dialogo | Microsoft Docs"
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
  - "finestre di dialogo, chiusura"
  - "MFC (finestre di dialogo), chiusura"
ms.assetid: 946f5675-c482-46a4-a5dd-34fe138ffae5
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 5
---
# Chiusura della finestra di dialogo
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una finestra di dialogo modale viene chiusa quando l'utente sceglie uno dei pulsanti, in genere il pulsante OK o Annulla.  Scegliere OK o Annulla nelle finestre a inviare l'oggetto della finestra di dialogo un messaggio di notifica del controllo di **BN\_CLICKED** con l'id del pulsante, **IDOK** o **IDCANCEL**.  `CDialog` fornisce funzioni di gestione predefinite per questi messaggi: `OnOK` e `OnCancel`.  I gestori predefiniti chiamare la funzione membro di `EndDialog` per chiudere la finestra di dialogo.  È anche possibile chiamare `EndDialog` dal codice.  Per ulteriori informazioni, vedere la funzione membro [EndDialog](../Topic/CDialog::EndDialog.md) della classe `CDialog` nel *Riferimento MFC*.  
  
 Per garantire chiudere ed eliminare una finestra di dialogo non modale, l'override `PostNcDestroy` e richiamare l'operatore di **eliminazione** sul puntatore di **questo**.  [Eliminare la finestra di dialogo](../mfc/destroying-the-dialog-box.md) spieghi cosa si verifica in seguito.  
  
## Vedere anche  
 [Ciclo di vita di una finestra di dialogo](../mfc/life-cycle-of-a-dialog-box.md)