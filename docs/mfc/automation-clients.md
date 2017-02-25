---
title: "Client di automazione | Microsoft Docs"
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
  - "client di automazione"
  - "client"
  - "client, automazione"
  - "librerie dei tipi, client di automazione"
ms.assetid: 84e34a79-06f6-4752-a33b-ae0ede1d8ecf
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 10
---
# Client di automazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

L'automazione fa sì che l'applicazione modificare gli oggetti implementati in un'altra applicazione, o esporre oggetti in modo da poter essere modificati.  Un client di automazione è un'applicazione che può modificare gli oggetti esposti appartenenti a un'altra applicazione.  L'applicazione che espone gli oggetti viene chiamato server di automazione.  Il client modificano gli oggetti dell'applicazione server accedendo alle proprietà e le funzioni di tali oggetti.  
  
### Tipi di client di automazione  
 Esistono due tipi di client di automazione:  
  
-   Client in modo dinamico in fase di esecuzione\) acquisire informazioni sulle proprietà e i meccanismi del server.  
  
-   Client che possiedono informazioni statiche \(fornite in fase di compilazione\) che specifica le proprietà e i meccanismi del server.  
  
 I client del primo tipo acquisiscono informazioni su metodi e le proprietà del server esegue una query sul meccanismo di `IDispatch` del sistema OLE.  Sebbene sia consigliabile utilizzare per i client dinamici, `IDispatch` è difficile da utilizzare per i client statici, in cui gli oggetti che sono basati devono essere noti in fase di compilazione.  Per i client si statici, le classi MFC \(Microsoft Foundation fornisce la classe di [COleDispatchDriver](../mfc/reference/coledispatchdriver-class.md).  
  
 I client statici si utilizzano una classe proxy collegata in modo statico con l'applicazione client.  Questa classe fornisce un incapsulamento indipendente dai tipi C\+\+ di proprietà e le operazioni dell'applicazione server.  
  
 La classe `COleDispatchDriver` fornisce supporto principale al lato client di automazione.  Utilizzando la finestra di dialogo `Add New Item`, si crea una classe derivata da `COleDispatchDriver`.  
  
 Si specifica quindi il file della libreria dei tipi che descrive le proprietà e le funzioni dell'oggetto dell'applicazione server.  La finestra di dialogo aggiungi elemento indica il file e crea `COleDispatchDriver`\- classe derivata, con funzioni membro che l'applicazione può chiamare per accedere agli oggetti dell'applicazione server in C\+\+ in modo indipendente dai tipi.  Funzionalità aggiuntive ereditata da `COleDispatchDriver` semplifica il processo di chiamata il server di automazione appropriato.  
  
### Gestione di eventi nei client di automazione  
 Se si desidera gestire eventi nel client di automazione, è necessario aggiungere all'interfaccia.  MFC fornisce il supporto della procedura guidata per aggiungere le interfacce del sink dei controlli ActiveX, ma non il supporto per gli altri server COM.  Per informazioni sull'aggiunta di interfaccia del sink in un client MFC per le interfacce descritte di origine dai server COM, vedere HOW: Creare un'interfaccia del sink di client COM basato su MFC \(181845 KB\) [http:\/\/support.microsoft.com\/default.aspx?scid\=kb;en\-us;181845](http://support.microsoft.com/default.aspx?scid=kb;en-us;181845).  
  
## Vedere anche  
 [Client di automazione: utilizzo delle librerie dei tipi](../mfc/automation-clients-using-type-libraries.md)   
 [automazione](../mfc/automation.md)   
 [Creazione guidata applicazione MFC](../mfc/reference/mfc-application-wizard.md)