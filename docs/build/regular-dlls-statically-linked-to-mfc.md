---
title: "DLL regolari collegate a MFC in modo statico | Microsoft Docs"
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
  - "DLL [C++], regolare"
  - "DLL regolari [C++]"
  - "DLL regolari [C++], collegamento statico a MFC"
  - "DLL collegate in modo statico [C++]"
  - "USRDLL"
  - "USRDLL, collegamento statico a MFC"
ms.assetid: 2eed531c-726a-4b8a-b936-f721dc00a7fa
caps.latest.revision: 7
caps.handback.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# DLL regolari collegate a MFC in modo statico
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una DLL regolare collegata a MFC in modo statico utilizza MFC internamente e le funzioni esportate da essa possono essere chiamate da file eseguibili MFC o non MFC.  Questo tipo di DLL viene compilato mediante la versione della libreria a collegamento statico di MFC.  Le funzioni sono generalmente esportate da una DLL regolare mediante l'interfaccia C standard.  Per un esempio sulla creazione, sulla compilazione e sull'utilizzo di una DLL regolare, vedere [DLLScreenCap](http://msdn.microsoft.com/it-it/2171291d-3a50-403b-90a1-d93c2acb4f4a).  
  
 Tenere presente che il termine USRDLL non è più utilizzato nella documentazione di Visual C\+\+.  Una DLL regolare collegata in modo statico a MFC possiede le stesse caratteristiche di USRDLL.  
  
 Di seguito sono elencate le funzionalità di una DLL regolare collegata a MFC in modo statico.  
  
-   L'eseguibile client può essere compilato in uno qualsiasi dei linguaggi che supportano l'utilizzo delle DLL: C, C\+\+, Pascal, Visual Basic e così via. Non occorre pertanto che sia un'applicazione MFC.  
  
-   La DLL può essere collegata alle stesse librerie a collegamento statico MFC utilizzate dalle applicazioni.  Non esiste più una versione distinta delle librerie a collegamento statico per le DLL.  
  
-   Nelle versioni di MFC precedenti alla 4.0, i file USRDLL fornivano lo stesso tipo di funzionalità delle DLL regolari collegate a MFC in modo statico.  A partire dalla versione 4.0 di Visual C\+\+, il termine USRDLL è considerato obsoleto.  
  
 Di seguito sono elencati i requisiti di una DLL regolare collegata a MFC in modo statico.  
  
-   Questo tipo di DLL deve creare un'istanza di una classe derivata da `CWinApp`.  
  
-   Questo tipo di DLL utilizza `DllMain` fornita da MFC.  Inserire tutto il codice di inizializzazione specifico della DLL nella funzione membro `InitInstance` e il codice di terminazione in `ExitInstance` come in una normale applicazione MFC.  
  
-   Anche se il termine USRDLL è obsoleto, è ancora necessario definire "**\_USRDLL**" sulla riga di comando del compilatore.  Questa definizione determina quali dichiarazioni vengono spostate dai file di intestazione MFC.  
  
 Le DLL regolari devono avere una classe derivata da `CWinApp` e un singolo oggetto di tale classe applicazione, come le applicazioni MFC.  Tuttavia, l'oggetto `CWinApp` della DLL non dispone di un message pump principale, a differenza dell'oggetto `CWinApp` di un'applicazione.  
  
 Tenere presente che il meccanismo `CWinApp::Run` non è applicabile a una DLL, poiché l'applicazione possiede il message pump principale.  Se la DLL apre finestre di dialogo non modali o dispone di una propria finestra cornice principale, il message pump principale dell'applicazione deve chiamare una routine esportata dalla DLL che chiama a sua volta la funzione membro `CWinApp::PreTranslateMessage` dell'oggetto applicazione della DLL.  
  
 Un esempio di questa funzione è disponibile in DLLScreenCap.  
  
 I simboli sono generalmente esportati da una DLL regolare mediante l'interfaccia C standard.  La dichiarazione di una funzione esportata da una DLL regolare è simile alla seguente:  
  
```  
extern "C" __declspec(dllexport) MyExportedFunction( );  
```  
  
 Tutte le assegnazioni di memoria in una DLL regolare devono rimanere nella DLL, la quale non deve passare o ricevere uno dei seguenti elementi dall'eseguibile chiamante:  
  
-   Puntatori agli oggetti MFC  
  
-   Puntatori alla memoria allocata da MFC  
  
 Se è necessario effettuare una di queste operazioni o passare gli oggetti derivati da MFC tra l'eseguibile chiamante e la DLL, occorre compilare una DLL di estensione.  
  
 I puntatori alla memoria assegnata dalle librerie di runtime C possono essere passati in modo sicuro tra un'applicazione e una DLL solo se si effettua una copia dei dati.  Non eliminare, ridimensionare o utilizzare questi puntatori senza creare una copia della memoria.  
  
 Una DLL collegata a MFC in modo statico non può essere anche collegata in modo dinamico alle DLL MFC condivise.  Una DLL collegata a MFC in modo statico è associata in modo dinamico a un'applicazione come qualsiasi altra DLL e le applicazioni sono collegate a essa come a qualsiasi altra DLL.  
  
 Le librerie a collegamento statico MFC standard sono denominate in base alla convenzione descritta in [Convenzioni di denominazione per le DLL MFC](../build/naming-conventions-for-mfc-dlls.md).  Tuttavia, con MFC versione 3.0 e successive, non è più necessario specificare manualmente nel linker la versione della libreria MFC a cui si desidera essere collegati.  Invece, i file di intestazione MFC determinano automaticamente la versione corretta della libreria MFC a cui collegarsi in base alle definizioni del preprocessore, ad esempio **\_DEBUG** o **\_UNICODE**.  I file di intestazione MFC aggiungono direttive \/DEFAULTLIB in base a cui il linker collega una versione specifica della libreria MFC.  
  
## Scegliere l'argomento con cui si desidera procedere  
  
-   [Inizializzazione di DLL regolari](../build/initializing-regular-dlls.md)  
  
## Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)  
  
-   [Utilizzo di DLL di estensione per database, OLE e Sockets nelle DLL regolari](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
-   [Creazione di una DLL MFC](../mfc/reference/mfc-dll-wizard.md)  
  
-   [DLL regolari collegate a MFC in modo dinamico](../build/regular-dlls-dynamically-linked-to-mfc.md)  
  
-   [DLL di estensione](../build/extension-dlls-overview.md)  
  
## Vedere anche  
 [Tipi di DLL](../build/kinds-of-dlls.md)