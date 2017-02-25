---
title: "Inizializzazione di DLL regolari | Microsoft Docs"
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
  - "DLL [C++], regolare"
  - "inizializzazione di DLL"
  - "DLL regolari [C++], inizializzazione"
ms.assetid: f1f091d1-bb91-468a-94f4-3c554657b8fc
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Inizializzazione di DLL regolari
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Poiché le DLL regolari dispongono di un oggetto `CWinApp`, devono eseguire le attività di inizializzazione e terminazione nella stessa posizione di un'applicazione MFC, ovvero nelle funzioni membro `InitInstance` ed **ExitInstance** della classe derivata da `CWinApp` della DLL.  Poiché MFC fornisce una funzione `DllMain` chiamata da **\_DllMainCRTStartup** per **PROCESS\_ATTACH** e **PROCESS\_DETACH**, non scrivere una propria funzione `DllMain`.  La funzione `DllMain` fornita da MFC chiama `InitInstance` quando la DLL viene caricata ed `ExitInstance` prima che la DLL venga scaricata.  
  
 Una DLL regolare può tenere traccia di più thread chiamando [TlsAlloc](http://msdn.microsoft.com/library/windows/desktop/ms686801) e [TlsGetValue](http://msdn.microsoft.com/library/windows/desktop/ms686812) nella propria funzione `InitInstance`.  Queste funzioni consentono alla DLL di tenere traccia dei dati specifici dei thread.  
  
 Se nella DLL regolare collegata a MFC in modo dinamico si utilizza un qualsiasi supporto MFC per OLE, database \(o DAO\) o Sockets, vengono collegate automaticamente le DLL di estensione di debug MFC MFCOxxD.dll, MFCDxxD.dll e MFCNxxD.dll, rispettivamente, dove xx è il numero di versione.  È necessario chiamare una delle seguenti funzioni di inizializzazione predefinite per ciascuna di queste DLL utilizzate in `CWinApp::InitInstance` della DLL regolare.  
  
|Tipo di supporto MFC|Funzione di inizializzazione da chiamare|  
|--------------------------|----------------------------------------------|  
|OLE MFC \(MFCOxxD.dll\)|`AfxOleInitModule`|  
|Database MFC \(MFCDxxD.dll\)|`AfxDbInitModule`|  
|Sockets MFC \(MFCNxxD.dll\)|`AfxNetInitModule`|  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Inizializzazione di DLL di estensione](../build/initializing-extension-dlls.md)  
  
-   [Inizializzazione di DLL non MFC](../build/initializing-non-mfc-dlls.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Librerie di runtime del linguaggio C e \_DllMainCRTStartup](../build/run-time-library-behavior.md)  
  
-   [Utilizzo di DLL di estensione per database, OLE e Sockets nelle DLL regolari](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
-   [\<caps:sentence id\="tgt22" sentenceid\="704731be78a1b2b43311fed62656e454" class\="tgtSentence"\>Processi e thread \(Windows SDK\)\<\/caps:sentence\>](http://msdn.microsoft.com/library/windows/desktop/ms684841)  
  
-   [Wrapper di memoria locale di thread \(Nota tecnica 58 su MFC\)](../mfc/tn058-mfc-module-state-implementation.md)  
  
## Vedere anche  
 [Inizializzazione di una DLL](../build/initializing-a-dll.md)