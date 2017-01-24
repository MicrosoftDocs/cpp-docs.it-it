---
title: "Inizializzazione di una DLL | Microsoft Docs"
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
  - "DLL [C++], inizializzazione"
  - "inizializzazione di DLL"
  - "codice di terminazione [C++]"
ms.assetid: f655c5ff-ab5b-493a-a1da-4d1074e60c5b
caps.latest.revision: 8
caps.handback.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Inizializzazione di una DLL
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

La DLL contiene in genere il codice di inizializzazione, come l'assegnazione di memoria, che occorre eseguire al caricamento della DLL.  Con Visual C\+\+, la posizione in cui aggiungere il codice per l'inizializzazione della DLL dipende dal tipo di DLL che si sta compilando.  Se non occorre aggiungere codice di inizializzazione o terminazione, non è necessario eseguire particolari operazioni nella compilazione della DLL.  Se è invece necessario inizializzare la DLL, consultare la tabella seguente in cui viene descritto dove aggiungere il codice.  
  
|Tipo DLL|Dove aggiungere il codice di inizializzazione e terminazione|  
|--------------|------------------------------------------------------------------|  
|DLL regolare|In `InitInstance` ed `ExitInstance` dell'oggetto `CWinApp` della DLL.|  
|DLL di estensione|Nella funzione `DllMain` generata dalla Creazione guidata DLL MFC.|  
|DLL non MFC|In una funzione denominata `DllMain` fornita dal creatore.|  
  
 In Win32 tutte le DLL possono contenere una funzione di punto di ingresso facoltativa, in genere denominata `DllMain`, chiamata sia per l'inizializzazione che per la terminazione.  Questa funzione offre l'opportunità di assegnare o rilasciare risorse aggiuntive quando necessario.  In Windows la funzione di punto di ingresso viene chiamata in quattro situazioni: connessione e disconnessione del processo, connessione e disconnessione del thread.  
  
 La libreria di runtime C offre una funzione di punto di ingresso denominata **\_DllMainCRTStartup** e chiama `DllMain`.  A seconda del tipo di DLL, è necessario avere una funzione denominata `DllMain` nel codice sorgente oppure utilizzare la funzione `DllMain` fornita nella libreria MFC.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Inizializzazione di DLL regolari](../build/initializing-regular-dlls.md)  
  
-   [Inizializzazione di DLL di estensione](../build/initializing-extension-dlls.md)  
  
-   [Inizializzazione di DLL non MFC](../build/initializing-non-mfc-dlls.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Librerie di runtime del linguaggio C e \_DllMainCRTStartup](../build/run-time-library-behavior.md)  
  
-   [\<caps:sentence id\="tgt24" sentenceid\="58bb7328659bda9ffb73a1dcd39da06b" class\="tgtSentence"\>Specifiche di funzione per DllMain \(Windows SDK\)\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms682583)  
  
-   [\<caps:sentence id\="tgt25" sentenceid\="f29344705c59343b34b642944921cbdf" class\="tgtSentence"\>Dynamic\-link library entry\-point function \(Windows SDK\)\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms682596)  
  
## Vedere anche  
 [DLL in Visual C\+\+](../build/dlls-in-visual-cpp.md)