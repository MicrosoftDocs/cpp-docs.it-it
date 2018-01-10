---
title: DLL regolari collegate in modo dinamico a MFC | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
dev_langs: C++
helpviewer_keywords:
- regular MFC DLLs [C++], dynamically linked to MFC
- AFX_MANAGE_STATE macro
- DLLs [C++], regular
- shared DLL versions [C++]
- dynamically linked DLLs [C++]
ms.assetid: b4f7ab92-8723-42a5-890e-214f4e29dcd0
caps.latest.revision: "9"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 930d56f7bc296225e6fefcf92e49087a2aed99cb
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="regular-mfc-dlls-dynamically-linked-to-mfc"></a>DLL regolari collegate in modo dinamico a MFC
Una normale che DLL MFC collegato in modo dinamico a MFC è una DLL che utilizza MFC internamente e le funzioni esportate nella DLL possono essere chiamate da file eseguibili MFC o non MFC. Come viene descritto il nome, questo tipo di DLL viene creato utilizzando la versione di libreria a collegamento dinamico di MFC (noto anche come la versione di MFC condivisa). In genere vengono esportate da una DLL MFC mediante l'interfaccia standard di C normale.  
  
 È necessario aggiungere il `AFX_MANAGE_STATE` (macro) all'inizio di tutte le funzioni esportate dalle DLL MFC regolari collegate in modo dinamico a MFC per impostare lo stato del modulo corrente con quella per la DLL. Questa operazione viene eseguita aggiungendo la riga di codice seguente all'inizio delle funzioni esportate dalla DLL:  
  
```  
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))  
```  
  
 Una normale DLL MFC, collegata dinamico a MFC è le seguenti funzionalità:  
  
-   Si tratta di un nuovo tipo di DLL introdotto da Visual C++ 4.0.  
  
-   L'eseguibile del client può essere scritto in qualsiasi linguaggio che supporta l'utilizzo di DLL (C, C++, Pascal, Visual Basic e così via); non deve essere un'applicazione MFC.  
  
-   A differenza della DLL di MFC regolari collegate in modo statico, questo tipo di DLL è collegato dinamicamente alla DLL MFC (noto anche come DLL MFC condivisa).  
  
-   La libreria di importazione MFC collegata a questo tipo di DLL è la stessa utilizzata per la DLL di estensione MFC o applicazioni che utilizzano la DLL MFC: lib MFCxx (D).  
  
 Una normale DLL MFC, collegata dinamico a MFC ha i seguenti requisiti:  
  
-   Queste DLL sono compilate con **AFXDLL** definito, proprio come un file eseguibile che è collegato dinamicamente alla DLL MFC. Ma **USRDLL** è definita come una DLL MFC regolare collegata in modo statico a MFC.  
  
-   Creare un'istanza di questo tipo di DLL un `CWinApp`-classe derivata.  
  
