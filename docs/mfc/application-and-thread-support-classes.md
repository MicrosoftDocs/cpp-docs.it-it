---
title: "Classi di supporto per applicazioni e thread | Microsoft Docs"
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
  - "vc.classes.support"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "oggetti applicazione [C++], classi di supporto dei thread"
  - "classi di supporto delle applicazioni [C++]"
  - "classi di blocco"
  - "classi di sincronizzazione, multithreading"
  - "classi di supporto dei thread [C++]"
  - "threading [MFC]"
ms.assetid: 3c1d14fd-c35c-48f1-86ce-1e0f9a32c36d
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Classi di supporto per applicazioni e thread
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Ogni applicazione dispone di un unico oggetto applicazione; questo oggetto coordina altri oggetti in un programma in esecuzione che deriva da `CWinApp`.  
  
 I thread multipli dei supporti di librerie MFC \(Microsoft Foundation Class \(MFC\) di esecuzione all'interno di un'applicazione.  Tutte le applicazioni devono avere almeno un thread; il thread utilizzato dall'oggetto di `CWinApp` è il thread primario.  
  
 `CWinThread` incapsula una parte delle funzionalità di threading riportati del sistema operativo.  Per renderne l'utilizzo di più thread più semplice, MFC offre classi di oggetti di sincronizzazione per fornire l'interfaccia c\+\+ gli oggetti di sincronizzazione Win32.  
  
## Classi di thread e di applicazione  
 [CWinApp](../mfc/reference/cwinapp-class.md)  
 Incapsula il codice per l'inizializzazione, eseguire e interrompere l'applicazione.  Si l'oggetto applicazione da questa classe.  
  
 [CWinThread](../mfc/reference/cwinthread-class.md)  
 La classe base per tutti i thread.  Utilizzare direttamente, oppure derivare una classe da `CWinThread` se il thread esegue le funzioni dell'interfaccia utente.  `CWinApp` è derivata da `CWinThread`.  
  
## Classi di oggetti di sincronizzazione  
 [CSyncObject](../mfc/reference/csyncobject-class.md)  
 Classe base delle classi di oggetti di sincronizzazione.  
  
 [CCriticalSection](../mfc/reference/ccriticalsection-class.md)  
 Una classe di sincronizzazione che consente a un solo thread in un singolo processo accedere a un oggetto.  
  
 [CSemaphore](../mfc/reference/csemaphore-class.md)  
 Una classe di sincronizzazione che fornisce tra uno e un numero massimo specificato di accesso simultaneo a un oggetto.  
  
 [CMutex](../mfc/reference/cmutex-class.md)  
 Una classe di sincronizzazione che consente a un solo thread all'interno di qualsiasi numero di processi di un oggetto.  
  
 [CEvent](../mfc/reference/cevent-class.md)  
 Una classe di sincronizzazione che notifica un'applicazione quando un evento si è verificato.  
  
 [CSingleLock](../mfc/reference/csinglelock-class.md)  
 Utilizzato nelle funzioni membro delle classi thread\-safe per impostare un oggetto di sincronizzazione.  
  
 [CMultiLock](../mfc/reference/cmultilock-class.md)  
 Utilizzato nelle funzioni membro delle classi thread\-safe per impostare uno o più oggetti di sincronizzazione da una matrice di oggetti di sincronizzazione.  
  
## Classi correlate  
 [CCommandLineInfo](../mfc/reference/ccommandlineinfo-class.md)  
 Analizza la riga di comando con i quali il programma è stato avviato.  
  
 [CWaitCursor](../mfc/reference/cwaitcursor-class.md)  
 Inserisce un cursore di attesa sullo schermo.  Utilizzato durante operazioni di lunga durata.  
  
 [CDockState](../mfc/reference/cdockstate-class.md)  
 Gestione dell'archivio permanente dati sullo stato dell'ancoraggio per le barre di controllo.  
  
 [CRecentFileList](../mfc/reference/crecentfilelist-class.md)  
 Gestisce l'elenco dei file utilizzati di recente di \(MRU\).  
  
## Vedere anche  
 [Cenni preliminari sulle classi](../mfc/class-library-overview.md)