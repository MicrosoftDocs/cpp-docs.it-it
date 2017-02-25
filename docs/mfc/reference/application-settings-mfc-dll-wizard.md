---
title: "Impostazioni applicazione, Creazione guidata DLL MFC | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "vc.appwiz.mfc.dll.appset"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata DLL MFC, impostazioni applicazione"
ms.assetid: 0a96b94f-ae36-4975-951b-c9ffb3def21c
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# Impostazioni applicazione, Creazione guidata DLL MFC
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa schermata della Creazione guidata DLL MFC consente di progettare e aggiungere funzionalità di base a un nuovo progetto DLL MFC.  
  
## Tipo DLL  
 Selezionare il tipo di DLL che si desidera creare.  
  
 **DLL regolare che utilizza la DLL MFC condivisa**  
 Selezionare questa opzione per collegare la libreria MFC al programma come DLL condivisa.  L'impostazione di questa opzione non consente la condivisione di oggetti MFC tra la DLL e l'applicazione che esegue la chiamata.  Le chiamate alla libreria MFC vengono eseguite dal programma in fase di esecuzione.  Questo riduce i requisiti di spazio su disco e di memoria dei programmi composti da più file eseguibili che utilizzano la libreria MFC.  Le chiamate alle funzioni nella DLL possono essere effettuate da programmi sia Win32 sia MFC.  Questo tipo di progetto richiede la ridistribuzione della DLL MFC.  
  
 **DLL regolare con MFC collegato in modo statico**  
 Selezionare questa opzione per collegare in modo statico il programma alla libreria MFC durante la compilazione.  Le chiamate alle funzioni nella DLL possono essere effettuate da programmi sia Win32 sia MFC.  Sebbene questa opzione incrementi le dimensioni del programma, questo tipo di progetto non richiede la ridistribuzione della DLL MFC.  Non è consentita la condivisione degli oggetti MFC tra la DLL e l'applicazione che esegue la chiamata.  
  
 **DLL di estensione MFC**  
 Selezionare questa opzione se si desidera eseguire chiamate alla libreria MFC in fase di esecuzione e supportare la condivisione degli oggetti MFC tra la DLL e l'applicazione che esegue la chiamata.  Questa opzione riduce i requisiti di spazio su disco e di memoria dei programmi composti da più file eseguibili che utilizzano la libreria MFC.  Le chiamate alle funzioni nella DLL possono essere effettuate soltanto da programmi MFC.  Questo tipo di progetto richiede la ridistribuzione della DLL MFC.  
  
## Funzionalità aggiuntive  
 Selezionare l'eventuale supporto dell'automazione e di Windows Sockets da parte della DLL MFC.  
  
 **Automazione**  
 Selezionare **Automazione** per consentire al programma di gestire gli oggetti implementati in un altro programma.  Questa opzione espone inoltre il programma ad altri client di automazione.  Per ulteriori informazioni, vedere [Automazione](../../mfc/automation.md).  
  
 **Windows Sockets**  
 Selezionare questa opzione per indicare che il programma è dotato di supporto per Windows Sockets,  che consente di scrivere programmi in grado di comunicare su reti TCP\/IP.  
  
 Quando viene creata una DLL MFC dotata di supporto per Windows Sockets, [CWinApp::InitInstance](../Topic/CWinApp::InitInstance.md) inizializza il supporto per i socket e nel file di intestazione MFC StdAfx.h viene incluso AfxSock.h.  
  
## Vedere anche  
 [Procedura guidata DLL MFC](../../mfc/reference/mfc-dll-wizard.md)   
 [Creazione di un progetto DLL MFC](../../mfc/reference/creating-an-mfc-dll-project.md)