-   Questo tipo di DLL utilizza il `DllMain` fornita da MFC. Inserire codice di inizializzazione di DLL specifiche tutti nel `InitInstance` codice membro di funzione e di chiusura in `ExitInstance` come una normale applicazione MFC.  
  
 Poiché questo tipo di DLL utilizza la versione di libreria a collegamento dinamico di MFC, è necessario impostare esplicitamente lo stato del modulo corrente con quella per la DLL. A tale scopo, utilizzare il [AFX_MANAGE_STATE](../mfc/reference/extension-dll-macros.md#afx_manage_state) (macro) all'inizio di ogni funzione esportata dalla DLL.  
  
 le DLL regolare MFC devono avere un `CWinApp`-classe derivata e un singolo oggetto della classe di applicazione, come le applicazioni MFC. Tuttavia, il `CWinApp` oggetto della DLL non esiste un message pump principale, come avviene il `CWinApp` oggetto di un'applicazione.  
  
 Si noti che il `CWinApp::Run` meccanismo non viene applicata a una DLL, perché l'applicazione possiede il message pump principale. Se la DLL visualizza finestre di dialogo non modali o dispone di un proprio una finestra cornice principale, message pump principale dell'applicazione deve chiamare una routine esportata dalla DLL che chiama `CWinApp::PreTranslateMessage`.  
  
 Inserire tutti l'inizializzazione di DLL specifiche nel `CWinApp::InitInstance` funzione membro come una normale applicazione MFC. Il `CWinApp::ExitInstance` funzione membro del `CWinApp` classe derivata viene chiamata fornita da MFC `DllMain` funzione prima che la DLL viene scaricata.  
  
 È necessario distribuire la DLL condivise MFCx0. dll e Msvcr*0.dll (o file simili) con l'applicazione.  
  
 Una DLL collegata in modo dinamico a MFC non è possibile collegare anche in modo statico a MFC. Collegamento di applicazioni per le DLL regolari MFC in modo dinamico collegate a MFC in esattamente come qualsiasi altra DLL.  
  
 I simboli sono generalmente esportati da una DLL MFC mediante l'interfaccia standard di C normale. La dichiarazione di una funzione esportata dalla DLL regolare MFC è simile alla seguente:  
  
```  
extern "C" __declspec(dllexport) MyExportedFunction( );  
```  
  
 Tutte le allocazioni di memoria all'interno di una DLL MFC regolare devono rimanere all'interno della DLL; la DLL non deve passare a o ricevere dal file eseguibile chiamante uno dei seguenti:  
  
-   puntatori a oggetti MFC  
  
-   puntatori alla memoria allocata da MFC  
  
 Se è necessario eseguire le operazioni precedenti, o se è necessario passare oggetti derivati da MFC tra l'eseguibile chiamante e il file DLL, è necessario compilare una DLL di estensione MFC.  
  
 È possibile passare puntatori alla memoria allocati per le librerie di runtime C tra un'applicazione e una DLL solo se si effettua una copia dei dati. Non è necessario eliminare o ridimensionare questi puntatori o utilizzarli senza creare una copia della memoria.  
  
 Quando si compila una DLL MFC regolare che dinamicamente collegata a MFC, è necessario utilizzare la macro [AFX_MANAGE_STATE](../mfc/reference/extension-dll-macros.md#afx_manage_state) per impostare lo stato del modulo MFC correttamente. Questa operazione viene eseguita aggiungendo la riga di codice seguente all'inizio delle funzioni esportate dalla DLL:  
  
```  
AFX_MANAGE_STATE(AfxGetStaticModuleState( ))  
```  
  
 Il **AFX_MANAGE_STATE** (macro) non deve essere utilizzata nelle DLL MFC regolari collegate a MFC in modo statico o in una DLL di estensione MFC. Per ulteriori informazioni, vedere [gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md).  
  
 Per un esempio di come scrivere, compilare e utilizzare una DLL regolare MFC, vedere l'esempio [DLLScreenCap](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/MFC/advanced/DllScreenCap). Per ulteriori informazioni sulle DLL di MFC regolari collegate in modo dinamico a MFC, vedere la sezione intitolata "Conversione DLLScreenCap a collegamento dinamico con la DLL MFC" in astratto per il codice di esempio.  
  
## <a name="what-do-you-want-to-do"></a>Selezionare l'operazione da eseguire.  
  
-   [Inizializzare le DLL regolari MFC](../build/run-time-library-behavior.md#initializing-regular-dlls)  
  
## <a name="what-do-you-want-to-know-more-about"></a>Scegliere l'argomento su cui visualizzare maggiori informazioni  
  
-   [Gli stati di modulo di DLL regolare MFC collegata in modo dinamico a MFC](../build/module-states-of-a-regular-dll-dynamically-linked-to-mfc.md)  
  
-   [Gestione dei dati dello stato dei moduli MFC](../mfc/managing-the-state-data-of-mfc-modules.md)  
  
-   [Uso di DLL MFC di estensione per database, OLE e Sockets nelle DLL MFC regolari](../build/using-database-ole-and-sockets-extension-dlls-in-regular-dlls.md)  
  
-   [Utilizzo di MFC come parte di una DLL](../mfc/tn011-using-mfc-as-part-of-a-dll.md)  
  
## <a name="see-also"></a>Vedere anche  
 [Tipi di DLL](../build/kinds-of-dlls.md)