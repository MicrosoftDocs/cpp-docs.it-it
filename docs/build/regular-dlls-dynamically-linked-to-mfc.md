---
title: "DLL regolari collegate a MFC in modo dinamico | Microsoft Docs"
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
  - "AFX_MANAGE_STATE (macro)"
  - "DLL [C++], regolare"
  - "DLL collegate in modo dinamico [C++]"
  - "DLL regolari [C++], collegamento dinamico a MFC"
  - "versioni DLL condivise [C++]"
ms.assetid: b4f7ab92-8723-42a5-890e-214f4e29dcd0
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# DLL regolari collegate a MFC in modo dinamico
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una DLL regolare collegata a MFC in modo dinamico utilizza MFC internamente e le funzioni esportate da essa possono essere chiamate da file eseguibili MFC o non MFC.  Questo tipo di DLL viene compilato mediante la versione di libreria a collegamento dinamico di MFC, anche detta versione condivisa di MFC.  Le funzioni sono generalmente esportate da una DLL regolare mediante l'interfaccia C standard.  
  
 È necessario aggiungere la macro `AFX_MANAGE_STATE` all'inizio di tutte le funzioni esportate dalle DLL regolari collegate a MFC in modo dinamico per impostare lo stato del modulo corrente su quello della DLL.  aggiungendo la seguente riga di codice all'inizio delle funzioni esportate dalla DLL:  
  
```  
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))  
```  
  
 Una DLL regolare collegata a MFC in modo dinamico ha le caratteristiche descritte di seguito.  
  
-   Si tratta di un nuovo tipo di DLL introdotto da Visual C\+\+ 4.0.  
  
-   L'eseguibile client può essere compilato in uno qualsiasi dei linguaggi che supportano l'utilizzo delle DLL: C, C\+\+, Pascal, Visual Basic e così via. Non occorre pertanto che sia un'applicazione MFC.  
  
-   A differenza della DLL regolare collegata in modo statico, questo tipo di DLL è collegato in modo dinamico alla DLL MFC, anche detta DLL MFC condivisa.  
  
-   La libreria di importazione MFC collegata a questo tipo di DLL è la stessa utilizzata per le DLL di estensione o per le applicazioni che utilizzano la DLL MFC, ovvero MFCxx\(D\).lib.  
  
 Di seguito sono riportati i requisiti delle DLL regolari collegate in modo dinamico a MFC:  
  
-   Queste DLL devono essere compilate con il simbolo **\_AFXDLL** definito, proprio come un eseguibile collegato alla DLL MFC in modo dinamico,  e anche con il simbolo **\_USRDLL**, proprio come una DLL regolare collegata a MFC in modo statico.  
  
-   Questo tipo di DLL deve creare un'istanza di una classe derivata da `CWinApp`.  
  
-   Questo tipo di DLL utilizza `DllMain` fornita da MFC.  Inserire tutto il codice di inizializzazione specifico della DLL nella funzione membro `InitInstance` e il codice di terminazione in `ExitInstance` come in una normale applicazione MFC.  
  
 Poiché questo tipo di DLL utilizza la versione della libreria a collegamento dinamico di MFC, è necessario impostare esplicitamente lo stato del modulo corrente su quello della DLL.  A tal fine, utilizzare la macro [AFX\_MANAGE\_STATE](../Topic/AFX_MANAGE_STATE.md) all'inizio di ogni funzione esportata dalla DLL.  
  
 Le DLL regolari devono avere una classe derivata da `CWinApp` e un singolo oggetto di tale classe applicazione, come le applicazioni MFC.  Tuttavia, l'oggetto `CWinApp` della DLL non dispone di un message pump principale, a differenza dell'oggetto `CWinApp` di un'applicazione.  
  
 Tenere presente che il meccanismo `CWinApp::Run` non è applicabile a una DLL, poiché l'applicazione possiede il message pump principale.  Se la DLL visualizza finestre di dialogo non modali o contiene una propria finestra cornice principale, il message pump principale dell'applicazione deve chiamare una routine esportata da DLL che chiama `CWinApp::PreTranslateMessage`.  
  
 Inserire tutto il codice di inizializzazione specifico della DLL nella funzione membro `CWinApp::InitInstance` come in una normale applicazione MFC.  La funzione membro `CWinApp::ExitInstance` della classe derivata da `CWinApp` verrà chiamata dalla funzione `DllMain` fornita da MFC prima che la DLL venga scaricata.  
  
 È necessario distribuire le DLL condivise MFCx0.dll e Msvcr\*0.dll \(o file simili\) con l'applicazione.  
  
 Una DLL collegata a MFC in modo dinamico non può essere anche collegata a MFC in modo statico.  Le applicazioni si collegano alle DLL regolari collegate a MFC in modo dinamico come qualsiasi altra DLL.  
  
 I simboli sono generalmente esportati da una DLL regolare mediante l'interfaccia C standard.  La dichiarazione di una funzione esportata da una DLL regolare è simile alla seguente:  
  
```  
extern "C" __declspec(dllexport) MyExportedFunction( );  
```  
  
 Tutte le assegnazioni di memoria in una DLL regolare devono rimanere nella DLL, la quale non deve passare o ricevere uno dei seguenti elementi dall'eseguibile chiamante:  
  
-   puntatori agli oggetti MFC;  
  
-   puntatori alla memoria assegnata da MFC.  
  
 Se è necessario effettuare una di queste operazioni o passare gli oggetti derivati da MFC tra l'eseguibile chiamante e la DLL, occorre compilare una DLL di estensione.  
  
 I puntatori alla memoria assegnata dalle librerie di runtime C possono essere passati in modo sicuro tra un'applicazione e una DLL solo se si effettua una copia dei dati.  Non eliminare, ridimensionare o utilizzare questi puntatori senza creare una copia della memoria.  
  
 Quando si compila una DLL regolare collegata a MFC in modo dinamico, è necessario utilizzare la macro [AFX\_MANAGE\_STATE](../Topic/AFX_MANAGE_STATE.md) per impostare correttamente lo stato del modulo MFC  aggiungendo la seguente riga di codice all'inizio delle funzioni esportate dalla DLL:  
  
```  
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))  
```  
  
 La macro **AFX\_MANAGE\_STATE** non deve essere utilizzata nelle DLL regolari collegate a MFC in modo statico o nelle DLL di estensione.  Per ulteriori informazioni, vedere [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md).  
  
 Per un esempio sulla creazione, sulla compilazione e sull'utilizzo di una DLL regolare, vedere [DLLScreenCap](http://msdn.microsoft.com/it-it/2171291d-3a50-403b-90a1-d93c2acb4f4a).  Per ulteriori informazioni sulle DLL regolari collegate in modo dinamico a MFC, vedere la sezione relativa alla conversione di DLLScreenCap per il collegamento dinamico alla DLL MFC nell'esempio.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Inizializzazione di DLL regolari](../build/initializing-regular-dlls.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Stato dei moduli di una DLL regolare collegata a MFC in modo dinamico](../build/module-states-of-a-regular-dll-dynamically-linked-to-mfc.md)  
  
-   [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)  
  
-   [Utilizzo di DLL di estensione per database, OLE e Sockets nelle DLL regolari](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
-   [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)  
  
## Vedere anche  
 [Tipi di DLL](../build/kinds-of-dlls.md)