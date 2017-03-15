---
title: "Funzione membro InitInstance | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "InitInstance"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "applicazioni [MFC], inizializzazione"
  - "inizializzazione di applicazioni MFC"
  - "InitInstance (metodo)"
  - "MFC [C++], inizializzazione"
ms.assetid: 4ef09267-ff7f-4c39-91a0-57454a264f83
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 6
---
# Funzione membro InitInstance
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Il sistema operativo Windows consente di eseguire più di una copia, o "l'istanza," della stessa applicazione.  `WinMain` chiama [InitInstance](../Topic/CWinApp::InitInstance.md) ogni volta che una nuova istanza dell'avvio.  
  
 L'implementazione di `InitInstance` standard creata dalla Creazione guidata applicazione MFC esegue le attività seguenti:  
  
-   Come l'azione centrale, vengono creati i modelli di documento che a sua volta crea i documenti, visualizzazioni e finestre cornici.  Per una descrizione di questo processo, vedere [Creazione di modelli di documento](../mfc/document-template-creation.md).  
  
-   Opzioni di file standard carichi da un file ini o dal registro di sistema di Windows, inclusi i nomi dei file utilizzati di recente.  
  
-   Registrare uno o più modelli di documento.  
  
-   Per un'applicazione MDI, viene creata una finestra cornice principale.  
  
-   Elabora la riga di comando per aprire un documento specificato nella riga di comando o per aprire un nuovo documento, vuoto.  
  
 È possibile aggiungere il proprio codice di inizializzazione o modificare il codice creato dalla procedura guidata.  
  
> [!NOTE]
>  Le applicazioni MFC devono essere inizializzate come single threaded apartment \(STA\).  Se si chiama [CoInitializeEx](http://msdn.microsoft.com/library/windows/desktop/ms695279) nell'override di `InitInstance`, specificare `COINIT_APARTMENTTHREADED` \(anziché `COINIT_MULTITHREADED`\).  Per ulteriori informazioni, vedere PRB: L'applicazione MFC smette di rispondere quando si inizializza l'applicazione come apartment con multithreading \(828643\) in [http:\/\/support.microsoft.com\/default.aspx?scid\=kb;en\-us;828643](http://support.microsoft.com/default.aspx?scid=kb;en-us;828643)  
  
## Vedere anche  
 [CWinApp: classe Application](../mfc/cwinapp-the-application-class.md)