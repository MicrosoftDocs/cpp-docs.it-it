---
title: "Utilizzo di CHotKeyCtrl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CHotKeyCtrl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHotKeyCtrl (classe), utilizzo"
  - "controlli tasto di scelta"
  - "chiavi, scelte rapide e CHotKeyCtrl"
ms.assetid: 9b207117-d848-4224-8888-c3d197bb0c95
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Utilizzo di CHotKeyCtrl
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Un controllo del tasto di scelta, rappresentato dalla classe [CHotKeyCtrl](../mfc/reference/chotkeyctrl-class.md), è una finestra che visualizza una rappresentazione di testo della combinazione di tasti gli utenti in, come CTRL\+SHIFT\+Q.  Gestisce inoltre una rappresentazione interna di questa chiave sotto forma di codice tasto virtuale e set di flag che rappresentano lo stato dello spostamento.  Il controllo del tasto di scelta non imposta il tasto di scelta a tale scopo spetta al programma. Per un elenco dei codici tasto virtuali standard, vedere Winuser.h.\)  
  
 Utilizzare un controllo del tasto di scelta per ottenere un utente a introdurre per il quale il tasto di scelta da associare a una finestra o un thread.  I comandi dei tasti di scelta sono spesso utilizzati nelle finestre di dialogo, come è possibile visualizzare quando viene chiesto all'utente di assegnare un tasto di scelta.  È responsabilità del programma di recuperare valori che descrivono il tasto di scelta dal controllo del tasto di scelta e di chiamare funzioni appropriate per associare il tasto di scelta a una finestra o un thread.  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Utilizzo di un controllo dei tasti di scelta](../mfc/using-a-hot-key-control.md)  
  
-   [Impostare un tasto di scelta](../mfc/setting-a-hot-key.md)  
  
-   [Tasti di scelta globali](../mfc/global-hot-keys.md)  
  
-   [Tasti di scelta specifici](../mfc/thread-specific-hot-keys.md)  
  
## Vedere anche  
 [Controlli](../mfc/controls-mfc.md)