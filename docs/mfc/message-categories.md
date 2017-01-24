---
title: "Categorie di messaggi | Microsoft Docs"
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
  - "messaggi di comando [C++]"
  - "messaggi di notifica dei controlli"
  - "controlli [MFC], notifiche"
  - "gestione dei messaggi [C++], tipi di messaggi"
  - "messaggi [C++], categorie"
  - "messaggi [C++], Windows"
  - "messaggi Windows [C++], categorie"
ms.assetid: 68e1db75-9da6-4a4d-b2c2-dc4d59f8d87b
caps.latest.revision: 9
caps.handback.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Categorie di messaggi
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

I tipi di messaggi si scrivono gestori per?  Esistono tre categorie principali:  
  
1.  Messaggi di windows  
  
     Ciò include principalmente i messaggi a partire dal prefisso di **WM\_**, ad eccezione di **WM\_COMMAND**.  I messaggi di windows vengono gestiti dalle finestre e delle visualizzazioni.  Questi messaggi sono spesso parametri utilizzati per determinare come gestire il messaggio.  
  
2.  Notifiche di controllo  
  
     Sono inclusi i messaggi di notifica di **WM\_COMMAND** dai controlli e di altre finestre figlio alle finestre padre.  Ad esempio, un controllo di modifica relativo padre invia un messaggio di **WM\_COMMAND** contenente il codice di notifica del controllo di **EN\_CHANGE** quando l'utente ha richiesto le azioni che possono modificare il testo nel controllo di modifica.  Il gestore della finestra del messaggio risponde al messaggio di notifica in qualche modo adatto, come recuperare il testo nel controllo.  
  
     Il framework risolve i messaggi di notifica del controllo come altri messaggi di **WM\_**.  Un'eccezione, tuttavia, è il messaggio di notifica del controllo di **BN\_CLICKED** inviato dai pulsanti quando l'utente fa clic.  Questo messaggio viene considerato in particolare come messaggio di comando e viene indirizzato come altri controlli.  
  
3.  Messaggi di comando  
  
     Sono inclusi i messaggi di notifica di **WM\_COMMAND** dagli oggetti dell'interfaccia utente: menu, pulsanti della barra degli strumenti e tasti di scelta rapida.  Il framework elabora i controlli in modo diverso da altri messaggi e possono essere gestiti da più tipi di oggetti, come illustrato in [Destinazioni comando](../mfc/command-targets.md).  
  
##  <a name="_core_windows_messages_and_control.2d.notification_messages"></a> Messaggi di windows e messaggi di notifica del controllo  
 I messaggi in categorie 1 e 2 \- messaggi e notifiche di controllo di windows \- sono gestiti da windows: oggetti di classi derivate dalla classe `CWnd`.  Ciò include `CFrameWnd`, `CMDIFrameWnd`, `CMDIChildWnd`, `CView`, `CDialog` e le proprie classi derivate dalle classi di base.  Questi oggetti includono `HWND`, un handle a una finestra di windows.  
  
##  <a name="_core_command_messages"></a> Messaggi di comando  
 I messaggi nella categoria 3 \- controlli \- possono essere gestiti da un'ampia gamma di oggetti: documenti, modelli di documento e l'oggetto application stesso oltre alle finestre e visualizzazioni.  Quando un comando direttamente su un determinato oggetto specifico, sarà opportuno avere tale handle del comando.  Ad esempio, il comando apri dal menu File è associato logicamente con l'applicazione: l'applicazione apre un documento specificato alla ricezione di comando.  Pertanto il gestore per il comando apri è una funzione membro di una classe di applicazione.  Per ulteriori informazioni sui controlli e come vengono indirizzati a oggetti, vedere [Come Framework chiama un gestore](../mfc/how-the-framework-calls-a-handler.md).  
  
## Vedere anche  
 [Messaggi e comandi nel framework](../mfc/messages-and-commands-in-the-framework.md)