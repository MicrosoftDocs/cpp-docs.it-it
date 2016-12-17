---
title: "Elaborazione dei messaggi di notifica in un controllo Rebar | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
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
  - "CReBarCtrl (classe), messaggi di notifica inviati"
  - "notifiche, CReBarCtrl"
  - "RBN_ (messaggi di notifica)"
  - "RBN_ (messaggi di notifica), descrizione"
ms.assetid: 40f43a60-0c18-4d8d-8fab-213a095624f9
caps.latest.revision: 11
caps.handback.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Elaborazione dei messaggi di notifica in un controllo Rebar
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Nella classe padre del controllo Rebar, creare una funzione di gestione di `OnChildNotify` con un'istruzione switch per tutti i messaggi di notifica del controllo Rebar \(`CReBarCtrl`\) si desidera gestire.  Le notifiche inviate alla finestra padre quando l'utente trascina gli oggetti sopra il controllo Rebar, modifica il layout delle bande del rebar, elimina le bande dal controllo Rebar, e così via.  
  
 I seguenti messaggi di notifica possono essere inviati dall'oggetto controllo Rebar:  
  
-   **RBN\_AUTOSIZE** ha inviato da un controllo Rebar \(creato con lo stile di **RBS\_AUTOSIZE** \) quando il controllo viene ridimensionato automaticamente.  
  
-   **RBN\_BEGINDRAG** ha inviato da un controllo Rebar quando l'utente inizia il trascinamento di una banda.  
  
-   **RBN\_CHILDSIZE** ha inviato da un controllo Rebar quando la finestra figlio di una banda viene ridimensionata.  
  
-   **RBN\_DELETEDBAND** ha inviato da un controllo Rebar dopo una banda è stata eliminata.  
  
-   **RBN\_DELETINGBAND** ha inviato da un controllo Rebar quando una banda sta per essere eliminato.  
  
-   **RBN\_ENDDRAG** ha inviato da un controllo Rebar quando l'utente smette di trascinare una banda.  
  
-   **RBN\_GETOBJECT** ha inviato da un controllo Rebar \(creato con lo stile di **RBS\_REGISTERDROP** \) quando un oggetto viene trascinato su una banda del controllo.  
  
-   **RBN\_HEIGHTCHANGE** ha inviato da un controllo Rebar quando l'altezza della riga è stata modificata.  
  
-   **RBN\_LAYOUTCHANGED** ha inviato da un controllo Rebar quando l'utente modifica il layout delle bande del controllo.  
  
 Per ulteriori informazioni sulle notifiche, vedere [Riferimento al controllo Rebar](http://msdn.microsoft.com/library/windows/desktop/bb774375) in [!INCLUDE[winSDK](../atl/includes/winsdk_md.md)].  
  
## Vedere anche  
 [Utilizzo di CReBarCtrl](../mfc/using-crebarctrl.md)   
 [Controlli](../mfc/controls-mfc.md)