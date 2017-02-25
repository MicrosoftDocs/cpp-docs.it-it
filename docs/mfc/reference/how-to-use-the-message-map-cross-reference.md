---
title: "Procedura: utilizzare il riferimento incrociato alla mappa messaggi | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.mfc.messages"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestre [C++], mappe messaggi"
ms.assetid: 2e863d23-9e58-45ba-b5e4-a8ceefccd0c8
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 12
---
# Procedura: utilizzare il riferimento incrociato alla mappa messaggi
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Nelle voci contrassegnate \<memberFxn\>, scrive una funzione membro di una classe derivata da [CWnd](../../mfc/reference/cwnd-class.md).  Assegna alla funzione qualsiasi nome si desidera.  Altre funzioni, come `OnActivate`, sono funzioni membro della classe `CWnd`.  Se chiamate, passano il messaggio alla funzione Windows `DefWindowProc`.  Per elaborare i messaggi di notifica di Windows, eseguire l'override della funzione corrispondente `CWnd` nella classe derivata.  La funzione deve chiamare la funzione di cui si è eseguito l'override nella classe di base per consentire alla classe base e a Windows di rispondere al messaggio.  
  
 In ogni caso, inserire il prototipo della funzione nell'instestazione della classe derivata da `CWnd` e codificare la voce mappata del messaggio come indicato.  
  
 I seguenti termini vengono utilizzati:  
  
|Termine|Definizione|  
|-------------|-----------------|  
|id|Una voce di menu ID definita dall'utente \(messaggi **WM\_COMMAND** \) o ID del controllo \(messaggi di notifica della finestra figlio\).|  
|"message" e "wNotifyCode"|Gli ID del messaggio di Windows come definiti in WINDOWS.H.|  
|nMessageVariable|Nome di una variabile contenente il valore restituito dalla funzione Windows **RegisterWindowMessage**.|  
  
## Vedere anche  
 [Mappe messaggi](../../mfc/reference/message-maps-mfc.md)